#include <stdio.h>
#include <main.h>
void positive_ornegative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
		
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}	

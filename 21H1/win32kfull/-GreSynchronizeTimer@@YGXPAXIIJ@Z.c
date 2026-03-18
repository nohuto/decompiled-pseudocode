/*
 * XREFs of ?GreSynchronizeTimer@@YGXPAXIIJ@Z @ 0x1FD05C
 * Callers:
 *     <none>
 * Callees:
 *     ?vSynchronizeDriver@@YGXK@Z @ 0x934CE (-vSynchronizeDriver@@YGXK@Z.c)
 */

void __stdcall GreSynchronizeTimer(void *a1, unsigned int a2, unsigned int a3, int a4)
{
  vSynchronizeDriver(128);
}

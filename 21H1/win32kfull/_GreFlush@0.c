/*
 * XREFs of _GreFlush@0 @ 0x934C6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall GreFlush(unsigned int a1)
{
  vSynchronizeDriver(a1);
}

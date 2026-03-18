/*
 * XREFs of IoEnqueueIrp @ 0x1409363B0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x1402AE1B0 (IopQueueThreadIrp.c)
 */

__int64 __fastcall IoEnqueueIrp(__int64 a1)
{
  return IopQueueThreadIrp(a1);
}

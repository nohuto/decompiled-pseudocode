/*
 * XREFs of IoEnqueueIrp @ 0x140896590
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x140221360 (IopQueueThreadIrp.c)
 */

__int64 __fastcall IoEnqueueIrp(__int64 a1)
{
  return IopQueueThreadIrp(a1);
}

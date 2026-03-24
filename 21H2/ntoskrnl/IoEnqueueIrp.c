/*
 * XREFs of IoEnqueueIrp @ 0x140893B60
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x14034B290 (IopQueueThreadIrp.c)
 */

__int64 __fastcall IoEnqueueIrp(__int64 a1)
{
  return IopQueueThreadIrp(a1);
}

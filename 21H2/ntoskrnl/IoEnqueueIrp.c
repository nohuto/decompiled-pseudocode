/*
 * XREFs of IoEnqueueIrp @ 0x140893CC0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x140355FE0 (IopQueueThreadIrp.c)
 */

__int64 __fastcall IoEnqueueIrp(__int64 a1)
{
  return IopQueueThreadIrp(a1);
}

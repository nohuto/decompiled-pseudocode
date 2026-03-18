/*
 * XREFs of IoEnqueueIrp @ 0x140890AA0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x1402083E0 (IopQueueThreadIrp.c)
 */

__int64 __fastcall IoEnqueueIrp(__int64 a1)
{
  return IopQueueThreadIrp(a1);
}

/*
 * XREFs of KeIsExecutingDpc @ 0x14022A320
 * Callers:
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 * Callees:
 *     <none>
 */

__int64 KeIsExecutingDpc()
{
  return KeGetPcr()->Prcb.DpcRequestSummary & 0x10001;
}

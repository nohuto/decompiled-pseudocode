/*
 * XREFs of KeIsExecutingDpc @ 0x1402AC720
 * Callers:
 *     KiDeliverApc @ 0x14024A750 (KiDeliverApc.c)
 * Callees:
 *     <none>
 */

__int64 KeIsExecutingDpc()
{
  return KeGetPcr()->Prcb.DpcRequestSummary & 0x10001;
}

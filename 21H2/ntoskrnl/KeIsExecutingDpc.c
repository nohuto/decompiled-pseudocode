/*
 * XREFs of KeIsExecutingDpc @ 0x140233690
 * Callers:
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 * Callees:
 *     <none>
 */

__int64 KeIsExecutingDpc()
{
  return KeGetPcr()->Prcb.DpcRequestSummary & 0x10001;
}

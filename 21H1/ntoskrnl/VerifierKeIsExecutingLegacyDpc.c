/*
 * XREFs of VerifierKeIsExecutingLegacyDpc @ 0x1409BF050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 VerifierKeIsExecutingLegacyDpc()
{
  return KeGetPcr()->Prcb.DpcRequestSummary & 1;
}

/*
 * XREFs of PsReturnPoolQuota @ 0x1402FF2E0
 * Callers:
 *     ExReturnPoolQuota @ 0x1402FF25C (ExReturnPoolQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x14024C650 (PspReturnQuota.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process != PsInitialSystemProcess )
    PspReturnQuota((char *)Process[1].AffinityPadding[7], (ULONG_PTR)Process, PoolType == PagedPool, Amount);
}

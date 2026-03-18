/*
 * XREFs of PsReturnPoolQuota @ 0x14030E780
 * Callers:
 *     ExReturnPoolQuota @ 0x14030E6FC (ExReturnPoolQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x1402175A0 (PspReturnQuota.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process != PsInitialSystemProcess )
    PspReturnQuota((char *)Process[1].AffinityPadding[7], (ULONG_PTR)Process, PoolType == PagedPool, Amount);
}

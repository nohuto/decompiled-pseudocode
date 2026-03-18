/*
 * XREFs of PsReturnPoolQuota @ 0x14033BBE0
 * Callers:
 *     ExReturnPoolQuota @ 0x14033BB5C (ExReturnPoolQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x140288EF0 (PspReturnQuota.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process != PsInitialSystemProcess )
    PspReturnQuota((char *)Process[1].AffinityPadding[7], (ULONG_PTR)Process, PoolType == PagedPool, Amount);
}

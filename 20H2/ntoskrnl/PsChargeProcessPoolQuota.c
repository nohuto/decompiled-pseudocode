/*
 * XREFs of PsChargeProcessPoolQuota @ 0x14030C1B0
 * Callers:
 *     PsChargePoolQuota @ 0x14030C180 (PsChargePoolQuota.c)
 *     FsRtlCancelNotify @ 0x14030C1F0 (FsRtlCancelNotify.c)
 * Callees:
 *     PspChargeQuota @ 0x14027C5C0 (PspChargeQuota.c)
 */

NTSTATUS __stdcall PsChargeProcessPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process == PsInitialSystemProcess )
    return 0;
  else
    return PspChargeQuota(Process[1].AffinityPadding[7], (__int64)Process, PoolType == PagedPool, Amount);
}

/*
 * XREFs of PsChargeProcessPoolQuota @ 0x140339990
 * Callers:
 *     PsChargePoolQuota @ 0x140339960 (PsChargePoolQuota.c)
 *     FsRtlCancelNotify @ 0x1403399D0 (FsRtlCancelNotify.c)
 * Callees:
 *     PspChargeQuota @ 0x1402AD280 (PspChargeQuota.c)
 */

NTSTATUS __stdcall PsChargeProcessPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process == PsInitialSystemProcess )
    return 0;
  else
    return PspChargeQuota(Process[1].AffinityPadding[7], (__int64)Process, PoolType == PagedPool, Amount);
}

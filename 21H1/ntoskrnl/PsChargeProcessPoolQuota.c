/*
 * XREFs of PsChargeProcessPoolQuota @ 0x1402FC650
 * Callers:
 *     PsChargePoolQuota @ 0x1402FC620 (PsChargePoolQuota.c)
 *     FsRtlCancelNotify @ 0x1402FC690 (FsRtlCancelNotify.c)
 * Callees:
 *     PspChargeQuota @ 0x1402641B0 (PspChargeQuota.c)
 */

NTSTATUS __stdcall PsChargeProcessPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process == PsInitialSystemProcess )
    return 0;
  else
    return PspChargeQuota(Process[1].AffinityPadding[7], (__int64)Process, PoolType == PagedPool, Amount);
}

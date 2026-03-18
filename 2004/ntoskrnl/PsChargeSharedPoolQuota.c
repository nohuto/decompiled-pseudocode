/*
 * XREFs of PsChargeSharedPoolQuota @ 0x14066A770
 * Callers:
 *     RtlpAllocateAtom @ 0x1405D0FD4 (RtlpAllocateAtom.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     ObAdjustSecurityQuota @ 0x1406694A8 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x14066A670 (ObpChargeQuotaForObject.c)
 *     PspAllocateRateControl @ 0x1406F114C (PspAllocateRateControl.c)
 * Callees:
 *     PspReturnQuota @ 0x140288EF0 (PspReturnQuota.c)
 *     PspChargeQuota @ 0x1402AD280 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeSharedPoolQuota(struct _KPROCESS *a1, ULONG_PTR a2, unsigned __int64 a3)
{
  __int64 v5; // rbx

  if ( a1 == PsInitialSystemProcess )
    return 1LL;
  v5 = a1[1].AffinityPadding[7];
  if ( !a2 || (int)PspChargeQuota(a1[1].AffinityPadding[7], 0LL, 1, a2) >= 0 )
  {
    if ( !a3 || (int)PspChargeQuota(v5, 0LL, 0, a3) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 512));
      return v5;
    }
    if ( a2 )
      PspReturnQuota((char *)v5, 0LL, 1u, a2);
  }
  return 0LL;
}

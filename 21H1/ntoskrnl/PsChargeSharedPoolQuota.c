/*
 * XREFs of PsChargeSharedPoolQuota @ 0x140615490
 * Callers:
 *     ObAdjustSecurityQuota @ 0x1406141C8 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x140615390 (ObpChargeQuotaForObject.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspAllocateRateControl @ 0x1406761D8 (PspAllocateRateControl.c)
 *     RtlpAllocateAtom @ 0x14069F934 (RtlpAllocateAtom.c)
 * Callees:
 *     PspReturnQuota @ 0x14024C650 (PspReturnQuota.c)
 *     PspChargeQuota @ 0x1402641B0 (PspChargeQuota.c)
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

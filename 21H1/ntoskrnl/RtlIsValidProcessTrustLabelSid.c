/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x140609890
 * Callers:
 *     RtlSidDominatesForTrust @ 0x1402597C0 (RtlSidDominatesForTrust.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x140259840 (SepReconcileTrustSidWithProcessProtection.c)
 *     RtlAddProcessTrustLabelAce @ 0x1407A6F90 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x14090DBC0 (RtlAddAccessFilterAce.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

bool __fastcall RtlIsValidProcessTrustLabelSid(__int64 a1)
{
  int v1; // edx

  if ( *(_BYTE *)(a1 + 1) != 2 || *(_BYTE *)a1 != 1 )
    return 0;
  v1 = *(_DWORD *)(a1 + 2);
  if ( !v1 )
    v1 = *(unsigned __int16 *)(a1 + 6) - 4864;
  return !v1 && (*(_DWORD *)(a1 + 8) || !*(_DWORD *)(a1 + 12));
}

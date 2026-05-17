/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x180067210
 * Callers:
 *     RtlAddProcessTrustLabelAce @ 0x180066800 (RtlAddProcessTrustLabelAce.c)
 *     RtlSidDominatesForTrust @ 0x180067180 (RtlSidDominatesForTrust.c)
 *     RtlAddAccessFilterAce @ 0x1800E96D0 (RtlAddAccessFilterAce.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

bool __fastcall RtlIsValidProcessTrustLabelSid(__int64 a1)
{
  int v1; // eax

  if ( *(_BYTE *)(a1 + 1) != 2 || *(_BYTE *)a1 != 1 )
    return 0;
  v1 = *(_DWORD *)(a1 + 2);
  if ( !v1 )
    v1 = *(unsigned __int16 *)(a1 + 6) - 4864;
  return !v1 && (*(_DWORD *)(a1 + 8) || !*(_DWORD *)(a1 + 12));
}

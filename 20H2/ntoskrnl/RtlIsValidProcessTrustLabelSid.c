/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x14020FC50
 * Callers:
 *     RtlSidDominatesForTrust @ 0x14020FCC0 (RtlSidDominatesForTrust.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x14022A5B0 (SepReconcileTrustSidWithProcessProtection.c)
 *     RtlAddProcessTrustLabelAce @ 0x1407A92F0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x140914AA0 (RtlAddAccessFilterAce.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

BOOLEAN __cdecl RtlIsValidProcessTrustLabelSid(PSID Sid)
{
  int v1; // edx

  if ( *((_BYTE *)Sid + 1) != 2 || *(_BYTE *)Sid != 1 )
    return 0;
  v1 = *(_DWORD *)((char *)Sid + 2);
  if ( !v1 )
    v1 = *((unsigned __int16 *)Sid + 3) - 4864;
  return !v1 && (*((_DWORD *)Sid + 2) || !*((_DWORD *)Sid + 3));
}

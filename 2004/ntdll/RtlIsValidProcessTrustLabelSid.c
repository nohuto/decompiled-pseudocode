/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x180067100
 * Callers:
 *     RtlAddProcessTrustLabelAce @ 0x1800666F0 (RtlAddProcessTrustLabelAce.c)
 *     RtlSidDominatesForTrust @ 0x180067070 (RtlSidDominatesForTrust.c)
 *     RtlAddAccessFilterAce @ 0x1800E91D0 (RtlAddAccessFilterAce.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

BOOLEAN __cdecl RtlIsValidProcessTrustLabelSid(PSID Sid)
{
  int v1; // eax

  if ( *((_BYTE *)Sid + 1) != 2 || *(_BYTE *)Sid != 1 )
    return 0;
  v1 = *(_DWORD *)((char *)Sid + 2);
  if ( !v1 )
    v1 = *((unsigned __int16 *)Sid + 3) - 4864;
  return !v1 && (*((_DWORD *)Sid + 2) || !*((_DWORD *)Sid + 3));
}

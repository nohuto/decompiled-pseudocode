/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x1406819E0
 * Callers:
 *     RtlSidDominatesForTrust @ 0x140296040 (RtlSidDominatesForTrust.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1402960C0 (SepReconcileTrustSidWithProcessProtection.c)
 *     RtlAddProcessTrustLabelAce @ 0x140799FC0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x14090EF60 (RtlAddAccessFilterAce.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
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

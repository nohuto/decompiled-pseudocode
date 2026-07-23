/*
 * XREFs of _RtlIsValidProcessTrustLabelSid@4 @ 0x4B3466F0
 * Callers:
 *     _RtlSidDominatesForTrust@12 @ 0x4B2D9290 (_RtlSidDominatesForTrust@12.c)
 *     _RtlAddAccessFilterAce@32 @ 0x4B34AD40 (_RtlAddAccessFilterAce@32.c)
 *     _RtlAddProcessTrustLabelAce@24 @ 0x4B34B140 (_RtlAddProcessTrustLabelAce@24.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

BOOLEAN __cdecl RtlIsValidProcessTrustLabelSid(PSID Sid)
{
  BOOLEAN result; // al
  size_t v2; // [esp-4h] [ebp-18h]
  int Buf2; // [esp+8h] [ebp-Ch] BYREF
  __int16 v4; // [esp+Ch] [ebp-8h]

  Buf2 = 0;
  v4 = 4864;
  result = 0;
  if ( *((_BYTE *)Sid + 1) == 2 && *(_BYTE *)Sid == 1 )
  {
    LODWORD(v2) = 6;
    if ( !memcmp((char *)Sid + 2, &Buf2, v2) && (*((_DWORD *)Sid + 2) || !*((_DWORD *)Sid + 3)) )
      return 1;
  }
  return result;
}

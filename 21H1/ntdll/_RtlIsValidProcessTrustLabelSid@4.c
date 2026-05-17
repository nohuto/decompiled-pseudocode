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

bool __stdcall RtlIsValidProcessTrustLabelSid(int a1)
{
  int Buf2; // [esp+8h] [ebp-Ch] BYREF
  __int16 v3; // [esp+Ch] [ebp-8h]

  Buf2 = 0;
  v3 = 4864;
  return *(_BYTE *)(a1 + 1) == 2
      && *(_BYTE *)a1 == 1
      && !memcmp((const void *)(a1 + 2), &Buf2, 6u)
      && (*(_DWORD *)(a1 + 8) || !*(_DWORD *)(a1 + 12));
}

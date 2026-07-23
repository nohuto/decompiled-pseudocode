/*
 * XREFs of __RtlpMuiRegValidateAndGetInstallFallbackBase@20 @ 0x4B36CD2C
 * Callers:
 *     __RtlpMuiRegPopulateBaseLanguages@20 @ 0x4B36C81E (__RtlpMuiRegPopulateBaseLanguages@20.c)
 * Callees:
 *     _RtlpLangNameInMultiSzString@8 @ 0x4B2D43C0 (_RtlpLangNameInMultiSzString@8.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 */

unsigned int __fastcall _RtlpMuiRegValidateAndGetInstallFallbackBase(
        int a1,
        _DWORD *a2,
        unsigned __int16 a3,
        wchar_t *a4,
        int a5)
{
  int v5; // esi
  wchar_t *v6; // edi
  _UNICODE_STRING String; // [esp+Ch] [ebp-8h] BYREF

  v5 = -1073741823;
  if ( !a1 || !a4 || !a2 )
    return -1073741811;
  if ( a2[1] == 7 )
  {
    if ( a2[3] && (v6 = (wchar_t *)((char *)a2 + a2[2])) != 0 && *v6 )
    {
      if ( !a3 )
        return 0;
      String.Buffer = a4;
      String.MaximumLength = 170;
      if ( RtlLCIDToCultureName(a3, &String) )
      {
        if ( RtlpLangNameInMultiSzString(v6, String.Buffer) )
          return 0;
      }
    }
    else
    {
      return a3 != 0 ? 0xC0000001 : 0;
    }
  }
  return v5;
}

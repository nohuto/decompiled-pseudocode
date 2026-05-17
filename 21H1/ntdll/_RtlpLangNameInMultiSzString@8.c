/*
 * XREFs of _RtlpLangNameInMultiSzString@8 @ 0x4B2D43C0
 * Callers:
 *     _RtlpIsALicensedLIPLanguage@8 @ 0x4B2D2C81 (_RtlpIsALicensedLIPLanguage@8.c)
 *     _RtlpIsALicensedRegularLanguage@8 @ 0x4B2D437C (_RtlpIsALicensedRegularLanguage@8.c)
 *     _RtlpAddLanguagesToMultiSZ@28 @ 0x4B35313F (_RtlpAddLanguagesToMultiSZ@28.c)
 *     __RtlpMuiRegAddBaseLanguage@20 @ 0x4B36C24C (__RtlpMuiRegAddBaseLanguage@20.c)
 *     __RtlpMuiRegValidateAndGetInstallFallbackBase@20 @ 0x4B36CD2C (__RtlpMuiRegValidateAndGetInstallFallbackBase@20.c)
 * Callees:
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 */

char __fastcall RtlpLangNameInMultiSzString(wchar_t *String1, wchar_t *String2)
{
  const wchar_t *v2; // esi

  v2 = String1;
  if ( String1 && String2 )
  {
    while ( *v2 )
    {
      if ( !_wcsicmp(v2, String2) )
        return 1;
      v2 += wcslen(v2) + 1;
      if ( !v2 )
        return 0;
    }
  }
  return 0;
}

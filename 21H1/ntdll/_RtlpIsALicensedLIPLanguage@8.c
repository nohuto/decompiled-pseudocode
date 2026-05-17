/*
 * XREFs of _RtlpIsALicensedLIPLanguage@8 @ 0x4B2D2C81
 * Callers:
 *     _RtlpMuiRegAddLanguageByName@24 @ 0x4B2AC9AE (_RtlpMuiRegAddLanguageByName@24.c)
 *     _GetLCIDFromLangListNodeWithLICCheck@20 @ 0x4B2BA710 (_GetLCIDFromLangListNodeWithLICCheck@20.c)
 *     _RtlpMUIRegPatchLicenseInfortmation@4 @ 0x4B2D427F (_RtlpMUIRegPatchLicenseInfortmation@4.c)
 * Callees:
 *     _RtlpLangNameInMultiSzString@8 @ 0x4B2D43C0 (_RtlpLangNameInMultiSzString@8.c)
 */

unsigned int __fastcall RtlpIsALicensedLIPLanguage(int a1, wchar_t *a2)
{
  wchar_t *v4; // ecx
  wchar_t *v5; // ecx
  unsigned int result; // eax

  if ( !a1 )
    return -1073741811;
  v4 = *(wchar_t **)(a1 + 80);
  if ( v4 && (unsigned __int8)RtlpLangNameInMultiSzString(v4, a2) )
    return -1073741772;
  v5 = *(wchar_t **)(a1 + 92);
  result = 0;
  if ( v5 )
    return (unsigned __int8)RtlpLangNameInMultiSzString(v5, a2) != 0 ? 0xC0000034 : 0;
  return result;
}

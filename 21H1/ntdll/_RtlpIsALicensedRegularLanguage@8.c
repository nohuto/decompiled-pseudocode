/*
 * XREFs of _RtlpIsALicensedRegularLanguage@8 @ 0x4B2D437C
 * Callers:
 *     __RtlpMuiRegValidateInstalled@4 @ 0x4B2AC387 (__RtlpMuiRegValidateInstalled@4.c)
 *     _RtlpMuiRegAddLanguageByName@24 @ 0x4B2AC9AE (_RtlpMuiRegAddLanguageByName@24.c)
 *     _GetLCIDFromLangListNodeWithLICCheck@20 @ 0x4B2BA710 (_GetLCIDFromLangListNodeWithLICCheck@20.c)
 *     _RtlpMUIRegPatchLicenseInfortmation@4 @ 0x4B2D427F (_RtlpMUIRegPatchLicenseInfortmation@4.c)
 * Callees:
 *     _RtlpLangNameInMultiSzString@8 @ 0x4B2D43C0 (_RtlpLangNameInMultiSzString@8.c)
 */

int __fastcall RtlpIsALicensedRegularLanguage(_DWORD *a1, wchar_t *a2)
{
  wchar_t *v4; // ecx
  wchar_t *v5; // ecx
  wchar_t *v6; // ecx
  int result; // eax

  if ( !a1 )
    return -1073741772;
  v4 = (wchar_t *)a1[20];
  if ( v4 )
  {
    if ( !(unsigned __int8)RtlpLangNameInMultiSzString(v4, a2) )
      return -1073741772;
  }
  v5 = (wchar_t *)a1[19];
  if ( v5 )
    return (unsigned __int8)RtlpLangNameInMultiSzString(v5, a2) != 0 ? 0 : -1073741772;
  v6 = (wchar_t *)a1[23];
  result = 0;
  if ( v6 )
    return (unsigned __int8)RtlpLangNameInMultiSzString(v6, a2) != 0 ? 0xC0000034 : 0;
  return result;
}

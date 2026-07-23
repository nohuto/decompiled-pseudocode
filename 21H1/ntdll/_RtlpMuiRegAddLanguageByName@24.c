/*
 * XREFs of _RtlpMuiRegAddLanguageByName@24 @ 0x4B2AC9AE
 * Callers:
 *     __RtlpMuiRegLoadInstalledFromKey@8 @ 0x4B2AC6E3 (__RtlpMuiRegLoadInstalledFromKey@8.c)
 * Callees:
 *     __RtlpMuiRegInitAnyLanguage@16 @ 0x4B2ACA44 (__RtlpMuiRegInitAnyLanguage@16.c)
 *     _RtlpMuiRegAddAlternateCodePage@8 @ 0x4B2ACD4A (_RtlpMuiRegAddAlternateCodePage@8.c)
 *     _RtlpIsALicensedLIPLanguage@8 @ 0x4B2D2C81 (_RtlpIsALicensedLIPLanguage@8.c)
 *     _RtlpIsALicensedRegularLanguage@8 @ 0x4B2D437C (_RtlpIsALicensedRegularLanguage@8.c)
 *     _RtlpMuiRegGetOrAddLangInfo@12 @ 0x4B2EA745 (_RtlpMuiRegGetOrAddLangInfo@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __RtlpMuiRegInitLIPLanguage@12 @ 0x4B36C534 (__RtlpMuiRegInitLIPLanguage@12.c)
 *     __RtlpMuiRegInitPartialLanguage@12 @ 0x4B36C7D0 (__RtlpMuiRegInitPartialLanguage@12.c)
 */

int __fastcall RtlpMuiRegAddLanguageByName(int a1, int a2, PCWSTR SourceString, int a4, int a5, int a6)
{
  int result; // eax
  char v9; // cl
  _WORD v10[14]; // [esp+10h] [ebp-20h] BYREF

  result = _RtlpMuiRegInitAnyLanguage(SourceString, a4);
  if ( result < 0 )
    return result;
  v9 = v10[0];
  if ( (v10[0] & 4) != 0 )
  {
    result = _RtlpMuiRegInitLIPLanguage(a1, a2, v10);
  }
  else
  {
    if ( (v10[0] & 2) == 0 )
      goto LABEL_4;
    result = _RtlpMuiRegInitPartialLanguage(v10);
  }
  v9 = v10[0];
LABEL_4:
  if ( result >= 0 )
  {
    if ( (v9 & 4) != 0 )
      result = RtlpIsALicensedLIPLanguage(a1, SourceString);
    else
      result = RtlpIsALicensedRegularLanguage(a1, SourceString);
    if ( result >= 0 )
    {
      v10[0] |= 0x820u;
      RtlpMuiRegAddAlternateCodePage(v10, a2);
      return RtlpMuiRegGetOrAddLangInfo(a6);
    }
  }
  return result;
}

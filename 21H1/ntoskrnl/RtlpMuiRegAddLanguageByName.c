/*
 * XREFs of RtlpMuiRegAddLanguageByName @ 0x14079432C
 * Callers:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403B3A34 (_RtlpMuiRegLoadInstalledFromKey.c)
 * Callees:
 *     RtlpMuiRegAddAlternateCodePage @ 0x1403B3888 (RtlpMuiRegAddAlternateCodePage.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlpIsALicensedRegularLanguage @ 0x1407948D4 (RtlpIsALicensedRegularLanguage.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x140794D60 (_RtlpMuiRegInitAnyLanguage.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x1407B96C0 (RtlpMuiRegGetOrAddLangInfo.c)
 *     RtlpIsALicensedLIPLanguage @ 0x14097C3F8 (RtlpIsALicensedLIPLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14097D80C (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegInitPartialLanguage @ 0x14097DA50 (_RtlpMuiRegInitPartialLanguage.c)
 */

__int64 __fastcall RtlpMuiRegAddLanguageByName(__int64 a1, void *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax
  char v10; // cl
  __int128 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h]
  int v13; // [rsp+38h] [rbp-18h]

  v12 = 0LL;
  v13 = 0;
  v11 = 0LL;
  result = RtlpMuiRegInitAnyLanguage(a1, &v11);
  if ( (int)result < 0 )
    return result;
  v10 = v11;
  if ( (v11 & 4) != 0 )
  {
    result = RtlpMuiRegInitLIPLanguage(a1, a2, &v11);
  }
  else
  {
    if ( (v11 & 2) == 0 )
      goto LABEL_4;
    result = RtlpMuiRegInitPartialLanguage(a1, a2, &v11);
  }
  v10 = v11;
LABEL_4:
  if ( (int)result >= 0 )
  {
    if ( (v10 & 4) != 0 )
      result = RtlpIsALicensedLIPLanguage(a1, a3);
    else
      result = RtlpIsALicensedRegularLanguage(a1, a3);
    if ( (int)result >= 0 )
    {
      LOWORD(v11) = v11 | 0x820;
      RtlpMuiRegAddAlternateCodePage((__int64)&v11, a2);
      return RtlpMuiRegGetOrAddLangInfo(a1 + 24, &v11, a6);
    }
  }
  return result;
}

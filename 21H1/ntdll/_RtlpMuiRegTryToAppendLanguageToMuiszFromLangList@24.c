/*
 * XREFs of _RtlpMuiRegTryToAppendLanguageToMuiszFromLangList@24 @ 0x4B2D3477
 * Callers:
 *     _LdrpConvertLangFallbackListToMultiSz@28 @ 0x4B2D3319 (_LdrpConvertLangFallbackListToMultiSz@28.c)
 * Callees:
 *     _RtlpMuiRegTryToAppendLangId@20 @ 0x4B2D3519 (_RtlpMuiRegTryToAppendLangId@20.c)
 *     _RtlpMuiRegTryToAppendLanguageName@20 @ 0x4B2E73F5 (_RtlpMuiRegTryToAppendLanguageName@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall RtlpMuiRegTryToAppendLanguageToMuiszFromLangList(
        char a1,
        int a2,
        _WORD *a3,
        int a4,
        wchar_t *a5,
        int a6)
{
  _WORD v7[14]; // [esp+18h] [ebp-20h] BYREF

  memset(v7, 0, sizeof(v7));
  if ( !a3 || !a2 || !a4 )
    return -1073741811;
  if ( *a3 == 1 )
  {
    v7[2] = a3[2];
  }
  else if ( *a3 == 3 )
  {
    v7[3] = a3[2];
  }
  if ( a1 )
    return RtlpMuiRegTryToAppendLangId(a4, a5, a6);
  else
    return RtlpMuiRegTryToAppendLanguageName(a4, a5, a6);
}

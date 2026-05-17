/*
 * XREFs of RtlpMuiRegTryToAppendLanguageToMuiszFromLangList @ 0x180036A2C
 * Callers:
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18003681C (LdrpConvertLangFallbackListToMultiSz.c)
 * Callees:
 *     RtlpMuiRegTryToAppendLangId @ 0x180036AEC (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18003D730 (RtlpMuiRegTryToAppendLanguageName.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpMuiRegTryToAppendLanguageToMuiszFromLangList(
        char a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int128 *v7; // rdx
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]

  v7 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v9 = 0LL;
  if ( !a3 || !a2 || !a4 )
    return 3221225485LL;
  switch ( *a3 )
  {
    case 1:
      WORD2(v9) = a3[2];
LABEL_10:
      v7 = &v9;
      break;
    case 2:
      v7 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * (__int16)a3[2]);
      break;
    case 3:
      WORD3(v9) = a3[2];
      goto LABEL_10;
  }
  if ( a1 )
    return RtlpMuiRegTryToAppendLangId(a2, v7, a4, a5, a6);
  else
    return RtlpMuiRegTryToAppendLanguageName(a2, v7, a4, a5, a6);
}

/*
 * XREFs of RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x180104D08
 * Callers:
 *     RtlGetUILanguageInfo @ 0x1800EF0A0 (RtlGetUILanguageInfo.c)
 * Callees:
 *     RtlpMuiRegTryToAppendLangId @ 0x180036AEC (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18003D6F0 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByIndex @ 0x180104878 (RtlpMuiRegGetFallbackLanguageInfoByIndex.c)
 */

__int64 __fastcall RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
        char a1,
        __int64 a2,
        _WORD *a3,
        unsigned int *a4,
        wchar_t *a5)
{
  unsigned int v9; // ebp
  unsigned int v10; // edi
  wchar_t *v11; // rbx
  int v12; // esi
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v16; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v17[40]; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int16 v18; // [rsp+A0h] [rbp+18h] BYREF

  v16 = 0;
  v9 = 0;
  if ( !a3 || !a2 || !a4 )
    return 3221225485LL;
  v10 = *a4;
  v11 = a5;
  if ( (*a3 & 0x406) != 0 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( (int)RtlpMuiRegGetFallbackLanguageInfoByIndex(a2, (__int64)a3, v12, (__int64)a4, &v18, (__int64)v17) >= 0 )
      {
        v13 = (a1 & 4) != 0
            ? RtlpMuiRegTryToAppendLangId(a2, (__int64)v17, &v16, v11, v10)
            : RtlpMuiRegTryToAppendLanguageName(a2, (__int64)v17, &v16, v11, v10);
        v9 = v13;
        if ( v13 < 0 )
          break;
      }
      if ( ++v12 >= 4 )
      {
        v14 = v16;
        if ( v16 )
          goto LABEL_17;
        goto LABEL_13;
      }
    }
  }
  else
  {
LABEL_13:
    if ( v11 && v10 )
      *v11 = 0;
    v14 = 1;
LABEL_17:
    if ( v11 )
    {
      if ( v14 >= v10 )
      {
        if ( v10 )
          *v11 = 0;
        if ( v10 > 1 )
          v11[1] = 0;
      }
      else
      {
        v11[v14] = 0;
      }
    }
    *a4 = v14 + 1;
  }
  return v9;
}

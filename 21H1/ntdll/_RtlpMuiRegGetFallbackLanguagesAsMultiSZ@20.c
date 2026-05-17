/*
 * XREFs of _RtlpMuiRegGetFallbackLanguagesAsMultiSZ@20 @ 0x4B36B664
 * Callers:
 *     _RtlGetUILanguageInfo@20 @ 0x4B352940 (_RtlGetUILanguageInfo@20.c)
 * Callees:
 *     _RtlpMuiRegTryToAppendLangId@20 @ 0x4B2D3519 (_RtlpMuiRegTryToAppendLangId@20.c)
 *     _RtlpMuiRegTryToAppendLanguageName@20 @ 0x4B2E73F5 (_RtlpMuiRegTryToAppendLanguageName@20.c)
 *     _RtlpMuiRegGetFallbackLanguageInfoByIndex@24 @ 0x4B36B2CE (_RtlpMuiRegGetFallbackLanguageInfoByIndex@24.c)
 */

int __fastcall RtlpMuiRegGetFallbackLanguagesAsMultiSZ(int a1, int a2, _WORD *a3, unsigned int *a4, wchar_t *String1)
{
  int v5; // ebx
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  _BYTE v12[28]; // [esp+Ch] [ebp-30h] BYREF
  int v13; // [esp+28h] [ebp-14h]
  int v14; // [esp+2Ch] [ebp-10h]
  int v15; // [esp+30h] [ebp-Ch] BYREF
  int v16; // [esp+34h] [ebp-8h]
  __int16 v17; // [esp+38h] [ebp-4h] BYREF

  v13 = a1;
  v5 = 0;
  v6 = (int)a3;
  v16 = a2;
  v15 = 0;
  if ( !a3 || !a2 || !a4 )
    return -1073741811;
  v7 = *a4;
  if ( (*a3 & 0x406) != 0 )
  {
    LOWORD(v8) = 0;
    v14 = 0;
    while ( 1 )
    {
      if ( RtlpMuiRegGetFallbackLanguageInfoByIndex(v16, v6, v8, v6, &v17, v12) >= 0 )
      {
        v9 = (v13 & 4) != 0
           ? RtlpMuiRegTryToAppendLangId(v16, (int)v12, (unsigned int *)&v15, String1, v7)
           : RtlpMuiRegTryToAppendLanguageName(v16, (int)v12, (unsigned int *)&v15, String1, v7);
        v5 = v9;
        if ( v9 < 0 )
          break;
      }
      v6 = (int)a3;
      v8 = v14 + 1;
      v14 = v8;
      if ( v8 >= 4 )
      {
        v10 = v15;
        if ( v15 )
          goto LABEL_17;
        goto LABEL_13;
      }
    }
  }
  else
  {
LABEL_13:
    if ( String1 && v7 )
      *String1 = 0;
    v10 = 1;
LABEL_17:
    if ( String1 )
    {
      if ( v10 >= v7 )
      {
        if ( v7 )
          *String1 = 0;
        if ( v7 > 1 )
          String1[1] = 0;
      }
      else
      {
        String1[v10] = 0;
      }
    }
    *a4 = v10 + 1;
  }
  return v5;
}

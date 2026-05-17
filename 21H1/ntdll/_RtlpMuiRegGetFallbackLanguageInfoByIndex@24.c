/*
 * XREFs of _RtlpMuiRegGetFallbackLanguageInfoByIndex@24 @ 0x4B36B2CE
 * Callers:
 *     _RtlpMuiRegGetFallbackLanguagesAsMultiSZ@20 @ 0x4B36B664 (_RtlpMuiRegGetFallbackLanguagesAsMultiSZ@20.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpMuiRegGetFallbackLanguageInfoByIndex(int a1, int a2, __int16 a3, int a4, __int16 *a5, void *a6)
{
  __int16 v7; // dx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _WORD *v12; // esi
  int v13; // esi
  _WORD v15[14]; // [esp+Ch] [ebp-1Ch] BYREF

  v7 = a3;
  if ( !a1 || !a2 || !a6 || !a5 || (unsigned __int16)a3 > 3u )
    return -1073741811;
  v8 = (*(unsigned __int16 *)(a2 + 8) >> (2 * a3)) & 3;
  if ( !v8 )
    return -1073741823;
  v9 = v8 - 1;
  if ( !v9 )
  {
    memset(v15, 0, sizeof(v15));
    v15[2] = *(_WORD *)(a2 + 2 * a3 + 12);
    LOWORD(v11) = -1;
    goto LABEL_11;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      memset(v15, 0, sizeof(v15));
      v11 = *(unsigned __int16 *)(a2 + 2 * a3 + 12);
LABEL_11:
      v15[3] = v11;
      v12 = v15;
LABEL_15:
      qmemcpy(a6, v12, 0x1Cu);
      *a5 = v7;
      return 0;
    }
  }
  else
  {
    _mm_lfence();
    v7 = *(_WORD *)(a2 + 2 * a3 + 12);
    if ( v7 >= 0 )
    {
      v13 = *(_DWORD *)(a1 + 20);
      if ( v7 < (int)*(unsigned __int16 *)(v13 + 6) )
      {
        v12 = (_WORD *)(28 * v7 + *(_DWORD *)(v13 + 12));
        goto LABEL_15;
      }
    }
  }
  return -1073741595;
}

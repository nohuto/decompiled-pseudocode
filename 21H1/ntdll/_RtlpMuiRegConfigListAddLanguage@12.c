/*
 * XREFs of _RtlpMuiRegConfigListAddLanguage@12 @ 0x4B36ADDD
 * Callers:
 *     _RtlpPopulateLanguageConfigList@12 @ 0x4B2AD962 (_RtlpPopulateLanguageConfigList@12.c)
 * Callees:
 *     _RtlpMuiRegGrowLanguageConfigList@8 @ 0x4B36B8D0 (_RtlpMuiRegGrowLanguageConfigList@8.c)
 */

int __fastcall RtlpMuiRegConfigListAddLanguage(int *a1, __int16 *a2, int a3)
{
  int v4; // ebx
  int v5; // ecx
  unsigned __int16 v6; // ax
  _WORD *v7; // eax
  __int16 v8; // di
  int v9; // eax
  __int16 v10; // cx
  _WORD *v11; // esi
  int v12; // edi
  _DWORD *v13; // edi
  __int16 v15; // [esp+10h] [ebp-14h]
  __int16 *v16; // [esp+14h] [ebp-10h]
  int v17; // [esp+18h] [ebp-Ch]
  _WORD *v18; // [esp+1Ch] [ebp-8h]
  char *v19; // [esp+1Ch] [ebp-8h]
  unsigned __int16 v20; // [esp+20h] [ebp-4h]

  v16 = a2;
  v4 = 0;
  if ( !a1 )
    return -1073741811;
  v5 = *a1;
  if ( !*a1 )
    return -1073741811;
  if ( !a2 )
    return -1073741811;
  v15 = *a2;
  if ( !((unsigned __int16)a2[1] >> 14) )
    return -1073741811;
  v6 = *(_WORD *)(v5 + 4);
  v17 = 0;
  if ( !v6 )
  {
LABEL_11:
    if ( v6 >= *(_WORD *)(v5 + 6) )
    {
      v9 = RtlpMuiRegGrowLanguageConfigList();
      v5 = v9;
      if ( !v9 )
        return -1073741801;
      a2 = v16;
      *a1 = v9;
    }
    v13 = (_DWORD *)(12 * *(unsigned __int16 *)(v5 + 4) + *(_DWORD *)(v5 + 8));
    *v13++ = *(_DWORD *)a2;
    *v13 = *((_DWORD *)a2 + 1);
    v13[1] = *((_DWORD *)a2 + 2);
    ++*(_WORD *)(v5 + 4);
    return v4;
  }
  v7 = *(_WORD **)(v5 + 8);
  v8 = (unsigned __int16)a2[1] >> 14;
  v18 = v7;
  while ( 1 )
  {
    v20 = v7[1];
    if ( v20 >> 14 == v8 )
    {
      a2 = v16;
      if ( *v18 == v15 )
        break;
    }
    ++v17;
    v7 = v18 + 6;
    a2 = v16;
    v18 += 6;
    if ( v17 >= *(unsigned __int16 *)(v5 + 4) )
      goto LABEL_10;
  }
  if ( v17 < 0 )
  {
LABEL_10:
    v6 = *(_WORD *)(v5 + 4);
    goto LABEL_11;
  }
  v10 = v16[1];
  v11 = v16 + 3;
  v12 = 0;
  v19 = (char *)((char *)v18 - (char *)v16);
  while ( (((unsigned __int16)(v10 ^ v20) >> (2 * v12)) & 3) == 0 && *(_WORD *)((char *)v11 + (_DWORD)v19) == *v11 )
  {
    v10 = v16[1];
    ++v12;
    ++v11;
    if ( v12 >= 3 )
      return v4;
  }
  return 0x40000000;
}

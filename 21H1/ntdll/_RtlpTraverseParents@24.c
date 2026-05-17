/*
 * XREFs of _RtlpTraverseParents@24 @ 0x4B2AA078
 * Callers:
 *     _RtlpIsQualifiedLanguage@12 @ 0x4B2A9F90 (_RtlpIsQualifiedLanguage@12.c)
 *     _RtlpTraverseParents@24 @ 0x4B2AA078 (_RtlpTraverseParents@24.c)
 *     _LdrpMergeParentBaseLanguagesToList@20 @ 0x4B3516E9 (_LdrpMergeParentBaseLanguagesToList@20.c)
 * Callees:
 *     _RtlpTraverseParents@24 @ 0x4B2AA078 (_RtlpTraverseParents@24.c)
 *     _LdrpGetMUILangConfigNode@16 @ 0x4B351644 (_LdrpGetMUILangConfigNode@16.c)
 */

char __fastcall RtlpTraverseParents(_WORD *a1, int a2, int a3, int a4, unsigned int a5, int a6)
{
  char v7; // cl
  int v10; // esi
  int v11; // eax
  __int16 v12; // ax
  _WORD *v13; // edx
  char v14; // al
  int v15; // edx
  _WORD *i; // esi
  __int16 v17; // ax
  int v18; // [esp+Ch] [ebp-Ch]
  int v19; // [esp+Ch] [ebp-Ch]
  int v20; // [esp+10h] [ebp-8h] BYREF

  v7 = 0;
  LOWORD(v20) = -1;
  if ( !a1 || !a2 || !a3 || a5 > 4 || a6 <= 1 )
    return 0;
  if ( (*a1 & 7) == 1 )
  {
    *(_DWORD *)(a2 + 4) = 1;
    v7 = 1;
    goto LABEL_8;
  }
  if ( (*a1 & 7) == 2 || (*a1 & 7) == 4 )
  {
    if ( !a4 || (int)LdrpGetMUILangConfigNode(a4, &v20) < 0 )
    {
LABEL_24:
      v14 = 0;
LABEL_25:
      v15 = 0;
      v19 = 0;
      if ( v14 )
      {
LABEL_19:
        v7 = 1;
        goto LABEL_20;
      }
      for ( i = a1 + 6; ; ++i )
      {
        v20 = (int)i;
        if ( v15 >= 4 )
          break;
        v17 = (a1[4] >> (2 * v15)) & 3;
        if ( v17 == 2 )
        {
          if ( (unsigned __int8)RtlpTraverseParents(a3, a4, a5 + 1, a6 - 1) )
            goto LABEL_19;
          v15 = v19;
          i = (_WORD *)v20;
        }
        else
        {
          v7 = 1;
          if ( v17 == 1 )
          {
            *(_WORD *)(a2 + 8) = a1[v15 + 6];
            goto LABEL_37;
          }
          if ( v17 == 3 )
          {
            *(_WORD *)(a2 + 10) = a1[v15 + 6];
LABEL_37:
            *(_DWORD *)(a2 + 12) = 1;
            goto LABEL_20;
          }
        }
        v19 = ++v15;
      }
      return 0;
    }
    v10 = *(_DWORD *)(a4 + 8) + 12 * (__int16)v20;
    LOBYTE(v11) = 0;
    v20 = 0;
    v18 = v10 + 6;
    while ( 1 )
    {
      v12 = (*(_WORD *)(v10 + 2) >> (2 * v11)) & 3;
      if ( v12 )
      {
        v13 = (_WORD *)(a2 + 8);
        if ( v12 != 2 )
        {
          v7 = 1;
          if ( v12 != 1 )
          {
            *v13 = 0;
            *(_WORD *)(a2 + 10) = *(_WORD *)(v10 + 2 * v20 + 6);
            v14 = 1;
            *(_DWORD *)(a2 + 12) = 1;
            goto LABEL_25;
          }
          *v13 = *(_WORD *)(v10 + 2 * v20 + 6);
          *(_WORD *)(a2 + 10) = -1;
          *(_DWORD *)(a2 + 12) = 1;
LABEL_20:
          *(_DWORD *)(a2 + 4) = 1;
LABEL_8:
          *(_WORD *)a2 = a1[2];
          *(_WORD *)(a2 + 2) = a1[3];
          return v7;
        }
        if ( (unsigned __int8)RtlpTraverseParents(a3, a4, a5 + 1, a6 - 1) )
          goto LABEL_19;
      }
      v18 += 2;
      v11 = v20 + 1;
      v20 = v11;
      if ( v11 >= 3 )
        goto LABEL_24;
    }
  }
  return v7;
}

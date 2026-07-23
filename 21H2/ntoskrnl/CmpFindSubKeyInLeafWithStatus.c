/*
 * XREFs of CmpFindSubKeyInLeafWithStatus @ 0x1406DD740
 * Callers:
 *     CmpMarkIndexDirty @ 0x14066140C (CmpMarkIndexDirty.c)
 *     CmpWalkOneLevel @ 0x1406E5B20 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407ACAF8 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpFindSubKeyInLeaf @ 0x14087A700 (CmpFindSubKeyInLeaf.c)
 * Callees:
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 *     CmpCompareInIndex @ 0x1406DD450 (CmpCompareInIndex.c)
 *     CmpDoCompareKeyName @ 0x1406DDD60 (CmpDoCompareKeyName.c)
 */

__int64 __fastcall CmpFindSubKeyInLeafWithStatus(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        _DWORD *a5,
        int *a6)
{
  int v6; // eax
  __int64 v10; // r10
  __int64 v11; // rbp
  __int64 result; // rax
  __int16 v13; // cx
  _DWORD *v14; // rdi
  int v15; // eax
  int v16; // edx
  __int64 v17; // r12
  unsigned int v18; // edx
  _BYTE *v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // edi
  __int64 v22; // r11
  __int64 v23; // rbx
  unsigned __int16 v24; // ax
  unsigned int v25; // r10d
  int v26; // r9d
  int v27; // eax
  int v28; // r9d
  int v29; // eax
  int v30; // r14d
  int v31; // r12d
  unsigned int v32; // ebp
  _DWORD *v33; // rbx
  int v34; // eax
  int v35; // eax
  int v36; // [rsp+30h] [rbp-48h]
  int v38; // [rsp+88h] [rbp+10h]

  v6 = *(unsigned __int16 *)(a2 + 2);
  v38 = 0;
  v10 = a1;
  v36 = v6 - 1;
  v11 = (unsigned int)(v6 - 1) >> 1;
  if ( !(_WORD)v6 )
  {
    *a5 = -1;
    *a6 = 0;
    return 3221225524LL;
  }
  while ( 1 )
  {
    v13 = *(_WORD *)a2;
    v14 = a5;
    *a5 = -1;
    if ( ((v13 - 26220) & 0xFDFF) != 0 )
    {
      v15 = CmpDoCompareKeyName(v10, a3, a4, *(unsigned int *)(a2 + 4 * v11 + 4));
      v16 = v15;
      if ( v15 == 2 )
      {
        v33 = a5;
        goto LABEL_59;
      }
      if ( !v15 )
        *a5 = *(_DWORD *)(a2 + 4 * v11 + 4);
    }
    else
    {
      v17 = 8 * v11 + a2;
      if ( v13 != 26220 )
        goto LABEL_37;
      v18 = 4;
      v19 = (_BYTE *)(v17 + 8);
      v20 = 0;
      while ( *v19 )
      {
        ++v20;
        ++v19;
        if ( v20 >= 4 )
          goto LABEL_13;
      }
      v18 = v20;
LABEL_13:
      if ( a4 )
        v21 = *a4;
      else
        v21 = *a3 >> 1;
      if ( v21 >= v18 )
        v21 = v18;
      v22 = 0LL;
      if ( !v21 )
      {
LABEL_36:
        v14 = a5;
LABEL_37:
        v29 = CmpDoCompareKeyName(v10, a3, a4, *(unsigned int *)(v17 + 4));
        v16 = v29;
        if ( v29 == 2 )
          goto LABEL_57;
        if ( !v29 )
          *v14 = *(_DWORD *)(v17 + 4);
        goto LABEL_40;
      }
      v23 = 0LL;
      while ( 1 )
      {
        v24 = a4 ? *(unsigned __int8 *)(*((_QWORD *)a4 + 1) + v22) : *(_WORD *)(v23 + *((_QWORD *)a3 + 1));
        v25 = *(unsigned __int8 *)(8 * v11 + (unsigned int)v22 + a2 + 8);
        if ( v24 >= 0x61u )
          v26 = v24 <= 0x7Au ? v24 - 32 : NLS_UPCASE(v24);
        else
          v26 = v24;
        if ( v25 >= 0x61 )
          v27 = v25 <= 0x7A ? v25 - 32 : NLS_UPCASE(v25);
        else
          v27 = v25;
        v28 = v26 - v27;
        if ( v28 )
          break;
        v22 = (unsigned int)(v22 + 1);
        v23 += 2LL;
        if ( (unsigned int)v22 >= v21 )
        {
          v10 = a1;
          goto LABEL_36;
        }
      }
      v16 = 1;
      if ( v28 <= 0 )
        v16 = -1;
    }
LABEL_40:
    if ( v16 == 2 )
    {
LABEL_57:
      v33 = a5;
      goto LABEL_59;
    }
    if ( !v16 )
    {
      *a6 = v11;
      return 0LL;
    }
    v30 = v38;
    if ( v16 >= 0 )
    {
      v30 = v11;
      LODWORD(v11) = v36;
    }
    v31 = v11;
    v36 = v11;
    v32 = v11 - v30;
    v38 = v30;
    if ( v32 <= 1 )
      break;
    v10 = a1;
    v11 = v30 + (v32 >> 1);
  }
  v33 = a5;
  v34 = CmpCompareInIndex(a1, a3, a4, v30, (__int16 *)a2, a5);
  if ( v34 != 2 )
  {
    if ( !v34 )
    {
      *a6 = v30;
      return 0LL;
    }
    if ( v34 < 0 )
    {
      *a6 = v30;
      return 3221225524LL;
    }
    v35 = CmpCompareInIndex(a1, a3, a4, v31, (__int16 *)a2, a5);
    if ( v35 != 2 )
    {
      result = v35 != 0 ? 0xC0000034 : 0;
      *a6 = v31;
      return result;
    }
  }
LABEL_59:
  *v33 = -1;
  *a6 = 0x80000000;
  return 3221225626LL;
}

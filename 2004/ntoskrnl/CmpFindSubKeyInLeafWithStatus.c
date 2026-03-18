/*
 * XREFs of CmpFindSubKeyInLeafWithStatus @ 0x1405E6450
 * Callers:
 *     CmpWalkOneLevel @ 0x1405EC120 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x14063F268 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpMarkIndexDirty @ 0x1406405B4 (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x140640898 (CmpRemoveSubKeyFromList.c)
 *     CmpFindSubKeyInLeaf @ 0x1408770B8 (CmpFindSubKeyInLeaf.c)
 * Callees:
 *     NLS_UPCASE @ 0x140203390 (NLS_UPCASE.c)
 *     CmpCompareInIndex @ 0x1405E61C0 (CmpCompareInIndex.c)
 *     CmpDoCompareKeyName @ 0x1405E69B0 (CmpDoCompareKeyName.c)
 */

__int64 __fastcall CmpFindSubKeyInLeafWithStatus(__int64 a1, __int64 a2, unsigned __int16 *a3, _DWORD *a4, int *a5)
{
  int v5; // eax
  unsigned int v6; // r14d
  _DWORD *v7; // rbp
  __int64 v10; // rdi
  int v11; // r12d
  __int64 v12; // rsi
  __int16 v13; // cx
  __int64 v14; // rbp
  unsigned int v15; // edx
  _BYTE *v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  unsigned int v19; // r10d
  __int64 v20; // rdi
  unsigned int v21; // ecx
  unsigned int v22; // r11d
  int v23; // r9d
  int v24; // eax
  int v25; // r9d
  int v26; // eax
  int v27; // edx
  int v28; // ebx
  unsigned int v29; // esi
  int v30; // eax
  int v31; // eax
  int v33; // eax
  int v35; // [rsp+78h] [rbp+10h]

  v5 = *(unsigned __int16 *)(a2 + 2);
  v6 = 0;
  v7 = a4;
  v35 = 0;
  v10 = a1;
  v11 = v5 - 1;
  v12 = (unsigned int)(v5 - 1) >> 1;
  if ( !(_WORD)v5 )
  {
    *a4 = -1;
    *a5 = 0;
    return 3221225524LL;
  }
  while ( 1 )
  {
    v13 = *(_WORD *)a2;
    *v7 = -1;
    if ( ((v13 - 26220) & 0xFDFF) != 0 )
    {
      v33 = CmpDoCompareKeyName(v10, a3, *(unsigned int *)(a2 + 4 * v12 + 4));
      v27 = v33;
      if ( v33 == 2 )
        goto LABEL_52;
      if ( !v33 )
        *v7 = *(_DWORD *)(a2 + 4 * v12 + 4);
    }
    else
    {
      v14 = a2 + 8 * v12;
      if ( v13 != 26220 )
        goto LABEL_18;
      v15 = 4;
      v16 = (_BYTE *)(v14 + 8);
      v17 = 0;
      while ( *v16 )
      {
        ++v17;
        ++v16;
        if ( v17 >= 4 )
          goto LABEL_7;
      }
      v15 = v17;
LABEL_7:
      v18 = 0;
      v19 = *a3 >> 1;
      if ( v19 >= v15 )
        v19 = v15;
      if ( v19 )
      {
        v20 = *((_QWORD *)a3 + 1);
        while ( 1 )
        {
          v21 = *(unsigned __int16 *)(v20 + 2LL * v18);
          v22 = *(unsigned __int8 *)(v18 + v14 + 8);
          if ( v21 >= 0x61 )
            v23 = v21 <= 0x7A ? v21 - 32 : NLS_UPCASE(v21);
          else
            v23 = *(unsigned __int16 *)(v20 + 2LL * v18);
          if ( v22 >= 0x61 )
            v24 = v22 <= 0x7A ? v22 - 32 : NLS_UPCASE(v22);
          else
            v24 = v22;
          v25 = v23 - v24;
          if ( v25 )
            break;
          if ( ++v18 >= v19 )
          {
            v10 = a1;
            goto LABEL_18;
          }
        }
        v10 = a1;
        v27 = 1;
        if ( v25 <= 0 )
          v27 = -1;
      }
      else
      {
LABEL_18:
        v26 = CmpDoCompareKeyName(v10, a3, *(unsigned int *)(v14 + 4));
        v27 = v26;
        if ( v26 == 2 )
          goto LABEL_51;
        if ( !v26 )
          *a4 = *(_DWORD *)(v14 + 4);
      }
    }
    if ( v27 == 2 )
    {
LABEL_51:
      v7 = a4;
LABEL_52:
      *v7 = -1;
      *a5 = 0x80000000;
      return 3221225626LL;
    }
    if ( !v27 )
    {
      *a5 = v12;
      return 0LL;
    }
    v28 = v35;
    v7 = a4;
    if ( v27 >= 0 )
    {
      v28 = v12;
      LODWORD(v12) = v11;
    }
    v35 = v28;
    v11 = v12;
    v29 = v12 - v28;
    if ( v29 <= 1 )
      break;
    v12 = v28 + (v29 >> 1);
  }
  v30 = CmpCompareInIndex(v10, a3, v28, (__int16 *)a2, a4);
  if ( v30 == 2 )
    goto LABEL_52;
  if ( !v30 )
  {
    *a5 = v28;
    return 0LL;
  }
  if ( v30 < 0 )
  {
    *a5 = v28;
    return 3221225524LL;
  }
  v31 = CmpCompareInIndex(v10, a3, v11, (__int16 *)a2, a4);
  if ( v31 == 2 )
    goto LABEL_52;
  *a5 = v11;
  if ( v31 )
    return (unsigned int)-1073741772;
  return v6;
}

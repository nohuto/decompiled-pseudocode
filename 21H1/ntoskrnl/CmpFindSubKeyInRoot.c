/*
 * XREFs of CmpFindSubKeyInRoot @ 0x14061B12C
 * Callers:
 *     CmpWalkOneLevel @ 0x140621740 (CmpWalkOneLevel.c)
 *     CmpMarkIndexDirty @ 0x140691EE8 (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x140692D44 (CmpRemoveSubKeyFromList.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1406CFC28 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpSelectLeaf @ 0x14075724C (CmpSelectLeaf.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpCompareInIndex @ 0x14061B7E0 (CmpCompareInIndex.c)
 */

__int64 __fastcall CmpFindSubKeyInRoot(__int64 a1, __int64 a2, int a3, unsigned int *a4)
{
  int v4; // ebp
  unsigned int v5; // ebp
  unsigned int v6; // r15d
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r14
  int v14; // eax
  int v15; // eax
  void (__fastcall *v16)(__int64, int *); // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  __int64 v22; // rax
  int v23; // eax
  int v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+74h] [rbp+Ch]
  __int64 v26; // [rsp+78h] [rbp+10h]

  v26 = a2;
  v4 = *(unsigned __int16 *)(a2 + 2);
  v24 = -1;
  v5 = v4 - 1;
  v6 = 0;
  v25 = 0;
  while ( 1 )
  {
    v10 = v6 + ((v5 - v6) >> 1);
    v11 = *(_DWORD *)(a2 + 4 * v10 + 4);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v11, &v24);
    v13 = v12;
    if ( !v12 )
      goto LABEL_26;
    v14 = CmpCompareInIndex(a1, a3, (unsigned int)*(unsigned __int16 *)(v12 + 2) - 1, v12, (__int64)a4);
    if ( v14 == 2 )
      goto LABEL_26;
    if ( !v14 )
      goto LABEL_17;
    if ( v14 >= 0 )
    {
      v6 += (v5 - v6) >> 1;
    }
    else
    {
      v15 = CmpCompareInIndex(a1, a3, 0, v13, (__int64)a4);
      if ( v15 == 2 )
        goto LABEL_26;
      if ( v15 >= 0 )
        goto LABEL_17;
      v5 = v6 + ((v5 - v6) >> 1);
    }
    v16 = *(void (__fastcall **)(__int64, int *))(a1 + 16);
    if ( v5 - v6 <= 1 )
      break;
    v16(a1, &v24);
    a2 = v26;
  }
  v16(a1, &v24);
  v17 = v26;
  v11 = *(_DWORD *)(v26 + 4LL * v6 + 4);
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v11, &v24);
  v13 = v18;
  if ( !v18 )
    goto LABEL_26;
  v19 = CmpCompareInIndex(a1, a3, (unsigned int)*(unsigned __int16 *)(v18 + 2) - 1, v18, (__int64)a4);
  if ( v19 == 2 )
    goto LABEL_26;
  if ( v19 )
  {
    if ( v19 >= 0 )
    {
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v24);
      v11 = *(_DWORD *)(v17 + 4LL * v5 + 4);
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v11, &v24);
      v13 = v22;
      if ( v22 )
      {
        v23 = CmpCompareInIndex(a1, a3, (unsigned int)*(unsigned __int16 *)(v22 + 2) - 1, v22, (__int64)a4);
        if ( v23 != 2 )
        {
          LODWORD(v10) = v5;
          if ( v23 <= 0 )
            goto LABEL_17;
          goto LABEL_24;
        }
      }
    }
    else
    {
      v20 = CmpCompareInIndex(a1, a3, 0, v13, (__int64)a4);
      if ( v20 != 2 )
      {
        LODWORD(v10) = v6;
        if ( v20 >= 0 )
          goto LABEL_17;
        goto LABEL_24;
      }
    }
LABEL_26:
    LODWORD(v10) = 0x80000000;
LABEL_24:
    v11 = -1;
    goto LABEL_17;
  }
  LODWORD(v10) = v6;
LABEL_17:
  *a4 = v11;
  if ( v13 )
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v24);
  return (unsigned int)v10;
}

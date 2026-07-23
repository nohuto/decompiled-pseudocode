/*
 * XREFs of CmpMarkIndexDirty @ 0x14066140C
 * Callers:
 *     CmpMarkKeyDirty @ 0x14065F0B8 (CmpMarkKeyDirty.c)
 *     CmpMarkKeyParentDirty @ 0x140879364 (CmpMarkKeyParentDirty.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpCopyCompressedName @ 0x14065ED94 (CmpCopyCompressedName.c)
 *     CmpFindSubKeyInRoot @ 0x1406DCD6C (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1406DD740 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall CmpMarkIndexDirty(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  __int64 (__fastcall *v5)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int16 v8; // ax
  unsigned __int16 v9; // ax
  unsigned int v10; // r14d
  char v11; // r15
  _WORD *PoolWithTag; // rax
  void *v13; // rsi
  __int64 v14; // r13
  __int64 v15; // r14
  unsigned int v16; // r12d
  _WORD *v17; // rdi
  unsigned int v19; // edi
  _DWORD v20[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v21[2]; // [rsp+38h] [rbp-18h] BYREF
  __int128 v22; // [rsp+40h] [rbp-10h] BYREF
  int v23; // [rsp+90h] [rbp+40h] BYREF
  int v24; // [rsp+A8h] [rbp+58h] BYREF

  v20[1] = 0;
  v20[0] = -1;
  v21[0] = -1;
  v21[1] = 0;
  v5 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
  v23 = -1;
  v22 = 0LL;
  v6 = v5(BugCheckParameter2, a3, v20);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = *(_WORD *)(v6 + 72);
  if ( (*(_BYTE *)(v7 + 2) & 0x20) != 0 )
  {
    v9 = 2 * v8;
    v10 = v9;
    LOWORD(v22) = v9;
    v11 = 1;
    WORD1(v22) = v9;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x20204D43u);
    *((_QWORD *)&v22 + 1) = PoolWithTag;
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      CmpCopyCompressedName(PoolWithTag, v10, (unsigned __int8 *)(v7 + 76), *(unsigned __int16 *)(v7 + 72));
      goto LABEL_5;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v20);
    return 0;
  }
  v13 = (void *)(v7 + 76);
  LOWORD(v22) = v8;
  *((_QWORD *)&v22 + 1) = v7 + 76;
  v11 = 0;
  WORD1(v22) = v8;
LABEL_5:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v20);
  v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, v20);
  if ( !v14 )
    goto LABEL_26;
  v15 = 0LL;
  if ( !*(_DWORD *)(BugCheckParameter2 + 208) )
  {
LABEL_25:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v20);
LABEL_26:
    if ( v11 )
      ExFreePoolWithTag(v13, 0);
    return 0;
  }
  while ( 1 )
  {
    if ( !*(_DWORD *)(v14 + 4 * v15 + 20) )
      goto LABEL_15;
    v16 = *(_DWORD *)(v14 + 4 * v15 + 28);
    v17 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     v16,
                     v21);
    if ( !v17 )
      goto LABEL_25;
    if ( *v17 != 26994 )
      break;
    if ( (int)CmpFindSubKeyInRoot(BugCheckParameter2, (_DWORD)v17, (unsigned int)&v22, 0, (__int64)&v23) < 0 )
    {
LABEL_24:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v21);
      goto LABEL_25;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v21);
    v19 = v23;
    if ( v23 != -1 )
    {
      if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, v16) )
        goto LABEL_25;
      v16 = v19;
      v17 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       v19,
                       v21);
      if ( !v17 )
        goto LABEL_25;
      break;
    }
LABEL_15:
    v15 = (unsigned int)(v15 + 1);
    if ( (unsigned int)v15 >= *(_DWORD *)(BugCheckParameter2 + 208) )
      goto LABEL_25;
  }
  v24 = 0;
  CmpFindSubKeyInLeafWithStatus(BugCheckParameter2, (_DWORD)v17, (unsigned int)&v22, 0, (__int64)&v23, (__int64)&v24);
  if ( v24 < 0 )
    goto LABEL_24;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v21);
  if ( v23 == -1 )
    goto LABEL_15;
  if ( v11 )
    ExFreePoolWithTag(v13, 0);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v20);
  return HvpMarkCellDirty(BugCheckParameter2, v16);
}

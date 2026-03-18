/*
 * XREFs of CmpMarkIndexDirty @ 0x140701C64
 * Callers:
 *     CmpMarkKeyDirty @ 0x140704078 (CmpMarkKeyDirty.c)
 *     CmpMarkKeyParentDirty @ 0x14087B884 (CmpMarkKeyParentDirty.c)
 *     CmpCommitRenameKeyUoW @ 0x140881108 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyInRoot @ 0x140670F9C (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140671970 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpCopyCompressedName @ 0x140703E94 (CmpCopyCompressedName.c)
 *     HvpMarkCellDirty @ 0x140707C20 (HvpMarkCellDirty.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  PVOID PoolWithTag; // rax
  void *v13; // rsi
  __int64 v14; // r13
  __int64 v15; // r14
  unsigned int v16; // r12d
  _WORD *v17; // rdi
  unsigned int v19; // edi
  _DWORD v20[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v21[2]; // [rsp+38h] [rbp-18h] BYREF
  __int128 v22; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+90h] [rbp+40h] BYREF
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
      CmpCopyCompressedName(PoolWithTag, v10, v7 + 76);
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
    if ( (int)CmpFindSubKeyInRoot(BugCheckParameter2, (__int64)v17, (__int64)&v22, 0, &v23) < 0 )
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
  CmpFindSubKeyInLeafWithStatus(BugCheckParameter2, (__int64)v17, (unsigned __int16 *)&v22, 0LL, &v23, &v24);
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

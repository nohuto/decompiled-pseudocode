/*
 * XREFs of CmpCommitRenameKeyUoW @ 0x14087B598
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x140751ACC (CmpTransMgrCommitUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     CmpMarkIndexDirty @ 0x1406405B4 (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKey @ 0x140640800 (CmpRemoveSubKey.c)
 *     CmpCleanupRollbackPacket @ 0x14064349C (CmpCleanupRollbackPacket.c)
 *     CmpDiscardKcb @ 0x1406447A4 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140644960 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406449E0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpSearchForOpenSubKeys @ 0x14064FE48 (CmpSearchForOpenSubKeys.c)
 *     CmpReferenceKeyControlBlock @ 0x140652A3C (CmpReferenceKeyControlBlock.c)
 *     CmpFreeKeyByCell @ 0x14069CB70 (CmpFreeKeyByCell.c)
 *     HvFreeCell @ 0x14069EAAC (HvFreeCell.c)
 *     HvAllocateCell @ 0x14069EE08 (HvAllocateCell.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406E31D0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086BF24 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140872D98 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140873060 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpAddSubKey @ 0x140876EB0 (CmpAddSubKey.c)
 *     CmpUpdateParentForEachSon @ 0x140877DD4 (CmpUpdateParentForEachSon.c)
 *     HvMarkCellDirty @ 0x1408787F0 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpCommitRenameKeyUoW(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r12
  ULONG_PTR v5; // rcx
  unsigned int v6; // eax
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // rcx
  ULONG_PTR v10; // r13
  __int64 v11; // r15
  int v12; // ebx
  __int64 v13; // rax
  const void *v14; // rbx
  unsigned int Cell; // eax
  _DWORD *v16; // r14
  unsigned int v17; // r12d
  __int64 v18; // rax
  char updated; // al
  __int64 v20; // rcx
  __int64 v22; // rdx
  unsigned __int16 v23; // dx
  unsigned int v24; // eax
  __int64 v25; // rax
  _DWORD v26[2]; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v27[2]; // [rsp+38h] [rbp-31h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-29h]
  void *v29; // [rsp+48h] [rbp-21h] BYREF
  __int64 v30; // [rsp+50h] [rbp-19h]
  __int128 v31; // [rsp+58h] [rbp-11h] BYREF
  __int64 v32; // [rsp+68h] [rbp-1h] BYREF
  __int64 v33; // [rsp+70h] [rbp+7h]
  unsigned int v34; // [rsp+D0h] [rbp+67h]
  int v37; // [rsp+E8h] [rbp+7Fh] BYREF
  int v38; // [rsp+ECh] [rbp+83h]

  v29 = 0LL;
  v26[0] = -1;
  v27[0] = -1;
  v4 = a3;
  v37 = -1;
  v5 = *(_QWORD *)(a1 + 48);
  v26[1] = 0;
  v27[1] = 0;
  v38 = 0;
  v6 = *(_DWORD *)(a1 + 72);
  v31 = 0LL;
  v7 = *(_QWORD *)(v5 + 32);
  v34 = v6;
  CmpReferenceKeyControlBlock(v5);
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_QWORD *)(a1 + 88);
  BugCheckParameter2 = v8;
  CmpReferenceKeyControlBlock(v9);
  v10 = *(_QWORD *)(a1 + 88);
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v7 + 8))(
          v7,
          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL),
          v27);
  if ( !v11 )
  {
    v12 = -1073741670;
LABEL_25:
    if ( v8 )
      CmpDereferenceKeyControlBlockWithLock(v8, v4, 0);
    if ( v10 )
      CmpDereferenceKeyControlBlockWithLock(v10, v4, 0);
    CmpCleanupRollbackPacket((__int64)&v31);
    return (unsigned int)v12;
  }
  if ( !HvMarkCellDirty(v7, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL), 1)
    || !HvMarkCellDirty(v7, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 1)
    || !HvMarkCellDirty(v7, *(unsigned int *)(*(_QWORD *)(a1 + 88) + 40LL), 1)
    || !CmpMarkIndexDirty(
          v7,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 88) + 40LL)) )
  {
    v12 = -1073741443;
LABEL_24:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v27);
    goto LABEL_25;
  }
  ++*(_QWORD *)(v8 + 304);
  ++*(_QWORD *)(v10 + 304);
  v12 = CmpPrepareToInvalidateAllHigherLayerKcbs(v8, 1u, (__int64)&v31);
  if ( v12 < 0 )
    goto LABEL_24;
  v12 = CmpPrepareToInvalidateAllHigherLayerKcbs(v10, 1u, (__int64)&v31);
  if ( v12 < 0 )
    goto LABEL_24;
  CmpInvalidateAllHigherLayerKcbs(v8, 1u, 8, v4);
  CmpInvalidateAllHigherLayerKcbs(v10, 1u, 8, v4);
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(
          v7,
          *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL),
          &v37);
  v30 = v13;
  v14 = (const void *)v13;
  if ( !v13 )
  {
    v12 = -1073741670;
    goto LABEL_24;
  }
  Cell = HvAllocateCell(v7, -4 - *(_DWORD *)(v13 - 4), v34, (__int64)&v29, (__int64)v26);
  v16 = v29;
  v17 = Cell;
  if ( Cell == -1 )
  {
    v12 = -1073741443;
    goto LABEL_19;
  }
  memmove(v29, v14, -4 - *((_DWORD *)v14 - 1));
  (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v37);
  v18 = *(_QWORD *)(a1 + 48);
  v30 = 0LL;
  if ( !CmpAddSubKey(v7, *(unsigned int *)(*(_QWORD *)(v18 + 72) + 40LL), v17)
    || !CmpRemoveSubKey(
          v7,
          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 88) + 40LL)) )
  {
    v12 = -1073741670;
LABEL_21:
    if ( v16 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v26);
      CmpFreeKeyByCell(v7, v17, 0);
    }
    v4 = a3;
    v8 = BugCheckParameter2;
    goto LABEL_24;
  }
  updated = CmpUpdateParentForEachSon(v7, v17, 1);
  v20 = *(_QWORD *)(a1 + 48);
  if ( !updated )
  {
    v12 = -1073741670;
    CmpRemoveSubKey(v7, *(unsigned int *)(*(_QWORD *)(v20 + 72) + 40LL), v17);
    CmpAddSubKey(
      v7,
      *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 88) + 40LL));
LABEL_19:
    if ( v30 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v37);
    goto LABEL_21;
  }
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(v20 + 40);
  *(_DWORD *)(v20 + 40) = v17;
  v22 = *a2;
  v16[4] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL);
  ++*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 304LL);
  *(_QWORD *)(v11 + 4) = v22;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 168LL) = v22;
  v23 = *((_WORD *)v16 + 36);
  if ( (*((_BYTE *)v16 + 2) & 0x20) != 0 )
    v23 *= 2;
  if ( (unsigned __int16)*(_DWORD *)(v11 + 52) < (unsigned int)v23 )
  {
    *(_WORD *)(v11 + 52) = v23;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 176LL) = v23;
  }
  v24 = *((unsigned __int16 *)v16 + 37);
  if ( *(_DWORD *)(v11 + 56) < v24 )
    *(_DWORD *)(v11 + 56) = v24;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v26);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v27);
  v25 = *(_QWORD *)(a1 + 88);
  v33 = *(_QWORD *)(a1 + 48);
  v32 = v25;
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, __int64))CmpRefreshParent,
    *(_QWORD *)(v33 + 32),
    a3,
    (__int64)&v32,
    1);
  CmpSearchForOpenSubKeys(*(_QWORD *)(a1 + 48), 1, 0LL);
  HvFreeCell(v7, *(unsigned int *)(*(_QWORD *)(a1 + 88) + 40LL));
  CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 88), 8LL, a3, 1);
  CmpMarkKeyUnbacked(*(_QWORD *)(a1 + 88));
  CmpDiscardKcb(*(_QWORD *)(a1 + 88), a3);
  CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2, a3, 0);
  CmpDereferenceKeyControlBlockWithLock(v10, a3, 0);
  CmpCleanupRollbackPacket((__int64)&v31);
  return 0LL;
}

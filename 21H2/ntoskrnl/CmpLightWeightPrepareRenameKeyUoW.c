/*
 * XREFs of CmpLightWeightPrepareRenameKeyUoW @ 0x14087F924
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1405E1934 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpCleanupRollbackPacket @ 0x1405E094C (CmpCleanupRollbackPacket.c)
 *     CmpReferenceKeyControlBlock @ 0x1405E09D4 (CmpReferenceKeyControlBlock.c)
 *     CmpCopyCell @ 0x1405E2220 (CmpCopyCell.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405F2A10 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpAddSubKeyToList @ 0x14065EBC0 (CmpAddSubKeyToList.c)
 *     CmpFreeKeyByCell @ 0x1406600A0 (CmpFreeKeyByCell.c)
 *     CmpRemoveSubKeyFromList @ 0x140660490 (CmpRemoveSubKeyFromList.c)
 *     HvAllocateCell @ 0x1407207E4 (HvAllocateCell.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1408763B8 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140876680 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpMarkAllChildrenDirty @ 0x14087AF38 (CmpMarkAllChildrenDirty.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14087EC24 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x14087F36C (CmpLightWeightCreateModificationData.c)
 */

__int64 __fastcall CmpLightWeightPrepareRenameKeyUoW(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r13
  ULONG_PTR v4; // rsi
  __int64 v5; // r8
  struct _LOOKASIDE_LIST_EX *v6; // r9
  unsigned int *v7; // rdi
  int v8; // eax
  int v9; // ebx
  ULONG_PTR v10; // r12
  ULONG_PTR v11; // rcx
  __int64 v12; // rax
  ULONG_PTR v13; // r15
  unsigned int v14; // r15d
  unsigned int *v15; // r12
  unsigned int v16; // eax
  _WORD *v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  char v20; // al
  __int64 v21; // r13
  __int64 v22; // rcx
  _DWORD v24[2]; // [rsp+30h] [rbp-38h] BYREF
  _WORD *v25; // [rsp+38h] [rbp-30h] BYREF
  __int128 v26; // [rsp+40h] [rbp-28h] BYREF
  __int128 v27; // [rsp+50h] [rbp-18h] BYREF
  unsigned int *v28; // [rsp+B0h] [rbp+48h] BYREF
  ULONG_PTR v29; // [rsp+B8h] [rbp+50h]
  ULONG_PTR v30; // [rsp+C0h] [rbp+58h]
  __int64 v31; // [rsp+C8h] [rbp+60h] BYREF

  v24[1] = 0;
  v24[0] = -1;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(int *)(a1 + 72);
  v31 = 0xFFFFFFFFLL;
  v26 = 0LL;
  v4 = *(_QWORD *)(v2 + 32);
  v27 = 0LL;
  v25 = 0LL;
  CmpInitializeDelayDerefContext(&v26);
  v7 = *(unsigned int **)(*(_QWORD *)(a1 + 80) + 104LL);
  v28 = v7;
  if ( v7 )
  {
    ++*v7;
  }
  else
  {
    v8 = CmpLightWeightCreateModificationData(a1, &v28, v5, v6);
    v7 = v28;
    v9 = v8;
    if ( v8 < 0 )
      goto LABEL_32;
  }
  CmpReferenceKeyControlBlock(*(_QWORD *)(a1 + 48));
  v10 = *(_QWORD *)(a1 + 48);
  v11 = *(_QWORD *)(a1 + 88);
  v29 = v10;
  CmpReferenceKeyControlBlock(v11);
  v12 = *(_QWORD *)(a1 + 48);
  v13 = *(_QWORD *)(a1 + 88);
  v30 = v13;
  if ( (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8))(
         v4,
         *(unsigned int *)(*(_QWORD *)(v12 + 72) + 40LL),
         v24) )
  {
    if ( !HvMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL), 1)
      || !HvMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 1)
      || !HvMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 88) + 40LL), 1) )
    {
      v9 = -1073741443;
LABEL_27:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v24);
      goto LABEL_28;
    }
    v14 = CmpCopyCell(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), v4, v3);
    if ( v14 == -1 )
    {
      v9 = -1073741670;
LABEL_26:
      v13 = v30;
      goto LABEL_27;
    }
    v15 = &v7[v3];
    if ( v15[3] == -1 )
    {
      LODWORD(v28) = *(_DWORD *)(v4 + 212);
      v16 = HvAllocateCell(v4, 12, v3, &v25, &v31);
      v15[3] = v16;
      if ( v16 == -1 )
        goto LABEL_15;
      v17 = v25;
      *v25 = (unsigned int)v28 < 5 ? 26220 : 26732;
      v17[1] = 0;
      v7[v3 + 1] = 0;
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v4 + 16))(v4, &v31);
    }
    if ( CmpAddSubKeyToList(v4, v15 + 3, v14) )
    {
      ++v7[v3 + 1];
      v18 = *(_QWORD *)(a1 + 88);
      v19 = (unsigned __int64)*(unsigned int *)(v18 + 40) >> 31;
      if ( CmpRemoveSubKeyFromList(v4, (int *)&v7[v19 + 3], *(_DWORD *)(v18 + 40)) )
      {
        --v7[v19 + 1];
        v20 = CmpMarkAllChildrenDirty(v4, v14);
        v10 = v29;
        if ( v20 )
        {
          v9 = CmpPrepareToInvalidateAllHigherLayerKcbs(v29, 1, (__int64)&v27);
          if ( v9 >= 0 )
          {
            v21 = v30;
            v9 = CmpPrepareToInvalidateAllHigherLayerKcbs(v30, 1, (__int64)&v27);
            if ( v9 >= 0 )
            {
              CmpInvalidateAllHigherLayerKcbs(v10, 1, 8, (__int64)&v26);
              CmpInvalidateAllHigherLayerKcbs(v21, 1, 8, (__int64)&v26);
              v22 = *(_QWORD *)(a1 + 48);
              *(_QWORD *)(a1 + 104) = v7;
              v9 = 0;
              v7 = 0LL;
              v30 = 0LL;
              v10 = 0LL;
              *(_DWORD *)(a1 + 96) = *(_DWORD *)(v22 + 40);
              *(_DWORD *)(v22 + 40) = v14;
              v14 = -1;
            }
          }
        }
        else
        {
          v9 = -1073741670;
        }
        goto LABEL_24;
      }
    }
LABEL_15:
    v10 = v29;
    v9 = -1073741670;
LABEL_24:
    if ( v14 != -1 )
      CmpFreeKeyByCell(v4, v14, 0);
    goto LABEL_26;
  }
  v9 = -1073741670;
LABEL_28:
  if ( v13 )
    CmpDereferenceKeyControlBlockWithLock(v13, (__int64)&v26, 0);
  if ( v10 )
    CmpDereferenceKeyControlBlockWithLock(v10, (__int64)&v26, 0);
LABEL_32:
  if ( v7 )
    CmpLightWeightCleanupModifyKeyDataUoW(v4, v7);
  CmpCleanupRollbackPacket((__int64)&v27);
  CmpDrainDelayDerefContext((_QWORD **)&v26);
  return (unsigned int)v9;
}

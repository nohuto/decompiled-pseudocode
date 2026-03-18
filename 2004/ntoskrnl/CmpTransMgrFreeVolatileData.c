/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x140642ECC
 * Callers:
 *     CmpCleanupLightWeightTransaction @ 0x140653428 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x14070D38C (CmRmFinalizeRecovery.c)
 *     CmpCleanupTransactionState @ 0x14075DB00 (CmpCleanupTransactionState.c)
 *     CmpRmUnDoPhase @ 0x1408725B4 (CmpRmUnDoPhase.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140205F64 (CmpInitializeDelayDerefContext.c)
 *     CmpRemoveSecurityCellList @ 0x14034D6E4 (CmpRemoveSecurityCellList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1405DF2CC (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockKcbExclusive @ 0x1405DF678 (CmpLockKcbExclusive.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405E77E0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpUnlockHashEntryByKcb @ 0x1405ECD50 (CmpUnlockHashEntryByKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1405F0C10 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpRundownUnitOfWork @ 0x1406430FC (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x140643290 (CmEqualTrans.c)
 *     CmpRebuildKcbCache @ 0x1406432BC (CmpRebuildKcbCache.c)
 *     CmpDiscardKcb @ 0x1406447A4 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140644960 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406449E0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x14069CB70 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x14069DDBC (CmpFreeValue.c)
 *     HvFreeCell @ 0x14069EAAC (HvFreeCell.c)
 *     HvMarkCellDirty @ 0x1408787F0 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087BA14 (CmpFreeUnitOfWork.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(__int64 a1, int a2)
{
  ULONG_PTR v4; // rdi
  int v5; // eax
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rdx
  ULONG_PTR v8; // rdx
  unsigned int v9; // r14d
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r8
  int v13; // eax
  ULONG_PTR v14; // rdx
  ULONG_PTR v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-10h] BYREF
  int v17; // [rsp+60h] [rbp+30h] BYREF
  int v18; // [rsp+64h] [rbp+34h]

  v16 = 0LL;
  CmpInitializeDelayDerefContext(&v16);
  while ( *(_QWORD *)(a1 + 16) != a1 + 16 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( !*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL) )
      goto LABEL_10;
    CmpLockRegistryExclusive();
    v5 = *(_DWORD *)(v4 + 68);
    if ( !v5 )
    {
      v8 = *(unsigned int *)(v4 + 88);
      if ( (unsigned int)(v8 - 1) <= 0xFFFFFFFD )
        CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL), v8);
      goto LABEL_9;
    }
    if ( v5 > 3 )
    {
      if ( v5 <= 5 )
      {
        CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL), *(unsigned int *)(v4 + 92));
      }
      else
      {
        if ( v5 != 9 )
        {
          if ( v5 != 12 )
            goto LABEL_9;
          v14 = *(unsigned int *)(v4 + 96);
          if ( (unsigned int)(v14 - 1) > 0xFFFFFFFD )
            goto LABEL_9;
          v15 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL);
LABEL_27:
          HvFreeCell(v15, v14);
          goto LABEL_9;
        }
        v17 = -1;
        v9 = *(_DWORD *)(v4 + 96);
        v18 = 0;
        v10 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL);
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v10 + 8))(v10, v9, &v17);
        if ( v11 )
        {
          LOBYTE(v12) = 1;
          if ( !(unsigned __int8)HvMarkCellDirty(v10, v9, v12) )
            goto LABEL_31;
          v13 = *(_DWORD *)(v11 + 12);
          if ( v13 != 1 )
          {
            *(_DWORD *)(v11 + 12) = v13 - 1;
LABEL_31:
            (*(void (__fastcall **)(__int64, int *))(v10 + 16))(v10, &v17);
            goto LABEL_9;
          }
          (*(void (__fastcall **)(__int64, int *))(v10 + 16))(v10, &v17);
          CmpRemoveSecurityCellList(v10, v9);
          v14 = v9;
          v15 = v10;
          goto LABEL_27;
        }
      }
    }
LABEL_9:
    CmpUnlockRegistry();
LABEL_10:
    CmpLockRegistry();
    v6 = *(_QWORD *)(v4 + 48);
    CmpLockHashEntryExclusiveByKcb(v6);
    CmpLockKcbExclusive(v6);
    if ( *(_QWORD *)(v6 + 288) == a1 )
    {
      v7 = *(unsigned int *)(v6 + 284);
      if ( (_DWORD)v7 != -1 )
      {
        HvFreeCell(*(_QWORD *)(v6 + 32), v7);
        *(_DWORD *)(v6 + 280) = 0;
        *(_DWORD *)(v6 + 284) = -1;
      }
      *(_QWORD *)(v6 + 288) = 0LL;
    }
    if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v6 + 240), a1) )
    {
      if ( a2 == 8 )
      {
        CmpFlushNotifiesOnKeyBodyList(v6, 8LL, &v16);
        *(_WORD *)(v6 + 8) |= 0x20u;
        CmpMarkKeyUnbacked(v6, &v16);
        if ( (*(_DWORD *)(v6 + 8) & 0x20000) == 0 )
          CmpDiscardKcb(v6);
      }
      *(_QWORD *)(v6 + 240) = 0LL;
    }
    if ( *(_DWORD *)(v6 + 40) != -1 )
    {
      if ( *(_QWORD *)(v6 + 32) )
        CmpRebuildKcbCache(v6, &v16);
    }
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v6);
    CmpRundownUnitOfWork(v4);
    CmpFreeUnitOfWork(v4);
    CmpUnlockKcb(v6);
    CmpUnlockHashEntryByKcb(v6);
    CmpDereferenceKeyControlBlock(v6);
    CmpDrainDelayDerefContext((_QWORD **)&v16);
    CmpUnlockRegistry();
  }
}

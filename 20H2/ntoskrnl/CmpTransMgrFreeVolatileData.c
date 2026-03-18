/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x1406A192C
 * Callers:
 *     CmpCleanupLightWeightTransaction @ 0x1406A1210 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1406DF7BC (CmRmFinalizeRecovery.c)
 *     CmpCleanupTransactionState @ 0x14076C168 (CmpCleanupTransactionState.c)
 *     CmpRmUnDoPhase @ 0x140878104 (CmpRmUnDoPhase.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140227238 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140227250 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveSecurityCellList @ 0x1402F2C04 (CmpRemoveSecurityCellList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14061CAE0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1406701B0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockKcbExclusive @ 0x140670B6C (CmpLockKcbExclusive.c)
 *     CmpRundownUnitOfWork @ 0x1406A1B5C (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x1406A1CCC (CmEqualTrans.c)
 *     CmpRebuildKcbCache @ 0x1406A1CF8 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1407017C0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x1407018BC (CmpMarkKeyUnbacked.c)
 *     CmpDiscardKcb @ 0x140701A1C (CmpDiscardKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x140702950 (CmpUnlockHashEntryByKcb.c)
 *     CmpFreeKeyByCell @ 0x140704760 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x140706124 (CmpFreeValue.c)
 *     HvFreeCell @ 0x140706E0C (HvFreeCell.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x140881584 (CmpFreeUnitOfWork.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  ULONG_PTR v6; // rdi
  int v7; // eax
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // rdx
  unsigned int v10; // r14d
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r8
  int v14; // eax
  ULONG_PTR v15; // rdx
  ULONG_PTR v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-10h] BYREF
  int v18; // [rsp+60h] [rbp+30h] BYREF
  int v19; // [rsp+64h] [rbp+34h]

  v17 = 0LL;
  CmpInitializeDelayDerefContext(&v17);
  while ( *(_QWORD *)(a1 + 16) != a1 + 16 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( !*(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL) )
      goto LABEL_10;
    CmpLockRegistryExclusive(v5, v4);
    v7 = *(_DWORD *)(v6 + 68);
    if ( !v7 )
    {
      if ( (unsigned int)(*(_DWORD *)(v6 + 88) - 1) <= 0xFFFFFFFD )
        CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL));
      goto LABEL_9;
    }
    if ( v7 > 3 )
    {
      if ( v7 <= 5 )
      {
        CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL), *(unsigned int *)(v6 + 92));
      }
      else
      {
        if ( v7 != 9 )
        {
          if ( v7 != 12 )
            goto LABEL_9;
          v15 = *(unsigned int *)(v6 + 96);
          if ( (unsigned int)(v15 - 1) > 0xFFFFFFFD )
            goto LABEL_9;
          v16 = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL);
LABEL_27:
          HvFreeCell(v16, v15);
          goto LABEL_9;
        }
        v18 = -1;
        v10 = *(_DWORD *)(v6 + 96);
        v19 = 0;
        v11 = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL);
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v11 + 8))(v11, v10, &v18);
        if ( v12 )
        {
          LOBYTE(v13) = 1;
          if ( !(unsigned __int8)HvMarkCellDirty(v11, v10, v13) )
            goto LABEL_31;
          v14 = *(_DWORD *)(v12 + 12);
          if ( v14 != 1 )
          {
            *(_DWORD *)(v12 + 12) = v14 - 1;
LABEL_31:
            (*(void (__fastcall **)(__int64, int *))(v11 + 16))(v11, &v18);
            goto LABEL_9;
          }
          (*(void (__fastcall **)(__int64, int *))(v11 + 16))(v11, &v18);
          CmpRemoveSecurityCellList(v11, v10);
          v15 = v10;
          v16 = v11;
          goto LABEL_27;
        }
      }
    }
LABEL_9:
    CmpUnlockRegistry();
LABEL_10:
    CmpLockRegistry();
    v8 = *(_QWORD *)(v6 + 48);
    CmpLockHashEntryExclusiveByKcb(v8);
    CmpLockKcbExclusive(v8);
    if ( *(_QWORD *)(v8 + 288) == a1 )
    {
      v9 = *(unsigned int *)(v8 + 284);
      if ( (_DWORD)v9 != -1 )
      {
        HvFreeCell(*(_QWORD *)(v8 + 32), v9);
        *(_DWORD *)(v8 + 280) = 0;
        *(_DWORD *)(v8 + 284) = -1;
      }
      *(_QWORD *)(v8 + 288) = 0LL;
    }
    if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v8 + 240), a1) )
    {
      if ( a2 == 8 )
      {
        CmpFlushNotifiesOnKeyBodyList(v8, 8LL, &v17);
        *(_WORD *)(v8 + 8) |= 0x20u;
        CmpMarkKeyUnbacked(v8, &v17);
        if ( (*(_DWORD *)(v8 + 8) & 0x20000) == 0 )
          CmpDiscardKcb(v8);
      }
      *(_QWORD *)(v8 + 240) = 0LL;
    }
    if ( *(_DWORD *)(v8 + 40) != -1 )
    {
      if ( *(_QWORD *)(v8 + 32) )
        CmpRebuildKcbCache(v8, &v17);
    }
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v8);
    CmpRundownUnitOfWork(v6);
    CmpFreeUnitOfWork(v6);
    CmpUnlockKcb(v8);
    CmpUnlockHashEntryByKcb(v8);
    CmpDereferenceKeyControlBlock(v8);
    CmpDrainDelayDerefContext((_QWORD **)&v17);
    CmpUnlockRegistry();
  }
}

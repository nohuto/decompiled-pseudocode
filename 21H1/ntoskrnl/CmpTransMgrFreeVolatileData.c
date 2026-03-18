/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x14068E3E8
 * Callers:
 *     CmpCleanupLightWeightTransaction @ 0x140656718 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1406E9558 (CmRmFinalizeRecovery.c)
 *     CmpCleanupTransactionState @ 0x14075B618 (CmpCleanupTransactionState.c)
 *     CmpRmUnDoPhase @ 0x1408712D4 (CmpRmUnDoPhase.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14025EE84 (CmpInitializeDelayDerefContext.c)
 *     CmpRemoveSecurityCellList @ 0x140310054 (CmpRemoveSecurityCellList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14061CE00 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpUnlockHashEntryByKcb @ 0x140622370 (CmpUnlockHashEntryByKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x140624030 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpRebuildKcbCache @ 0x14068E350 (CmpRebuildKcbCache.c)
 *     CmpRundownUnitOfWork @ 0x14068E618 (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x14068E7AC (CmEqualTrans.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140691D6C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x140691E68 (CmpMarkKeyUnbacked.c)
 *     CmpDiscardKcb @ 0x1406939DC (CmpDiscardKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14069596C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockKcbExclusive @ 0x140695D18 (CmpLockKcbExclusive.c)
 *     CmpFreeKeyByCell @ 0x1406963D0 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x14069787C (CmpFreeValue.c)
 *     HvFreeCell @ 0x1406989DC (HvFreeCell.c)
 *     HvMarkCellDirty @ 0x140877500 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087A724 (CmpFreeUnitOfWork.c)
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
        CmpRebuildKcbCache(v8);
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

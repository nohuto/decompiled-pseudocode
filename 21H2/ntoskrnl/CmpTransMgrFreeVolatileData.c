/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x14071D4D0
 * Callers:
 *     CmpCleanupLightWeightTransaction @ 0x1406A2E10 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1406BF8BC (CmRmFinalizeRecovery.c)
 *     CmpCleanupTransactionState @ 0x140770484 (CmpCleanupTransactionState.c)
 *     CmpRmUnDoPhase @ 0x1408759F4 (CmpRmUnDoPhase.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x1402CD674 (CmpRemoveSecurityCellList.c)
 *     CmpInitializeDelayDerefContext @ 0x1403510E8 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140351100 (CmpDrainDelayDerefContext.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405EF620 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpFreeKeyByCell @ 0x14066B280 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x14066B438 (CmpFreeValue.c)
 *     CmpDiscardKcb @ 0x14066C928 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14066CB80 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14066CC00 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockRegistryExclusive @ 0x14067278C (CmpLockRegistryExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406934B0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     HvFreeCell @ 0x140709534 (HvFreeCell.c)
 *     CmpRundownUnitOfWork @ 0x14071D7DC (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x14071D970 (CmEqualTrans.c)
 *     CmpRebuildKcbCache @ 0x14071D99C (CmpRebuildKcbCache.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140772AC4 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x140772CE0 (CmpInvalidateSubtree.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140876258 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140876520 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     HvMarkCellDirty @ 0x14087BCE8 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087EAA8 (CmpFreeUnitOfWork.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v4; // rdi
  int v5; // eax
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // rcx
  unsigned int v8; // r14d
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r15
  int v12; // eax
  unsigned int v13; // edx
  ULONG_PTR v14; // rbx
  ULONG_PTR v15; // rdx
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+30h] BYREF
  int v18; // [rsp+74h] [rbp+34h]

  v16 = 0LL;
  CmpInitializeDelayDerefContext(&v16);
  while ( *(_QWORD *)(BugCheckParameter2 + 16) != BugCheckParameter2 + 16 )
  {
    v4 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( !*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL) )
      goto LABEL_22;
    CmpLockRegistryExclusive();
    v5 = *(_DWORD *)(v4 + 68);
    if ( !v5 )
    {
      v13 = *(_DWORD *)(v4 + 88);
      if ( v13 - 1 <= 0xFFFFFFFD )
        CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL), v13, 0);
      goto LABEL_21;
    }
    if ( v5 > 3 )
    {
      if ( v5 <= 5 )
      {
        CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL), *(unsigned int *)(v4 + 92));
        goto LABEL_21;
      }
      if ( v5 == 9 )
      {
        v17 = -1;
        v8 = *(_DWORD *)(v4 + 96);
        v18 = 0;
        v9 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL);
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v9 + 8))(v9, v8, &v17);
        if ( !v11 )
          goto LABEL_21;
        LOBYTE(v10) = 1;
        if ( !(unsigned __int8)HvMarkCellDirty(v9, v8, v10) )
          goto LABEL_17;
        v12 = *(_DWORD *)(v11 + 12);
        if ( v12 != 1 )
        {
          *(_DWORD *)(v11 + 12) = v12 - 1;
LABEL_17:
          (*(void (__fastcall **)(__int64, int *))(v9 + 16))(v9, &v17);
          goto LABEL_21;
        }
        (*(void (__fastcall **)(__int64, int *))(v9 + 16))(v9, &v17);
        CmpRemoveSecurityCellList(v9, v8);
        v6 = v8;
        v7 = v9;
      }
      else
      {
        if ( v5 != 12 )
          goto LABEL_21;
        v6 = *(unsigned int *)(v4 + 96);
        if ( (unsigned int)(v6 - 1) > 0xFFFFFFFD )
          goto LABEL_21;
        v7 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL);
      }
      HvFreeCell(v7, v6);
    }
LABEL_21:
    CmpUnlockRegistry();
LABEL_22:
    CmpLockRegistryExclusive();
    v14 = *(_QWORD *)(v4 + 48);
    if ( *(_QWORD *)(v14 + 288) == BugCheckParameter2 )
    {
      v15 = *(unsigned int *)(v14 + 284);
      if ( (_DWORD)v15 != -1 )
      {
        HvFreeCell(*(_QWORD *)(v14 + 32), v15);
        *(_DWORD *)(v14 + 280) = 0;
        *(_DWORD *)(v14 + 284) = -1;
      }
      *(_QWORD *)(v14 + 288) = 0LL;
    }
    if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v14 + 240), BugCheckParameter2) && !*(_DWORD *)(v4 + 68) )
    {
      if ( a2 == 8 )
      {
        if ( (int)CmpPrepareToInvalidateAllHigherLayerKcbs(v14, 6LL, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v14, 0x10000uLL);
        if ( (int)CmpPrepareForSubtreeInvalidation(v14, 4LL, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v14, 0x10100uLL);
        CmpInvalidateAllHigherLayerKcbs(v14, 8LL, 6LL, &v16);
        CmpInvalidateSubtree(v14, 8, 4, (unsigned int)&v16, 0LL);
        CmpFlushNotifiesOnKeyBodyList(v14, 8LL, (__int64)&v16, 0);
        *(_WORD *)(v14 + 8) |= 0x20u;
        CmpMarkKeyUnbacked(v14);
        if ( (*(_DWORD *)(v14 + 8) & 0x20000) == 0 )
          CmpDiscardKcb(v14);
      }
      *(_QWORD *)(v14 + 240) = 0LL;
    }
    if ( *(_DWORD *)(v14 + 40) != -1 )
    {
      if ( *(_QWORD *)(v14 + 32) )
        CmpRebuildKcbCache(v14, &v16);
    }
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v14);
    CmpRundownUnitOfWork(v4);
    CmpFreeUnitOfWork(v4);
    CmpDereferenceKeyControlBlockWithLock(v14, (__int64)&v16, 1);
    CmpDrainDelayDerefContext((_QWORD **)&v16);
    CmpUnlockRegistry();
  }
}

/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x140663F6C
 * Callers:
 *     CmpCleanupLightWeightTransaction @ 0x1405DEB10 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x14061E72C (CmRmFinalizeRecovery.c)
 *     CmpCleanupTransactionState @ 0x140770644 (CmpCleanupTransactionState.c)
 *     CmpRmUnDoPhase @ 0x140875B54 (CmpRmUnDoPhase.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x14024BB74 (CmpRemoveSecurityCellList.c)
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405F2A10 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpRebuildKcbCache @ 0x140614584 (CmpRebuildKcbCache.c)
 *     CmpFreeKeyByCell @ 0x1406600A0 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x140660258 (CmpFreeValue.c)
 *     CmpDiscardKcb @ 0x140661748 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1406619A0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140661A20 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpRundownUnitOfWork @ 0x140664278 (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x14066440C (CmEqualTrans.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406DED80 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140772C84 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x140772EA0 (CmpInvalidateSubtree.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1408763B8 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140876680 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087EC08 (CmpFreeUnitOfWork.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  ULONG_PTR v6; // rdi
  ULONG_PTR v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  ULONG_PTR v10; // rcx
  unsigned int v11; // r14d
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r15
  int v15; // eax
  ULONG_PTR v16; // rbx
  ULONG_PTR v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int128 v20; // [rsp+30h] [rbp-10h] BYREF
  int v21; // [rsp+70h] [rbp+30h] BYREF
  int v22; // [rsp+74h] [rbp+34h]

  v20 = 0LL;
  CmpInitializeDelayDerefContext(&v20);
  while ( *(_QWORD *)(BugCheckParameter2 + 16) != BugCheckParameter2 + 16 )
  {
    v6 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( !*(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL) )
      goto LABEL_22;
    CmpLockRegistryExclusive(v5, v4);
    v9 = *(_DWORD *)(v6 + 68);
    if ( !v9 )
    {
      v7 = *(unsigned int *)(v6 + 88);
      if ( (unsigned int)(v7 - 1) <= 0xFFFFFFFD )
        CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL), v7, 0);
      goto LABEL_21;
    }
    if ( v9 > 3 )
    {
      if ( v9 <= 5 )
      {
        CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL), *(unsigned int *)(v6 + 92));
        goto LABEL_21;
      }
      if ( v9 == 9 )
      {
        v21 = -1;
        v11 = *(_DWORD *)(v6 + 96);
        v22 = 0;
        v12 = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL);
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v12 + 8))(v12, v11, &v21);
        if ( !v14 )
          goto LABEL_21;
        LOBYTE(v13) = 1;
        if ( !(unsigned __int8)HvMarkCellDirty(v12, v11, v13) )
          goto LABEL_17;
        v15 = *(_DWORD *)(v14 + 12);
        if ( v15 != 1 )
        {
          *(_DWORD *)(v14 + 12) = v15 - 1;
LABEL_17:
          (*(void (__fastcall **)(__int64, int *))(v12 + 16))(v12, &v21);
          goto LABEL_21;
        }
        (*(void (__fastcall **)(__int64, int *))(v12 + 16))(v12, &v21);
        CmpRemoveSecurityCellList(v12, v11);
        v7 = v11;
        v10 = v12;
      }
      else
      {
        if ( v9 != 12 )
          goto LABEL_21;
        v7 = *(unsigned int *)(v6 + 96);
        if ( (unsigned int)(v7 - 1) > 0xFFFFFFFD )
          goto LABEL_21;
        v10 = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL);
      }
      HvFreeCell(v10, v7);
    }
LABEL_21:
    CmpUnlockRegistry(v8, v7);
LABEL_22:
    CmpLockRegistryExclusive(v5, v4);
    v16 = *(_QWORD *)(v6 + 48);
    if ( *(_QWORD *)(v16 + 288) == BugCheckParameter2 )
    {
      v17 = *(unsigned int *)(v16 + 284);
      if ( (_DWORD)v17 != -1 )
      {
        HvFreeCell(*(_QWORD *)(v16 + 32), v17);
        *(_DWORD *)(v16 + 280) = 0;
        *(_DWORD *)(v16 + 284) = -1;
      }
      *(_QWORD *)(v16 + 288) = 0LL;
    }
    if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v16 + 240), BugCheckParameter2) && !*(_DWORD *)(v6 + 68) )
    {
      if ( a2 == 8 )
      {
        if ( (int)CmpPrepareToInvalidateAllHigherLayerKcbs(v16, 6LL, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v16, 0x10000uLL);
        if ( (int)CmpPrepareForSubtreeInvalidation(v16, 4LL, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v16, 0x10100uLL);
        CmpInvalidateAllHigherLayerKcbs(v16, 8LL, 6LL, &v20);
        CmpInvalidateSubtree(v16, 8, 4, (unsigned int)&v20, 0LL);
        CmpFlushNotifiesOnKeyBodyList(v16, 8, (__int64)&v20, 0);
        *(_WORD *)(v16 + 8) |= 0x20u;
        CmpMarkKeyUnbacked(v16, (__int64)&v20);
        if ( (*(_DWORD *)(v16 + 8) & 0x20000) == 0 )
          CmpDiscardKcb(v16);
      }
      *(_QWORD *)(v16 + 240) = 0LL;
    }
    if ( *(_DWORD *)(v16 + 40) != -1 )
    {
      if ( *(_QWORD *)(v16 + 32) )
        CmpRebuildKcbCache(v16);
    }
    CmpReferenceKeyControlBlockUnsafe(v16);
    CmpRundownUnitOfWork(v6);
    CmpFreeUnitOfWork(v6);
    CmpDereferenceKeyControlBlockWithLock(v16, (__int64)&v20, 1);
    CmpDrainDelayDerefContext((_QWORD **)&v20);
    CmpUnlockRegistry(v19, v18);
  }
}

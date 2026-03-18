/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x14071BC94
 * Callers:
 *     CmpCleanupLightWeightTransaction @ 0x1406E26C4 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1406E7AC4 (CmRmFinalizeRecovery.c)
 *     CmpCleanupTransactionState @ 0x140742300 (CmpCleanupTransactionState.c)
 *     CmpRmUnDoPhase @ 0x14091C5C4 (CmpRmUnDoPhase.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x1402A2104 (CmpDereferenceSecurityNode.c)
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     CmpDiscardKcb @ 0x14067EB68 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14067EDC0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14067EE40 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpInvalidateSubtree @ 0x14069E21C (CmpInvalidateSubtree.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14069E26C (CmpPrepareForSubtreeInvalidation.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406FEA54 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFreeKeyByCell @ 0x1407164DC (CmpFreeKeyByCell.c)
 *     CmpRebuildKcbCache @ 0x14071B3F0 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14071BC64 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpRundownUnitOfWork @ 0x14071C120 (CmpRundownUnitOfWork.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 *     CmpFreeValue @ 0x14079B22C (CmpFreeValue.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x14091CDE8 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x14091D070 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v4; // rdi
  ULONG_PTR v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  unsigned int v10; // ebp
  ULONG_PTR v11; // rbx
  __int64 v12; // r8
  ULONG_PTR v13; // rbx
  ULONG_PTR v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _OWORD v19[2]; // [rsp+30h] [rbp-28h] BYREF

  v19[0] = 0LL;
  CmpInitializeDelayDerefContext(v19);
  while ( *(_QWORD *)(BugCheckParameter2 + 16) != BugCheckParameter2 + 16 )
  {
    v4 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL) )
    {
      CmpLockRegistryExclusive();
      v9 = *(_DWORD *)(v4 + 68);
      if ( v9 )
      {
        if ( v9 > 3 )
        {
          if ( v9 <= 5 )
          {
            CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL), *(unsigned int *)(v4 + 92));
          }
          else if ( v9 == 9 )
          {
            v10 = *(_DWORD *)(v4 + 96);
            v11 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL);
            if ( (int)HvpMarkCellDirty(v11, v10) >= 0 )
              CmpDereferenceSecurityNode(v11, v10);
          }
          else if ( v9 == 12 )
          {
            v5 = *(unsigned int *)(v4 + 96);
            if ( (unsigned int)(v5 - 1) <= 0xFFFFFFFD )
              HvFreeCell(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL), v5);
          }
        }
      }
      else
      {
        v5 = *(unsigned int *)(v4 + 88);
        if ( (unsigned int)(v5 - 1) <= 0xFFFFFFFD )
          CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL), v5, 0);
      }
      CmpUnlockRegistry(v6, v5, v7, v8);
    }
    CmpLockRegistryExclusive();
    v13 = *(_QWORD *)(v4 + 48);
    if ( *(_QWORD *)(v13 + 288) == BugCheckParameter2 )
    {
      v14 = *(unsigned int *)(v13 + 284);
      if ( (_DWORD)v14 != -1 )
      {
        HvFreeCell(*(_QWORD *)(v13 + 32), v14);
        *(_DWORD *)(v13 + 280) = 0;
        *(_DWORD *)(v13 + 284) = -1;
      }
      *(_QWORD *)(v13 + 288) = 0LL;
    }
    if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v13 + 240), BugCheckParameter2, v12) && !*(_DWORD *)(v4 + 68) )
    {
      if ( a2 == 8 )
      {
        if ( (int)CmpPrepareToInvalidateAllHigherLayerKcbs(v13, 6LL, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v13, 0x10000uLL);
        if ( (int)CmpPrepareForSubtreeInvalidation(v13, 4, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v13, 0x10100uLL);
        CmpInvalidateAllHigherLayerKcbs(v13, 8LL, 6LL, v19);
        CmpInvalidateSubtree(v13, 8LL, 4, (__int64)v19, 0LL);
        CmpFlushNotifiesOnKeyBodyList(v13, 8LL, (__int64)v19, 0);
        *(_WORD *)(v13 + 8) |= 0x20u;
        CmpMarkKeyUnbacked(v13, (__int64)v19);
        if ( (*(_DWORD *)(v13 + 8) & 0x20000) == 0 )
          CmpDiscardKcb(v13);
      }
      *(_QWORD *)(v13 + 240) = 0LL;
    }
    if ( *(_DWORD *)(v13 + 40) != -1 )
    {
      if ( *(_QWORD *)(v13 + 32) )
        CmpRebuildKcbCache(v13);
    }
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v13);
    CmpRundownUnitOfWork(v4);
    ExFreePoolWithTag((PVOID)v4, 0x77554D43u);
    CmpDereferenceKeyControlBlockWithLock(v13, (__int64)v19, 1);
    CmpDrainDelayDerefContext((_QWORD **)v19);
    CmpUnlockRegistry(v16, v15, v17, v18);
  }
}

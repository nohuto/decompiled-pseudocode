/*
 * XREFs of CmpDrainDelayDerefContext @ 0x14025ED80
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405CDD00 (CmpEnumerateLayeredKey.c)
 *     CmEnumerateKey @ 0x1405FA160 (CmEnumerateKey.c)
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmQueryKey @ 0x14061F340 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x140622AD0 (CmpDeleteKeyObject.c)
 *     CmpDereferenceKeyControlBlock @ 0x140624030 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpCommitLightWeightTransaction @ 0x140656638 (CmpCommitLightWeightTransaction.c)
 *     CmpCleanUpKCBCacheTable @ 0x140659840 (CmpCleanUpKCBCacheTable.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x14065AE8C (CmpCompleteUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x14068C2C8 (CmpLinkHiveToMaster.c)
 *     CmpTransMgrFreeVolatileData @ 0x14068E3E8 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmpDelayCloseWorker @ 0x140695A00 (CmpDelayCloseWorker.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406D0150 (CmKeyBodyReplicateToVirtual.c)
 *     CmpUnfreezeHive @ 0x14071CE04 (CmpUnfreezeHive.c)
 *     CmpTransMgrCommitUoW @ 0x14074D43C (CmpTransMgrCommitUoW.c)
 *     CmpSaveBootControlSet @ 0x140863130 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140871C44 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140871D70 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCloneHwProfile @ 0x1408729C4 (CmpCloneHwProfile.c)
 *     CmRestoreKey @ 0x140877748 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140878C04 (CmpRefreshHive.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087B404 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14069596C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockHashEntry @ 0x140695CA8 (CmpUnlockHashEntry.c)
 *     CmpLockKcbExclusive @ 0x140695D18 (CmpLockKcbExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C2C50 (CmpDereferenceKeyControlBlockWithLock.c)
 */

void __fastcall CmpDrainDelayDerefContext(_QWORD **a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  ULONG_PTR v4; // rbp
  void *v5; // r14
  __int64 v6; // rax
  ULONG_PTR v7; // r15
  __int64 v8; // rcx

  if ( *a1 != a1 )
  {
    while ( 1 )
    {
      v2 = *a1;
      if ( *a1 == a1 )
        break;
      if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
        __fastfail(3u);
      *a1 = v3;
      v4 = (ULONG_PTR)(v2 - 28);
      v3[1] = a1;
      *((_BYTE *)v2 - 160) &= ~1u;
      v5 = (void *)*(v2 - 24);
      v2[1] = v2;
      *v2 = v2;
      CmpLockHashEntryExclusiveByKcb((ULONG_PTR)(v2 - 28));
      CmpLockKcbExclusive(v4);
      v6 = *(_QWORD *)(v4 + 192);
      v7 = 0LL;
      if ( v6 )
      {
        v8 = *(_QWORD *)(v6 + 24);
        if ( v8 )
        {
          v7 = *(_QWORD *)(v8 + 16);
          CmpUnlockKcb(v4);
          CmpLockKcbExclusive(v7);
          CmpLockKcbExclusive(v4);
        }
      }
      CmpDereferenceKeyControlBlockWithLock(v4);
      CmpUnlockKcb(v4);
      if ( v7 )
        CmpUnlockKcb(v7);
      CmpUnlockHashEntry(v5);
    }
  }
}

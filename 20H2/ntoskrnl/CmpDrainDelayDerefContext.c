/*
 * XREFs of CmpDrainDelayDerefContext @ 0x140227250
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405D5580 (CmpEnumerateLayeredKey.c)
 *     CmpLinkHiveToMaster @ 0x1405DA88C (CmpLinkHiveToMaster.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x14061C620 (CmpDeleteKeyObject.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmpDelayCloseWorker @ 0x140670BA0 (CmpDelayCloseWorker.c)
 *     CmEnumerateKey @ 0x140677010 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1406784D0 (CmQueryKey.c)
 *     CmpCommitLightWeightTransaction @ 0x1406A10F8 (CmpCommitLightWeightTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmpPerformUnloadKey @ 0x1406A26DC (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x1406A2C9C (CmpCompleteUnloadKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x1406A37D8 (CmpCleanUpKCBCacheTable.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406C4A0C (CmKeyBodyReplicateToVirtual.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmpUnfreezeHive @ 0x14072C914 (CmpUnfreezeHive.c)
 *     CmpTransMgrCommitUoW @ 0x1407606AC (CmpTransMgrCommitUoW.c)
 *     CmpSaveBootControlSet @ 0x140869E70 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140878A84 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140878BB0 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCloneHwProfile @ 0x140879804 (CmpCloneHwProfile.c)
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14087FA64 (CmpRefreshHive.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408822AC (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1406701B0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockKcbExclusive @ 0x140670B6C (CmpLockKcbExclusive.c)
 *     CmpUnlockHashEntry @ 0x140670E48 (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140682488 (CmpDereferenceKeyControlBlockWithLock.c)
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

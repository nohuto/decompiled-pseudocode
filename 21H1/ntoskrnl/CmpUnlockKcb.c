/*
 * XREFs of CmpUnlockKcb @ 0x140626230
 * Callers:
 *     CmpDoQueryKeyName @ 0x14025BE50 (CmpDoQueryKeyName.c)
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x1402D2EA0 (CmpRemoveHiveFromNamespace.c)
 *     CmpVEExecuteOpenLogic @ 0x1405E9C70 (CmpVEExecuteOpenLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405EACD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F4060 (NtNotifyChangeMultipleKeys.c)
 *     CmpUnlockTwoKcbs @ 0x1405FA0B0 (CmpUnlockTwoKcbs.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061C310 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyControlBlock @ 0x14061CE30 (CmpCreateKeyControlBlock.c)
 *     CmQueryKey @ 0x14061F340 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x140622AD0 (CmpDeleteKeyObject.c)
 *     CmpCreateKeyBody @ 0x140622E40 (CmpCreateKeyBody.c)
 *     CmpDereferenceKeyControlBlock @ 0x140624030 (CmpDereferenceKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140624630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmQueryMultipleValueKey @ 0x14065781C (CmQueryMultipleValueKey.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x140658190 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpTransMgrFreeVolatileData @ 0x14068E3E8 (CmpTransMgrFreeVolatileData.c)
 *     CmpDelayCloseWorker @ 0x140695A00 (CmpDelayCloseWorker.c)
 *     CmpCloseKeyObject @ 0x1406B8480 (CmpCloseKeyObject.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406D0150 (CmKeyBodyReplicateToVirtual.c)
 *     NtFlushKey @ 0x1406DFA70 (NtFlushKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406ED174 (CmKeyBodyNeedsVirtualImage.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14071F908 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpTransMgrCommitUoW @ 0x14074D43C (CmpTransMgrCommitUoW.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14074FCB0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmLockKeyForWrite @ 0x1407ADB50 (CmLockKeyForWrite.c)
 *     CmpResolveHiveLoadConflict @ 0x14086A178 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086ABD4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086B220 (CmKeyBodyRemapToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x14086D994 (CmpGlobalUnlockKeyForWrite.c)
 *     CmDumpKey @ 0x140877530 (CmDumpKey.c)
 *     CmRestoreKey @ 0x140877748 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140878C04 (CmpRefreshHive.c)
 *     CmpCreateRegistryRoot @ 0x140A532BC (CmpCreateRegistryRoot.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     CmpFreeKeyControlBlock @ 0x140659940 (CmpFreeKeyControlBlock.c)
 */

char __fastcall CmpUnlockKcb(ULONG_PTR BugCheckParameter2)
{
  int v2; // edi
  char result; // al

  v2 = *(_DWORD *)(BugCheckParameter2 + 8) & 0x80000;
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) == KeGetCurrentThread() )
    *(_QWORD *)(BugCheckParameter2 + 56) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 56));
  result = ExReleasePushLockEx(BugCheckParameter2 + 48, 0LL);
  if ( v2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
      return CmpFreeKeyControlBlock(BugCheckParameter2);
  }
  return result;
}

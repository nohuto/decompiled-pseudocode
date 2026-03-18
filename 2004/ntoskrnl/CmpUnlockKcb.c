/*
 * XREFs of CmpUnlockKcb @ 0x1405F0C10
 * Callers:
 *     CmpDoQueryKeyName @ 0x140202F30 (CmpDoQueryKeyName.c)
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x14027262C (CmpRemoveHiveFromNamespace.c)
 *     CmpDelayCloseWorker @ 0x1405DF360 (CmpDelayCloseWorker.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405E2200 (NtNotifyChangeMultipleKeys.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405E6CF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyControlBlock @ 0x1405E7810 (CmpCreateKeyControlBlock.c)
 *     CmQueryKey @ 0x1405E9D20 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1405ED4B0 (CmpDeleteKeyObject.c)
 *     CmpCreateKeyBody @ 0x1405ED820 (CmpCreateKeyBody.c)
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405EF010 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140642ECC (CmpTransMgrFreeVolatileData.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14064FA70 (CmKeyBodyReplicateToVirtual.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x14064FD5C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmQueryMultipleValueKey @ 0x1406552BC (CmQueryMultipleValueKey.c)
 *     CmpUnlockTwoKcbs @ 0x140672190 (CmpUnlockTwoKcbs.c)
 *     CmpVEExecuteOpenLogic @ 0x1406931B0 (CmpVEExecuteOpenLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140694210 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCloseKeyObject @ 0x1406D7580 (CmpCloseKeyObject.c)
 *     NtFlushKey @ 0x140702800 (NtFlushKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140710CFC (CmKeyBodyNeedsVirtualImage.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407217C8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpTransMgrCommitUoW @ 0x140751ACC (CmpTransMgrCommitUoW.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140754340 (CmpFindSubkeyInHashByChildCell.c)
 *     CmLockKeyForWrite @ 0x1407B0CB0 (CmLockKeyForWrite.c)
 *     CmpResolveHiveLoadConflict @ 0x14086B4C8 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086BF24 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086C570 (CmKeyBodyRemapToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x14086F454 (CmpGlobalUnlockKeyForWrite.c)
 *     CmDumpKey @ 0x140878820 (CmDumpKey.c)
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140879EF4 (CmpRefreshHive.c)
 *     CmpCreateRegistryRoot @ 0x140A59228 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     CmpFreeKeyControlBlock @ 0x140652CD0 (CmpFreeKeyControlBlock.c)
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

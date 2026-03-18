/*
 * XREFs of CmpUnlockKcb @ 0x140613840
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x140227250 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x1402F2DB4 (CmpRemoveHiveFromNamespace.c)
 *     CmpDoQueryKeyName @ 0x140302C50 (CmpDoQueryKeyName.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F7BF0 (NtNotifyChangeMultipleKeys.c)
 *     CmpVEExecuteOpenLogic @ 0x14060BF80 (CmpVEExecuteOpenLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14060C6A0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCreateKeyBody @ 0x14060E320 (CmpCreateKeyBody.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x14061C460 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDeleteKeyObject @ 0x14061C620 (CmpDeleteKeyObject.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061CB10 (CmpGetSymbolicLinkTarget.c)
 *     CmpDelayCloseWorker @ 0x140670BA0 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x1406723D0 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockTwoKcbs @ 0x140676600 (CmpUnlockTwoKcbs.c)
 *     CmQueryKey @ 0x1406784D0 (CmQueryKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1406A1D90 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmQueryMultipleValueKey @ 0x1406A503C (CmQueryMultipleValueKey.c)
 *     CmpCloseKeyObject @ 0x1406B1340 (CmpCloseKeyObject.c)
 *     NtFlushKey @ 0x1406BF640 (NtFlushKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406C4A0C (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x1406C4C5C (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406E317C (CmKeyBodyNeedsVirtualImage.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14072F7B8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpTransMgrCommitUoW @ 0x1407606AC (CmpTransMgrCommitUoW.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140762F80 (CmpFindSubkeyInHashByChildCell.c)
 *     CmLockKeyForWrite @ 0x1407BEBF0 (CmLockKeyForWrite.c)
 *     CmpResolveHiveLoadConflict @ 0x140870F1C (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1408719A4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyRemapToVirtual @ 0x140871FF0 (CmKeyBodyRemapToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x140873194 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140874FA4 (CmpGlobalUnlockKeyForWrite.c)
 *     CmDumpKey @ 0x14087E390 (CmDumpKey.c)
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14087FA64 (CmpRefreshHive.c)
 *     CmpCreateRegistryRoot @ 0x140A598A8 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     CmpFreeKeyControlBlock @ 0x1406A38E0 (CmpFreeKeyControlBlock.c)
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

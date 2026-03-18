/*
 * XREFs of CmpLockRegistry @ 0x140616990
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140204810 (CmpRecheckHiveVolumePolicy.c)
 *     CmpDoQueryKeyName @ 0x140302C50 (CmpDoQueryKeyName.c)
 *     CmpEnumerateLayeredKey @ 0x1405D5580 (CmpEnumerateLayeredKey.c)
 *     CmpLinkHiveToMaster @ 0x1405DA88C (CmpLinkHiveToMaster.c)
 *     CmpTrimHive @ 0x1405DADF8 (CmpTrimHive.c)
 *     CmpCreateHive @ 0x1405DDED8 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1405DE58C (CmpReorganizeHive.c)
 *     CmpSetKeySecurity @ 0x1405E0AE4 (CmpSetKeySecurity.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F7BF0 (NtNotifyChangeMultipleKeys.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14060C6A0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCleanupParseContext @ 0x14060C8A0 (CmpCleanupParseContext.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x14061C620 (CmpDeleteKeyObject.c)
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x14066F1E0 (CmpQueryKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14066FA70 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpDelayCloseWorker @ 0x140670BA0 (CmpDelayCloseWorker.c)
 *     CmEnumerateKey @ 0x140677010 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1406784D0 (CmQueryKey.c)
 *     CmNotifyRunDown @ 0x1406836AC (CmNotifyRunDown.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmpLateUnloadHiveWorker @ 0x1406A2B40 (CmpLateUnloadHiveWorker.c)
 *     CmpStopRMLog @ 0x1406A3D08 (CmpStopRMLog.c)
 *     CmQueryMultipleValueKey @ 0x1406A503C (CmQueryMultipleValueKey.c)
 *     CmpCloseKeyObject @ 0x1406B1340 (CmpCloseKeyObject.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406C4A0C (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoLocalizeNextHive @ 0x1406CA610 (CmpDoLocalizeNextHive.c)
 *     HvpFinishPrimaryWrite @ 0x1406D68B0 (HvpFinishPrimaryWrite.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406E317C (CmKeyBodyNeedsVirtualImage.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406E3CDC (CmpStartSiloRegistryNamespace.c)
 *     CmLoadDifferencingKey @ 0x1406FE1FC (CmLoadDifferencingKey.c)
 *     CmReleaseLoadKeyContext @ 0x140700F00 (CmReleaseLoadKeyContext.c)
 *     CmpLockRegistryFreezeAware @ 0x140701310 (CmpLockRegistryFreezeAware.c)
 *     NtDeleteKey @ 0x140701FA0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmpInitCmRM @ 0x14071037C (CmpInitCmRM.c)
 *     CmSaveKey @ 0x14072513C (CmSaveKey.c)
 *     CmpTransMgrPrepare @ 0x14076032C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1407604BC (CmpTransMgrCommit.c)
 *     CmpTransMgrCommitUoW @ 0x1407606AC (CmpTransMgrCommitUoW.c)
 *     CmpTransMgrSyncHive @ 0x140761380 (CmpTransMgrSyncHive.c)
 *     CmpCleanupTransactionState @ 0x14076C168 (CmpCleanupTransactionState.c)
 *     CmpLoadHiveThread @ 0x140794830 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140795094 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmLockKeyForWrite @ 0x1407BEBF0 (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x1407CC190 (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x14086BE40 (CmCallbackGetKeyObjectID.c)
 *     CmReplaceKey @ 0x1408701CC (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x14087047C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140870938 (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140871BE0 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyRemapToVirtual @ 0x140871FF0 (CmKeyBodyRemapToVirtual.c)
 *     CmpFlushBackupHive @ 0x140873704 (CmpFlushBackupHive.c)
 *     CmpStopSiloKeyLockTracker @ 0x1408750C8 (CmpStopSiloKeyLockTracker.c)
 *     CmDumpKey @ 0x14087E390 (CmDumpKey.c)
 *     CmSaveMergedKeys @ 0x14087F0FC (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x14087FA64 (CmpRefreshHive.c)
 *     CmpDoReOpenTransKey @ 0x140884D18 (CmpDoReOpenTransKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x140223930 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistry()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN result; // al

  if ( !BYTE6(NlsMbCodePageTag) )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    return ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
  }
  return result;
}

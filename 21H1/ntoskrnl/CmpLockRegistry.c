/*
 * XREFs of CmpLockRegistry @ 0x1406292D0
 * Callers:
 *     CmpDoQueryKeyName @ 0x14025BE50 (CmpDoQueryKeyName.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1402E0F40 (CmpRecheckHiveVolumePolicy.c)
 *     CmpEnumerateLayeredKey @ 0x1405CDD00 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405EACD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCleanupParseContext @ 0x1405EAEC0 (CmpCleanupParseContext.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F4060 (NtNotifyChangeMultipleKeys.c)
 *     CmEnumerateKey @ 0x1405FA160 (CmEnumerateKey.c)
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x14061A030 (CmpQueryKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14061AC90 (CmCallbackGetKeyObjectIDEx.c)
 *     CmQueryKey @ 0x14061F340 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x140622AD0 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmQueryMultipleValueKey @ 0x14065781C (CmQueryMultipleValueKey.c)
 *     CmpStopRMLog @ 0x1406592B4 (CmpStopRMLog.c)
 *     CmpInitCmRM @ 0x14065A51C (CmpInitCmRM.c)
 *     CmpLateUnloadHiveWorker @ 0x14065AD30 (CmpLateUnloadHiveWorker.c)
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     CmpCreateHive @ 0x140688850 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140688F04 (CmpReorganizeHive.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmpLinkHiveToMaster @ 0x14068C2C8 (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x14068C83C (CmLoadDifferencingKey.c)
 *     CmReleaseLoadKeyContext @ 0x14068DF30 (CmReleaseLoadKeyContext.c)
 *     CmpTrimHive @ 0x14068DFA0 (CmpTrimHive.c)
 *     CmpTransMgrFreeVolatileData @ 0x14068E3E8 (CmpTransMgrFreeVolatileData.c)
 *     CmpDoLocalizeNextHive @ 0x14068E8A0 (CmpDoLocalizeNextHive.c)
 *     CmpLockRegistryFreezeAware @ 0x140691170 (CmpLockRegistryFreezeAware.c)
 *     NtDeleteKey @ 0x140692140 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmpDelayCloseWorker @ 0x140695A00 (CmpDelayCloseWorker.c)
 *     CmpCloseKeyObject @ 0x1406B8480 (CmpCloseKeyObject.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406D0150 (CmKeyBodyReplicateToVirtual.c)
 *     HvpFinishPrimaryWrite @ 0x1406E0A10 (HvpFinishPrimaryWrite.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406ED174 (CmKeyBodyNeedsVirtualImage.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406ED80C (CmpStartSiloRegistryNamespace.c)
 *     CmNotifyRunDown @ 0x140706CB0 (CmNotifyRunDown.c)
 *     CmSaveKey @ 0x140714DEC (CmSaveKey.c)
 *     CmpTransMgrPrepare @ 0x14074D0BC (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x14074D24C (CmpTransMgrCommit.c)
 *     CmpTransMgrCommitUoW @ 0x14074D43C (CmpTransMgrCommitUoW.c)
 *     CmpTransMgrSyncHive @ 0x14074E110 (CmpTransMgrSyncHive.c)
 *     CmpCleanupTransactionState @ 0x14075B618 (CmpCleanupTransactionState.c)
 *     CmpLoadHiveThread @ 0x140781490 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140781A00 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmLockKeyForWrite @ 0x1407ADB50 (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x1407BA790 (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x140865100 (CmCallbackGetKeyObjectID.c)
 *     CmReplaceKey @ 0x140869428 (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x1408696D8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140869B94 (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086AE10 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086B220 (CmKeyBodyRemapToVirtual.c)
 *     CmpStopSiloKeyLockTracker @ 0x14086DAB8 (CmpStopSiloKeyLockTracker.c)
 *     CmpFlushBackupHive @ 0x14086FC00 (CmpFlushBackupHive.c)
 *     CmDumpKey @ 0x140877530 (CmDumpKey.c)
 *     CmSaveMergedKeys @ 0x14087829C (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x140878C04 (CmpRefreshHive.c)
 *     CmpDoReOpenTransKey @ 0x14087DE9C (CmpDoReOpenTransKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x140263840 (PsBoostThreadIo.c)
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

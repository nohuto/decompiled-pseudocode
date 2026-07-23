/*
 * XREFs of CmpLockRegistry @ 0x14070D2F0
 * Callers:
 *     CmpDoQueryKeyName @ 0x14026CB70 (CmpDoQueryKeyName.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1402F73C0 (CmpRecheckHiveVolumePolicy.c)
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1405DFF10 (CmpLateUnloadHiveWorker.c)
 *     CmpStopRMLog @ 0x1405E1088 (CmpStopRMLog.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405FFD40 (CmKeyBodyReplicateToVirtual.c)
 *     HvpFinishPrimaryWrite @ 0x140613CA0 (HvpFinishPrimaryWrite.c)
 *     CmpTrimHive @ 0x14061A5B8 (CmpTrimHive.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140621E0C (CmKeyBodyNeedsVirtualImage.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406225AC (CmpStartSiloRegistryNamespace.c)
 *     CmNotifyRunDown @ 0x140641570 (CmNotifyRunDown.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14064A4D0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCleanupParseContext @ 0x14064A8A0 (CmpCleanupParseContext.c)
 *     NtNotifyChangeMultipleKeys @ 0x140658050 (NtNotifyChangeMultipleKeys.c)
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x14065A180 (CmpQueryKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14065AA10 (CmCallbackGetKeyObjectIDEx.c)
 *     CmDeleteValueKey @ 0x14065B364 (CmDeleteValueKey.c)
 *     CmpDeleteKeyObject @ 0x14065C3E0 (CmpDeleteKeyObject.c)
 *     CmQueryMultipleValueKey @ 0x14065E494 (CmQueryMultipleValueKey.c)
 *     CmpCloseKeyObject @ 0x14065FDA0 (CmpCloseKeyObject.c)
 *     CmDeleteKey @ 0x140660814 (CmDeleteKey.c)
 *     NtDeleteKey @ 0x140661030 (NtDeleteKey.c)
 *     CmpSetKeySecurity @ 0x140662D2C (CmpSetKeySecurity.c)
 *     CmpDoLocalizeNextHive @ 0x140664500 (CmpDoLocalizeNextHive.c)
 *     CmLoadDifferencingKey @ 0x140664A6C (CmLoadDifferencingKey.c)
 *     CmReleaseLoadKeyContext @ 0x140667510 (CmReleaseLoadKeyContext.c)
 *     CmpLockRegistryFreezeAware @ 0x140667920 (CmpLockRegistryFreezeAware.c)
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     CmpInitCmRM @ 0x1406C46C8 (CmpInitCmRM.c)
 *     CmpDelayCloseWorker @ 0x1406DBAF0 (CmpDelayCloseWorker.c)
 *     CmEnumerateKey @ 0x1406E3AB0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1406E4F70 (CmQueryKey.c)
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1406F7F2C (CmpReorganizeHive.c)
 *     CmpLinkHiveToMaster @ 0x1406F8338 (CmpLinkHiveToMaster.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmSaveKey @ 0x14072907C (CmSaveKey.c)
 *     CmpTransMgrPrepare @ 0x140768EC4 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1407691DC (CmpTransMgrSyncHive.c)
 *     CmpCleanupTransactionState @ 0x140770644 (CmpCleanupTransactionState.c)
 *     CmpLoadHiveThread @ 0x14079EF50 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14079F7B4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmLockKeyForWrite @ 0x1407C3510 (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x1407D05C0 (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x140869BD0 (CmCallbackGetKeyObjectID.c)
 *     CmReplaceKey @ 0x14086DB28 (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x14086DDD8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E29C (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086F570 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F980 (CmKeyBodyRemapToVirtual.c)
 *     CmpFlushBackupHive @ 0x1408710A0 (CmpFlushBackupHive.c)
 *     CmpStopSiloKeyLockTracker @ 0x140872A78 (CmpStopSiloKeyLockTracker.c)
 *     CmDumpKey @ 0x14087BE78 (CmDumpKey.c)
 *     CmSaveMergedKeys @ 0x14087CBF0 (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x14087D558 (CmpRefreshHive.c)
 *     CmpDoReOpenTransKey @ 0x140882410 (CmpDoReOpenTransKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x140358530 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistry()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN result; // al

  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    return ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
  }
  return result;
}

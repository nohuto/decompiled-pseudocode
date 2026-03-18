/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x1402A3DC0
 * Callers:
 *     FsRtlUninitializeOplock @ 0x14023A260 (FsRtlUninitializeOplock.c)
 *     FsRtlCancelNotify @ 0x14024CCD0 (FsRtlCancelNotify.c)
 *     FsRtlpRequestShareableOplock @ 0x1402A2490 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1402A6980 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403857EC (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039F3B0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x140459FA0 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlOplockBreakToNoneEx @ 0x140542200 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x1405423C0 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140542458 (FsRtlpAcknowledgeOplockBreak.c)
 *     DifExAcquireFastMutexUnsafeWrapper @ 0x140606870 (DifExAcquireFastMutexUnsafeWrapper.c)
 *     DifKeAcquireGuardedMutexUnsafeWrapper @ 0x140611D10 (DifKeAcquireGuardedMutexUnsafeWrapper.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x140658160 (FsRtlCheckOplockForFsFilterCallback.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x14065D410 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14065D4F8 (CmpPrepareLightWeightTransaction.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x14067F34C (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x14067F520 (CmpTransSearchAddTrans.c)
 *     CmpRunDownCmRM @ 0x14069FD64 (CmpRunDownCmRM.c)
 *     CmSnapshotRMTxArray @ 0x1406A0094 (CmSnapshotRMTxArray.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406AA510 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406AAE50 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x1406AB5E0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406AB670 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406ABE00 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlOplockBreakH2 @ 0x1406D8C10 (FsRtlOplockBreakH2.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406E26C4 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x1406E2798 (CmpTransMgrRollback.c)
 *     CmRmFinalizeRecovery @ 0x1406E7AC4 (CmRmFinalizeRecovery.c)
 *     SepNotifyFileSystems @ 0x1406EA9C0 (SepNotifyFileSystems.c)
 *     LOCK_TRANSACTION_LIST @ 0x14071C25C (LOCK_TRANSACTION_LIST.c)
 *     CmpPostNotify @ 0x14071C288 (CmpPostNotify.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14071C610 (FsRtlpOplockFsctrlInternal.c)
 *     CmpNotifyTriggerCheck @ 0x14071EDD4 (CmpNotifyTriggerCheck.c)
 *     CmpTransInitializeTransaction @ 0x140741B7C (CmpTransInitializeTransaction.c)
 *     CmKtmNotification @ 0x140741CF0 (CmKtmNotification.c)
 *     CmpIsCmRm @ 0x140742190 (CmpIsCmRm.c)
 *     CmpCleanupTransactionState @ 0x140742300 (CmpCleanupTransactionState.c)
 *     CmpTransMgrPrepare @ 0x1407424F0 (CmpTransMgrPrepare.c)
 *     CmpLogCheckpoint @ 0x140742A44 (CmpLogCheckpoint.c)
 *     CmpInitCmRM @ 0x140742E3C (CmpInitCmRM.c)
 *     CmNotifyRunDown @ 0x14079FD44 (CmNotifyRunDown.c)
 *     NtNotifyChangeMultipleKeys @ 0x1407E5600 (NtNotifyChangeMultipleKeys.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140860E80 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     CmObliterateRMTxArray @ 0x1409193DC (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x1409194E0 (CmpLazyCommitWorker.c)
 *     FsRtlCheckUpperOplock @ 0x14092E2F0 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14092E8CC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14092EA08 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x14092FFC0 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x140961810 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1409CD0D0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1409CD170 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1409CD240 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1409FCB38 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x1409FD4A0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FDC88 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409FE284 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1409FF390 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1409FF520 (NtDeleteDriverEntry.c)
 *     NtEnumerateBootEntries @ 0x1409FF6B0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1409FFD10 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140A001D0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x140A003D0 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x140A004F0 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x140A00770 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x140A00A80 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x140A00D00 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x140A00DB0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x140A010D0 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x140A012E0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x140A014F0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x140A01700 (NtSetSystemEnvironmentValue.c)
 *     KeInitSystem @ 0x140B03800 (KeInitSystem.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExpAcquireFastMutexContended @ 0x14029EF4C (ExpAcquireFastMutexContended.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v2; // rbx
  unsigned int AbEntrySummary; // eax
  __int64 v5; // rcx
  int SessionId; // eax

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)FastMutex, (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v5, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v5);
    _enable();
    v2 = (__int64)(&CurrentThread[1].Process + 12 * v5);
    if ( (unsigned __int64)FastMutex - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v2 + 8) = SessionId;
    *(_QWORD *)v2 = (unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((__int64)FastMutex, v2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  FastMutex->Owner = CurrentThread;
}

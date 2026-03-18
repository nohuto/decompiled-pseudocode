/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x14025BC80
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x140254990 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1402555C0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpRequestShareableOplock @ 0x14025A570 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCancelNotify @ 0x1402FC690 (FsRtlCancelNotify.c)
 *     FsRtlUninitializeOplock @ 0x1402FF660 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140373290 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14038FC2C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x1403ABAA0 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1404EA850 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x1404EA9F0 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404EAA64 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1406111D0 (FsRtlpOplockFsctrlInternal.c)
 *     LOCK_POST_LIST @ 0x14061828C (LOCK_POST_LIST.c)
 *     CmpNotifyTriggerCheck @ 0x14061A92C (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x14061A9A8 (CmpPostNotify.c)
 *     CmpCleanupLightWeightTransaction @ 0x140656718 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x140656A44 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1406583C8 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmKtmNotification @ 0x140658680 (CmKtmNotification.c)
 *     CmSnapshotRMTxArray @ 0x140658994 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x140658F20 (CmpIsCmRm.c)
 *     CmpRunDownCmRM @ 0x1406590AC (CmpRunDownCmRM.c)
 *     LOCK_CM_RM_LIST @ 0x140659620 (LOCK_CM_RM_LIST.c)
 *     LOCK_TRANSACTION_LIST @ 0x14068E75C (LOCK_TRANSACTION_LIST.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406BF6A0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406C0000 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406C0360 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCleanup @ 0x1406C0AF0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406C0B80 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlOplockBreakH @ 0x1406C44D0 (FsRtlOplockBreakH.c)
 *     CmRmFinalizeRecovery @ 0x1406E9558 (CmRmFinalizeRecovery.c)
 *     CmNotifyRunDown @ 0x140706CB0 (CmNotifyRunDown.c)
 *     CmpTransSearchAddTrans @ 0x14075056C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1407507FC (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x14075B618 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x14075B778 (CmpLogCheckpoint.c)
 *     CmpTransMgrRollback @ 0x14075C220 (CmpTransMgrRollback.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x1407BB2E0 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     CmpLazyCommitWorker @ 0x14086DBC0 (CmpLazyCommitWorker.c)
 *     CmpQueueLazyCommitWorker @ 0x14086DE30 (CmpQueueLazyCommitWorker.c)
 *     FsRtlCheckUpperOplock @ 0x1408874A0 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x140887A4C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x140887B88 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x140889130 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x1408B73A0 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x14091EBE0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x14091EC80 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x14091ED50 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x14091F270 (SepNotifyFileSystems.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14094BE84 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x14094C7D0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14094CFC4 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14094D59C (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x14094E6C0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14094E850 (NtDeleteDriverEntry.c)
 *     NtEnumerateBootEntries @ 0x14094E9E0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x14094F030 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x14094F4F0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x14094F6F0 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x14094F810 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x14094FA90 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x14094FD90 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x140950010 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409500C0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1409503E0 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1409505F0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x140950800 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x140950A10 (NtSetSystemEnvironmentValue.c)
 *     KeInitSystem @ 0x140A3F138 (KeInitSystem.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x140359D60 (ExpAcquireFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v2; // rdi
  __int64 v4; // rax
  char v5; // cl
  int SessionId; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // zf
  unsigned __int8 AbOrphanedEntrySummary; // di

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)FastMutex, KeGetCurrentIrql(), 0LL);
  LOBYTE(v4) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v4 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, FastMutex);
      goto LABEL_20;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v4) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v5 = v4;
  _BitScanForward((unsigned int *)&v4, (unsigned __int8)v4);
  CurrentThread->AbEntrySummary = v5 & ~(1 << v4);
  v2 = (__int64)&CurrentThread->LockEntries[v4];
  if ( !v2 )
  {
LABEL_20:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( (unsigned __int64)FastMutex >= 0xFFFF800000000000uLL
    && byte_140C4F908[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v2 + 40) = SessionId;
  *(_QWORD *)(v2 + 32) = (unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v8, v7, v9, v10);
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  FastMutex->Owner = CurrentThread;
}

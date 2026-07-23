/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x1402AB110
 * Callers:
 *     FsRtlCancelNotify @ 0x140228890 (FsRtlCancelNotify.c)
 *     FsRtlUninitializeOplock @ 0x14022D260 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1402AA120 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx2 @ 0x14035EA70 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x14035F6A0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374620 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039321C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x1403B5880 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1404F0230 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x1404F03D0 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404F0444 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1405CD900 (FsRtlCheckOplockForFsFilterCallback.c)
 *     CmpCleanupLightWeightTransaction @ 0x1405DEB10 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1405DEE34 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1405DF198 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpRunDownCmRM @ 0x1405E0E80 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x1405E11C0 (CmKtmNotification.c)
 *     CmSnapshotRMTxArray @ 0x1405E1668 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x1405E1724 (CmpIsCmRm.c)
 *     FsRtlNotifyFilterReportChange @ 0x1405EF9C0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1405F02F0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1405F0650 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCleanup @ 0x1405F0DD0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1405F0E60 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlOplockBreakH @ 0x140617A40 (FsRtlOplockBreakH.c)
 *     CmRmFinalizeRecovery @ 0x14061E72C (CmRmFinalizeRecovery.c)
 *     CmNotifyRunDown @ 0x140641570 (CmNotifyRunDown.c)
 *     LOCK_POST_LIST @ 0x14065B1B4 (LOCK_POST_LIST.c)
 *     LOCK_TRANSACTION_LIST @ 0x1406643BC (LOCK_TRANSACTION_LIST.c)
 *     LOCK_CM_RM_LIST @ 0x1406C4E5C (LOCK_CM_RM_LIST.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1406D98D0 (FsRtlpOplockFsctrlInternal.c)
 *     CmpNotifyTriggerCheck @ 0x1406DC7A4 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x1406DC820 (CmpPostNotify.c)
 *     CmpTransSearchAddTrans @ 0x140766FEC (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x14076727C (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x140770644 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x1407707A4 (CmpLogCheckpoint.c)
 *     CmpTransMgrRollback @ 0x140771250 (CmpTransMgrRollback.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x1407D1100 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     CmObliterateRMTxArray @ 0x140872B74 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x140872C90 (CmpLazyCommitWorker.c)
 *     FsRtlCheckUpperOplock @ 0x14088BA10 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14088BFBC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14088C0F8 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x14088D6A0 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x1408BB920 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1409235E0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x140923680 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x140923750 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x140923C70 (SepNotifyFileSystems.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140950984 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x1409512D0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x140951AC4 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14095209C (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1409531C0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x140953350 (NtDeleteDriverEntry.c)
 *     NtEnumerateBootEntries @ 0x1409534E0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140953B30 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140953FF0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x1409541F0 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x140954310 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x140954590 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x140954890 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x140954B10 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x140954BC0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x140954EE0 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1409550F0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x140955300 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x140955510 (NtSetSystemEnvironmentValue.c)
 *     KeInitSystem @ 0x140A4D33C (KeInitSystem.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1402FD910 (ExpAcquireFastMutexContended.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
    && byte_140C4FA08[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
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
  if ( v11 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v8, v7, v9, v10);
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, (PRTL_BALANCED_NODE)v2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  FastMutex->Owner = CurrentThread;
}

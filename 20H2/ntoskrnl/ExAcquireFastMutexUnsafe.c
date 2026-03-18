/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x140209A50
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140208D40 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx2 @ 0x14020C800 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x14020D430 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlCancelNotify @ 0x14030C1F0 (FsRtlCancelNotify.c)
 *     FsRtlUninitializeOplock @ 0x14030EBE0 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374940 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140392C5C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x1403B4090 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1404EE710 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x1404EE8B0 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404EE924 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405F20C0 (FsRtlpOplockFsctrlInternal.c)
 *     CmpNotifyTriggerCheck @ 0x1405F3C08 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x1405F3C84 (CmpPostNotify.c)
 *     LOCK_POST_LIST @ 0x1405F7868 (LOCK_POST_LIST.c)
 *     CmNotifyRunDown @ 0x1406836AC (CmNotifyRunDown.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406A1210 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406A1534 (CmpTransSearchAddLightWeightTrans.c)
 *     LOCK_TRANSACTION_LIST @ 0x1406A1CA0 (LOCK_TRANSACTION_LIST.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1406A1DE4 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpRunDownCmRM @ 0x1406A3B00 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x1406A3E40 (CmKtmNotification.c)
 *     CmSnapshotRMTxArray @ 0x1406A4154 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x1406A4210 (CmpIsCmRm.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406B7570 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406B7ED0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406B8230 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCleanup @ 0x1406B89C0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406B8A50 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlOplockBreakH @ 0x1406BA9F0 (FsRtlOplockBreakH.c)
 *     CmRmFinalizeRecovery @ 0x1406DF7BC (CmRmFinalizeRecovery.c)
 *     LOCK_CM_RM_LIST @ 0x140711A1C (LOCK_CM_RM_LIST.c)
 *     CmpTransSearchAddTrans @ 0x14076383C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x140763ACC (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x14076C168 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x14076C2C8 (CmpLogCheckpoint.c)
 *     CmpTransMgrRollback @ 0x14076CD70 (CmpTransMgrRollback.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x1407CCCE0 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     CmpLazyCommitWorker @ 0x1408751D0 (CmpLazyCommitWorker.c)
 *     CmpQueueLazyCommitWorker @ 0x140875440 (CmpQueueLazyCommitWorker.c)
 *     FsRtlCheckUpperOplock @ 0x14088E310 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14088E8BC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14088E9F8 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x14088FFA0 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x1408BE2E0 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x140925CB0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x140925D50 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x140925E20 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x140926340 (SepNotifyFileSystems.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140952FE4 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x140953930 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x140954124 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409546FC (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x140955820 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1409559B0 (NtDeleteDriverEntry.c)
 *     NtEnumerateBootEntries @ 0x140955B40 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140956190 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140956650 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x140956850 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x140956970 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x140956BF0 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x140956EF0 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x140957170 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x140957220 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x140957540 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x140957750 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x140957960 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x140957B70 (NtSetSystemEnvironmentValue.c)
 *     KeInitSystem @ 0x140A4ABFC (KeInitSystem.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExpAcquireFastMutexContended @ 0x140241B40 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F74E8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v2; // rdi
  __int64 v4; // rax
  char v5; // cl
  int SessionId; // eax
  bool v7; // zf
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
    && byte_140C4F848[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
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
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  FastMutex->Owner = CurrentThread;
}

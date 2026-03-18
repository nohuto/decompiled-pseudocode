/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x140202D60
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x140291210 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x140291E40 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpRequestShareableOplock @ 0x140296DF0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCancelNotify @ 0x1403399D0 (FsRtlCancelNotify.c)
 *     FsRtlUninitializeOplock @ 0x14033BF60 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403740A0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039079C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x1403B1720 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1404EAE80 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x1404EB020 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404EB094 (FsRtlpAcknowledgeOplockBreak.c)
 *     LOCK_POST_LIST @ 0x1405E21BC (LOCK_POST_LIST.c)
 *     CmpNotifyTriggerCheck @ 0x1405E530C (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x1405E5388 (CmpPostNotify.c)
 *     LOCK_TRANSACTION_LIST @ 0x140643240 (LOCK_TRANSACTION_LIST.c)
 *     CmpRunDownCmRM @ 0x140652EF0 (CmpRunDownCmRM.c)
 *     CmpCleanupLightWeightTransaction @ 0x140653428 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x140653754 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140653A5C (CmpCommitPreparedLightWeightTransaction.c)
 *     CmKtmNotification @ 0x140653D20 (CmKtmNotification.c)
 *     CmSnapshotRMTxArray @ 0x140654034 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x1406545C0 (CmpIsCmRm.c)
 *     LOCK_CM_RM_LIST @ 0x140655AB8 (LOCK_CM_RM_LIST.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140689350 (FsRtlpOplockFsctrlInternal.c)
 *     CmNotifyRunDown @ 0x1406B0DF0 (CmNotifyRunDown.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406DFC20 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406E0580 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406E08E0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCleanup @ 0x1406E1070 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406E1100 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlOplockBreakH @ 0x1406E3E40 (FsRtlOplockBreakH.c)
 *     CmRmFinalizeRecovery @ 0x14070D38C (CmRmFinalizeRecovery.c)
 *     CmpTransSearchAddTrans @ 0x140754BFC (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x140754E8C (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x14075DB00 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x14075DC60 (CmpLogCheckpoint.c)
 *     CmpTransMgrRollback @ 0x14075E700 (CmpTransMgrRollback.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x1407BE450 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     CmpLazyCommitWorker @ 0x14086F680 (CmpLazyCommitWorker.c)
 *     CmpQueueLazyCommitWorker @ 0x14086F8F0 (CmpQueueLazyCommitWorker.c)
 *     FsRtlCheckUpperOplock @ 0x1408887C0 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x140888D6C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x140888EA8 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x14088A450 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x1408B86C0 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x14091FE90 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x14091FF30 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x140920000 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x140920520 (SepNotifyFileSystems.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14094D224 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x14094DB70 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14094E364 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14094E93C (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x14094FA60 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14094FBF0 (NtDeleteDriverEntry.c)
 *     NtEnumerateBootEntries @ 0x14094FD80 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1409503D0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140950890 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x140950A90 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x140950BB0 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x140950E30 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x140951130 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1409513B0 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x140951460 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x140951780 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x140951990 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x140951BA0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x140951DB0 (NtSetSystemEnvironmentValue.c)
 *     KeInitSystem @ 0x140A4495C (KeInitSystem.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1402740C0 (ExpAcquireFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
    && byte_140C4F7C8[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
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

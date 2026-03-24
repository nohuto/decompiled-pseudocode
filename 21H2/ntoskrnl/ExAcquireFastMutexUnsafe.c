/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x1402067E0
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1402057F0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCancelNotify @ 0x1402AA750 (FsRtlCancelNotify.c)
 *     FsRtlUninitializeOplock @ 0x1402AEF00 (FsRtlUninitializeOplock.c)
 *     FsRtlCheckOplockEx2 @ 0x140353D20 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x140354950 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374AD0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403930CC (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x1403B5710 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1404F02B0 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x1404F0450 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404F04C4 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1405CD900 (FsRtlCheckOplockForFsFilterCallback.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405EA170 (FsRtlpOplockFsctrlInternal.c)
 *     CmpNotifyTriggerCheck @ 0x1405ED044 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x1405ED0C0 (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x14064C750 (CmNotifyRunDown.c)
 *     LOCK_POST_LIST @ 0x140666394 (LOCK_POST_LIST.c)
 *     FsRtlNotifyFilterReportChange @ 0x14068FB50 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140690480 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406907E0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCleanup @ 0x140690F60 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140690FF0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406A2E10 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406A3134 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1406A3444 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmKtmNotification @ 0x1406A36F0 (CmKtmNotification.c)
 *     CmSnapshotRMTxArray @ 0x1406A3B98 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x1406A3C54 (CmpIsCmRm.c)
 *     FsRtlOplockBreakH @ 0x1406B8620 (FsRtlOplockBreakH.c)
 *     CmpRunDownCmRM @ 0x1406BB4A0 (CmpRunDownCmRM.c)
 *     CmRmFinalizeRecovery @ 0x1406BF8BC (CmRmFinalizeRecovery.c)
 *     LOCK_CM_RM_LIST @ 0x14071680C (LOCK_CM_RM_LIST.c)
 *     LOCK_TRANSACTION_LIST @ 0x14071D920 (LOCK_TRANSACTION_LIST.c)
 *     CmpTransSearchAddTrans @ 0x140766E2C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1407670BC (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x140770484 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x1407705E4 (CmpLogCheckpoint.c)
 *     CmpTransMgrRollback @ 0x140771090 (CmpTransMgrRollback.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x1407D0F90 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     CmObliterateRMTxArray @ 0x140872A14 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x140872B30 (CmpLazyCommitWorker.c)
 *     FsRtlCheckUpperOplock @ 0x14088B8B0 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14088BE5C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14088BF98 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x14088D540 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x1408BB7C0 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x140923480 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x140923520 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1409235F0 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x140923B10 (SepNotifyFileSystems.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1409507B4 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x140951100 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409518F4 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x140951ECC (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x140952FF0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x140953180 (NtDeleteDriverEntry.c)
 *     NtEnumerateBootEntries @ 0x140953310 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140953960 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140953E20 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x140954020 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x140954140 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x1409543C0 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x1409546C0 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x140954940 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409549F0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x140954D10 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x140954F20 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x140955130 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x140955340 (NtSetSystemEnvironmentValue.c)
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1402F2BC0 (ExpAcquireFastMutexContended.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
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
    && byte_140C4F9C8[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
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
  if ( v7 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  FastMutex->Owner = CurrentThread;
}

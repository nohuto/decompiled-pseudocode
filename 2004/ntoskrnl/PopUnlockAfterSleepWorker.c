/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140995F50
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x14033CED0 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x14034B7D0 (MmUnlockPagableImageSection.c)
 *     PopRunNormalIrpWorkers @ 0x14038B424 (PopRunNormalIrpWorkers.c)
 *     RtlBootStatusDisableFlushing @ 0x1403A4D40 (RtlBootStatusDisableFlushing.c)
 *     PopClearHibernateDiagnosticInfo @ 0x140711744 (PopClearHibernateDiagnosticInfo.c)
 *     PopClearShutdownMarker @ 0x1407117D4 (PopClearShutdownMarker.c)
 *     PopAdjustHiberFile @ 0x140767690 (PopAdjustHiberFile.c)
 *     PopFreeHiberContext @ 0x140767A78 (PopFreeHiberContext.c)
 *     PopClearSystemShutdownMarker @ 0x140767CE0 (PopClearSystemShutdownMarker.c)
 *     PopClearSystemSleepCheckpoint @ 0x140767D20 (PopClearSystemSleepCheckpoint.c)
 *     PopClearSleepMarker @ 0x140767D64 (PopClearSleepMarker.c)
 *     PopClearTransitionCheckpoints @ 0x140767DA8 (PopClearTransitionCheckpoints.c)
 *     ExSwapinWorkerThreads @ 0x140767E14 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x14076801C (CmSetLazyFlushState.c)
 *     PopReleaseTransitionLock @ 0x14077B6F4 (PopReleaseTransitionLock.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

LONG PopUnlockAfterSleepWorker()
{
  UNICODE_STRING *v0; // rcx
  __int64 v1; // rcx

  qword_140C23000 = (__int64)KeGetCurrentThread();
  CmSetLazyFlushState(1);
  ExSwapinWorkerThreads(1u);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
  PopRunNormalIrpWorkers();
  MmUnlockPagableImageSection(ExPageLockHandle);
  RtlBootStatusDisableFlushing(0);
  PopClearTransitionCheckpoints();
  PopClearSleepMarker();
  PopClearSystemSleepCheckpoint(0);
  PopClearShutdownMarker();
  PopClearSystemShutdownMarker();
  PopFreeHiberContext(v0);
  PopAcquirePolicyLock();
  if ( BYTE8(PopCapabilities) )
    PopAdjustHiberFile(v1);
  PopClearHibernateDiagnosticInfo();
  PopReleasePolicyLock();
  qword_140C23000 = 0LL;
  return PopReleaseTransitionLock(1);
}

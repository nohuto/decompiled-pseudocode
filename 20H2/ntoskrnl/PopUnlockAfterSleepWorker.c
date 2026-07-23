/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140999090
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x14030FBB0 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x14031C790 (MmUnlockPagableImageSection.c)
 *     PopRunNormalIrpWorkers @ 0x140386668 (PopRunNormalIrpWorkers.c)
 *     RtlBootStatusDisableFlushing @ 0x1403A7140 (RtlBootStatusDisableFlushing.c)
 *     PopClearHibernateDiagnosticInfo @ 0x1406E428C (PopClearHibernateDiagnosticInfo.c)
 *     PopClearShutdownMarker @ 0x1406E431C (PopClearShutdownMarker.c)
 *     PopAdjustHiberFile @ 0x140772D68 (PopAdjustHiberFile.c)
 *     PopFreeHiberContext @ 0x140773150 (PopFreeHiberContext.c)
 *     PopClearSystemShutdownMarker @ 0x1407733B0 (PopClearSystemShutdownMarker.c)
 *     PopClearSystemSleepCheckpoint @ 0x1407733F0 (PopClearSystemSleepCheckpoint.c)
 *     PopClearSleepMarker @ 0x140773434 (PopClearSleepMarker.c)
 *     PopClearTransitionCheckpoints @ 0x140773478 (PopClearTransitionCheckpoints.c)
 *     ExSwapinWorkerThreads @ 0x1407734E4 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x1407736EC (CmSetLazyFlushState.c)
 *     PopReleaseTransitionLock @ 0x140789CF4 (PopReleaseTransitionLock.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 */

LONG PopUnlockAfterSleepWorker()
{
  UNICODE_STRING *v0; // rcx
  __int64 v1; // rcx

  qword_140C234C0 = (__int64)KeGetCurrentThread();
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
  qword_140C234C0 = 0LL;
  return PopReleaseTransitionLock(1);
}

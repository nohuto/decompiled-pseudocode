/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x14098CC40
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x1403005D0 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x14030E2F0 (MmUnlockPagableImageSection.c)
 *     PopRunNormalIrpWorkers @ 0x14037FBBC (PopRunNormalIrpWorkers.c)
 *     RtlBootStatusDisableFlushing @ 0x1403A45C0 (RtlBootStatusDisableFlushing.c)
 *     PopClearHibernateDiagnosticInfo @ 0x1406EDDB4 (PopClearHibernateDiagnosticInfo.c)
 *     PopClearShutdownMarker @ 0x1406EDE44 (PopClearShutdownMarker.c)
 *     PopAdjustHiberFile @ 0x14075F598 (PopAdjustHiberFile.c)
 *     PopFreeHiberContext @ 0x14075F980 (PopFreeHiberContext.c)
 *     PopClearSystemShutdownMarker @ 0x14075FBE0 (PopClearSystemShutdownMarker.c)
 *     PopClearSystemSleepCheckpoint @ 0x14075FC20 (PopClearSystemSleepCheckpoint.c)
 *     PopClearSleepMarker @ 0x14075FC64 (PopClearSleepMarker.c)
 *     PopClearTransitionCheckpoints @ 0x14075FCA8 (PopClearTransitionCheckpoints.c)
 *     ExSwapinWorkerThreads @ 0x14075FD14 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x14075FF1C (CmSetLazyFlushState.c)
 *     PopReleaseTransitionLock @ 0x1407792E4 (PopReleaseTransitionLock.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

LONG PopUnlockAfterSleepWorker()
{
  UNICODE_STRING *v0; // rcx
  __int64 v1; // rcx

  qword_140C235C0 = (__int64)KeGetCurrentThread();
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
  qword_140C235C0 = 0LL;
  return PopReleaseTransitionLock(1);
}

/*
 * XREFs of PopCurrentPowerState @ 0x1406F8A3C
 * Callers:
 *     PopUpdateAcDcState @ 0x14039955C (PopUpdateAcDcState.c)
 *     PopEsUpdateState @ 0x14039A498 (PopEsUpdateState.c)
 *     PopCalculateCsSummary @ 0x14056E490 (PopCalculateCsSummary.c)
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PopDiagTraceControlCallback @ 0x14071C0D0 (PopDiagTraceControlCallback.c)
 *     PopEsEnterSleepShutdown @ 0x14077522C (PopEsEnterSleepShutdown.c)
 *     PopCurrentPowerStatePrecise @ 0x14078A674 (PopCurrentPowerStatePrecise.c)
 *     PopEsStartTelemetry @ 0x14078A9A4 (PopEsStartTelemetry.c)
 *     PopTransitionTelemetryOsState @ 0x140794320 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C23790, 0LL);
  *a1 = xmmword_140C237A0;
  a1[1] = xmmword_140C237B0;
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C23790);
}

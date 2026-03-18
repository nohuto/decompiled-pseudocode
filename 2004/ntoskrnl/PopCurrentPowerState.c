/*
 * XREFs of PopCurrentPowerState @ 0x14064B18C
 * Callers:
 *     PopUpdateAcDcState @ 0x1403970DC (PopUpdateAcDcState.c)
 *     PopEsUpdateState @ 0x140398018 (PopEsUpdateState.c)
 *     PopCalculateCsSummary @ 0x14056AA60 (PopCalculateCsSummary.c)
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     PopDiagTraceControlCallback @ 0x14064EB10 (PopDiagTraceControlCallback.c)
 *     PopEsEnterSleepShutdown @ 0x1407661FC (PopEsEnterSleepShutdown.c)
 *     PopCurrentPowerStatePrecise @ 0x14077C074 (PopCurrentPowerStatePrecise.c)
 *     PopEsStartTelemetry @ 0x14077C3A4 (PopEsStartTelemetry.c)
 *     PopTransitionTelemetryOsState @ 0x140786610 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C232D0, 0LL);
  *a1 = xmmword_140C232E0;
  a1[1] = xmmword_140C232F0;
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C232D0);
}

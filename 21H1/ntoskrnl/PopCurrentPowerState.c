/*
 * XREFs of PopCurrentPowerState @ 0x14070C77C
 * Callers:
 *     PopUpdateAcDcState @ 0x1403964CC (PopUpdateAcDcState.c)
 *     PopEsUpdateState @ 0x140397408 (PopEsUpdateState.c)
 *     PopCalculateCsSummary @ 0x14056A410 (PopCalculateCsSummary.c)
 *     PopDiagTraceControlCallback @ 0x1406FF180 (PopDiagTraceControlCallback.c)
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PopEsEnterSleepShutdown @ 0x140764848 (PopEsEnterSleepShutdown.c)
 *     PopCurrentPowerStatePrecise @ 0x140779C64 (PopCurrentPowerStatePrecise.c)
 *     PopEsStartTelemetry @ 0x140779F94 (PopEsStartTelemetry.c)
 *     PopTransitionTelemetryOsState @ 0x140780F84 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C23890, 0LL);
  *a1 = xmmword_140C238A0;
  a1[1] = xmmword_140C238B0;
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C23890);
}

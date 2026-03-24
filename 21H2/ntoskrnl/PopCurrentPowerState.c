/*
 * XREFs of PopCurrentPowerState @ 0x140678D9C
 * Callers:
 *     PopUpdateAcDcState @ 0x1403999CC (PopUpdateAcDcState.c)
 *     PopEsUpdateState @ 0x14039A908 (PopEsUpdateState.c)
 *     PopCalculateCsSummary @ 0x14056FEA0 (PopCalculateCsSummary.c)
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 *     PopDiagTraceControlCallback @ 0x14067D270 (PopDiagTraceControlCallback.c)
 *     PopEsEnterSleepShutdown @ 0x1407791DC (PopEsEnterSleepShutdown.c)
 *     PopCurrentPowerStatePrecise @ 0x14078E444 (PopCurrentPowerStatePrecise.c)
 *     PopEsStartTelemetry @ 0x14078E774 (PopEsStartTelemetry.c)
 *     PopTransitionTelemetryOsState @ 0x140798A44 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C237F0, 0LL);
  *a1 = xmmword_140C23800;
  a1[1] = xmmword_140C23810;
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C237F0);
}

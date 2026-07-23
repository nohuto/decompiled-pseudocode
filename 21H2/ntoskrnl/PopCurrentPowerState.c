/*
 * XREFs of PopCurrentPowerState @ 0x14066C4DC
 * Callers:
 *     PopUpdateAcDcState @ 0x140399B1C (PopUpdateAcDcState.c)
 *     PopEsUpdateState @ 0x14039AA58 (PopEsUpdateState.c)
 *     PopCalculateCsSummary @ 0x1405700E0 (PopCalculateCsSummary.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     PopDiagTraceControlCallback @ 0x140671060 (PopDiagTraceControlCallback.c)
 *     PopEsEnterSleepShutdown @ 0x14077939C (PopEsEnterSleepShutdown.c)
 *     PopCurrentPowerStatePrecise @ 0x14078E604 (PopCurrentPowerStatePrecise.c)
 *     PopEsStartTelemetry @ 0x14078E934 (PopEsStartTelemetry.c)
 *     PopTransitionTelemetryOsState @ 0x140798C44 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C23E10, 0LL);
  *a1 = xmmword_140C23E20;
  a1[1] = xmmword_140C23E30;
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C23E10);
}

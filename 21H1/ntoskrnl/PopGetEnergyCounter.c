/*
 * XREFs of PopGetEnergyCounter @ 0x1408E95E0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056AAC8 (PopCaptureSleepStudyStatistics.c)
 *     PopMeasureEnergyChange @ 0x1408E962C (PopMeasureEnergyChange.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1408F59C4 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopGetEnergyCounter(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C23890, 0LL);
  *a1 = xmmword_140C238C0;
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C23890);
}

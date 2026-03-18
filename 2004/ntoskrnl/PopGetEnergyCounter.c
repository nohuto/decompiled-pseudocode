/*
 * XREFs of PopGetEnergyCounter @ 0x1408EA860
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056B118 (PopCaptureSleepStudyStatistics.c)
 *     PopMeasureEnergyChange @ 0x1408EA8AC (PopMeasureEnergyChange.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1408F6CB4 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 */

void __fastcall PopGetEnergyCounter(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C232D0, 0LL);
  *a1 = xmmword_140C23300;
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C232D0);
}

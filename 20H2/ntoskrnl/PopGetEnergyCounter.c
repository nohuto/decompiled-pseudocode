/*
 * XREFs of PopGetEnergyCounter @ 0x1408F0470
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056EB48 (PopCaptureSleepStudyStatistics.c)
 *     PopMeasureEnergyChange @ 0x1408F04BC (PopMeasureEnergyChange.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1408FC8C4 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 */

void __fastcall PopGetEnergyCounter(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C23790, 0LL);
  *a1 = xmmword_140C237C0;
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C23790);
}

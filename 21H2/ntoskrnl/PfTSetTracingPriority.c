/*
 * XREFs of PfTSetTracingPriority @ 0x140A6AD80
 * Callers:
 *     PfpLogEventRequest @ 0x140986E88 (PfpLogEventRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MmSetAccessLogging @ 0x140376830 (MmSetAccessLogging.c)
 */

void __fastcall PfTSetTracingPriority(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E970, 0LL);
  MmSetAccessLogging(dword_140C4E96C == 0, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E970, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4E970);
  KeAbPostRelease((ULONG_PTR)&qword_140C4E970);
  KeLeaveCriticalRegion();
}

/*
 * XREFs of PfTSetTracingPriority @ 0x1409AD15C
 * Callers:
 *     PfpLogEventRequest @ 0x1407627EC (PfpLogEventRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MmSetAccessLogging @ 0x14037DB24 (MmSetAccessLogging.c)
 */

void __fastcall PfTSetTracingPriority(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4FB10, 0LL);
  MmSetAccessLogging(dword_140C4FB0C == 0, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4FB10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4FB10);
  KeAbPostRelease((ULONG_PTR)&qword_140C4FB10);
  KeLeaveCriticalRegion();
}

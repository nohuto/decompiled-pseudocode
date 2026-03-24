/*
 * XREFs of PfTSetTracingPriority @ 0x1409B0E2C
 * Callers:
 *     PfpLogEventRequest @ 0x14077668C (PfpLogEventRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     MmSetAccessLogging @ 0x140380B54 (MmSetAccessLogging.c)
 */

void __fastcall PfTSetTracingPriority(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4FBD0, 0LL);
  MmSetAccessLogging(dword_140C4FBCC == 0, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4FBD0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4FBD0);
  KeAbPostRelease((ULONG_PTR)&qword_140C4FBD0);
  KeLeaveCriticalRegion();
}

/*
 * XREFs of ExReferenceHandleDebugInfo @ 0x1409F91B8
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     ExpUpdateDebugInfo @ 0x1409F92FC (ExpUpdateDebugInfo.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

volatile signed __int32 *__fastcall ExReferenceHandleDebugInfo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v3; // rsi
  volatile signed __int32 *v4; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (volatile signed __int64 *)(a1 + 56);
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v4 = *(volatile signed __int32 **)(a1 + 96);
  if ( v4 )
    _InterlockedIncrement(v4);
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v4;
}

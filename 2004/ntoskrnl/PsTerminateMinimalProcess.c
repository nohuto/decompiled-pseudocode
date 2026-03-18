/*
 * XREFs of PsTerminateMinimalProcess @ 0x14090793C
 * Callers:
 *     PspTeardownPartition @ 0x140909CC0 (PspTeardownPartition.c)
 *     VmTerminateMemoryProcess @ 0x14092BC50 (VmTerminateMemoryProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PspRundownSingleProcess @ 0x14065C39C (PspRundownSingleProcess.c)
 */

bool __fastcall PsTerminateMinimalProcess(_DWORD *BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v5; // ebp
  volatile signed __int64 *v6; // rsi
  signed __int32 v7; // r14d
  bool result; // al

  CurrentThread = KeGetCurrentThread();
  v5 = 8;
  --CurrentThread->KernelApcDisable;
  v6 = (volatile signed __int64 *)(BugCheckParameter1 + 270);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(BugCheckParameter1 + 270), 0LL);
  if ( !BugCheckParameter1[380] )
  {
    v5 = 33554440;
    if ( BugCheckParameter1[501] == 259 )
      BugCheckParameter1[501] = a2;
  }
  _m_prefetchw(BugCheckParameter1 + 281);
  v7 = _InterlockedOr(BugCheckParameter1 + 281, v5);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  result = (v5 & 0x2000000) != 0;
  if ( (v7 & 0x2000000) == 0 && result )
    return PspRundownSingleProcess((__int64)BugCheckParameter1, 1);
  return result;
}

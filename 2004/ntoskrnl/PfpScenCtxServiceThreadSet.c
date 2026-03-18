/*
 * XREFs of PfpScenCtxServiceThreadSet @ 0x14099DFCC
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406A9D30 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PsGetThreadId @ 0x140342160 (PsGetThreadId.c)
 */

_QWORD *__fastcall PfpScenCtxServiceThreadSet(ULONG_PTR BugCheckParameter2, int a2)
{
  HANDLE v2; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  HANDLE ThreadId; // rax
  __int64 v6; // rbx
  struct _KTHREAD *v7; // rax
  char v8; // bp

  v2 = 0LL;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadId = PsGetThreadId(CurrentThread);
    v6 = *(_QWORD *)&CurrentThread[1].Header.Lock;
    v2 = ThreadId;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  *(_QWORD *)(BugCheckParameter2 + 72) = v2;
  *(_QWORD *)(BugCheckParameter2 + 80) = v6;
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

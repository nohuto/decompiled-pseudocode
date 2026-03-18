/*
 * XREFs of PfpScenCtxServiceThreadSet @ 0x14099C82C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1405D0D98 (PfSetSuperfetchInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     PsGetThreadId @ 0x140304680 (PsGetThreadId.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall PfpScenCtxServiceThreadSet(ULONG_PTR BugCheckParameter2, int a2)
{
  HANDLE v2; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  HANDLE ThreadId; // rax
  __int64 v6; // rbx
  struct _KTHREAD *v7; // rax
  char v8; // bp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

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
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
}

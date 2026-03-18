/*
 * XREFs of PfpScenCtxPrefetchAbortSet @ 0x140995D5C
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406D0DA8 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PfpScenCtxPrefetchAbortSet(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, int a4, int a5)
{
  bool v9; // zf
  unsigned int v10; // esi
  struct _KTHREAD *CurrentThread; // rax

  if ( !a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 48) != a2 )
  {
    v10 = -1073741735;
    goto LABEL_8;
  }
  v9 = a4 == 0;
  if ( !a4 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
    {
      v10 = -1073741431;
      goto LABEL_8;
    }
    v9 = 1;
  }
  if ( !v9 )
    a3 = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 40) = a3;
  v10 = 0;
LABEL_8:
  if ( !a5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
  return v10;
}

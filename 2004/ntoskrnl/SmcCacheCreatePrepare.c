/*
 * XREFs of SmcCacheCreatePrepare @ 0x14092711C
 * Callers:
 *     SmcProcessCreateRequest @ 0x1409271E8 (SmcProcessCreateRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     SmRegistrationCtxStart @ 0x1407BEC9C (SmRegistrationCtxStart.c)
 *     SmcCacheManagerStart @ 0x140929F4C (SmcCacheManagerStart.c)
 */

__int64 __fastcall SmcCacheCreatePrepare(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // edi

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
  if ( (dword_140D24140 & 8) == 0 )
  {
    v2 = SmRegistrationCtxStart((struct _DMA_ADAPTER **)&qword_140D243F0);
    if ( v2 >= 0 )
      dword_140D24140 |= 8u;
  }
  if ( (dword_140D24140 & 4) == 0 && (dword_140D24140 & 8) != 0 )
  {
    v2 = SmcCacheManagerStart(a1, qword_140D243F0);
    if ( v2 >= 0 )
      dword_140D24140 |= 4u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)&BugCheckParameter2);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}

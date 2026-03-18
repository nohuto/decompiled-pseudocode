/*
 * XREFs of PspRemoveEnclaveThreadWait @ 0x14090B114
 * Callers:
 *     PsCallEnclave @ 0x140909E00 (PsCallEnclave.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspRemoveEnclaveThreadWait(__int64 a1, __int64 *a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v6; // rsi
  __int64 v7; // rcx
  __int64 **v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (volatile signed __int64 *)(a1 + 112);
  ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
  v7 = *a2;
  if ( *a2 )
  {
    if ( *(__int64 **)(v7 + 8) != a2 || (v8 = (__int64 **)a2[1], *v8 != a2) )
      __fastfail(3u);
    *v8 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v8;
  }
  else
  {
    a3 = *((_DWORD *)a2 + 10);
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return a3;
}

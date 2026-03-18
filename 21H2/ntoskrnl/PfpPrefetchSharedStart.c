/*
 * XREFs of PfpPrefetchSharedStart @ 0x1406AF0D4
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406AE11C (PfpPrefetchRequestPerform.c)
 *     PfSnAsyncPrefetchWorker @ 0x1407DC0D0 (PfSnAsyncPrefetchWorker.c)
 *     PfpQueryFileExtentsRequest @ 0x1409876B8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PsSetCurrentThreadPrefetching @ 0x1407DF730 (PsSetCurrentThreadPrefetching.c)
 */

__int64 __fastcall PfpPrefetchSharedStart(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  struct _KTHREAD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *(_DWORD *)(a1 + 68) |= 8u;
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 68) ^= (*(_DWORD *)(a1 + 68) ^ (2 * PsSetCurrentThreadPrefetching(1u))) & 2;
  v3 = 0;
  if ( !ExAcquireRundownProtection(&stru_140C54640) )
    return (unsigned int)-1073741127;
  *(_DWORD *)(a1 + 68) |= 1u;
  v4 = KeGetCurrentThread();
  --v4->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54650, 0LL);
  if ( (dword_140C54668 & 1) == 0 )
  {
    v5 = qword_140C54658;
    if ( *(__int64 **)(qword_140C54658 + 8) != &qword_140C54658 )
      __fastfail(3u);
    *(_QWORD *)a1 = qword_140C54658;
    *(_QWORD *)(a1 + 8) = &qword_140C54658;
    *(_QWORD *)(v5 + 8) = a1;
    qword_140C54658 = a1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54650, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C54650);
  KeAbPostRelease((ULONG_PTR)&qword_140C54650);
  KeLeaveCriticalRegion();
  if ( *(_QWORD *)a1 )
  {
    v6 = KeAbPreAcquire(a1, 0LL);
    *(_QWORD *)(a1 + 128) = v6;
    if ( v6 )
      *(_BYTE *)(v6 + 18) = 1;
    v7 = KeAbPreAcquire((__int64)&PfGlobals, 0LL);
    *(_QWORD *)(a1 + 136) = v7;
    if ( v7 )
      *(_BYTE *)(v7 + 18) = 1;
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return v3;
}

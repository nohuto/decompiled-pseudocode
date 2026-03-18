/*
 * XREFs of PfpPrefetchSharedCleanup @ 0x1406AE49C
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406AE11C (PfpPrefetchRequestPerform.c)
 *     PfSnCleanupPrefetchHeader @ 0x1407DFE00 (PfSnCleanupPrefetchHeader.c)
 *     PfpQueryFileExtentsRequest @ 0x1409876B8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PsSetCurrentThreadPrefetching @ 0x1407DF730 (PsSetCurrentThreadPrefetching.c)
 */

char __fastcall PfpPrefetchSharedCleanup(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax
  int v5; // eax

  if ( *(_QWORD *)(a1 + 128) )
    KeAbPostRelease(a1);
  if ( *(_QWORD *)(a1 + 136) )
    KeAbPostRelease((ULONG_PTR)&PfGlobals);
  if ( *(_QWORD *)a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54650, 0LL);
    v3 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v4 = *(_QWORD **)(a1 + 8), *v4 != a1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54650, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C54650);
    KeAbPostRelease((ULONG_PTR)&qword_140C54650);
    KeLeaveCriticalRegion();
  }
  v5 = *(_DWORD *)(a1 + 68);
  if ( (v5 & 1) != 0 )
  {
    ExReleaseRundownProtection(&stru_140C54640);
    *(_DWORD *)(a1 + 68) &= ~1u;
    v5 = *(_DWORD *)(a1 + 68);
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    PsSetCurrentThreadPrefetching((v5 & 2) != 0);
    v5 = *(_DWORD *)(a1 + 68);
  }
  if ( (v5 & 8) != 0 )
    LOBYTE(v5) = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}

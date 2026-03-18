/*
 * XREFs of PfpPrefetchSharedCleanup @ 0x1405D3178
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1405D2440 (PfpPrefetchRequestPerform.c)
 *     PfSnCleanupPrefetchHeader @ 0x14063A4A8 (PfSnCleanupPrefetchHeader.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DB39C (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     PsSetCurrentThreadPrefetching @ 0x140639F10 (PsSetCurrentThreadPrefetching.c)
 */

_QWORD *__fastcall PfpPrefetchSharedCleanup(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 128) )
    KeAbPostRelease(a1);
  if ( *(_QWORD *)(a1 + 136) )
    KeAbPostRelease((ULONG_PTR)&PfGlobals);
  if ( *(_QWORD *)a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50350, 0LL);
    v6 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v7 = *(_QWORD **)(a1 + 8), *v7 != a1) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50350, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C50350);
    KeAbPostRelease((ULONG_PTR)&qword_140C50350);
    KeLeaveCriticalRegion();
  }
  result = (_QWORD *)*(unsigned int *)(a1 + 68);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140C50340);
    *(_DWORD *)(a1 + 68) &= ~1u;
    result = (_QWORD *)*(unsigned int *)(a1 + 68);
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    PsSetCurrentThreadPrefetching(((unsigned __int8)result & 2) != 0);
    result = (_QWORD *)*(unsigned int *)(a1 + 68);
  }
  if ( ((unsigned __int8)result & 8) != 0 )
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), a2, a3, a4);
  return result;
}

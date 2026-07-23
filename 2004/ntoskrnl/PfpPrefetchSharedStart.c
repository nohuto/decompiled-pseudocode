/*
 * XREFs of PfpPrefetchSharedStart @ 0x1406D1D58
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1406BB750 (PfSnAsyncPrefetchWorker.c)
 *     PfpPrefetchRequestPerform @ 0x1406D0DA8 (PfpPrefetchRequestPerform.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DC70C (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     PsSetCurrentThreadPrefetching @ 0x140604ED0 (PsSetCurrentThreadPrefetching.c)
 */

__int64 __fastcall PfpPrefetchSharedStart(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  struct _KTHREAD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *(_DWORD *)(BugCheckParameter2 + 68) |= 8u;
  *(_QWORD *)(BugCheckParameter2 + 16) = KeGetCurrentThread();
  *(_DWORD *)(BugCheckParameter2 + 68) ^= (*(_DWORD *)(BugCheckParameter2 + 68) ^ (2 * PsSetCurrentThreadPrefetching(1u))) & 2;
  v3 = 0;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&stru_140C50200) )
    return (unsigned int)-1073741127;
  *(_DWORD *)(BugCheckParameter2 + 68) |= 1u;
  v4 = KeGetCurrentThread();
  --v4->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50210, 0LL);
  if ( (dword_140C50228 & 1) == 0 )
  {
    v5 = qword_140C50218;
    if ( *(__int64 **)(qword_140C50218 + 8) != &qword_140C50218 )
      __fastfail(3u);
    *(_QWORD *)BugCheckParameter2 = qword_140C50218;
    *(_QWORD *)(BugCheckParameter2 + 8) = &qword_140C50218;
    *(_QWORD *)(v5 + 8) = BugCheckParameter2;
    qword_140C50218 = BugCheckParameter2;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50210, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C50210);
  KeAbPostRelease((ULONG_PTR)&qword_140C50210);
  KeLeaveCriticalRegion();
  if ( *(_QWORD *)BugCheckParameter2 )
  {
    v6 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
    *(_QWORD *)(BugCheckParameter2 + 128) = v6;
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    v7 = KeAbPreAcquire((ULONG_PTR)&PfGlobals, 0LL, 0);
    *(_QWORD *)(BugCheckParameter2 + 136) = v7;
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return v3;
}

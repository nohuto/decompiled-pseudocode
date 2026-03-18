/*
 * XREFs of EtwpCoverageSamplerClose @ 0x140942CC0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     EtwpCoverageSamplerStop @ 0x140943EC8 (EtwpCoverageSamplerStop.c)
 */

void __fastcall EtwpCoverageSamplerClose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v5; // si
  int v7; // eax

  if ( a4 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
    qword_140C196C8 = (__int64)KeGetCurrentThread();
    v7 = *(_DWORD *)(a2 + 1216);
    if ( (v7 & 1) == 0 )
    {
      v5 = 1;
      *(_DWORD *)(a2 + 1216) = v7 | 1;
    }
    qword_140C196C8 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v5 )
      EtwpCoverageSamplerStop(a2);
  }
}

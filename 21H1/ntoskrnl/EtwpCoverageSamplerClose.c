/*
 * XREFs of EtwpCoverageSamplerClose @ 0x140941A40
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     EtwpCoverageSamplerStop @ 0x140942C54 (EtwpCoverageSamplerStop.c)
 */

void __fastcall EtwpCoverageSamplerClose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v5; // si
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  if ( a4 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
    qword_140C19848 = (__int64)KeGetCurrentThread();
    v7 = *(_DWORD *)(a2 + 1216);
    if ( (v7 & 1) == 0 )
    {
      v5 = 1;
      *(_DWORD *)(a2 + 1216) = v7 | 1;
    }
    qword_140C19848 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
    if ( v5 )
      EtwpCoverageSamplerStop(a2);
  }
}

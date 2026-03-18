/*
 * XREFs of EtwpCoverageSamplerUnloadImage @ 0x1409F3C74
 * Callers:
 *     PerfLogImageUnload @ 0x14079D948 (PerfLogImageUnload.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x14088394C (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampProcessRemoveModule @ 0x1409F1FF4 (EtwpCovSampProcessRemoveModule.c)
 */

void __fastcall EtwpCoverageSamplerUnloadImage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( (int)EtwpCovSampAcquireSamplerRundown(&v8) < 0 )
    goto LABEL_8;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    v6 = *(_QWORD *)(a1 + 2544);
    if ( !v6 )
      goto LABEL_8;
  }
  else
  {
    v6 = qword_140C15D78 + 752;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v6 + 8, 0LL);
  *(_QWORD *)(v6 + 16) = KeGetCurrentThread();
  EtwpCovSampProcessRemoveModule(v6, a2, a3);
  *(_QWORD *)(v6 + 16) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6 + 8);
  KeAbPostRelease(v6 + 8);
  KeLeaveCriticalRegion();
LABEL_8:
  if ( v8 )
  {
    ExReleaseRundownProtection(&stru_140C15D80);
    KeLeaveCriticalRegion();
  }
}

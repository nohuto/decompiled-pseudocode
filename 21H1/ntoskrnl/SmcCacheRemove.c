/*
 * XREFs of SmcCacheRemove @ 0x140928ED0
 * Callers:
 *     SmcCacheDelete @ 0x140928BC4 (SmcCacheDelete.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

struct _EX_RUNDOWN_REF __fastcall SmcCacheRemove(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF v3; // r14
  struct _EX_RUNDOWN_REF *v4; // rsi

  CurrentThread = KeGetCurrentThread();
  v3.Count = 0LL;
  v4 = (struct _EX_RUNDOWN_REF *)(a1 + 32LL * (a2 & 0xF));
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v4[2], 0LL);
  if ( a2 >> 4 == (v4[3].Count & 0xFFF) && v4->Count )
  {
    ExWaitForRundownProtectionRelease(v4 + 1);
    v3.Count = v4->Count;
    v4->Count = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v4[2], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&v4[2]);
  KeAbPostRelease((ULONG_PTR)&v4[2]);
  KeLeaveCriticalRegion();
  return v3;
}

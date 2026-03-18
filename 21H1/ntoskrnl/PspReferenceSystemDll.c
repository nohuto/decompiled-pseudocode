/*
 * XREFs of PspReferenceSystemDll @ 0x14064E740
 * Callers:
 *     DbgkCreateThread @ 0x14064C314 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x14064D080 (PspMapSystemDll.c)
 *     MmInitSystemDll @ 0x140A6FEC8 (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140A914E8 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ObFastReferenceObject @ 0x140206610 (ObFastReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14025B058 (ObFastReferenceObjectLocked.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

ULONG_PTR __fastcall PspReferenceSystemDll(signed __int64 *a1)
{
  ULONG_PTR v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = ObFastReferenceObject(a1);
  if ( !v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 1), 0LL);
    v2 = ObFastReferenceObjectLocked(a1);
    if ( _InterlockedCompareExchange64(a1 + 1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 1);
    KeAbPostRelease((ULONG_PTR)(a1 + 1));
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v5, v6, v7);
  }
  return v2;
}

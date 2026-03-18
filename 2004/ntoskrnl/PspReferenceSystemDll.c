/*
 * XREFs of PspReferenceSystemDll @ 0x1406B7720
 * Callers:
 *     DbgkCreateThread @ 0x1406B52F4 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x1406B6060 (PspMapSystemDll.c)
 *     MmInitSystemDll @ 0x140A42ACC (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140A90B74 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x1402978D8 (ObFastReferenceObjectLocked.c)
 *     ObFastReferenceObject @ 0x140299120 (ObFastReferenceObject.c)
 */

ULONG_PTR __fastcall PspReferenceSystemDll(signed __int64 *a1)
{
  ULONG_PTR v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp

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
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return v2;
}

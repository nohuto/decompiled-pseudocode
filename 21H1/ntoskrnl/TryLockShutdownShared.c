/*
 * XREFs of TryLockShutdownShared @ 0x140871530
 * Callers:
 *     CmpSyncNextBackupHive @ 0x1408701C0 (CmpSyncNextBackupHive.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     ExfTryAcquirePushLockShared @ 0x140340930 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x140340F60 (KeAbPostReleaseEx.c)
 */

char TryLockShutdownShared()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v1; // rdi
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&CmpShutdownLock, 0LL, 1);
  v2 = 0;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&CmpShutdownLock, 17LL, 0LL)
    || ExfTryAcquirePushLockShared(&CmpShutdownLock) )
  {
    if ( v1 )
      *(_BYTE *)(v1 + 26) |= 1u;
    return 1;
  }
  else
  {
    if ( v1 )
      KeAbPostReleaseEx((ULONG_PTR)&CmpShutdownLock, v1);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
  }
  return v2;
}

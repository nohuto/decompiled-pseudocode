/*
 * XREFs of RtlpAcquireBootStatusLock @ 0x1403F24FC
 * Callers:
 *     RtlLockBootStatusData @ 0x14076CD60 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x14077A2D0 (RtlUnlockBootStatusData.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void RtlpAcquireBootStatusLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&RtlpBootStatHandleLock, 0LL);
}

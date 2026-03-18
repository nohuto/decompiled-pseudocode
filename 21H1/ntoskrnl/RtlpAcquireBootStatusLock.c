/*
 * XREFs of RtlpAcquireBootStatusLock @ 0x1403F119C
 * Callers:
 *     RtlLockBootStatusData @ 0x14076A5C0 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140777EC0 (RtlUnlockBootStatusData.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void RtlpAcquireBootStatusLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&RtlpBootStatHandleLock, 0LL);
}

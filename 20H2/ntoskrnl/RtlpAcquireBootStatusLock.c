/*
 * XREFs of RtlpAcquireBootStatusLock @ 0x1403F6B44
 * Callers:
 *     RtlLockBootStatusData @ 0x14077B790 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x1407888D0 (RtlUnlockBootStatusData.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void RtlpAcquireBootStatusLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&RtlpBootStatHandleLock, 0LL);
}

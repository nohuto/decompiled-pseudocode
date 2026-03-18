/*
 * XREFs of CmpLockGlobalKeyLockTrackerExclusive @ 0x14080FCD0
 * Callers:
 *     CmpGlobalLockKeyForWrite @ 0x14080FBCC (CmpGlobalLockKeyForWrite.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140919308 (CmpGlobalUnlockKeyForWrite.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void CmpLockGlobalKeyLockTrackerExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
}

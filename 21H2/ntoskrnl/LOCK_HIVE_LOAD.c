/*
 * XREFs of LOCK_HIVE_LOAD @ 0x1406893EC
 * Callers:
 *     CmpTryToRundownHive @ 0x140208D94 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmShutdownSystem1 @ 0x14053EBD8 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x14053EE38 (CmShutdownSystem2.c)
 *     CmReleaseLoadKeyContext @ 0x1406800D0 (CmReleaseLoadKeyContext.c)
 *     CmpLateUnloadHiveWorker @ 0x140681670 (CmpLateUnloadHiveWorker.c)
 *     CmpPerformUnloadKey @ 0x14069E98C (CmpPerformUnloadKey.c)
 *     CmpDoFlushNextHive @ 0x1407174E0 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 *     CmKtmNotification @ 0x140741CF0 (CmKtmNotification.c)
 *     CmpResolveHiveLoadConflict @ 0x140914914 (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x1409194E0 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void LOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpLoadHiveLock, 0LL);
  CmpLoadHiveLockOwner = (__int64)CurrentThread;
}

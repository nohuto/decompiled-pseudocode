/*
 * XREFs of LOCK_HIVE_LOAD @ 0x1406400C4
 * Callers:
 *     CmpLoadKeyCommon @ 0x140271C20 (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x140272410 (CmpTryToRundownHive.c)
 *     CmLoadAppKey @ 0x1405DE288 (CmLoadAppKey.c)
 *     CmpDoFlushNextHive @ 0x14063FC80 (CmpDoFlushNextHive.c)
 *     CmpLateUnloadHiveWorker @ 0x1406434F0 (CmpLateUnloadHiveWorker.c)
 *     CmpPerformUnloadKey @ 0x1406503FC (CmpPerformUnloadKey.c)
 *     CmReleaseLoadKeyContext @ 0x1406525A0 (CmReleaseLoadKeyContext.c)
 *     CmKtmNotification @ 0x140653D20 (CmKtmNotification.c)
 *     CmShutdownSystem @ 0x1408682A8 (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x14086B4C8 (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x14086F680 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void LOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpLoadHiveLock, 0LL);
  CmpLoadHiveLockOwner = (__int64)CurrentThread;
}

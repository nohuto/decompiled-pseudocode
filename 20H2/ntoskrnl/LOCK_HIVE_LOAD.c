/*
 * XREFs of LOCK_HIVE_LOAD @ 0x140701374
 * Callers:
 *     CmpLoadKeyCommon @ 0x140203EFC (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1402F2E7C (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x1406A26DC (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1406A2B40 (CmpLateUnloadHiveWorker.c)
 *     CmKtmNotification @ 0x1406A3E40 (CmKtmNotification.c)
 *     CmLoadAppKey @ 0x1406FFDC0 (CmLoadAppKey.c)
 *     CmReleaseLoadKeyContext @ 0x140700F00 (CmReleaseLoadKeyContext.c)
 *     CmpDoFlushNextHive @ 0x140700F30 (CmpDoFlushNextHive.c)
 *     CmShutdownSystem @ 0x14086DCC8 (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x140870F1C (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x1408751D0 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void LOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpLoadHiveLock, 0LL);
  CmpLoadHiveLockOwner = (__int64)CurrentThread;
}

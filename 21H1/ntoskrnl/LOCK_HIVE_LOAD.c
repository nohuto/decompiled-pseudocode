/*
 * XREFs of LOCK_HIVE_LOAD @ 0x1406911D4
 * Callers:
 *     CmpTryToRundownHive @ 0x1402D2F68 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x1402E1B78 (CmpLoadKeyCommon.c)
 *     CmKtmNotification @ 0x140658680 (CmKtmNotification.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14065AD30 (CmpLateUnloadHiveWorker.c)
 *     CmReleaseLoadKeyContext @ 0x14068DF30 (CmReleaseLoadKeyContext.c)
 *     CmpDoFlushNextHive @ 0x140690D90 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 *     CmShutdownSystem @ 0x140866F58 (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x14086A178 (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x14086DBC0 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void LOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpLoadHiveLock, 0LL);
  CmpLoadHiveLockOwner = (__int64)CurrentThread;
}

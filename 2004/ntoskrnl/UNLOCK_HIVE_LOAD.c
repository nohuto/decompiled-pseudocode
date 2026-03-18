/*
 * XREFs of UNLOCK_HIVE_LOAD @ 0x14063FF30
 * Callers:
 *     CmpLoadKeyCommon @ 0x140271C20 (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x140272410 (CmpTryToRundownHive.c)
 *     CmLoadAppKey @ 0x1405DE288 (CmLoadAppKey.c)
 *     CmpDoFlushNextHive @ 0x14063FC80 (CmpDoFlushNextHive.c)
 *     CmpLateUnloadHiveWorker @ 0x1406434F0 (CmpLateUnloadHiveWorker.c)
 *     CmpCompleteUnloadKey @ 0x14064364C (CmpCompleteUnloadKey.c)
 *     CmpPerformUnloadKey @ 0x1406503FC (CmpPerformUnloadKey.c)
 *     CmReleaseLoadKeyContext @ 0x1406525A0 (CmReleaseLoadKeyContext.c)
 *     CmKtmNotification @ 0x140653D20 (CmKtmNotification.c)
 *     CmShutdownSystem @ 0x1408682A8 (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x14086B4C8 (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x14086F680 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *UNLOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  CmpLoadHiveLockOwner = 0LL;
  ExReleasePushLockEx((ULONG_PTR)&CmpLoadHiveLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}

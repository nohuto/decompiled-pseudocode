/*
 * XREFs of UNLOCK_HIVE_LOAD @ 0x140691040
 * Callers:
 *     CmpTryToRundownHive @ 0x1402D2F68 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x1402E1B78 (CmpLoadKeyCommon.c)
 *     CmKtmNotification @ 0x140658680 (CmKtmNotification.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14065AD30 (CmpLateUnloadHiveWorker.c)
 *     CmpCompleteUnloadKey @ 0x14065AE8C (CmpCompleteUnloadKey.c)
 *     CmReleaseLoadKeyContext @ 0x14068DF30 (CmReleaseLoadKeyContext.c)
 *     CmpDoFlushNextHive @ 0x140690D90 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 *     CmShutdownSystem @ 0x140866F58 (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x14086A178 (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x14086DBC0 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 */

_QWORD *UNLOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  CurrentThread = KeGetCurrentThread();
  CmpLoadHiveLockOwner = 0LL;
  ExReleasePushLockEx((ULONG_PTR)&CmpLoadHiveLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, v1, v2, v3);
}

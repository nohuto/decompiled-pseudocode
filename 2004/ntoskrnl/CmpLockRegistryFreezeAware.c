/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x140640060
 * Callers:
 *     CmpLoadKeyCommon @ 0x140271C20 (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x140272410 (CmpTryToRundownHive.c)
 *     CmLoadAppKey @ 0x1405DE288 (CmLoadAppKey.c)
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     CmpDoFlushNextHive @ 0x14063FC80 (CmpDoFlushNextHive.c)
 *     CmpLateUnloadHiveWorker @ 0x1406434F0 (CmpLateUnloadHiveWorker.c)
 *     CmpPerformUnloadKey @ 0x1406503FC (CmpPerformUnloadKey.c)
 *     ExpWatchProductTypeWork @ 0x140702430 (ExpWatchProductTypeWork.c)
 *     NtFlushKey @ 0x140702800 (NtFlushKey.c)
 *     CmpStartRMLogs @ 0x140755134 (CmpStartRMLogs.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407869A4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpResolveHiveLoadConflict @ 0x14086B4C8 (CmpResolveHiveLoadConflict.c)
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 */

__int64 __fastcall CmpLockRegistryFreezeAware(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  v7 = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( a1 )
    CmpLockRegistryExclusive(v3, v2);
  else
    CmpLockRegistry();
  while ( CmpFreezeThawState == 1 )
  {
    KeResetEvent(&Event);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
    if ( *(__int64 **)qword_140C47CD8 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    *((_QWORD *)&v7 + 1) = qword_140C47CD8;
    *(_QWORD *)&v7 = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_140C47CD8 = &v7;
    qword_140C47CD8 = (__int64)&v7;
    ExReleasePushLockEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
    CmpUnlockRegistry();
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( a1 )
      CmpLockRegistryExclusive(v6, v5);
    else
      CmpLockRegistry();
  }
  return 0LL;
}

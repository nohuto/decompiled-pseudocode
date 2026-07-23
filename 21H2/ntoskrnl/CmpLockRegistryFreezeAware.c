/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x140667920
 * Callers:
 *     CmpTryToRundownHive @ 0x140213B70 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x14026D10C (CmpLoadKeyCommon.c)
 *     CmpPerformUnloadKey @ 0x1405DFA8C (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1405DFF10 (CmpLateUnloadHiveWorker.c)
 *     ExpWatchProductTypeWork @ 0x140612A40 (ExpWatchProductTypeWork.c)
 *     NtFlushKey @ 0x140612E10 (NtFlushKey.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 *     CmpDoFlushNextHive @ 0x140667540 (CmpDoFlushNextHive.c)
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     CmpStartRMLogs @ 0x140767524 (CmpStartRMLogs.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14079EDD8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E884 (CmpResolveHiveLoadConflict.c)
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
 * Callees:
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpLockRegistryFreezeAware(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  v9 = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( a1 )
    CmpLockRegistryExclusive(v3, v2);
  else
    CmpLockRegistry(v3);
  while ( CmpFreezeThawState == 1 )
  {
    KeResetEvent(&Event);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
    if ( *(__int64 **)qword_140C47F58 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    *((_QWORD *)&v9 + 1) = qword_140C47F58;
    *(_QWORD *)&v9 = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_140C47F58 = &v9;
    qword_140C47F58 = (__int64)&v9;
    ExReleasePushLockEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
    CmpUnlockRegistry(v6, v5);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( a1 )
      CmpLockRegistryExclusive(v8, v7);
    else
      CmpLockRegistry(v8);
  }
  return 0LL;
}

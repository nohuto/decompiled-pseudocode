/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x1406726F0
 * Callers:
 *     CmpTryToRundownHive @ 0x140361574 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x14036195C (CmpLoadKeyCommon.c)
 *     CmpFlushHive @ 0x14062A0D8 (CmpFlushHive.c)
 *     CmLoadAppKey @ 0x14066FEEC (CmLoadAppKey.c)
 *     CmpDoFlushNextHive @ 0x140672310 (CmpDoFlushNextHive.c)
 *     ExpWatchProductTypeWork @ 0x1406B3870 (ExpWatchProductTypeWork.c)
 *     NtFlushKey @ 0x1406B3C40 (NtFlushKey.c)
 *     CmpPerformUnloadKey @ 0x14071A1B8 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14071C570 (CmpLateUnloadHiveWorker.c)
 *     CmpStartRMLogs @ 0x140767364 (CmpStartRMLogs.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14079EBD8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E724 (CmpResolveHiveLoadConflict.c)
 *     CmRestoreKey @ 0x14087BF30 (CmRestoreKey.c)
 * Callees:
 *     KeResetEvent @ 0x14027BC40 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     CmpLockRegistryExclusive @ 0x14067278C (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
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
    if ( *(__int64 **)qword_140C47EF8 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    *((_QWORD *)&v9 + 1) = qword_140C47EF8;
    *(_QWORD *)&v9 = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_140C47EF8 = &v9;
    qword_140C47EF8 = (__int64)&v9;
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

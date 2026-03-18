/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x140691170
 * Callers:
 *     CmpTryToRundownHive @ 0x1402D2F68 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x1402E1B78 (CmpLoadKeyCommon.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14065AD30 (CmpLateUnloadHiveWorker.c)
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     CmpDoFlushNextHive @ 0x140690D90 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 *     ExpWatchProductTypeWork @ 0x1406DF6A0 (ExpWatchProductTypeWork.c)
 *     NtFlushKey @ 0x1406DFA70 (NtFlushKey.c)
 *     CmpStartRMLogs @ 0x140750AA4 (CmpStartRMLogs.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140781318 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpResolveHiveLoadConflict @ 0x14086A178 (CmpResolveHiveLoadConflict.c)
 *     CmRestoreKey @ 0x140877748 (CmRestoreKey.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
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
    if ( *(__int64 **)qword_140C47EA8 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    *((_QWORD *)&v7 + 1) = qword_140C47EA8;
    *(_QWORD *)&v7 = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_140C47EA8 = &v7;
    qword_140C47EA8 = (__int64)&v7;
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

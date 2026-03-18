/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x140701310
 * Callers:
 *     CmpLoadKeyCommon @ 0x140203EFC (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1402F2E7C (CmpTryToRundownHive.c)
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     CmpPerformUnloadKey @ 0x1406A26DC (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1406A2B40 (CmpLateUnloadHiveWorker.c)
 *     ExpWatchProductTypeWork @ 0x1406BF270 (ExpWatchProductTypeWork.c)
 *     NtFlushKey @ 0x1406BF640 (NtFlushKey.c)
 *     CmLoadAppKey @ 0x1406FFDC0 (CmLoadAppKey.c)
 *     CmpDoFlushNextHive @ 0x140700F30 (CmpDoFlushNextHive.c)
 *     CmpStartRMLogs @ 0x140763D74 (CmpStartRMLogs.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407946B4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpResolveHiveLoadConflict @ 0x140870F1C (CmpResolveHiveLoadConflict.c)
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
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
    if ( *(__int64 **)qword_140C47D38 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    *((_QWORD *)&v7 + 1) = qword_140C47D38;
    *(_QWORD *)&v7 = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_140C47D38 = &v7;
    qword_140C47D38 = (__int64)&v7;
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

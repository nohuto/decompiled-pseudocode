/*
 * XREFs of CmpGetNextActiveHive @ 0x140701140
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14036BB7C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpDoLocalizeNextHive @ 0x1406CA610 (CmpDoLocalizeNextHive.c)
 *     CmpDoReconcileNextHive @ 0x1406D5040 (CmpDoReconcileNextHive.c)
 *     CmpDoFlushNextHive @ 0x140700F30 (CmpDoFlushNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x140701074 (CmpBlockTwoHiveWrites.c)
 *     CmpTransMgrPrepare @ 0x14076032C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1407604BC (CmpTransMgrCommit.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407C4A78 (CmpHandlePageFileOpenNotification.c)
 *     CmpUpdatePhaseAccessBit @ 0x1407CAC7C (CmpUpdatePhaseAccessBit.c)
 *     CmEtwRunDown @ 0x14086C738 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x14086DCC8 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x14086E068 (CmpFreeAllMemory.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140870DD4 (CmpIsHiveAlreadyLoaded.c)
 *     CmFreezeRegistry @ 0x1408748A0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140874AE0 (CmThawRegistry.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 */

__int64 *__fastcall CmpGetNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  __int64 *v1; // rdi
  __int64 *v3; // rsi

  v1 = 0LL;
  v3 = &CmpHiveListHead;
  if ( a1 )
    v3 = (__int64 *)&a1[200];
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  while ( 1 )
  {
    v3 = (__int64 *)*v3;
    if ( v3 == &CmpHiveListHead )
      break;
    v1 = v3 - 200;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v3 + 4) )
      break;
    v1 = 0LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  if ( a1 )
    ExReleaseRundownProtection_0(a1 + 204);
  return v1;
}

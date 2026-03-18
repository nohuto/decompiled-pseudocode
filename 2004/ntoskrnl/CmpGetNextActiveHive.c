/*
 * XREFs of CmpGetNextActiveHive @ 0x14063FE90
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140369B9C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpDoLocalizeNextHive @ 0x14063C700 (CmpDoLocalizeNextHive.c)
 *     CmpDoReconcileNextHive @ 0x14063C860 (CmpDoReconcileNextHive.c)
 *     CmpDoFlushNextHive @ 0x14063FC80 (CmpDoFlushNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x14063FDC4 (CmpBlockTwoHiveWrites.c)
 *     CmpTransMgrPrepare @ 0x14075174C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1407518DC (CmpTransMgrCommit.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407B6248 (CmpHandlePageFileOpenNotification.c)
 *     CmpUpdatePhaseAccessBit @ 0x1407BC3EC (CmpUpdatePhaseAccessBit.c)
 *     CmEtwRunDown @ 0x140866D18 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x1408682A8 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x140868648 (CmpFreeAllMemory.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086B380 (CmpIsHiveAlreadyLoaded.c)
 *     CmFreezeRegistry @ 0x14086ED48 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14086EF88 (CmThawRegistry.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
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

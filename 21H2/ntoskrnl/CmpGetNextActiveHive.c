/*
 * XREFs of CmpGetNextActiveHive @ 0x140672520
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14036BEA8 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpDoFlushNextHive @ 0x140672310 (CmpDoFlushNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x140672454 (CmpBlockTwoHiveWrites.c)
 *     CmpDoLocalizeNextHive @ 0x14071C8D0 (CmpDoLocalizeNextHive.c)
 *     CmpDoReconcileNextHive @ 0x140725080 (CmpDoReconcileNextHive.c)
 *     CmpTransMgrPrepare @ 0x140768D04 (CmpTransMgrPrepare.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407C8D38 (CmpHandlePageFileOpenNotification.c)
 *     CmpUpdatePhaseAccessBit @ 0x1407CEF3C (CmpUpdatePhaseAccessBit.c)
 *     CmEtwRunDown @ 0x14086A368 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x14086B8F8 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x14086BC98 (CmpFreeAllMemory.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086E5DC (CmpIsHiveAlreadyLoaded.c)
 *     CmFreezeRegistry @ 0x1408720F0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140872330 (CmThawRegistry.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
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

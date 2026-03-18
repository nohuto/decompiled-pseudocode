/*
 * XREFs of CmpGetNextActiveHive @ 0x140690FA0
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1403691DC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpDoLocalizeNextHive @ 0x14068E8A0 (CmpDoLocalizeNextHive.c)
 *     CmpDoReconcileNextHive @ 0x14068EA00 (CmpDoReconcileNextHive.c)
 *     CmpDoFlushNextHive @ 0x140690D90 (CmpDoFlushNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x140690ED4 (CmpBlockTwoHiveWrites.c)
 *     CmpTransMgrPrepare @ 0x14074D0BC (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x14074D24C (CmpTransMgrCommit.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407B30D8 (CmpHandlePageFileOpenNotification.c)
 *     CmpUpdatePhaseAccessBit @ 0x1407B927C (CmpUpdatePhaseAccessBit.c)
 *     CmEtwRunDown @ 0x1408659F8 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x140866F58 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x1408672F8 (CmpFreeAllMemory.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086A030 (CmpIsHiveAlreadyLoaded.c)
 *     CmFreezeRegistry @ 0x14086D288 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14086D4C8 (CmThawRegistry.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
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

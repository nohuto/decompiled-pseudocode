/*
 * XREFs of CmpGetNextActiveHive @ 0x14071B350
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1402001A8 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmShutdownSystem1 @ 0x14053EBD8 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x14053EE38 (CmShutdownSystem2.c)
 *     CmpDoLocalizeNextHive @ 0x14068E4E0 (CmpDoLocalizeNextHive.c)
 *     CmpDoReconcileNextHive @ 0x1406D6E10 (CmpDoReconcileNextHive.c)
 *     CmpDoFlushNextHive @ 0x1407174E0 (CmpDoFlushNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x14071B284 (CmpBlockTwoHiveWrites.c)
 *     CmpTransMgrPrepare @ 0x1407424F0 (CmpTransMgrPrepare.c)
 *     CmpHandlePageFileOpenNotification @ 0x14085A568 (CmpHandlePageFileOpenNotification.c)
 *     CmpUpdatePhaseAccessBit @ 0x14085ED9C (CmpUpdatePhaseAccessBit.c)
 *     CmEtwRunDown @ 0x1409103FC (CmEtwRunDown.c)
 *     CmpFreeAllMemory @ 0x140911BAC (CmpFreeAllMemory.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1409147B4 (CmpIsHiveAlreadyLoaded.c)
 *     CmFreezeRegistry @ 0x140918C40 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140918E48 (CmThawRegistry.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 */

__int64 *__fastcall CmpGetNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  __int64 *v1; // rdi
  __int64 *v3; // rsi

  v1 = 0LL;
  v3 = &CmpHiveListHead;
  if ( a1 )
    v3 = (__int64 *)&a1[201];
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  while ( 1 )
  {
    v3 = (__int64 *)*v3;
    if ( v3 == &CmpHiveListHead )
      break;
    v1 = v3 - 201;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v3 + 4) )
      break;
    v1 = 0LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  if ( a1 )
    ExReleaseRundownProtection(a1 + 205);
  return v1;
}

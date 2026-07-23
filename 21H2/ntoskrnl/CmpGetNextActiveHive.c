/*
 * XREFs of CmpGetNextActiveHive @ 0x140667750
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14036C058 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpDoLocalizeNextHive @ 0x140664500 (CmpDoLocalizeNextHive.c)
 *     CmpDoReconcileNextHive @ 0x140664660 (CmpDoReconcileNextHive.c)
 *     CmpDoFlushNextHive @ 0x140667540 (CmpDoFlushNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x140667684 (CmpBlockTwoHiveWrites.c)
 *     CmpTransMgrPrepare @ 0x140768EC4 (CmpTransMgrPrepare.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407C9058 (CmpHandlePageFileOpenNotification.c)
 *     CmpUpdatePhaseAccessBit @ 0x1407CF0AC (CmpUpdatePhaseAccessBit.c)
 *     CmEtwRunDown @ 0x14086A4C8 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x14086BA58 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x14086BDF8 (CmpFreeAllMemory.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086E73C (CmpIsHiveAlreadyLoaded.c)
 *     CmFreezeRegistry @ 0x140872250 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140872490 (CmThawRegistry.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
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
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v3 + 4) )
      break;
    v1 = 0LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  if ( a1 )
    ExReleaseRundownProtection(a1 + 204);
  return v1;
}

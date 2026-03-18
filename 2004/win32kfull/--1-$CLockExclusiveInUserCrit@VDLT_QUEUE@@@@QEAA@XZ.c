/*
 * XREFs of ??1?$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@XZ @ 0x1C01E04C0
 * Callers:
 *     _ScheduleDispatchNotification @ 0x1C0092A00 (_ScheduleDispatchNotification.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockExclusiveInUserCrit<DLT_QUEUE>::~CLockExclusiveInUserCrit<DLT_QUEUE>(tagDomLock **a1)
{
  tagObjLock::UnLockExclusive(a1[1]);
  tagDomLock::UnLockShared(*a1);
}

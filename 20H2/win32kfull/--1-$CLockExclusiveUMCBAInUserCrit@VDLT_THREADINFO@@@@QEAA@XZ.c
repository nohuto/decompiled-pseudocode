/*
 * XREFs of ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C0076C44
 * Callers:
 *     zzzEndDeferWinEventNotify @ 0x1C0048C00 (zzzEndDeferWinEventNotify.c)
 *     NtUserSetWinEventHook @ 0x1C0076B20 (NtUserSetWinEventHook.c)
 *     NtUserUnhookWinEvent @ 0x1C0078710 (NtUserUnhookWinEvent.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 *     _GetQueueStatus @ 0x1C015138C (_GetQueueStatus.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
        tagDomLock **a1)
{
  unsigned int DLT; // eax

  DLT = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(DLT);
  tagObjLock::UnLockExclusive(a1[1]);
  tagDomLock::UnLockShared(*a1);
}

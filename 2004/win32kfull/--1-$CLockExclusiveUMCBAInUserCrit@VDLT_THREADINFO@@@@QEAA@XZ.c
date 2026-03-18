/*
 * XREFs of ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00B01F8
 * Callers:
 *     NtUserUnhookWinEvent @ 0x1C00435E0 (NtUserUnhookWinEvent.c)
 *     NtUserSetWinEventHook @ 0x1C0043E80 (NtUserSetWinEventHook.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 *     _GetQueueStatus @ 0x1C014EB7C (_GetQueueStatus.c)
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

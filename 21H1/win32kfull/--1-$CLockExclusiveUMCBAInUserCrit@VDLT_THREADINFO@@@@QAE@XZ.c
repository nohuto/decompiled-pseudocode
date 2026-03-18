/*
 * XREFs of ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@XZ @ 0x1437E
 * Callers:
 *     _NtUserUnhookWinEvent@4 @ 0x13596 (_NtUserUnhookWinEvent@4.c)
 *     _NtUserSetWinEventHook@32 @ 0x13974 (_NtUserSetWinEventHook@32.c)
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 * Callees:
 *     <none>
 */

void __thiscall CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
        tagDomLock **this)
{
  int DLT; // eax

  DLT = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(DLT);
  tagObjLock::UnLockExclusive(this[1]);
  tagDomLock::UnLockShared(*this);
}

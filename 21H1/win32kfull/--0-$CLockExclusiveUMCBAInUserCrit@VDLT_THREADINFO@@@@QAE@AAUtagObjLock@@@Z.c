/*
 * XREFs of ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@AAUtagObjLock@@@Z @ 0x42C64
 * Callers:
 *     _NtUserUnhookWinEvent@4 @ 0x13596 (_NtUserUnhookWinEvent@4.c)
 *     _NtUserSetWinEventHook@32 @ 0x13974 (_NtUserSetWinEventHook@32.c)
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 * Callees:
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

tagDomLock **__thiscall CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
        tagDomLock **this,
        tagDomLock *a2)
{
  int DLT; // eax
  int v4; // eax

  DLT = DLT_THREADINFO::getDLT();
  *this = (tagDomLock *)GetDomainLockRef(DLT);
  this[1] = a2;
  if ( a2 == (tagDomLock *)gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v4 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v4);
  tagDomLock::LockShared(*this);
  tagObjLock::LockExclusive(this[1]);
  return this;
}

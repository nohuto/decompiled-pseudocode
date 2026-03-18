/*
 * XREFs of ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ @ 0x147B8
 * Callers:
 *     _NtUserUnhookWinEvent@4 @ 0x13596 (_NtUserUnhookWinEvent@4.c)
 *     _NtUserSetWinEventHook@32 @ 0x13974 (_NtUserSetWinEventHook@32.c)
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     _FreeThreadsWinEvents@4 @ 0x1471E (_FreeThreadsWinEvents@4.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 * Callees:
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

tagDomLock **__thiscall CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(
        tagDomLock **this)
{
  int DLT; // eax
  tagDomLock *DomainLockRef; // eax

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  *this = DomainLockRef;
  if ( DomainLockRef == (tagDomLock *)gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    DomainLockRef = *this;
  }
  tagDomLock::LockExclusive(DomainLockRef);
  return this;
}

/*
 * XREFs of ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00B01A4
 * Callers:
 *     NtUserUnhookWinEvent @ 0x1C00435E0 (NtUserUnhookWinEvent.c)
 *     NtUserSetWinEventHook @ 0x1C0043E80 (NtUserSetWinEventHook.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     FreeThreadsWinEvents @ 0x1C00B0060 (FreeThreadsWinEvents.c)
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagDomLock **__fastcall CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(
        tagDomLock **a1)
{
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  *a1 = DomainLockRef;
  if ( DomainLockRef == (tagDomLock *)gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
    DomainLockRef = *a1;
  }
  tagDomLock::LockExclusive(DomainLockRef);
  return a1;
}

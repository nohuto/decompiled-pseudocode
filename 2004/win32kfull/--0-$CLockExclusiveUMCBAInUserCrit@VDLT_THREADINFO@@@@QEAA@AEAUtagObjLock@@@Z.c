/*
 * XREFs of ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00AFFC8
 * Callers:
 *     NtUserUnhookWinEvent @ 0x1C00435E0 (NtUserUnhookWinEvent.c)
 *     NtUserSetWinEventHook @ 0x1C0043E80 (NtUserSetWinEventHook.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 *     _GetQueueStatus @ 0x1C014EB7C (_GetQueueStatus.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagDomLock **__fastcall CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
        tagDomLock **a1,
        tagDomLock *a2)
{
  unsigned int DLT; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // eax

  DLT = DLT_THREADINFO::getDLT();
  *a1 = (tagDomLock *)GetDomainLockRef(DLT);
  a1[1] = a2;
  if ( a2 == (tagDomLock *)gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
  v7 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v7);
  tagDomLock::LockShared(*a1);
  tagObjLock::LockExclusive(a1[1]);
  return a1;
}

/*
 * XREFs of ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00770C8
 * Callers:
 *     zzzEndDeferWinEventNotify @ 0x1C0048C00 (zzzEndDeferWinEventNotify.c)
 *     NtUserSetWinEventHook @ 0x1C0076B20 (NtUserSetWinEventHook.c)
 *     NtUserUnhookWinEvent @ 0x1C0078710 (NtUserUnhookWinEvent.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 *     _GetQueueStatus @ 0x1C015138C (_GetQueueStatus.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagDomLock **__fastcall CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
        tagDomLock **a1,
        tagDomLock *a2)
{
  unsigned int DLT; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // eax

  DLT = DLT_THREADINFO::getDLT();
  *a1 = (tagDomLock *)GetDomainLockRef(DLT);
  a1[1] = a2;
  if ( a2 == (tagDomLock *)gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7, v8);
  v9 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v9);
  tagDomLock::LockShared(*a1);
  tagObjLock::LockExclusive(a1[1]);
  return a1;
}

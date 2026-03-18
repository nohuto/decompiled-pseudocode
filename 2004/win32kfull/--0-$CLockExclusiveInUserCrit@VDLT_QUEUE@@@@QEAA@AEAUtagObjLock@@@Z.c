/*
 * XREFs of ??0?$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B0440
 * Callers:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagDomLock **__fastcall CLockExclusiveInUserCrit<DLT_QUEUE>::CLockExclusiveInUserCrit<DLT_QUEUE>(
        tagDomLock **a1,
        tagDomLock *a2)
{
  unsigned int DLT; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx

  DLT = DLT_QUEUE::getDLT(a1);
  *a1 = (tagDomLock *)GetDomainLockRef(DLT);
  a1[1] = a2;
  if ( a2 == (tagDomLock *)gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
  tagDomLock::LockShared(*a1);
  tagObjLock::LockExclusive(a1[1]);
  return a1;
}

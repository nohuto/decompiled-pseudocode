/*
 * XREFs of ??0?$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00BE9BC
 * Callers:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagDomLock **__fastcall CLockExclusiveInUserCrit<DLT_QUEUE>::CLockExclusiveInUserCrit<DLT_QUEUE>(
        tagDomLock **a1,
        tagDomLock *a2)
{
  unsigned int DLT; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  DLT = DLT_QUEUE::getDLT(a1);
  *a1 = (tagDomLock *)GetDomainLockRef(DLT);
  a1[1] = a2;
  if ( a2 == (tagDomLock *)gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7, v8);
  tagDomLock::LockShared(*a1);
  tagObjLock::LockExclusive(a1[1]);
  return a1;
}

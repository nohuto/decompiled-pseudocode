/*
 * XREFs of ??0?$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x9DD9A
 * Callers:
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

tagDomLock **__thiscall CLockExclusiveInUserCrit<DLT_QUEUE>::CLockExclusiveInUserCrit<DLT_QUEUE>(
        tagDomLock **this,
        tagDomLock *a2)
{
  int DLT; // eax

  DLT = DLT_QUEUE::getDLT();
  *this = (tagDomLock *)GetDomainLockRef(DLT);
  this[1] = a2;
  if ( a2 == (tagDomLock *)gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  tagDomLock::LockShared(*this);
  tagObjLock::LockExclusive(this[1]);
  return this;
}

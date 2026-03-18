/*
 * XREFs of ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ @ 0xD2FCE
 * Callers:
 *     _xxxLoadHmodIndex@4 @ 0x16802 (_xxxLoadHmodIndex@4.c)
 *     _xxxDoSysExpunge@4 @ 0xD2E12 (_xxxDoSysExpunge@4.c)
 * Callees:
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

tagDomLock **__thiscall CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(
        tagDomLock **this)
{
  int DLT; // eax
  tagDomLock *DomainLockRef; // eax

  DLT = DLT_CLIENTLIB::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  *this = DomainLockRef;
  if ( DomainLockRef == (tagDomLock *)gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    DomainLockRef = *this;
  }
  tagDomLock::UnLockExclusive(DomainLockRef);
  return this;
}

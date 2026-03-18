/*
 * XREFs of ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ @ 0x16A32
 * Callers:
 *     _RemoveHmodDependency@4 @ 0x15F1A (_RemoveHmodDependency@4.c)
 *     _AddHmodDependency@4 @ 0x15F82 (_AddHmodDependency@4.c)
 *     _GetHmodTableIndex@4 @ 0x15FAE (_GetHmodTableIndex@4.c)
 *     _xxxLoadHmodIndex@4 @ 0x16802 (_xxxLoadHmodIndex@4.c)
 *     _xxxDoSysExpunge@4 @ 0xD2E12 (_xxxDoSysExpunge@4.c)
 * Callees:
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

tagDomLock **__thiscall CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(
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
  tagDomLock::LockExclusive(DomainLockRef);
  return this;
}

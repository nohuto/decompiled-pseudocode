/*
 * XREFs of ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0046620
 * Callers:
 *     xxxDoSysExpunge @ 0x1C0042A4C (xxxDoSysExpunge.c)
 *     RemoveHmodDependency @ 0x1C004609C (RemoveHmodDependency.c)
 *     AddHmodDependency @ 0x1C0046128 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C004616C (GetHmodTableIndex.c)
 *     xxxLoadHmodIndex @ 0x1C0046334 (xxxLoadHmodIndex.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagDomLock **__fastcall CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(
        tagDomLock **a1)
{
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  DLT = DLT_CLIENTLIB::getDLT();
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

/*
 * XREFs of ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00754E0
 * Callers:
 *     RemoveHmodDependency @ 0x1C0074F5C (RemoveHmodDependency.c)
 *     AddHmodDependency @ 0x1C0074FE8 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C007502C (GetHmodTableIndex.c)
 *     xxxLoadHmodIndex @ 0x1C00751F4 (xxxLoadHmodIndex.c)
 *     xxxDoSysExpunge @ 0x1C01146E4 (xxxDoSysExpunge.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagDomLock **__fastcall CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(
        tagDomLock **a1)
{
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  DLT = DLT_CLIENTLIB::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  *a1 = DomainLockRef;
  if ( DomainLockRef == (tagDomLock *)gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
    DomainLockRef = *a1;
  }
  tagDomLock::LockExclusive(DomainLockRef);
  return a1;
}

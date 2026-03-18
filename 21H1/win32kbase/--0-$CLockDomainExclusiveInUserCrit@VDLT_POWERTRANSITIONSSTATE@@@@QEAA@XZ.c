/*
 * XREFs of ??0?$CLockDomainExclusiveInUserCrit@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x1C0125228
 * Callers:
 *     UserPowerInfoCallout @ 0x1C005E654 (UserPowerInfoCallout.c)
 * Callees:
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

PERESOURCE **__fastcall CLockDomainExclusiveInUserCrit<DLT_POWERTRANSITIONSSTATE>::CLockDomainExclusiveInUserCrit<DLT_POWERTRANSITIONSSTATE>(
        PERESOURCE **a1)
{
  PERESOURCE *DomainLockRef; // rax

  DomainLockRef = (PERESOURCE *)GetDomainLockRef(13LL);
  *a1 = DomainLockRef;
  if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(&gDomainDummyLock);
    DomainLockRef = *a1;
  }
  tagDomLock::LockExclusive(DomainLockRef);
  return a1;
}

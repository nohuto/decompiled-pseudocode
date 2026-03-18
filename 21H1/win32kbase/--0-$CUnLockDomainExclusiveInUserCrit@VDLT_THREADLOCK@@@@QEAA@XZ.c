/*
 * XREFs of ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0121270
 * Callers:
 *     UserPowerInfoCallout @ 0x1C005E654 (UserPowerInfoCallout.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

PERESOURCE **__fastcall CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(
        PERESOURCE **a1)
{
  PERESOURCE *DomainLockRef; // rax

  DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
  *a1 = DomainLockRef;
  if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(&gDomainDummyLock);
    DomainLockRef = *a1;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  return a1;
}

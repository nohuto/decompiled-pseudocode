/*
 * XREFs of ??0?$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0067E5C
 * Callers:
 *     NtUserEnableTouchPad @ 0x1C0138A20 (NtUserEnableTouchPad.c)
 *     Win32kBaseDriverEntry @ 0x1C029C0C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

PERESOURCE **__fastcall CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(
        PERESOURCE **a1)
{
  __int64 v2; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v4; // rcx

  DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
  *a1 = DomainLockRef;
  if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    DomainLockRef = *a1;
  }
  if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
  return a1;
}

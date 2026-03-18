/*
 * XREFs of ??0?$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C004D618
 * Callers:
 *     UserPowerInfoCallout @ 0x1C002A474 (UserPowerInfoCallout.c)
 *     Win32kBaseDriverEntry @ 0x1C0294600 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

PERESOURCE **__fastcall CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(
        PERESOURCE **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, a2, a3, a4);
  *a1 = DomainLockRef;
  if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v8, v9);
    DomainLockRef = *a1;
  }
  if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
  return a1;
}

/*
 * XREFs of PopThermalZoneRemove @ 0x1408E36F0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x14030AD00 (IoCancelIrp.c)
 *     KeDisableTimer2 @ 0x14035B750 (KeDisableTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140386BA4 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140386D34 (PopTraceThermalZoneActiveActivity.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403A4980 (PopThermalUpdateTelemetryClientCount.c)
 *     PopThermalStandbyNotify @ 0x140569DDC (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStandbyState @ 0x14056D670 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x14056DAEC (PopTraceCr3Mitigated.c)
 *     PopTraceZoneCr3Mitigated @ 0x14056E040 (PopTraceZoneCr3Mitigated.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140763C78 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140779730 (PopThermalUpdateActiveTimeTracking.c)
 *     PopResetCurrentPolicies @ 0x14077CA28 (PopResetCurrentPolicies.c)
 *     PopUpdateOverThrottledCount @ 0x1408E38D4 (PopUpdateOverThrottledCount.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PopThermalZoneRemove(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rcx

  *(_BYTE *)(a1 + 66) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 448), Executive, 0, 0, 0LL);
  if ( *(_BYTE *)(a1 + 145) )
  {
    PopThermalUpdatePassiveTimeTracking(a1 + 504, *(_BYTE *)(a1 + 80));
    PopTraceThermalZonePassiveHistogram(a1);
  }
  if ( *(_BYTE *)(a1 + 505) )
  {
    LOBYTE(v2) = *(_BYTE *)(a1 + 69);
    PopThermalUpdateActiveTimeTracking(a1 + 504, v2);
    PopTraceThermalZoneActiveActivity(a1);
  }
  if ( *(_BYTE *)(a1 + 72) )
  {
    PopDiagTraceThermalStandbyState(*(_QWORD *)(a1 + 48), 0LL);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
    --dword_140C22DF4;
    PopTraceZoneCr3Mitigated(dword_140C22DF8, a1);
    if ( !dword_140C22DF4 )
    {
      PopTraceCr3Mitigated();
      if ( HIBYTE(word_140C22DF0) == 1 )
      {
        PopThermalStandbyNotify(0);
        HIBYTE(word_140C22DF0) = 0;
      }
    }
    PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  }
  if ( *(_BYTE *)(a1 + 73) )
    PopUpdateOverThrottledCount(a1);
  KeDisableTimer2(a1 + 296, 1, 1, 0LL);
  *(_BYTE *)(a1 + 65) |= 0x80u;
  if ( !--PopThermalZoneCount )
  {
    PopAcquirePolicyLock(v3);
    if ( BYTE13(PopCapabilities) )
    {
      BYTE13(PopCapabilities) = 0;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v5, v4);
  }
  PopThermalUpdateTelemetryClientCount(0);
  v6 = *(void **)(a1 + 1048);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}

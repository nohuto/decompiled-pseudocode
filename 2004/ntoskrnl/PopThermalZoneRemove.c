/*
 * XREFs of PopThermalZoneRemove @ 0x1408E4970
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeDisableTimer2 @ 0x1402755A0 (KeDisableTimer2.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140347600 (IoCancelIrp.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140387B14 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140387CA4 (PopTraceThermalZoneActiveActivity.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403ABA48 (PopThermalUpdateTelemetryClientCount.c)
 *     PopThermalStandbyNotify @ 0x14056A42C (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStandbyState @ 0x14056DCC0 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x14056E13C (PopTraceCr3Mitigated.c)
 *     PopTraceZoneCr3Mitigated @ 0x14056E690 (PopTraceZoneCr3Mitigated.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140765698 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x14077BB40 (PopThermalUpdateActiveTimeTracking.c)
 *     PopResetCurrentPolicies @ 0x140785428 (PopResetCurrentPolicies.c)
 *     PopUpdateOverThrottledCount @ 0x1408E4B54 (PopUpdateOverThrottledCount.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
    --dword_140C22C74;
    PopTraceZoneCr3Mitigated(dword_140C22C78, a1);
    if ( !dword_140C22C74 )
    {
      PopTraceCr3Mitigated();
      if ( HIBYTE(word_140C22C70) == 1 )
      {
        PopThermalStandbyNotify(0);
        HIBYTE(word_140C22C70) = 0;
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

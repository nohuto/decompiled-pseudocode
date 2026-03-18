/*
 * XREFs of PopThermalZoneRemove @ 0x1408EA580
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x140318CD0 (IoCancelIrp.c)
 *     KeDisableTimer2 @ 0x14033C330 (KeDisableTimer2.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140389CD4 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140389E64 (PopTraceThermalZoneActiveActivity.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403AE018 (PopThermalUpdateTelemetryClientCount.c)
 *     PopThermalStandbyNotify @ 0x14056DE5C (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStandbyState @ 0x1405716F0 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x140571B6C (PopTraceCr3Mitigated.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405720C0 (PopTraceZoneCr3Mitigated.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1407746C8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x14078A140 (PopThermalUpdateActiveTimeTracking.c)
 *     PopResetCurrentPolicies @ 0x140793178 (PopResetCurrentPolicies.c)
 *     PopUpdateOverThrottledCount @ 0x1408EA764 (PopUpdateOverThrottledCount.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
    --dword_140C22CD4;
    PopTraceZoneCr3Mitigated(dword_140C22CD8, a1);
    if ( !dword_140C22CD4 )
    {
      PopTraceCr3Mitigated();
      if ( HIBYTE(word_140C22CD0) == 1 )
      {
        PopThermalStandbyNotify(0);
        HIBYTE(word_140C22CD0) = 0;
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

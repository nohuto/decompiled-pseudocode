/*
 * XREFs of ACPIBuildCompleteMustSucceed @ 0x1C000A4C0
 * Callers:
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C00090D0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0009660 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0009970 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0009A50 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C0009D10 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000A160 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000A1F0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000AC90 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0025B10 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0029D30 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0029EB0 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C002BF20 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002DD10 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C002E9C0 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C002EAD0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C004AA30 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004AD40 (ACPIBuildProcessThermalZoneUid.c)
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C00095D8 (ACPIBuildCompleteCommon.c)
 */

void __fastcall ACPIBuildCompleteMustSucceed(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // r8d
  unsigned int v5; // eax
  KIRQL v6; // bl
  int v7; // edx

  v4 = *(_DWORD *)(a4 + 32);
  if ( a2 == -1073741738 )
  {
    *(_DWORD *)(a4 + 48) = -1073741738;
    ACPIBuildCompleteCommon((volatile signed __int32 *)(a4 + 24), 2);
  }
  else
  {
    v5 = 0;
    if ( a2 < 0 )
    {
      *(_DWORD *)(a4 + 48) = a2;
      if ( BugCheckParameter2 )
        v5 = *(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 40LL);
      KeBugCheckEx(0xA5u, 3uLL, BugCheckParameter2, a2, v5);
    }
    *(_DWORD *)(a4 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 24), v4, 1);
    v6 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v7 = AcpiBuildDpcFlags | 2;
    AcpiBuildDpcFlags = v7;
    if ( (v7 & 1) == 0 )
    {
      AcpiBuildDpcFlags = v7 | 1;
      KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiBuildQueueLock, v6);
  }
}

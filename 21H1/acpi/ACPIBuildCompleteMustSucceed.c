/*
 * XREFs of ACPIBuildCompleteMustSucceed @ 0x1C0015B20
 * Callers:
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0014D90 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0014F80 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C0015160 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0015200 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C0015320 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C0015390 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0015580 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C00156A0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C0015A90 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C002BB50 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C002BD30 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002FE50 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0030510 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0030D30 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C0030E20 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C004BDB0 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004C0E0 (ACPIBuildProcessThermalZoneUid.c)
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C001A470 (ACPIBuildCompleteCommon.c)
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
    ACPIBuildCompleteCommon(a4 + 24, 2LL);
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

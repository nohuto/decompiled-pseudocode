/*
 * XREFs of ACPIBuildCompleteCommon @ 0x1C001A470
 * Callers:
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0011E40 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C0014B80 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0015B20 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C0019D50 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C0019F10 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C001A120 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C001A220 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C001A360 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C001EAF0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001ED70 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C001F030 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001F2C0 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C001F8D0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C001FAC0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C0028970 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C002A8B0 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C002E4B0 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C002E6F0 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C002F580 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C002FAD0 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildCompleteGeneric @ 0x1C002FC40 (ACPIBuildCompleteGeneric.c)
 *     ACPIBuildDiscoverDeviceCompletion @ 0x1C004B240 (ACPIBuildDiscoverDeviceCompletion.c)
 *     ACPIBuildDiscoverPowerNodeCompletion @ 0x1C004B340 (ACPIBuildDiscoverPowerNodeCompletion.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C004C010 (ACPIBuildProcessThermalZoneHid.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIBuildCompleteCommon(volatile signed __int32 *a1, signed __int32 a2)
{
  KIRQL v2; // bl
  int v3; // edx

  _InterlockedCompareExchange(a1, a2, 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  v3 = AcpiBuildDpcFlags | 2;
  AcpiBuildDpcFlags = v3;
  if ( (v3 & 1) == 0 )
  {
    AcpiBuildDpcFlags = v3 | 1;
    KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
  }
  KeReleaseSpinLock(&AcpiBuildQueueLock, v2);
}

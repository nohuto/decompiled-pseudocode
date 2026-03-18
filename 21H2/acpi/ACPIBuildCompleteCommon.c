/*
 * XREFs of ACPIBuildCompleteCommon @ 0x1C00095D8
 * Callers:
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C0008460 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C0008DF0 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C0008FE0 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C00093E0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C00094E0 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000A4C0 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000DA40 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000E8F0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000ECC0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C000EF00 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000F4F0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C000F6D0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C0025240 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C0025920 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C00279F0 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C002A8D0 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C002AB10 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C002B0D0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C002B7D0 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildCompleteGeneric @ 0x1C002C4C0 (ACPIBuildCompleteGeneric.c)
 *     ACPIBuildDiscoverDeviceCompletion @ 0x1C0049CC0 (ACPIBuildDiscoverDeviceCompletion.c)
 *     ACPIBuildDiscoverPowerNodeCompletion @ 0x1C0049DB0 (ACPIBuildDiscoverPowerNodeCompletion.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C004A840 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C004AC70 (ACPIBuildProcessThermalZoneHid.c)
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

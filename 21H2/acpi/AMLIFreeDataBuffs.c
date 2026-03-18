/*
 * XREFs of AMLIFreeDataBuffs @ 0x1C001C758
 * Callers:
 *     ACPIThermalStartDevice @ 0x1C008F060 (ACPIThermalStartDevice.c)
 *     ACPIAmliEvaluatePcch @ 0x1C008F5E4 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C008F740 (ACPIAmliEvaluateOsc.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C008FDE0 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C008FED4 (ACPIPepInitializePlatformNotificationSupport.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0090240 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIFanPrepareImpactZoneSupport @ 0x1C0090490 (ACPIFanPrepareImpactZoneSupport.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0094310 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIProcessorDeviceControl @ 0x1C0095160 (ACPIProcessorDeviceControl.c)
 *     AcpiGetIdleWakeInfo @ 0x1C00952D0 (AcpiGetIdleWakeInfo.c)
 *     ACPIThermalBuildConstraints @ 0x1C00956BC (ACPIThermalBuildConstraints.c)
 *     ACPIThermalWorker @ 0x1C00959C0 (ACPIThermalWorker.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0096C54 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C00A035C (ACPIProcessPhysicalDeviceLocationPackage.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C00A0518 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIEcGetGpeVector @ 0x1C00AD6A4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00AD748 (ACPIEcGetUid.c)
 *     ACPIFanSetTripPoints @ 0x1C00AE4E4 (ACPIFanSetTripPoints.c)
 *     ACPIGetUniqueId @ 0x1C00AF8F0 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C00AF9C0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00AFAA0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00AFB78 (ACPIQuerySpareDsm.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1C00B044C (ACPIPepPlatformEntryExitNotify.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 */

__int64 __fastcall AMLIFreeDataBuffs(__int64 a1)
{
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  return FreeDataBuffs(a1, 1u);
}

/*
 * XREFs of AMLIFreeDataBuffs @ 0x1C001D940
 * Callers:
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C0091638 (ACPIProcessPhysicalDeviceLocationPackage.c)
 *     ACPIThermalBuildConstraints @ 0x1C0091BD0 (ACPIThermalBuildConstraints.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0098400 (ACPIAmliEvaluatePcch.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C0098550 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0099E28 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C009A070 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIAmliEvaluateOsc @ 0x1C009A3A0 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalStartDevice @ 0x1C009A540 (ACPIThermalStartDevice.c)
 *     ACPIProcessorDeviceControl @ 0x1C009A990 (ACPIProcessorDeviceControl.c)
 *     ACPIThermalWorker @ 0x1C009AB00 (ACPIThermalWorker.c)
 *     AcpiGetIdleWakeInfo @ 0x1C009CB40 (AcpiGetIdleWakeInfo.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009E538 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIEcGetGpeVector @ 0x1C00AEA1C (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00AEAC0 (ACPIEcGetUid.c)
 *     ACPIGetUniqueId @ 0x1C00B0440 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C00B0510 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00B05F0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00B06C8 (ACPIQuerySpareDsm.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C00B0EE0 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1C00B1188 (ACPIPepPlatformEntryExitNotify.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00B41DC (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     FreeData @ 0x1C00036E8 (FreeData.c)
 */

__int64 __fastcall AMLIFreeDataBuffs(__int64 a1)
{
  dword_1C0082908 = 0;
  pszDest = 0;
  return FreeData(a1);
}

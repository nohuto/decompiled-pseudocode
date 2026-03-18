/*
 * XREFs of AMLIFreeDataBuffs @ 0x1C001D6E0
 * Callers:
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C0091328 (ACPIProcessPhysicalDeviceLocationPackage.c)
 *     ACPIThermalBuildConstraints @ 0x1C00918C0 (ACPIThermalBuildConstraints.c)
 *     ACPIAmliEvaluatePcch @ 0x1C00980F0 (ACPIAmliEvaluatePcch.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C0098240 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0099B08 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0099D50 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIAmliEvaluateOsc @ 0x1C009A080 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalStartDevice @ 0x1C009A220 (ACPIThermalStartDevice.c)
 *     ACPIProcessorDeviceControl @ 0x1C009A670 (ACPIProcessorDeviceControl.c)
 *     ACPIThermalWorker @ 0x1C009A7E0 (ACPIThermalWorker.c)
 *     AcpiGetIdleWakeInfo @ 0x1C009C820 (AcpiGetIdleWakeInfo.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009E218 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIEcGetGpeVector @ 0x1C00AE6FC (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00AE7A0 (ACPIEcGetUid.c)
 *     ACPIGetUniqueId @ 0x1C00B0120 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C00B01F0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00B02D0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00B03A8 (ACPIQuerySpareDsm.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C00B0BC0 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1C00B0E68 (ACPIPepPlatformEntryExitNotify.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00B3EBC (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     FreeData @ 0x1C0003328 (FreeData.c)
 */

__int64 __fastcall AMLIFreeDataBuffs(__int64 a1)
{
  dword_1C0082908 = 0;
  pszDest = 0;
  return FreeData(a1);
}

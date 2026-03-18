/*
 * XREFs of AMLIGetNamedChild @ 0x1C000B060
 * Callers:
 *     ACPIThermalGetSensorDevice @ 0x1C0001EF0 (ACPIThermalGetSensorDevice.c)
 *     ACPIInitStartDevice @ 0x1C00050B0 (ACPIInitStartDevice.c)
 *     IsPciDeviceWorker @ 0x1C0007A10 (IsPciDeviceWorker.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0008730 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C00088C0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C0008DF0 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C00090D0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0009660 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0009970 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0009A50 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C0009D10 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000A160 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000A1F0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000AC90 (ACPIBuildProcessDevicePhasePrw.c)
 *     IsPciBusAsyncWorker @ 0x1C000B380 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000F4F0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     LinkNodeCrackPrt @ 0x1C00192F8 (LinkNodeCrackPrt.c)
 *     EnableDisableCMOSRegions @ 0x1C0020180 (EnableDisableCMOSRegions.c)
 *     ACPIInitDosDeviceName @ 0x1C0022B6C (ACPIInitDosDeviceName.c)
 *     ACPIGetWorkerForInteger @ 0x1C00249F0 (ACPIGetWorkerForInteger.c)
 *     ACPIGetProcessorStatus @ 0x1C0024DC4 (ACPIGetProcessorStatus.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0025B10 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0026570 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C00266A0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0029D30 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0029EB0 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C002B0D0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C002BF20 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002DD10 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIFilterIrpSetPower @ 0x1C002E2B0 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C002E9C0 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004A4D4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004AD40 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0050360 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x1C0050840 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0050C20 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0050DC0 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C0053734 (ACPIEcRunQueryMethod.c)
 *     ACPIInternalEvaluateOST @ 0x1C00573B4 (ACPIInternalEvaluateOST.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005D7A0 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C005DEF4 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C006C300 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C006C500 (LinkNodepRunSrsWorker.c)
 *     ACPIThermalStartDevice @ 0x1C008F060 (ACPIThermalStartDevice.c)
 *     ACPIAmliEvaluatePcch @ 0x1C008F5E4 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C008F740 (ACPIAmliEvaluateOsc.c)
 *     ACPIRootInitialize @ 0x1C008F8C0 (ACPIRootInitialize.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0090340 (ACPIAmliEvaluateDsm.c)
 *     ACPIFanStartDevice @ 0x1C0090820 (ACPIFanStartDevice.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0094550 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     EnableDisableRegions @ 0x1C0094CC0 (EnableDisableRegions.c)
 *     AcpiGetIdleWakeInfo @ 0x1C00952D0 (AcpiGetIdleWakeInfo.c)
 *     ACPIThermalWorker @ 0x1C00959C0 (ACPIThermalWorker.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C00975D0 (LinkNodepAddLinkNodeWorker.c)
 *     LinkNodeWriteStateToHardware @ 0x1C009CB64 (LinkNodeWriteStateToHardware.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C00A0518 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIDockIrpEject @ 0x1C00AA350 (ACPIDockIrpEject.c)
 *     ACPIEcGetGpeVector @ 0x1C00AD6A4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00AD748 (ACPIEcGetUid.c)
 *     ACPIInitStopDevice @ 0x1C00AEFEC (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C00AF540 (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C00AF8F0 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C00AF9C0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00AFAA0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00AFB78 (ACPIQuerySpareDsm.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall AMLIGetNamedChild(__int64 *a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 *v7; // rcx
  __int64 *result; // rax

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = *a1;
  v6 = *(__int64 **)(*a1 + 24);
  v7 = (__int64 *)(v5 + 24);
  if ( v7 == v6 )
  {
LABEL_4:
    ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
    return 0LL;
  }
  while ( a2 != *((_DWORD *)v6 + 10) )
  {
    v6 = (__int64 *)*v6;
    if ( v7 == v6 )
      goto LABEL_4;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  if ( !v6 )
    return 0LL;
  result = v6 + 15;
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v6 + 32);
  return result;
}

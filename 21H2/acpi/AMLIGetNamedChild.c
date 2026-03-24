/*
 * XREFs of AMLIGetNamedChild @ 0x1C0020D50
 * Callers:
 *     ACPIInitStartDevice @ 0x1C000D968 (ACPIInitStartDevice.c)
 *     LinkNodeCrackPrt @ 0x1C000EC74 (LinkNodeCrackPrt.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0011B70 (ACPIThermalGetSensorDevice.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0011F20 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C00120A0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0014FF0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00151E0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C00153C0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0015460 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C0015580 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C00155F0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C00157E0 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0015900 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C0015CF0 (ACPIBuildProcessDevicePhaseSub.c)
 *     EnableDisableCMOSRegions @ 0x1C0016500 (EnableDisableCMOSRegions.c)
 *     IsPciDeviceWorker @ 0x1C00166E0 (IsPciDeviceWorker.c)
 *     ACPIInitDosDeviceName @ 0x1C0016A68 (ACPIInitDosDeviceName.c)
 *     IsPciBusAsyncWorker @ 0x1C0017710 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C001A170 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001B550 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001BE00 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001C080 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C001FB30 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIGetWorkerForInteger @ 0x1C0026CF0 (ACPIGetWorkerForInteger.c)
 *     ACPIGetProcessorStatus @ 0x1C00270F4 (ACPIGetProcessorStatus.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C002BDB0 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C002BF90 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIFilterIrpSetPower @ 0x1C002D790 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00300B0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0030770 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0030F90 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004BB44 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004C250 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0050FF0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C00516B0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0051860 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C0054084 (ACPIEcRunQueryMethod.c)
 *     ACPIInternalEvaluateOST @ 0x1C0056CB4 (ACPIInternalEvaluateOST.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005C880 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C005D200 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C006C060 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C006C280 (LinkNodepRunSrsWorker.c)
 *     ACPIInitStopDevice @ 0x1C0090C3C (ACPIInitStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C0091310 (ACPIFanStartDevice.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C0091AF0 (LinkNodepAddLinkNodeWorker.c)
 *     LinkNodeWriteStateToHardware @ 0x1C0095F18 (LinkNodeWriteStateToHardware.c)
 *     ACPIRootInitialize @ 0x1C0097FAC (ACPIRootInitialize.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0098400 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0099F08 (ACPIAmliEvaluateDsm.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C009A070 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIAmliEvaluateOsc @ 0x1C009A3A0 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalStartDevice @ 0x1C009A540 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C009AB00 (ACPIThermalWorker.c)
 *     AcpiGetIdleWakeInfo @ 0x1C009CB40 (AcpiGetIdleWakeInfo.c)
 *     EnableDisableRegions @ 0x1C009D934 (EnableDisableRegions.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009EB30 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIDockIrpEject @ 0x1C00AB550 (ACPIDockIrpEject.c)
 *     ACPIEcGetGpeVector @ 0x1C00AEA1C (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00AEAC0 (ACPIEcGetUid.c)
 *     EnableDisableIPMIRegions @ 0x1C00B0090 (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C00B0440 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C00B0510 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00B05F0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00B06C8 (ACPIQuerySpareDsm.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall AMLIGetNamedChild(__int64 *a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 *v6; // rbx
  __int64 *v7; // r8
  __int64 *result; // rax

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = *a1;
  v6 = *(__int64 **)(*a1 + 24);
  v7 = (__int64 *)(v5 + 24);
  if ( v7 == v6 )
  {
LABEL_4:
    v6 = 0LL;
  }
  else
  {
    while ( a2 != *((_DWORD *)v6 + 10) )
    {
      v6 = (__int64 *)*v6;
      if ( v7 == v6 )
        goto LABEL_4;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  if ( !v6 )
    return 0LL;
  result = v6 + 15;
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v6 + 32);
  return result;
}

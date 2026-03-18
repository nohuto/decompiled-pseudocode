/*
 * XREFs of AMLIGetNamedChild @ 0x1C0020AF0
 * Callers:
 *     ACPIInitStartDevice @ 0x1C000D5A8 (ACPIInitStartDevice.c)
 *     LinkNodeCrackPrt @ 0x1C000E8B4 (LinkNodeCrackPrt.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0011910 (ACPIThermalGetSensorDevice.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0011CC0 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0011E40 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0014D90 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0014F80 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C0015160 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0015200 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C0015320 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C0015390 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0015580 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C00156A0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C0015A90 (ACPIBuildProcessDevicePhaseSub.c)
 *     EnableDisableCMOSRegions @ 0x1C00162A0 (EnableDisableCMOSRegions.c)
 *     IsPciDeviceWorker @ 0x1C0016480 (IsPciDeviceWorker.c)
 *     ACPIInitDosDeviceName @ 0x1C0016808 (ACPIInitDosDeviceName.c)
 *     IsPciBusAsyncWorker @ 0x1C00174B0 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C0019F10 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001B2F0 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001BBA0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001BE20 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C001F8D0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIGetWorkerForInteger @ 0x1C0026A90 (ACPIGetWorkerForInteger.c)
 *     ACPIGetProcessorStatus @ 0x1C0026E94 (ACPIGetProcessorStatus.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C002BB50 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C002BD30 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIFilterIrpSetPower @ 0x1C002D530 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002FE50 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0030510 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0030D30 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004B9D4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004C0E0 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0050E60 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0051520 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C00516D0 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C0053EF4 (ACPIEcRunQueryMethod.c)
 *     ACPIInternalEvaluateOST @ 0x1C0056B24 (ACPIInternalEvaluateOST.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005C6F0 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C005D070 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C006BED0 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C006C0F0 (LinkNodepRunSrsWorker.c)
 *     ACPIInitStopDevice @ 0x1C009092C (ACPIInitStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C0091000 (ACPIFanStartDevice.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C00917E0 (LinkNodepAddLinkNodeWorker.c)
 *     LinkNodeWriteStateToHardware @ 0x1C0095C08 (LinkNodeWriteStateToHardware.c)
 *     ACPIRootInitialize @ 0x1C0097C9C (ACPIRootInitialize.c)
 *     ACPIAmliEvaluatePcch @ 0x1C00980F0 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0099BE8 (ACPIAmliEvaluateDsm.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0099D50 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIAmliEvaluateOsc @ 0x1C009A080 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalStartDevice @ 0x1C009A220 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C009A7E0 (ACPIThermalWorker.c)
 *     AcpiGetIdleWakeInfo @ 0x1C009C820 (AcpiGetIdleWakeInfo.c)
 *     EnableDisableRegions @ 0x1C009D614 (EnableDisableRegions.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009E810 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIDockIrpEject @ 0x1C00AB230 (ACPIDockIrpEject.c)
 *     ACPIEcGetGpeVector @ 0x1C00AE6FC (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00AE7A0 (ACPIEcGetUid.c)
 *     EnableDisableIPMIRegions @ 0x1C00AFD70 (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C00B0120 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C00B01F0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00B02D0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00B03A8 (ACPIQuerySpareDsm.c)
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

/*
 * XREFs of WPP_RECORDER_SF_Lqss @ 0x1C0020750
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C000C8B0 (ACPICMButtonStartWorker.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C000CE70 (ACPIInternalSetDeviceInterface.c)
 *     ACPIInitStartDevice @ 0x1C000D5A8 (ACPIInitStartDevice.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C0014B80 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0014D90 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0014F80 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0015200 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C0015390 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0015580 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C00156A0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessorExtension @ 0x1C0015DC4 (ACPIBuildProcessorExtension.c)
 *     ACPIInitDosDeviceName @ 0x1C0016808 (ACPIInitDosDeviceName.c)
 *     ACPIDetectFilterDevices @ 0x1C0018DA4 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C00190D8 (ACPIDetectPdoDevices.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C00199EC (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C0019D50 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C0019F10 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C001A120 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C001A220 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C001A360 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIDetectDockDevices @ 0x1C001A5A0 (ACPIDetectDockDevices.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001A890 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001ED70 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001F2C0 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001F5A0 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C001F8D0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C001FAC0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001FC80 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIDispatchAddDevice @ 0x1C0025000 (ACPIDispatchAddDevice.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C0028970 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C002A8B0 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPISystemPowerInitializeRootMapping @ 0x1C002B950 (ACPISystemPowerInitializeRootMapping.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C002BD30 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C002E4B0 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002F304 (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002F864 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C002FAD0 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002FE50 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0030D30 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C0030E20 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildDockExtension @ 0x1C004B40C (ACPIBuildDockExtension.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C004BDB0 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C004C010 (ACPIBuildProcessThermalZoneHid.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004C0E0 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C004C414 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004CFB0 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPICMButtonWaitWakeComplete @ 0x1C004EAF0 (ACPICMButtonWaitWakeComplete.c)
 *     ACPICMLidWorker @ 0x1C004EFD0 (ACPICMLidWorker.c)
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C0050450 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 *     OSNotifyDeviceWake @ 0x1C0058B5C (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0058DE8 (OSNotifyDeviceWakeByGPEEvent.c)
 *     ACPIWakeDisableAsync @ 0x1C006181C (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0061D50 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIInitStopDevice @ 0x1C009092C (ACPIInitStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C0091000 (ACPIFanStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1C009A220 (ACPIThermalStartDevice.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009E810 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009ED54 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIInternalDeviceQueryCapabilities @ 0x1C00A0BE0 (ACPIInternalDeviceQueryCapabilities.c)
 *     ACPISystemPowerProcessSxD @ 0x1C00A15F4 (ACPISystemPowerProcessSxD.c)
 *     ACPIBusIrpQueryBusInformation @ 0x1C00A1FD0 (ACPIBusIrpQueryBusInformation.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00AB4F0 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00AD690 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 *     ACPIBusIrpQueryBusInformationEIO @ 0x1C00ADA70 (ACPIBusIrpQueryBusInformationEIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Lqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v12; // r14
  unsigned int v13; // r15d
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rax
  char *v19; // r10
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-78h]

  v9 = a9;
  v10 = a8;
  v12 = (unsigned __int64)a3 >> 16;
  v13 = a2;
  v15 = -1LL;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v12 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v16, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v19 = (char *)WPP_GLOBAL_Control + 80 * v12;
    if ( (unsigned __int8)v19[41] >= a2 )
    {
      if ( a9 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( *(_BYTE *)(a9 + v20) );
      }
      if ( a8 )
      {
        v21 = -1LL;
        do
          ++v21;
        while ( *(_BYTE *)(a8 + v21) );
      }
      pfnWppTraceMessage(*((_QWORD *)v19 + 3), 43LL, a5, a4, &a6, 4LL, &a7);
    }
  }
  if ( v9 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(v9 + v17) );
  }
  if ( v10 )
  {
    do
      ++v15;
    while ( *(_BYTE *)(v10 + v15) );
  }
  LOWORD(v22) = a4;
  return WppAutoLogTrace(a1, v13, a3, a5, v22, &a6);
}

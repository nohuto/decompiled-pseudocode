/*
 * XREFs of WPP_RECORDER_SF_Lqss @ 0x1C0010020
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C00029E0 (ACPICMButtonStartWorker.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C0004F28 (ACPIInternalSetDeviceInterface.c)
 *     ACPIInitStartDevice @ 0x1C00050B0 (ACPIInitStartDevice.c)
 *     ACPISystemPowerInitializeRootMapping @ 0x1C00058F8 (ACPISystemPowerInitializeRootMapping.c)
 *     ACPIDetectFilterDevices @ 0x1C0006A34 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0006CE8 (ACPIDetectPdoDevices.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C0008460 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C0008DF0 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C0008FE0 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C00093E0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C00094E0 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0009660 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0009970 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0009A50 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000A1F0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIDetectDockDevices @ 0x1C000A628 (ACPIDetectDockDevices.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000AC90 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C000BF30 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000EB80 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000ECC0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C000EF00 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C000F200 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000F4F0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C000F6D0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C001EC04 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIBuildProcessorExtension @ 0x1C001F0E0 (ACPIBuildProcessorExtension.c)
 *     ACPIInitDosDeviceName @ 0x1C0022B6C (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C0025240 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C0025920 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0025B10 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIDispatchAddDevice @ 0x1C0026D30 (ACPIDispatchAddDevice.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C00279F0 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0029EB0 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C002AB10 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002D2A8 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002DD10 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C002E9C0 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C002EAD0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildDockExtension @ 0x1C0049E7C (ACPIBuildDockExtension.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C004A840 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C004AA30 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C004AC70 (ACPIBuildProcessThermalZoneHid.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004AD40 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C004B2C8 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004BEC8 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPICMButtonWaitWakeComplete @ 0x1C004D900 (ACPICMButtonWaitWakeComplete.c)
 *     ACPICMLidWorker @ 0x1C004DD90 (ACPICMLidWorker.c)
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C004F400 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 *     OSNotifyDeviceWake @ 0x1C0059B80 (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0059E04 (OSNotifyDeviceWakeByGPEEvent.c)
 *     ACPIWakeDisableAsync @ 0x1C00627FC (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0062CD8 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C00631D0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIThermalStartDevice @ 0x1C008F060 (ACPIThermalStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C0090820 (ACPIFanStartDevice.c)
 *     ACPIInternalDeviceQueryCapabilities @ 0x1C0094110 (ACPIInternalDeviceQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0094550 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0094A68 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIBusIrpQueryBusInformation @ 0x1C00A02D0 (ACPIBusIrpQueryBusInformation.c)
 *     ACPISystemPowerProcessSxD @ 0x1C00A1604 (ACPISystemPowerProcessSxD.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00AA5F0 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00AC5AC (ACPIBusAndFilterIrpQueryEjectRelations.c)
 *     ACPIBusIrpQueryBusInformationEIO @ 0x1C00AC950 (ACPIBusIrpQueryBusInformationEIO.c)
 *     ACPIInitStopDevice @ 0x1C00AEFEC (ACPIInitStopDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
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
  return WppAutoLogTrace(a1, v13, a3, a5, v22, &a6, 4LL, &a7);
}

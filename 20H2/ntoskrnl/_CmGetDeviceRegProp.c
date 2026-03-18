/*
 * XREFs of _CmGetDeviceRegProp @ 0x14066B77C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14063DB50 (PiPnpRtlCmActionCallback.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140648B00 (PiDcHandleCustomDeviceEvent.c)
 *     IoGetDeviceProperty @ 0x140668830 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x140668D88 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x14066B8FC (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406CAC2C (_CmGetDeviceSoftwareKey.c)
 *     PiCMGetRegistryProperty @ 0x1406CD554 (PiCMGetRegistryProperty.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406E9AEC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406EB5EC (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceStatus @ 0x1406EBDFC (_CmGetDeviceStatus.c)
 *     PiControlGetPropertyData @ 0x14071E290 (PiControlGetPropertyData.c)
 *     _CmDeleteDeviceWorker @ 0x140729198 (_CmDeleteDeviceWorker.c)
 *     PiCMQueryRemove @ 0x14072AD04 (PiCMQueryRemove.c)
 *     PpDevCfgProcessDeviceClass @ 0x14072BE44 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14072C1B4 (PpDevCfgProcessDeviceReset.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140730520 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x1407346EC (PiPnpRtlSetObjectProperty.c)
 *     PipCallDriverAddDevice @ 0x1407361D4 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140736B58 (PnpCallDriverQueryServiceHelper.c)
 *     PipProcessStartPhase3 @ 0x140739750 (PipProcessStartPhase3.c)
 *     PiDevCfgProcessDevice @ 0x14073EAE0 (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14073F008 (PpDevCfgProcessDeviceOperations.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14073F2E0 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDeviceRegistration @ 0x1407431AC (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140743360 (PpForEachDeviceInstanceDriver.c)
 *     IopInitializeDeviceInstanceKey @ 0x140748194 (IopInitializeDeviceInstanceKey.c)
 *     IopPnPDispatch @ 0x140748B90 (IopPnPDispatch.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14074C05C (PnpIsDeviceInstanceEnabled.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14075219C (PiDcUpdateDeviceContainerMembership.c)
 *     PipGetRegistrySecurityWithFallback @ 0x140759DA0 (PipGetRegistrySecurityWithFallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x14075A2F4 (PipGetRegistryDwordWithFallback.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14075C310 (PiPnpRtlServiceFilterCallback.c)
 *     PiQueryRemovableDeviceOverride @ 0x14075FAD8 (PiQueryRemovableDeviceOverride.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1407644C8 (PiDevCfgEnumDeviceKeys.c)
 *     PnpCheckDeviceIdsChanged @ 0x1407664FC (PnpCheckDeviceIdsChanged.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140766788 (_CmIsDeviceSafeRemovalRequired.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x140769910 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x14076A248 (PipGenerateContainerID.c)
 *     _CmIsLocalMachineContainer @ 0x14076E6CC (_CmIsLocalMachineContainer.c)
 *     IopIsReportedAlready @ 0x1407A6018 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407B9B80 (PiDevCfgProcessDeviceCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A60A0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1408A6308 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A794C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A9370 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408AC4BC (PiDevCfgResolveVariableKeyHandle.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408AD31C (PpDevCfgProcessDeviceExtensions.c)
 *     PiCMCreateDevice @ 0x1408B1E70 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x1408B669C (PiInitializeDevice.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B7200 (PiCreateDriverSwDeviceCallback.c)
 *     _CmClassFilterCallback @ 0x140979790 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140979B20 (_CmServiceFilterCallback.c)
 *     PipMigrateResetDeviceCallback @ 0x140A936A0 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x140A937C0 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     _CmGetDeviceRegPropWorker @ 0x14066B8FC (_CmGetDeviceRegPropWorker.c)
 */

__int64 __fastcall CmGetDeviceRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 (__fastcall *v11)(__int64, __int64, __int64, __int64, int, _QWORD *); // r12
  int v12; // eax
  unsigned int DeviceRegPropWorker; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  _QWORD v20[12]; // [rsp+50h] [rbp-71h] BYREF

  memset(v20, 0, 0x58uLL);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 504);
  v20[2] = a3;
  LODWORD(v20[3]) = a4;
  v20[5] = a6;
  v20[6] = a7;
  v20[4] = a5;
  LODWORD(v20[7]) = a8;
  if ( v11 )
  {
    v12 = v11(a1, a2, 1LL, 9LL, 1, v20);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return LODWORD(v20[0]);
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  DeviceRegPropWorker = CmGetDeviceRegPropWorker(a1, a2, v20[2], LODWORD(v20[3]), v20[4], v20[5], v20[6], v20[7]);
  v14 = DeviceRegPropWorker;
  if ( !v11 )
    return v14;
  LODWORD(v20[0]) = DeviceRegPropWorker;
  v15 = v11(a1, a2, 1LL, 9LL, 2, v20);
  v16 = v15;
  if ( v15 == -1073741822 )
    return v14;
  if ( v15 == -1073741536 )
    return LODWORD(v20[0]);
  v17 = v14;
  if ( v16 )
    return (unsigned int)-1073741595;
  return v17;
}

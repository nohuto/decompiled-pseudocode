/*
 * XREFs of _CmGetDeviceRegProp @ 0x1405E046C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405D9270 (PiPnpRtlCmActionCallback.c)
 *     IoGetDeviceProperty @ 0x1405DCC50 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1405DD1A8 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405E05EC (_CmGetDeviceRegPropWorker.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140647510 (PiDcHandleCustomDeviceEvent.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406BF1AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406C0CAC (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceStatus @ 0x1406C1928 (_CmGetDeviceStatus.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406F7B3C (_CmGetDeviceSoftwareKey.c)
 *     PiCMGetRegistryProperty @ 0x1406FA554 (PiCMGetRegistryProperty.c)
 *     PiControlGetPropertyData @ 0x140706470 (PiControlGetPropertyData.c)
 *     _CmDeleteDeviceWorker @ 0x14071B1A8 (_CmDeleteDeviceWorker.c)
 *     PiCMQueryRemove @ 0x14071CE68 (PiCMQueryRemove.c)
 *     PpDevCfgProcessDeviceClass @ 0x14071DFA8 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14071E318 (PpDevCfgProcessDeviceReset.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140722410 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140725C5C (PiPnpRtlSetObjectProperty.c)
 *     PipCallDriverAddDevice @ 0x140727744 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1407280C8 (PnpCallDriverQueryServiceHelper.c)
 *     PipProcessStartPhase3 @ 0x14072ACC0 (PipProcessStartPhase3.c)
 *     PiDevCfgProcessDevice @ 0x14072E460 (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14072E988 (PpDevCfgProcessDeviceOperations.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14072FEDC (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDeviceRegistration @ 0x140733D1C (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140733ED0 (PpForEachDeviceInstanceDriver.c)
 *     IopInitializeDeviceInstanceKey @ 0x140739284 (IopInitializeDeviceInstanceKey.c)
 *     IopPnPDispatch @ 0x140739C80 (IopPnPDispatch.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14073D14C (PnpIsDeviceInstanceEnabled.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1407435BC (PiDcUpdateDeviceContainerMembership.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14074B1C0 (PipGetRegistrySecurityWithFallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x14074B714 (PipGetRegistryDwordWithFallback.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14074D730 (PiPnpRtlServiceFilterCallback.c)
 *     PiQueryRemovableDeviceOverride @ 0x140750EF8 (PiQueryRemovableDeviceOverride.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140755888 (PiDevCfgEnumDeviceKeys.c)
 *     PnpCheckDeviceIdsChanged @ 0x1407578BC (PnpCheckDeviceIdsChanged.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140757B48 (_CmIsDeviceSafeRemovalRequired.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x14075B020 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x14075B958 (PipGenerateContainerID.c)
 *     _CmIsLocalMachineContainer @ 0x14076005C (_CmIsLocalMachineContainer.c)
 *     IopIsReportedAlready @ 0x140796CE8 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407ABC40 (PiDevCfgProcessDeviceCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A0570 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1408A07D8 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A1E1C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A3840 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A698C (PiDevCfgResolveVariableKeyHandle.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408A77EC (PpDevCfgProcessDeviceExtensions.c)
 *     PiCMCreateDevice @ 0x1408AC340 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x1408B0B6C (PiInitializeDevice.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B15E0 (PiCreateDriverSwDeviceCallback.c)
 *     _CmClassFilterCallback @ 0x1409739C0 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140973D50 (_CmServiceFilterCallback.c)
 *     PipMigrateResetDeviceCallback @ 0x140A8D9A0 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x140A8DAC0 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405E05EC (_CmGetDeviceRegPropWorker.c)
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

/*
 * XREFs of _CmGetDeviceRegProp @ 0x1406AFC70
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x140684F18 (PiDcHandleCustomDeviceEvent.c)
 *     PiPnpRtlCmActionCallback @ 0x1406A78A0 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406AC24C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406AEE88 (_CmGetDeviceSoftwareKey.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406AF11C (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     IoGetDeviceProperty @ 0x1406AF4F0 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1406AFA48 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406AFDF0 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceStatus @ 0x1406B0C40 (_CmGetDeviceStatus.c)
 *     PiCMGetRegistryProperty @ 0x1406B1180 (PiCMGetRegistryProperty.c)
 *     PiControlGetPropertyData @ 0x140710F30 (PiControlGetPropertyData.c)
 *     _CmDeleteDeviceWorker @ 0x140718E18 (_CmDeleteDeviceWorker.c)
 *     PiCMQueryRemove @ 0x14071AEE8 (PiCMQueryRemove.c)
 *     PpDevCfgProcessDeviceClass @ 0x14071C028 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14071C398 (PpDevCfgProcessDeviceReset.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140720550 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PipGetRegistrySecurityWithFallback @ 0x140723D5C (PipGetRegistrySecurityWithFallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x140724390 (PipGetRegistryDwordWithFallback.c)
 *     PipCallDriverAddDevice @ 0x140727018 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14072799C (PnpCallDriverQueryServiceHelper.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x14072AE1C (PiPnpRtlSetObjectProperty.c)
 *     PipProcessStartPhase3 @ 0x14073045C (PipProcessStartPhase3.c)
 *     PiDeviceRegistration @ 0x14073116C (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140731320 (PpForEachDeviceInstanceDriver.c)
 *     PiDevCfgProcessDevice @ 0x140734D34 (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14073525C (PpDevCfgProcessDeviceOperations.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1407367B0 (PiPnpRtlSetDeviceRegProperty.c)
 *     IopInitializeDeviceInstanceKey @ 0x140737704 (IopInitializeDeviceInstanceKey.c)
 *     IopPnPDispatch @ 0x140738100 (IopPnPDispatch.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14073B5CC (PnpIsDeviceInstanceEnabled.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140741A3C (PiDcUpdateDeviceContainerMembership.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140749310 (PiPnpRtlServiceFilterCallback.c)
 *     PiQueryRemovableDeviceOverride @ 0x14074C870 (PiQueryRemovableDeviceOverride.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1407511F8 (PiDevCfgEnumDeviceKeys.c)
 *     PnpCheckDeviceIdsChanged @ 0x140755948 (PnpCheckDeviceIdsChanged.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140755BD8 (_CmIsDeviceSafeRemovalRequired.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x1407591A0 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x140759D50 (PipGenerateContainerID.c)
 *     _CmIsLocalMachineContainer @ 0x14075DD4C (_CmIsLocalMachineContainer.c)
 *     IopIsReportedAlready @ 0x140796F38 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407A8AE0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14089F250 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x14089F4B8 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A0AFC (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A2520 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A566C (PiDevCfgResolveVariableKeyHandle.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408A64CC (PpDevCfgProcessDeviceExtensions.c)
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x1408AF84C (PiInitializeDevice.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B02C0 (PiCreateDriverSwDeviceCallback.c)
 *     _CmClassFilterCallback @ 0x140972620 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x1409729B0 (_CmServiceFilterCallback.c)
 *     PipMigrateResetDeviceCallback @ 0x140A8E3B0 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x140A8E4D0 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406AFDF0 (_CmGetDeviceRegPropWorker.c)
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

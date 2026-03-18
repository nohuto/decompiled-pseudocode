/*
 * XREFs of _PnpGetObjectProperty @ 0x1405DB4CC
 * Callers:
 *     PiRebalanceOptOut @ 0x14050AED8 (PiRebalanceOptOut.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x1405D7B98 (PiPnpRtlIsDeviceValidForSession.c)
 *     PiCMGetObjectProperty @ 0x1405D848C (PiCMGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405D9D60 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405DA0A4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PnpGetObjectProperty @ 0x1405DB38C (PnpGetObjectProperty.c)
 *     PiDqPnPGetObjectProperty @ 0x1405DB8E4 (PiDqPnPGetObjectProperty.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1405E0240 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405E05EC (_CmGetDeviceRegPropWorker.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140647870 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x140647F6C (PiUEventCacheObjectProperties.c)
 *     IopGetDeviceInterfaces @ 0x1406BE69C (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406BF1AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1406C098C (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmGetDeviceParent @ 0x1406C2F98 (_CmGetDeviceParent.c)
 *     PnpGetDevicePropertyData @ 0x1407118E8 (PnpGetDevicePropertyData.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140713820 (PiDrvDbLoadNodeWorkerCallback.c)
 *     IoGetDeviceInterfaceAlias @ 0x140719730 (IoGetDeviceInterfaceAlias.c)
 *     _CmDeleteDeviceWorker @ 0x14071B1A8 (_CmDeleteDeviceWorker.c)
 *     _CmMatchLastKnownParentCallback @ 0x14071CCA0 (_CmMatchLastKnownParentCallback.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14071E56C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140720CA8 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDevCfgConfigureDevice @ 0x1407232F0 (PiDevCfgConfigureDevice.c)
 *     PiPnpRtlSetObjectProperty @ 0x140725C5C (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x140726680 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PipCallDriverAddDevice @ 0x140727744 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1407280C8 (PnpCallDriverQueryServiceHelper.c)
 *     _CmUpdateDevicePanel @ 0x14072B450 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x14072BEC8 (_CmQueryDevicePanelPldProperty.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14072C768 (IopDeviceObjectFromSymbolicName.c)
 *     PiDevCfgQueryObjectProperties @ 0x14072D9CC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFindDeviceDriver @ 0x14072DE0C (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgProcessDevice @ 0x14072E460 (PiDevCfgProcessDevice.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140733A90 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PpForEachDeviceInstanceDriver @ 0x140733ED0 (PpForEachDeviceInstanceDriver.c)
 *     IopProcessSetInterfaceState @ 0x14073452C (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140734FE4 (IopRegisterDeviceInterface.c)
 *     PnpAssignResourcesToDevices @ 0x14073A100 (PnpAssignResourcesToDevices.c)
 *     PiDcHandleDeviceEvent @ 0x140742D74 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x140742F54 (PiDcHandleInterfaceEvent.c)
 *     PiDcContainerRequiresConfiguration @ 0x140743CB8 (PiDcContainerRequiresConfiguration.c)
 *     PiDevCfgCopyDeviceKey @ 0x14074A84C (PiDevCfgCopyDeviceKey.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x14074BBC0 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14074D730 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgCopyObjectProperties @ 0x140755C48 (PiDevCfgCopyObjectProperties.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140757B48 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiUEventDeviceNeedsInstall @ 0x140759650 (PiUEventDeviceNeedsInstall.c)
 *     PiDevCfgMigrateDevice @ 0x14075BC34 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x14075E560 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1407601E0 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDmListInitEnumCallback @ 0x14077D9B0 (PiDmListInitEnumCallback.c)
 *     PiDrvDbSetupNodes @ 0x14078C98C (PiDrvDbSetupNodes.c)
 *     _CmGetParentDeviceContainerId @ 0x1407BDD38 (_CmGetParentDeviceContainerId.c)
 *     PipGetDeviceObjectLocation @ 0x140899444 (PipGetDeviceObjectLocation.c)
 *     PnpGetDeviceInstancePropertyData @ 0x14089DC30 (PnpGetDeviceInstancePropertyData.c)
 *     PnpUpdateRebootRequiredReason @ 0x14089F004 (PnpUpdateRebootRequiredReason.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14089F860 (PnpGetDeviceInterfacePropertyData.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A0570 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1408A3768 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408ADFF8 (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x1408B2548 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x1408B2B54 (PiAuditDeviceStart.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x1408B2E14 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B39F4 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x140972C40 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmUpdateDevicePanelInterface @ 0x140975930 (_CmUpdateDevicePanelInterface.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140976AEC (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140977400 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x140977E90 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     _PnpGetObjectPropertyWorker @ 0x1405DB658 (_PnpGetObjectPropertyWorker.c)
 */

__int64 __fastcall PnpGetObjectProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        int a11)
{
  unsigned int v11; // r14d
  __int64 (__fastcall *v14)(__int64, __int64, __int64, __int64, int, _QWORD *); // rdi
  int v15; // eax
  unsigned int ObjectPropertyWorker; // eax
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  _QWORD v22[2]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v23; // [rsp+78h] [rbp-31h]
  __int64 v24; // [rsp+80h] [rbp-29h]
  __int64 v25; // [rsp+88h] [rbp-21h]
  __int64 v26; // [rsp+90h] [rbp-19h]
  __int64 v27; // [rsp+98h] [rbp-11h]
  int v28; // [rsp+A0h] [rbp-9h]
  int v29; // [rsp+A4h] [rbp-5h]
  __int64 v30; // [rsp+A8h] [rbp-1h]
  int v31; // [rsp+B0h] [rbp+7h]
  int v32; // [rsp+B4h] [rbp+Bh]

  v11 = a3;
  v22[0] = 0LL;
  v22[1] = 0LL;
  v29 = 0;
  v32 = 0;
  v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 488);
  v24 = a5;
  v25 = a6;
  v26 = a7;
  v27 = a8;
  v28 = a9;
  v30 = a10;
  v31 = a11;
  v23 = a4;
  if ( v14 )
  {
    v15 = v14(a1, a2, a3, 8LL, 1, v22);
    if ( v15 == -1073741822 )
    {
      v14 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        return LODWORD(v22[0]);
      if ( v15 )
        return (unsigned int)-1073741595;
    }
  }
  ObjectPropertyWorker = PnpGetObjectPropertyWorker(a1, a2, v11, v23, v24, v25, v26, v27, v28, v30, v31);
  v17 = ObjectPropertyWorker;
  if ( !v14 )
    return v17;
  LODWORD(v22[0]) = ObjectPropertyWorker;
  v18 = v14(a1, a2, v11, 8LL, 2, v22);
  v19 = v18;
  if ( v18 == -1073741822 )
    return v17;
  if ( v18 == -1073741536 )
    return LODWORD(v22[0]);
  v20 = v17;
  if ( v19 )
    return (unsigned int)-1073741595;
  return v20;
}

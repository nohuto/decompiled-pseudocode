/*
 * XREFs of _PnpGetObjectProperty @ 0x14063FDAC
 * Callers:
 *     PiRebalanceOptOut @ 0x14050E808 (PiRebalanceOptOut.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x14063C64C (PiPnpRtlIsDeviceValidForSession.c)
 *     PiCMGetObjectProperty @ 0x14063CD6C (PiCMGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x14063E640 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x14063E984 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PnpGetObjectProperty @ 0x14063FC6C (PnpGetObjectProperty.c)
 *     PiDqPnPGetObjectProperty @ 0x1406401C4 (PiDqPnPGetObjectProperty.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140648E60 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x14064955C (PiUEventCacheObjectProperties.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x14066B550 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x14066B8FC (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceParent @ 0x1406E46C8 (_CmGetDeviceParent.c)
 *     IopGetDeviceInterfaces @ 0x1406E8FDC (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406E9AEC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1406EB2CC (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PnpGetDevicePropertyData @ 0x14070F9B8 (PnpGetDevicePropertyData.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140721510 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmMatchLastKnownParentCallback @ 0x140722220 (_CmMatchLastKnownParentCallback.c)
 *     IoGetDeviceInterfaceAlias @ 0x140727720 (IoGetDeviceInterfaceAlias.c)
 *     _CmDeleteDeviceWorker @ 0x140729198 (_CmDeleteDeviceWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14072C408 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14072EC98 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDevCfgFindDeviceDriver @ 0x140731708 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgConfigureDevice @ 0x140731D80 (PiDevCfgConfigureDevice.c)
 *     PiPnpRtlSetObjectProperty @ 0x1407346EC (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x140735110 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PipCallDriverAddDevice @ 0x1407361D4 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140736B58 (PnpCallDriverQueryServiceHelper.c)
 *     _CmUpdateDevicePanel @ 0x140739EE0 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x14073A958 (_CmQueryDevicePanelPldProperty.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14073B1E4 (IopDeviceObjectFromSymbolicName.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073C448 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgProcessDevice @ 0x14073EAE0 (PiDevCfgProcessDevice.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140742F20 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PpForEachDeviceInstanceDriver @ 0x140743360 (PpForEachDeviceInstanceDriver.c)
 *     IopProcessSetInterfaceState @ 0x1407439BC (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140744474 (IopRegisterDeviceInterface.c)
 *     PnpAssignResourcesToDevices @ 0x140749010 (PnpAssignResourcesToDevices.c)
 *     PiDcHandleDeviceEvent @ 0x140751954 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x140751B34 (PiDcHandleInterfaceEvent.c)
 *     PiDcContainerRequiresConfiguration @ 0x140752898 (PiDcContainerRequiresConfiguration.c)
 *     PiDevCfgCopyDeviceKey @ 0x14075942C (PiDevCfgCopyDeviceKey.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x14075A7A0 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14075C310 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgCopyObjectProperties @ 0x140764888 (PiDevCfgCopyObjectProperties.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140766788 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiUEventDeviceNeedsInstall @ 0x140767E0C (PiUEventDeviceNeedsInstall.c)
 *     PiDevCfgMigrateDevice @ 0x14076A524 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x14076CBD0 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x14076E830 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDmListInitEnumCallback @ 0x14078AF50 (PiDmListInitEnumCallback.c)
 *     PiDrvDbSetupNodes @ 0x1407990CC (PiDrvDbSetupNodes.c)
 *     _CmGetParentDeviceContainerId @ 0x1407CC5C8 (_CmGetParentDeviceContainerId.c)
 *     PipGetDeviceObjectLocation @ 0x14089EF74 (PipGetDeviceObjectLocation.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1408A3760 (PnpGetDeviceInstancePropertyData.c)
 *     PnpUpdateRebootRequiredReason @ 0x1408A4B34 (PnpUpdateRebootRequiredReason.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408A5390 (PnpGetDeviceInterfacePropertyData.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A60A0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1408A9298 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B3B28 (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x1408B8168 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x1408B8774 (PiAuditDeviceStart.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x1408B8A34 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B9614 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x140978A10 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmUpdateDevicePanelInterface @ 0x14097B700 (_CmUpdateDevicePanelInterface.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x14097C8BC (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14097D1D0 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x14097DC60 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     _PnpGetObjectPropertyWorker @ 0x14063FF38 (_PnpGetObjectPropertyWorker.c)
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

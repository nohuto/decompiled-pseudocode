/*
 * XREFs of _PnpGetObjectProperty @ 0x1406A9AFC
 * Callers:
 *     PiRebalanceOptOut @ 0x14050A888 (PiRebalanceOptOut.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140683E60 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x14068455C (PiUEventCacheObjectProperties.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x1406A61CC (PiPnpRtlIsDeviceValidForSession.c)
 *     PiCMGetObjectProperty @ 0x1406A6ABC (PiCMGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1406A8390 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1406A86D4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PnpGetObjectProperty @ 0x1406A99BC (PnpGetObjectProperty.c)
 *     PiDqPnPGetObjectProperty @ 0x1406A9F14 (PiDqPnPGetObjectProperty.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406AC24C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1406AD3A8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406AFDF0 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1406B0DE0 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceParent @ 0x1406B1884 (_CmGetDeviceParent.c)
 *     IopGetDeviceInterfaces @ 0x1406B3D5C (IopGetDeviceInterfaces.c)
 *     PnpGetDevicePropertyData @ 0x1406EDF58 (PnpGetDevicePropertyData.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140711970 (PiDrvDbLoadNodeWorkerCallback.c)
 *     IoGetDeviceInterfaceAlias @ 0x1407173A0 (IoGetDeviceInterfaceAlias.c)
 *     _CmDeleteDeviceWorker @ 0x140718E18 (_CmDeleteDeviceWorker.c)
 *     _CmMatchLastKnownParentCallback @ 0x14071AD20 (_CmMatchLastKnownParentCallback.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14071C5EC (PiDevCfgResetDeviceDriverSettings.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14071EDE4 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDevCfgFindDeviceDriver @ 0x140721430 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x140722564 (PiDevCfgQueryObjectProperties.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1407238E8 (IopDeviceObjectFromSymbolicName.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x140724830 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PipCallDriverAddDevice @ 0x140727018 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14072799C (PnpCallDriverQueryServiceHelper.c)
 *     PiDevCfgConfigureDevice @ 0x1407284B0 (PiDevCfgConfigureDevice.c)
 *     PiPnpRtlSetObjectProperty @ 0x14072AE1C (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x14072B840 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _CmUpdateDevicePanel @ 0x14072CD38 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x14072D7B0 (_CmQueryDevicePanelPldProperty.c)
 *     IopRegisterDeviceInterface @ 0x14072DB00 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x14072FAFC (IopProcessSetInterfaceState.c)
 *     PpForEachDeviceInstanceDriver @ 0x140731320 (PpForEachDeviceInstanceDriver.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140731BBC (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDevCfgProcessDevice @ 0x140734D34 (PiDevCfgProcessDevice.c)
 *     PnpAssignResourcesToDevices @ 0x140738580 (PnpAssignResourcesToDevices.c)
 *     PiDcHandleDeviceEvent @ 0x1407411F4 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x1407413D4 (PiDcHandleInterfaceEvent.c)
 *     PiDcContainerRequiresConfiguration @ 0x140742138 (PiDcContainerRequiresConfiguration.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140749310 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgCopyObjectProperties @ 0x1407515B8 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x1407550CC (PiDevCfgCopyDeviceKey.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140755BD8 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiUEventDeviceNeedsInstall @ 0x140756948 (PiUEventDeviceNeedsInstall.c)
 *     PiDevCfgMigrateDevice @ 0x14075A02C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x14075C080 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x14075DEB0 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDmListInitEnumCallback @ 0x14077E240 (PiDmListInitEnumCallback.c)
 *     PiDrvDbSetupNodes @ 0x14078AABC (PiDrvDbSetupNodes.c)
 *     _CmGetParentDeviceContainerId @ 0x1407BABC8 (_CmGetParentDeviceContainerId.c)
 *     PipGetDeviceObjectLocation @ 0x140898124 (PipGetDeviceObjectLocation.c)
 *     PnpGetDeviceInstancePropertyData @ 0x14089C910 (PnpGetDeviceInstancePropertyData.c)
 *     PnpUpdateRebootRequiredReason @ 0x14089DCE4 (PnpUpdateRebootRequiredReason.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14089E540 (PnpGetDeviceInterfacePropertyData.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14089F250 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1408A2448 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408ACCD8 (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x1408B1228 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x1408B1834 (PiAuditDeviceStart.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x1408B1AF4 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B26D4 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x1409718A0 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmUpdateDevicePanelInterface @ 0x140974590 (_CmUpdateDevicePanelInterface.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x14097574C (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140976060 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x140976AF0 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     _PnpGetObjectPropertyWorker @ 0x1406A9C88 (_PnpGetObjectPropertyWorker.c)
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

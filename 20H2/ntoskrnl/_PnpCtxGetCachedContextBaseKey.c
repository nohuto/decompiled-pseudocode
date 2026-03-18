/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x14066D164
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C6970 (PipUpdateDeviceProducts.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1406405A4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406702F4 (_CmOpenDeviceRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x1406E5A48 (DrvDbLoadDatabaseNode.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406E6FF4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406EAC9C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140728330 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1407289A0 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140728EC4 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072975C (_CmDeleteDeviceRegKeyWorker.c)
 *     PipOpenServiceEnumKeys @ 0x140737438 (PipOpenServiceEnumKeys.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140753B50 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14075B7A4 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipMakeGloballyUniqueId @ 0x140767F84 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgInitMigrationContext @ 0x14076A620 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14076C9EC (PiDevCfgConfigureDeviceLocation.c)
 *     NtEnableLastKnownGood @ 0x140778440 (NtEnableLastKnownGood.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140778958 (_PnpCtxOpenContextBaseKey.c)
 *     NtDisableLastKnownGood @ 0x140779220 (NtDisableLastKnownGood.c)
 *     PipHardwareConfigOpenKey @ 0x1407A2250 (PipHardwareConfigOpenKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1407A71EC (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x1407A73D0 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x1407A7608 (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1407A7698 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1407A7AA4 (_CmGetMatchingCommonClassListWorker.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14089DFFC (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x1408A4478 (PnpCheckDriverDependencies.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x1408A9B40 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x1408B014C (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x1408B2998 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x1408B2D9C (PiCMEnumerateSubKeys.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140977730 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140978B28 (_CmGetDevicesInBaseContainerList.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14097A79C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x14097B0EC (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14097B4BC (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x14097BFC4 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x14097E4DC (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipMigratePnpState @ 0x140A4FA7C (PipMigratePnpState.c)
 *     PipHardwareConfigInit @ 0x140A4FCEC (PipHardwareConfigInit.c)
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140A51D80 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A51E0C (PipProcessPendingServices.c)
 *     PnpOpenCCSPnpRegKey @ 0x140A52350 (PnpOpenCCSPnpRegKey.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A93CE0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A93EF0 (PipCommitPendingService.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x14066D1D0 (_PnpCtxGetCachedNodeBaseKey.c)
 */

__int64 __fastcall PnpCtxGetCachedContextBaseKey(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // r8

  v4 = *(_QWORD *)(a1 + 8LL * a2 + 96);
  if ( !v4 )
  {
    if ( a2 > 11 )
    {
      if ( a2 <= 13 || a2 > 15 )
        goto LABEL_9;
    }
    else if ( a2 < 9 && a2 != 5 )
    {
      goto LABEL_9;
    }
    v6 = *(_QWORD *)(a1 + 56);
    v4 = v6 - 16;
    if ( v6 != a1 + 56 )
    {
LABEL_10:
      *(_QWORD *)(a1 + 8LL * a2 + 96) = v4;
      return PnpCtxGetCachedNodeBaseKey(a1, v4, (unsigned int)a2, a3);
    }
LABEL_9:
    v4 = *(_QWORD *)(a1 + 88);
    goto LABEL_10;
  }
  return PnpCtxGetCachedNodeBaseKey(a1, v4, (unsigned int)a2, a3);
}

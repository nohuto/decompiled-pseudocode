/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x1405E13D4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C45E0 (PipUpdateDeviceProducts.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1405DBCC4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405E2D68 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406C035C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406C28E4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x1406C4318 (DrvDbLoadDatabaseNode.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14071A340 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14071A9B0 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14071AED4 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14071B76C (_CmDeleteDeviceRegKeyWorker.c)
 *     PipOpenServiceEnumKeys @ 0x1407289A8 (PipOpenServiceEnumKeys.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140744F70 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14074CBC4 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipMakeGloballyUniqueId @ 0x1407597C8 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgInitMigrationContext @ 0x14075BD30 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14075E37C (PiDevCfgConfigureDeviceLocation.c)
 *     NtEnableLastKnownGood @ 0x140769E30 (NtEnableLastKnownGood.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14076A348 (_PnpCtxOpenContextBaseKey.c)
 *     NtDisableLastKnownGood @ 0x14076AC10 (NtDisableLastKnownGood.c)
 *     PipHardwareConfigOpenKey @ 0x14078BFA0 (PipHardwareConfigOpenKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140797EBC (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x1407980A0 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x1407982D8 (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140798368 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x140798774 (_CmGetMatchingCommonClassListWorker.c)
 *     PipHardwareConfigClearStartOverrides @ 0x1408984CC (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x14089E948 (PnpCheckDriverDependencies.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x1408A4010 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x1408AA61C (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x1408ACE68 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x1408AD26C (PiCMEnumerateSubKeys.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140971960 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140972D58 (_CmGetDevicesInBaseContainerList.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1409749CC (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x14097531C (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1409756EC (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1409761F4 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x14097870C (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipHardwareConfigInit @ 0x140A4F66C (PipHardwareConfigInit.c)
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140A51700 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A5178C (PipProcessPendingServices.c)
 *     PnpOpenCCSPnpRegKey @ 0x140A51CD0 (PnpOpenCCSPnpRegKey.c)
 *     PipMigratePnpState @ 0x140A6EFD4 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A8DFE0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A8E1F0 (PipCommitPendingService.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1405E1440 (_PnpCtxGetCachedNodeBaseKey.c)
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

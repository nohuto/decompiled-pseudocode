/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x14061750C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C3720 (PipUpdateDeviceProducts.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140618394 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1406AA2F4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406AB634 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x1406ADF9C (DrvDbLoadDatabaseNode.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406D9B04 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140717FB0 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140718620 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140718B44 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1407193DC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1407219E8 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipOpenServiceEnumKeys @ 0x14072827C (PipOpenServiceEnumKeys.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1407433F0 (_CmGetDeviceContainerIdFromBase.c)
 *     PipMakeGloballyUniqueId @ 0x140757BAC (PipMakeGloballyUniqueId.c)
 *     PiDevCfgInitMigrationContext @ 0x14075A128 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14075BE9C (PiDevCfgConfigureDeviceLocation.c)
 *     NtEnableLastKnownGood @ 0x140767A50 (NtEnableLastKnownGood.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140767F68 (_PnpCtxOpenContextBaseKey.c)
 *     NtDisableLastKnownGood @ 0x140768830 (NtDisableLastKnownGood.c)
 *     PipHardwareConfigOpenKey @ 0x140793170 (PipHardwareConfigOpenKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14079810C (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x1407982F0 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x140798528 (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1407985B8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1407989C4 (_CmGetMatchingCommonClassListWorker.c)
 *     PipHardwareConfigClearStartOverrides @ 0x1408971AC (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x14089D628 (PnpCheckDriverDependencies.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x1408A2CF0 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x1408A92FC (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x1408ABB48 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x1408ABF4C (PiCMEnumerateSubKeys.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1409705C0 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1409719B8 (_CmGetDevicesInBaseContainerList.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14097362C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140973F7C (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14097434C (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x140974E54 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x14097736C (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipMigratePnpState @ 0x140A49980 (PipMigratePnpState.c)
 *     PipHardwareConfigInit @ 0x140A49BF0 (PipHardwareConfigInit.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140A4BAD0 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A4BB5C (PipProcessPendingServices.c)
 *     PnpOpenCCSPnpRegKey @ 0x140A4C030 (PnpOpenCCSPnpRegKey.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A8E9F0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A8EC00 (PipCommitPendingService.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140617578 (_PnpCtxGetCachedNodeBaseKey.c)
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

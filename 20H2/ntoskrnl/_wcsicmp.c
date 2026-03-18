/*
 * XREFs of _wcsicmp @ 0x1403D1760
 * Callers:
 *     LdrRscIsTypeExist @ 0x1402FCB3C (LdrRscIsTypeExist.c)
 *     LdrpResSearchResourceMappedFile @ 0x1402FDBB4 (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x14038145C (LdrpVerifyAlternateResourceModuleEx.c)
 *     HalpMcUpdateFindDataTableEntry @ 0x1403AE1DC (HalpMcUpdateFindDataTableEntry.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1403B70A0 (RtlpMuiRegAddAlternateCodePage.c)
 *     PipUpdateDeviceProducts @ 0x1403C6970 (PipUpdateDeviceProducts.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x14050C5A8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14050C61C (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1405695A8 (PopFxIsDevicePotentialDripsConstraint.c)
 *     RtlpHashStringToAtom @ 0x140628D10 (RtlpHashStringToAtom.c)
 *     PiDqPropertyCallback @ 0x140641490 (PiDqPropertyCallback.c)
 *     PropertyEval @ 0x14064211C (PropertyEval.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140646A00 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140648B00 (PiDcHandleCustomDeviceEvent.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140649C48 (PiUEventNotifyTargetDeviceChange.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x14066B550 (PiPnpRtlInterfaceFilterCallback.c)
 *     LdrpSearchResourceSection_U @ 0x1406AC040 (LdrpSearchResourceSection_U.c)
 *     PiDmCompareObjects @ 0x1406B72A0 (PiDmCompareObjects.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1406C94D0 (PiPnpRtlObjectEventCompareObjects.c)
 *     StringListContains @ 0x1406D6610 (StringListContains.c)
 *     ConstraintEval @ 0x1406D810C (ConstraintEval.c)
 *     GetPropertyFromPropArray @ 0x1406DD6C0 (GetPropertyFromPropArray.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406DF688 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140721FEC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     _CmMatchLastKnownParentCallback @ 0x140722220 (_CmMatchLastKnownParentCallback.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1407222DC (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140731268 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14073143C (DrvDbOpenDriverDatabaseRegKey.c)
 *     _CmUpdateDevicePanel @ 0x140739EE0 (_CmUpdateDevicePanel.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14073EA70 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiSwStopDestroy @ 0x140741C2C (PiSwStopDestroy.c)
 *     PipCheckForDenyExecute @ 0x140744DBC (PipCheckForDenyExecute.c)
 *     PiPnpRtlObjectEventWorker @ 0x140745470 (PiPnpRtlObjectEventWorker.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x140747BA0 (PiSwDeviceMakeCompatibleIds.c)
 *     IopErrorLogThread @ 0x14074E910 (IopErrorLogThread.c)
 *     WmipPrepareWnodeSI @ 0x140750834 (WmipPrepareWnodeSI.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14075219C (PiDcUpdateDeviceContainerMembership.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1407592A0 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14075B19C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     PiDqQueryApplyObjectEvent @ 0x14075EE34 (PiDqQueryApplyObjectEvent.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1407643B4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140767904 (PiBuildDeviceNodeInstancePath.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140768634 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140769A44 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiDevCfgMigrateDevice @ 0x14076A524 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x14076B188 (PiDevCfgEnforceDevicePolicy.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14076C93C (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiDqActionDataGetChangedProperties @ 0x14076CE54 (PiDqActionDataGetChangedProperties.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14076E18C (PiSwDeviceFindInterfaceEntry.c)
 *     _CmIsLocalMachineContainer @ 0x14076E6CC (_CmIsLocalMachineContainer.c)
 *     PiSwDeviceCompareObjects @ 0x14076EFE0 (PiSwDeviceCompareObjects.c)
 *     PiDevCfgResolveVariable @ 0x1407775C0 (PiDevCfgResolveVariable.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407788A0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiGetNtPartitionPath @ 0x14077E968 (BiGetNtPartitionPath.c)
 *     BiIsValidDiskDevice @ 0x14077ED48 (BiIsValidDiskDevice.c)
 *     PiSwUpdateArrayProperties @ 0x1407869B4 (PiSwUpdateArrayProperties.c)
 *     DrvDbSuspendDatabase @ 0x1407992BC (DrvDbSuspendDatabase.c)
 *     SLQueryLicenseValueInternal @ 0x1407A0F5C (SLQueryLicenseValueInternal.c)
 *     RtlpLangNameInMultiSzString @ 0x1407A3A2C (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x1407A40E8 (RtlpMuiRegGetStringIndexInPool.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1407ADDA0 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x1407AE374 (AslpFileVerQueryBlock.c)
 *     AslpFileGetVersionBlock @ 0x1407AE608 (AslpFileGetVersionBlock.c)
 *     ArbShareDriverExclusive @ 0x1407B4484 (ArbShareDriverExclusive.c)
 *     SdbpFindMatchingName @ 0x1407BC960 (SdbpFindMatchingName.c)
 *     SdbFindFirstNamedTag @ 0x1407BD58C (SdbFindFirstNamedTag.c)
 *     PiPnpRtlRegisterDriverMachineNodeCallback @ 0x1407D03B0 (PiPnpRtlRegisterDriverMachineNodeCallback.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407D0420 (PiDrvDbRegisterNodeCallback.c)
 *     PnpCheckDriverDependencies @ 0x1408A4478 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x1408A5920 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A60A0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1408A6308 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A8834 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408AA078 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x1408AA9F0 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408AC4BC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1408B133C (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B7200 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408B91D8 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B9CD8 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbSetupNodeHive @ 0x1408BA984 (PiDrvDbSetupNodeHive.c)
 *     PpmProcessSettingsFromQueryTable @ 0x1408F86F8 (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140966FAC (SdbpCheckMatchingRegistryValue.c)
 *     SdbpMatchDeviceString @ 0x1409687B8 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x14096885C (SdbpFindNextNamedTag.c)
 *     SiGetEspFromFirmware @ 0x140976890 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x140976C04 (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x140976CB0 (SiIsValidWindowsBootEntry.c)
 *     _CmFindFilterListInflectionPoint @ 0x14097C3A8 (_CmFindFilterListInflectionPoint.c)
 *     _CmGetDeclarativeFilterList @ 0x14097C4A4 (_CmGetDeclarativeFilterList.c)
 *     _CmMergeFilterLists @ 0x14097E04C (_CmMergeFilterLists.c)
 *     _PnpMultiSzDeleteString @ 0x14097EC50 (_PnpMultiSzDeleteString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409809E0 (DrvDbGetObjectSubKeyCallback.c)
 *     VhdiVerifyBootDisk @ 0x140982C1C (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14098390C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140984090 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x1409CF7F8 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x1409F634C (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A5FFB4 (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x140A936A0 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140A94250 (PipPendingServicesFilter.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *Str1, const wchar_t *Str2)
{
  const wchar_t *v2; // r10
  signed __int64 v3; // r9
  unsigned __int16 v4; // r8
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r8

  v2 = Str2;
  v3 = (char *)Str1 - (char *)Str2;
  do
  {
    v4 = *(const wchar_t *)((char *)v2 + v3);
    v5 = *v2++;
    v6 = v4 + 32;
    if ( (unsigned __int16)(v4 - 65) > 0x19u )
      v6 = v4;
    v7 = v5 + 32;
    if ( (unsigned __int16)(v5 - 65) > 0x19u )
      v7 = v5;
  }
  while ( v6 && v6 == v7 );
  return v6 - v7;
}

/*
 * XREFs of _wcsicmp @ 0x1403CDC90
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x14033AD04 (LdrpResSearchResourceMappedFile.c)
 *     LdrRscIsTypeExist @ 0x14033BFE8 (LdrRscIsTypeExist.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x14037ED3C (LdrpVerifyAlternateResourceModuleEx.c)
 *     HalpMcUpdateFindDataTableEntry @ 0x1403A4B44 (HalpMcUpdateFindDataTableEntry.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1403B3888 (RtlpMuiRegAddAlternateCodePage.c)
 *     PipUpdateDeviceProducts @ 0x1403C3720 (PipUpdateDeviceProducts.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x140508628 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14050869C (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x140565524 (PopFxIsDevicePotentialDripsConstraint.c)
 *     RtlpHashStringToAtom @ 0x1406384F0 (RtlpHashStringToAtom.c)
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140684930 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140684F18 (PiDcHandleCustomDeviceEvent.c)
 *     ConstraintEval @ 0x1406A0008 (ConstraintEval.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1406A055C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     StringListContains @ 0x1406A12EC (StringListContains.c)
 *     PropertyEval @ 0x1406A215C (PropertyEval.c)
 *     PiDqPropertyCallback @ 0x1406ABB40 (PiDqPropertyCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1406B0DE0 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiDmCompareObjects @ 0x1406BEEE0 (PiDmCompareObjects.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1406D3870 (PiPnpRtlObjectEventCompareObjects.c)
 *     GetPropertyFromPropArray @ 0x1406E73B0 (GetPropertyFromPropArray.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406E93F8 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     LdrpSearchResourceSection_U @ 0x1406F8B20 (LdrpSearchResourceSection_U.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14071A188 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14071A334 (DrvDbSetDriverPackageMappedProperty.c)
 *     _CmMatchLastKnownParentCallback @ 0x14071AD20 (_CmMatchLastKnownParentCallback.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x140722E94 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmUpdateDevicePanel @ 0x14072CD38 (_CmUpdateDevicePanel.c)
 *     PipCheckForDenyExecute @ 0x14072E448 (PipCheckForDenyExecute.c)
 *     PiPnpRtlObjectEventWorker @ 0x14072EEE0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwStopDestroy @ 0x1407344C4 (PiSwStopDestroy.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x14073BF9C (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14073C170 (DrvDbOpenDriverDatabaseRegKey.c)
 *     IopErrorLogThread @ 0x14073E1B0 (IopErrorLogThread.c)
 *     WmipPrepareWnodeSI @ 0x1407400D4 (WmipPrepareWnodeSI.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140741A3C (PiDcUpdateDeviceContainerMembership.c)
 *     PiDqQueryApplyObjectEvent @ 0x14074BE34 (PiDqQueryApplyObjectEvent.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1407510E4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1407544FC (PiSwDeviceFindInterfaceEntry.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140754F40 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140757044 (PiBuildDeviceNodeInstancePath.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140757A28 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14075841C (PiUEventNotifyDeviceInstanceChange.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x1407592D4 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiDevCfgMigrateDevice @ 0x14075A02C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x14075AB08 (PiDevCfgEnforceDevicePolicy.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14075BDEC (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiDqActionDataGetChangedProperties @ 0x14075C394 (PiDqActionDataGetChangedProperties.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x14075D36C (PiSwDeviceMakeCompatibleIds.c)
 *     _CmIsLocalMachineContainer @ 0x14075DD4C (_CmIsLocalMachineContainer.c)
 *     PiSwDeviceCompareObjects @ 0x14075E600 (PiSwDeviceCompareObjects.c)
 *     PiDevCfgResolveVariable @ 0x140766BD0 (PiDevCfgResolveVariable.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140767EB0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiGetNtPartitionPath @ 0x14076DF58 (BiGetNtPartitionPath.c)
 *     BiIsValidDiskDevice @ 0x14076E338 (BiIsValidDiskDevice.c)
 *     PiSwUpdateArrayProperties @ 0x140775FA4 (PiSwUpdateArrayProperties.c)
 *     DrvDbSuspendDatabase @ 0x14078ACAC (DrvDbSuspendDatabase.c)
 *     SLQueryLicenseValueInternal @ 0x140791E84 (SLQueryLicenseValueInternal.c)
 *     RtlpLangNameInMultiSzString @ 0x14079494C (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x140795008 (RtlpMuiRegGetStringIndexInPool.c)
 *     AslpFileMakeStringVersionAttributes @ 0x14079A6A0 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x14079AC74 (AslpFileVerQueryBlock.c)
 *     AslpFileGetVersionBlock @ 0x14079AF08 (AslpFileGetVersionBlock.c)
 *     ArbShareDriverExclusive @ 0x1407A2AE4 (ArbShareDriverExclusive.c)
 *     SdbpFindMatchingName @ 0x1407AB8C0 (SdbpFindMatchingName.c)
 *     SdbFindFirstNamedTag @ 0x1407AC4EC (SdbFindFirstNamedTag.c)
 *     PiPnpRtlRegisterDriverMachineNodeCallback @ 0x1407BE8C0 (PiPnpRtlRegisterDriverMachineNodeCallback.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407BE930 (PiDrvDbRegisterNodeCallback.c)
 *     PnpCheckDriverDependencies @ 0x14089D628 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x14089EAD0 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14089F250 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x14089F4B8 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A19E4 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A3228 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x1408A3BA0 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A566C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1408AA4EC (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B02C0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408B2298 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B2D98 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B3A44 (PiDrvDbSetupNodeHive.c)
 *     PpmProcessSettingsFromQueryTable @ 0x1408F17F8 (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryValue @ 0x14095FE3C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpMatchDeviceString @ 0x140961648 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x1409616EC (SdbpFindNextNamedTag.c)
 *     SiGetEspFromFirmware @ 0x14096F720 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x14096FA94 (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x14096FB40 (SiIsValidWindowsBootEntry.c)
 *     _CmFindFilterListInflectionPoint @ 0x140975238 (_CmFindFilterListInflectionPoint.c)
 *     _CmGetDeclarativeFilterList @ 0x140975334 (_CmGetDeclarativeFilterList.c)
 *     _CmMergeFilterLists @ 0x140976EDC (_CmMergeFilterLists.c)
 *     _PnpMultiSzDeleteString @ 0x140977AE0 (_PnpMultiSzDeleteString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140979870 (DrvDbGetObjectSubKeyCallback.c)
 *     VhdiVerifyBootDisk @ 0x14097BAAC (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14097C79C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14097CF20 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x1409C97C8 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x1409F034C (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A59BB4 (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x140A8E3B0 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140A8EF60 (PipPendingServicesFilter.c)
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

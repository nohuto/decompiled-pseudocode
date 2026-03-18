/*
 * XREFs of _wcsicmp @ 0x1403CEAD0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x14027B884 (LdrpResSearchResourceMappedFile.c)
 *     LdrRscIsTypeExist @ 0x140362170 (LdrRscIsTypeExist.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x14037F72C (LdrpVerifyAlternateResourceModuleEx.c)
 *     HalpMcUpdateFindDataTableEntry @ 0x1403ABC0C (HalpMcUpdateFindDataTableEntry.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1403B3474 (RtlpMuiRegAddAlternateCodePage.c)
 *     PipUpdateDeviceProducts @ 0x1403C45E0 (PipUpdateDeviceProducts.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x140508C78 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x140508CEC (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x140565B74 (PopFxIsDevicePotentialDripsConstraint.c)
 *     ConstraintEval @ 0x1405D16A8 (ConstraintEval.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405D1C7C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     StringListContains @ 0x1405D2A0C (StringListContains.c)
 *     PiDqPropertyCallback @ 0x1405D2AD0 (PiDqPropertyCallback.c)
 *     PropertyEval @ 0x1405D3A60 (PropertyEval.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1405E0240 (PiPnpRtlInterfaceFilterCallback.c)
 *     RtlpHashStringToAtom @ 0x1406034B0 (RtlpHashStringToAtom.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140647510 (PiDcHandleCustomDeviceEvent.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140648658 (PiUEventNotifyTargetDeviceChange.c)
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     PiDmCompareObjects @ 0x1406DF460 (PiDmCompareObjects.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1406F6460 (PiPnpRtlObjectEventCompareObjects.c)
 *     GetPropertyFromPropArray @ 0x14070B2E0 (GetPropertyFromPropArray.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x14070D258 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     LdrpSearchResourceSection_U @ 0x140712CF4 (LdrpSearchResourceSection_U.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140714730 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14071C518 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     _CmMatchLastKnownParentCallback @ 0x14071CCA0 (_CmMatchLastKnownParentCallback.c)
 *     _CmUpdateDevicePanel @ 0x14072B450 (_CmUpdateDevicePanel.c)
 *     PiSwStopDestroy @ 0x14073287C (PiSwStopDestroy.c)
 *     PipCheckForDenyExecute @ 0x14073592C (PipCheckForDenyExecute.c)
 *     PiPnpRtlObjectEventWorker @ 0x140735FE0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x140738C90 (PiSwDeviceMakeCompatibleIds.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x14073DB1C (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14073DCF0 (DrvDbOpenDriverDatabaseRegKey.c)
 *     IopErrorLogThread @ 0x14073FD30 (IopErrorLogThread.c)
 *     WmipPrepareWnodeSI @ 0x140741C54 (WmipPrepareWnodeSI.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1407435BC (PiDcUpdateDeviceContainerMembership.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x14074A6C0 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14074C5BC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     PiDqQueryApplyObjectEvent @ 0x140750254 (PiDqQueryApplyObjectEvent.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140755774 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140758CC4 (PiBuildDeviceNodeInstancePath.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1407594CC (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140759E74 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x14075B154 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiDevCfgMigrateDevice @ 0x14075BC34 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x14075CA18 (PiDevCfgEnforceDevicePolicy.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14075E2CC (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiDqActionDataGetChangedProperties @ 0x14075E7E4 (PiDqActionDataGetChangedProperties.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14075FB1C (PiSwDeviceFindInterfaceEntry.c)
 *     _CmIsLocalMachineContainer @ 0x14076005C (_CmIsLocalMachineContainer.c)
 *     PiSwDeviceCompareObjects @ 0x1407609D0 (PiSwDeviceCompareObjects.c)
 *     PiDevCfgResolveVariable @ 0x140768FB0 (PiDevCfgResolveVariable.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14076A290 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiGetNtPartitionPath @ 0x140770368 (BiGetNtPartitionPath.c)
 *     BiIsValidDiskDevice @ 0x140770748 (BiIsValidDiskDevice.c)
 *     PiSwUpdateArrayProperties @ 0x1407783B4 (PiSwUpdateArrayProperties.c)
 *     RtlpLangNameInMultiSzString @ 0x14078A71C (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x14078ADD8 (RtlpMuiRegGetStringIndexInPool.c)
 *     DrvDbSuspendDatabase @ 0x14078CB7C (DrvDbSuspendDatabase.c)
 *     SLQueryLicenseValueInternal @ 0x1407946B4 (SLQueryLicenseValueInternal.c)
 *     AslpFileMakeStringVersionAttributes @ 0x14079EA70 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x14079F044 (AslpFileVerQueryBlock.c)
 *     AslpFileGetVersionBlock @ 0x14079F2D8 (AslpFileGetVersionBlock.c)
 *     ArbShareDriverExclusive @ 0x1407A5334 (ArbShareDriverExclusive.c)
 *     SdbpFindMatchingName @ 0x1407AEA20 (SdbpFindMatchingName.c)
 *     SdbFindFirstNamedTag @ 0x1407AF64C (SdbFindFirstNamedTag.c)
 *     PiPnpRtlRegisterDriverMachineNodeCallback @ 0x1407C1BB0 (PiPnpRtlRegisterDriverMachineNodeCallback.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407C1C20 (PiDrvDbRegisterNodeCallback.c)
 *     PnpCheckDriverDependencies @ 0x14089E948 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x14089FDF0 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A0570 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1408A07D8 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A2D04 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A4548 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x1408A4EC0 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A698C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1408AB80C (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B15E0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408B35B8 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B40B8 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B4D64 (PiDrvDbSetupNodeHive.c)
 *     PpmProcessSettingsFromQueryTable @ 0x1408F2AE8 (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1409611DC (SdbpCheckMatchingRegistryValue.c)
 *     SdbpMatchDeviceString @ 0x1409629E8 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x140962A8C (SdbpFindNextNamedTag.c)
 *     SiGetEspFromFirmware @ 0x140970AC0 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x140970E34 (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x140970EE0 (SiIsValidWindowsBootEntry.c)
 *     _CmFindFilterListInflectionPoint @ 0x1409765D8 (_CmFindFilterListInflectionPoint.c)
 *     _CmGetDeclarativeFilterList @ 0x1409766D4 (_CmGetDeclarativeFilterList.c)
 *     _CmMergeFilterLists @ 0x14097827C (_CmMergeFilterLists.c)
 *     _PnpMultiSzDeleteString @ 0x140978E80 (_PnpMultiSzDeleteString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x14097AC10 (DrvDbGetObjectSubKeyCallback.c)
 *     VhdiVerifyBootDisk @ 0x14097CE4C (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14097DB3C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14097E2C0 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x1409C97D8 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x1409F034C (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A495F4 (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x140A8D9A0 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140A8E550 (PipPendingServicesFilter.c)
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

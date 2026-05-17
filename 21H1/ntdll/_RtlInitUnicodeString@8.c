/*
 * XREFs of _RtlInitUnicodeString@8 @ 0x4B2F5020
 * Callers:
 *     _LdrpLoadShimEngine@4 @ 0x4B2A6525 (_LdrpLoadShimEngine@4.c)
 *     _LdrpBuildSystem32FileName@8 @ 0x4B2A6BD1 (_LdrpBuildSystem32FileName@8.c)
 *     _RtlpLoadMachineUIByPolicy@12 @ 0x4B2A71E0 (_RtlpLoadMachineUIByPolicy@12.c)
 *     _LdrLoadAlternateResourceModule@16 @ 0x4B2AA250 (_LdrLoadAlternateResourceModule@16.c)
 *     _RtlpGetLCIDFromLangInfoNode@12 @ 0x4B2ABEE0 (_RtlpGetLCIDFromLangInfoNode@12.c)
 *     __RtlpRemovePendingDeleteLanguages@8 @ 0x4B2AC58A (__RtlpRemovePendingDeleteLanguages@8.c)
 *     _RtlpGetNameFromLangInfoNode@12 @ 0x4B2AC660 (_RtlpGetNameFromLangInfoNode@12.c)
 *     __RtlpMuiRegLoadInstalledFromKey@8 @ 0x4B2AC6E3 (__RtlpMuiRegLoadInstalledFromKey@8.c)
 *     __RtlpMuiRegInitAnyLanguage@16 @ 0x4B2ACA44 (__RtlpMuiRegInitAnyLanguage@16.c)
 *     _RtlpMuiRegGetLanguageSpec@20 @ 0x4B2ACBB5 (_RtlpMuiRegGetLanguageSpec@20.c)
 *     _RtlpLoadInstallLanguageFallback@12 @ 0x4B2ACC28 (_RtlpLoadInstallLanguageFallback@12.c)
 *     _RtlpMuiRegAddAlternateCodePage@8 @ 0x4B2ACD4A (_RtlpMuiRegAddAlternateCodePage@8.c)
 *     _RtlpLoadLanguageConfigList@12 @ 0x4B2ACFED (_RtlpLoadLanguageConfigList@12.c)
 *     _RtlpMuiRegLoadPreferredUILanguages@24 @ 0x4B2AD2AC (_RtlpMuiRegLoadPreferredUILanguages@24.c)
 *     _RtlOpenCurrentUser@8 @ 0x4B2AD730 (_RtlOpenCurrentUser@8.c)
 *     _RtlpLoadUserUIByPolicy@12 @ 0x4B2AD890 (_RtlpLoadUserUIByPolicy@12.c)
 *     __IsMachineLanguageListInMutableLocation@0 @ 0x4B2ADAEB (__IsMachineLanguageListInMutableLocation@0.c)
 *     _RtlGetVersion@4 @ 0x4B2AFEF0 (_RtlGetVersion@4.c)
 *     _SwitchedRtlGetVersion@4 @ 0x4B2B0445 (_SwitchedRtlGetVersion@4.c)
 *     _RtlQueryActivationContextApplicationSettings@28 @ 0x4B2B4270 (_RtlQueryActivationContextApplicationSettings@28.c)
 *     _LdrResFallbackLangList@20 @ 0x4B2BA2A0 (_LdrResFallbackLangList@20.c)
 *     _GetLCIDFromLangListNodeWithLICCheck@20 @ 0x4B2BA710 (_GetLCIDFromLangListNodeWithLICCheck@20.c)
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 *     _LdrpLoadResourceFromAlternativeModule@20 @ 0x4B2BB980 (_LdrpLoadResourceFromAlternativeModule@20.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _GetOverlayRootFolder@12 @ 0x4B2D1DAC (_GetOverlayRootFolder@12.c)
 *     _RtlpMuiRegTryToAppendLangId@20 @ 0x4B2D3519 (_RtlpMuiRegTryToAppendLangId@20.c)
 *     _GetNameFromLangListNode@12 @ 0x4B2D4413 (_GetNameFromLangListNode@12.c)
 *     RtlGetNeutralFallback @ 0x4B2D4663 (RtlGetNeutralFallback.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 *     _RtlpMuiRegAddMultiSzToLangFallbackList@28 @ 0x4B2D4C76 (_RtlpMuiRegAddMultiSzToLangFallbackList@28.c)
 *     _RtlpMuiRegGetInstalledLanguageIndex@16 @ 0x4B2D4EAF (_RtlpMuiRegGetInstalledLanguageIndex@16.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlpMuiRegLoadLicInformation@4 @ 0x4B2D50DF (_RtlpMuiRegLoadLicInformation@4.c)
 *     _LdrpLangFallbackListFindNode@16 @ 0x4B2D5519 (_LdrpLangFallbackListFindNode@16.c)
 *     _RtlpConsoleFallbackNameFromLocaleName@24 @ 0x4B2D61DE (_RtlpConsoleFallbackNameFromLocaleName@24.c)
 *     _RtlpGetWindowsPolicy@16 @ 0x4B2D8BA1 (_RtlpGetWindowsPolicy@16.c)
 *     _RtlpIsCustomLocale@4 @ 0x4B2D92D8 (_RtlpIsCustomLocale@4.c)
 *     _WerEscalationReadImageVersionInfoForModuleBase@8 @ 0x4B2DA7E7 (_WerEscalationReadImageVersionInfoForModuleBase@8.c)
 *     _RtlpWow64ThunkEnvironment64To32@0 @ 0x4B2DAFBF (_RtlpWow64ThunkEnvironment64To32@0.c)
 *     _RtlpAssemblyStorageMapResolutionDefaultCallback@12 @ 0x4B2E2BE0 (_RtlpAssemblyStorageMapResolutionDefaultCallback@12.c)
 *     _RtlGetPersistedStateLocation@28 @ 0x4B2E5BB0 (_RtlGetPersistedStateLocation@28.c)
 *     _RtlpWow64SelectSystem32PathInternal@12 @ 0x4B2E615E (_RtlpWow64SelectSystem32PathInternal@12.c)
 *     _RtlpMuiRegTryToAppendLanguageName@20 @ 0x4B2E73F5 (_RtlpMuiRegTryToAppendLanguageName@20.c)
 *     _LdrpQueryDllExecuteOptions@8 @ 0x4B2E76BD (_LdrpQueryDllExecuteOptions@8.c)
 *     _GetLCIDFromLangListNode@12 @ 0x4B2E9857 (_GetLCIDFromLangListNode@12.c)
 *     _LdrpReportError@12 @ 0x4B2E9F63 (_LdrpReportError@12.c)
 *     _RtlpQueryRegistryValues@24 @ 0x4B2EAEA8 (_RtlpQueryRegistryValues@24.c)
 *     _RtlpGetDeviceFamilyInfoEnum@12 @ 0x4B2EB980 (_RtlpGetDeviceFamilyInfoEnum@12.c)
 *     _LdrpInitializePolicy@0 @ 0x4B2EBB2B (_LdrpInitializePolicy@0.c)
 *     _LdrSetDllDirectory@4 @ 0x4B2ED420 (_LdrSetDllDirectory@4.c)
 *     @EtwpGetPrivateLoggerContext@8 @ 0x4B2EDADC (@EtwpGetPrivateLoggerContext@8.c)
 *     _RtlCapabilityCheck@12 @ 0x4B2EF210 (_RtlCapabilityCheck@12.c)
 *     _EtwpGetCpuSpeedFromRegistry@4 @ 0x4B2F0DF4 (_EtwpGetCpuSpeedFromRegistry@4.c)
 *     _EtwpGetRegDwordValue@12 @ 0x4B2F0EE6 (_EtwpGetRegDwordValue@12.c)
 *     _EtwpQueryRegString@16 @ 0x4B2F1160 (_EtwpQueryRegString@16.c)
 *     _EtwpCreateFile@24 @ 0x4B2F160C (_EtwpCreateFile@24.c)
 *     _EtwpAddInstanceIdToLogFileName@12 @ 0x4B2F1A0B (_EtwpAddInstanceIdToLogFileName@12.c)
 *     _LdrpFixSectionProtection@12 @ 0x4B32C976 (_LdrpFixSectionProtection@12.c)
 *     _RtlpCheckRelativeDrive@4 @ 0x4B32D619 (_RtlpCheckRelativeDrive@4.c)
 *     _RtlpResetDriveEnvironment@4 @ 0x4B32D76C (_RtlpResetDriveEnvironment@4.c)
 *     _LdrpInitializeApplicationVerifierPackage@24 @ 0x4B331CC8 (_LdrpInitializeApplicationVerifierPackage@24.c)
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 *     _LdrpIsVerifierActivationFilterMatched@12 @ 0x4B333042 (_LdrpIsVerifierActivationFilterMatched@12.c)
 *     _LdrpQueryAndUpdateVerifierLaunchCounter@8 @ 0x4B333771 (_LdrpQueryAndUpdateVerifierLaunchCounter@8.c)
 *     ReadUlongFromKey @ 0x4B334F29 (ReadUlongFromKey.c)
 *     _AVrfpParseVerifierDllsString@4 @ 0x4B339319 (_AVrfpParseVerifierDllsString@4.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 *     _SendMessageToWERService@8 @ 0x4B33AB80 (_SendMessageToWERService@8.c)
 *     _WerpEscalationIsDisabled@0 @ 0x4B33BB2C (_WerpEscalationIsDisabled@0.c)
 *     _WerpEscalationIsWMRSendStringSet@0 @ 0x4B33BBAE (_WerpEscalationIsWMRSendStringSet@0.c)
 *     _WerpEscalationReadUlongFromKey@12 @ 0x4B33BC30 (_WerpEscalationReadUlongFromKey@12.c)
 *     _LdrpCnvrtShortToLongFileName@12 @ 0x4B33F31F (_LdrpCnvrtShortToLongFileName@12.c)
 *     _LdrpMUIEtwOutput@16 @ 0x4B33F89A (_LdrpMUIEtwOutput@16.c)
 *     _LdrResRelease@12 @ 0x4B342E00 (_LdrResRelease@12.c)
 *     _RtlAddActionToRXact@24 @ 0x4B345590 (_RtlAddActionToRXact@24.c)
 *     _RtlApplyRXact@4 @ 0x4B345770 (_RtlApplyRXact@4.c)
 *     _RtlInitializeRXact@12 @ 0x4B345820 (_RtlInitializeRXact@12.c)
 *     _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45 (_RtlpGetTokenNamedObjectPath@16.c)
 *     _RtlCreateBootStatusDataFile@4 @ 0x4B350940 (_RtlCreateBootStatusDataFile@4.c)
 *     _RtlpGetBootStatusPathFromRegistry@4 @ 0x4B350DA9 (_RtlpGetBootStatusPathFromRegistry@4.c)
 *     _RtlDeleteRegistryValue@12 @ 0x4B351170 (_RtlDeleteRegistryValue@12.c)
 *     _RtlWriteRegistryValue@24 @ 0x4B3513B0 (_RtlWriteRegistryValue@24.c)
 *     _LdrpMergeParentBaseLanguagesToList@20 @ 0x4B3516E9 (_LdrpMergeParentBaseLanguagesToList@20.c)
 *     _RtlGetFileMUIPath@28 @ 0x4B3519E0 (_RtlGetFileMUIPath@28.c)
 *     _RtlGetSystemPreferredUILanguages@20 @ 0x4B352400 (_RtlGetSystemPreferredUILanguages@20.c)
 *     _RtlGetUILanguageInfo@20 @ 0x4B352940 (_RtlGetUILanguageInfo@20.c)
 *     _RtlpConvertCultureNamesToLCIDs@8 @ 0x4B353970 (_RtlpConvertCultureNamesToLCIDs@8.c)
 *     _RtlpConvertLCIDsToCultureNames@8 @ 0x4B353B60 (_RtlpConvertLCIDsToCultureNames@8.c)
 *     _RtlpSetInstallLanguage@8 @ 0x4B354A70 (_RtlpSetInstallLanguage@8.c)
 *     _RtlpSetMachineUILanguagesImmediate@8 @ 0x4B35519D (_RtlpSetMachineUILanguagesImmediate@8.c)
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 *     _RtlpHpOverrideGCInterval@4 @ 0x4B358711 (_RtlpHpOverrideGCInterval@4.c)
 *     _RtlConnectToSm@16 @ 0x4B35A7D0 (_RtlConnectToSm@16.c)
 *     _RtlCreateSystemVolumeInformationFolder@4 @ 0x4B35D890 (_RtlCreateSystemVolumeInformationFolder@4.c)
 *     _RtlpGetUserLocaleName@4 @ 0x4B3633E0 (_RtlpGetUserLocaleName@4.c)
 *     _RtlpMatchUILanguage@4 @ 0x4B36349D (_RtlpMatchUILanguage@4.c)
 *     _RtlpMatchUserLanguage@4 @ 0x4B363547 (_RtlpMatchUserLanguage@4.c)
 *     _RtlpOpenAndMapCustomCultureFile@12 @ 0x4B3635BF (_RtlpOpenAndMapCustomCultureFile@12.c)
 *     _RtlOsDeploymentState@4 @ 0x4B369A30 (_RtlOsDeploymentState@4.c)
 *     _RtlRaiseCustomSystemEventTrigger@4 @ 0x4B369C20 (_RtlRaiseCustomSystemEventTrigger@4.c)
 *     _RtlpGetUserOrMachineUILanguage4NLS@12 @ 0x4B36A9A0 (_RtlpGetUserOrMachineUILanguage4NLS@12.c)
 *     _RtlpHasMachineUILock@8 @ 0x4B36ABB1 (_RtlpHasMachineUILock@8.c)
 *     _RtlpLoadPolicyLanguageSpec@16 @ 0x4B36AC26 (_RtlpLoadPolicyLanguageSpec@16.c)
 *     _RtlpMuiRegConfigMatchesInstalled@28 @ 0x4B36AEFF (_RtlpMuiRegConfigMatchesInstalled@28.c)
 *     _RtlpMuiRegGetFallbackLanguageInfoByName@20 @ 0x4B36B525 (_RtlpMuiRegGetFallbackLanguageInfoByName@20.c)
 *     _RtlpMuiRegLangInfoMatchesSpec@16 @ 0x4B36B990 (_RtlpMuiRegLangInfoMatchesSpec@16.c)
 *     _RtlpMuiRegLoadMachinePreferredUILanguages@16 @ 0x4B36BB58 (_RtlpMuiRegLoadMachinePreferredUILanguages@16.c)
 *     _RtlpRefreshCachedUILanguage@8 @ 0x4B36BFF0 (_RtlpRefreshCachedUILanguage@8.c)
 *     __RtlMuiRegAddLIPParent@16 @ 0x4B36C0BB (__RtlMuiRegAddLIPParent@16.c)
 *     __RtlpMuiRegAddBaseLanguage@20 @ 0x4B36C24C (__RtlpMuiRegAddBaseLanguage@20.c)
 *     __RtlpMuiRegInitLIPLanguage@12 @ 0x4B36C534 (__RtlpMuiRegInitLIPLanguage@12.c)
 *     __RtlpMuiRegPopulateBaseLanguages@20 @ 0x4B36C81E (__RtlpMuiRegPopulateBaseLanguages@20.c)
 *     _RtlpCreateExecutionRequiredRequest@8 @ 0x4B36FC1E (_RtlpCreateExecutionRequiredRequest@8.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x4B38B3AF (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  PCWSTR v2; // edi
  int v3; // ecx
  bool v4; // zf
  unsigned int v5; // ecx

  v2 = SourceString;
  *(_DWORD *)&DestinationString->Length = 0;
  DestinationString->Buffer = (wchar_t *)SourceString;
  if ( SourceString )
  {
    v3 = -1;
    do
    {
      if ( !v3 )
        break;
      v4 = *v2++ == 0;
      --v3;
    }
    while ( !v4 );
    v5 = 2 * ~v3;
    if ( v5 > 0xFFFE )
      LOWORD(v5) = -2;
    DestinationString->MaximumLength = v5;
    DestinationString->Length = v5 - 2;
  }
}

/*
 * XREFs of NtOpenKey @ 0x18009D880
 * Callers:
 *     RtlOpenCurrentUser @ 0x180016790 (RtlOpenCurrentUser.c)
 *     GetOverlayRootFolder @ 0x180038344 (GetOverlayRootFolder.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18003E734 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x18003F48C (RtlpLoadLanguageConfigList.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18003F860 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlCapabilityCheck @ 0x18003FC90 (RtlCapabilityCheck.c)
 *     RtlpGetRegistryHandle @ 0x18004591C (RtlpGetRegistryHandle.c)
 *     RtlpQueryRegistryValues @ 0x180045B3C (RtlpQueryRegistryValues.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180047690 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180049DEC (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpGetRegDwordValue @ 0x180049ED4 (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x18004A1C8 (EtwpQueryRegString.c)
 *     RtlGetPersistedStateLocation @ 0x18004A370 (RtlGetPersistedStateLocation.c)
 *     WerpGlobalFlagsForProcess @ 0x180061C84 (WerpGlobalFlagsForProcess.c)
 *     RtlpLookupCurDirSetting @ 0x18006DF40 (RtlpLookupCurDirSetting.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006FF10 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070080 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007630C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800764C8 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180076530 (RtlpProcessIFEOKeyFilter.c)
 *     LdrpCodeAuthzInitialize @ 0x18007C370 (LdrpCodeAuthzInitialize.c)
 *     RtlpTestHookInitialize @ 0x18007D5E0 (RtlpTestHookInitialize.c)
 *     RtlpNtOpenKey @ 0x18007E120 (RtlpNtOpenKey.c)
 *     RtlpLoadMachineUIByPolicy @ 0x1800825B0 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpIsCustomLocale @ 0x180087CB0 (RtlpIsCustomLocale.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008A8B0 (RtlpGetNtProductTypeFromRegistry.c)
 *     RXactpOpenTargetKey @ 0x18008ACB4 (RXactpOpenTargetKey.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008C2C8 (RtlpLoadInstallLanguageFallback.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800D0FCC (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D108C (LdrpInitializeExecutionOptions.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800DA44C (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     WerpEscalationIsDisabled @ 0x1800DE5FC (WerpEscalationIsDisabled.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800DE6AC (WerpEscalationIsWMRSendStringSet.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DF03C (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E01C0 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800E1A78 (RtlOpenModernAppOptionsKey.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E1B10 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E2620 (RtlSetImageMitigationPolicy.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E38D8 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800EE3DC (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFC70 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800F0BC0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F1270 (RtlpSetPreferredUILanguages.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1800F4434 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F4748 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetLocaleDataKey @ 0x1800FD3B4 (RtlpGetLocaleDataKey.c)
 *     RtlOsDeploymentState @ 0x1801020B0 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1801021F0 (RtlQueryValidationRunlevel.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180103990 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     _IsMachineLanguageListInMutableLocation @ 0x180106270 (_IsMachineLanguageListInMutableLocation.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180106CD8 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x180107BA8 (_RtlpRemovePendingDeleteLanguages.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119C80 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180119F50 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenKey()
{
  __int64 result; // rax

  result = 18LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

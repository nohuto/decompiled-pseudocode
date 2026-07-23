/*
 * XREFs of NtOpenKey @ 0x18009D050
 * Callers:
 *     RtlOpenCurrentUser @ 0x180016790 (RtlOpenCurrentUser.c)
 *     GetOverlayRootFolder @ 0x180038344 (GetOverlayRootFolder.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18003E724 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x18003F47C (RtlpLoadLanguageConfigList.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18003F850 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlCapabilityCheck @ 0x18003FC80 (RtlCapabilityCheck.c)
 *     RtlpGetRegistryHandle @ 0x18004590C (RtlpGetRegistryHandle.c)
 *     RtlpQueryRegistryValues @ 0x180045B2C (RtlpQueryRegistryValues.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x1800573BC (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpGetRegDwordValue @ 0x1800574A4 (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x180057798 (EtwpQueryRegString.c)
 *     RtlGetPersistedStateLocation @ 0x180057D70 (RtlGetPersistedStateLocation.c)
 *     WerpGlobalFlagsForProcess @ 0x180060684 (WerpGlobalFlagsForProcess.c)
 *     RtlpLookupCurDirSetting @ 0x18006CE00 (RtlpLookupCurDirSetting.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006EDE0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006EF50 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800751DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x180075398 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180075400 (RtlpProcessIFEOKeyFilter.c)
 *     LdrpCodeAuthzInitialize @ 0x18007B240 (LdrpCodeAuthzInitialize.c)
 *     RtlpTestHookInitialize @ 0x18007CB40 (RtlpTestHookInitialize.c)
 *     RtlpNtOpenKey @ 0x18007D680 (RtlpNtOpenKey.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180081B90 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180081C50 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpIsCustomLocale @ 0x1800875B0 (RtlpIsCustomLocale.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008A1B0 (RtlpGetNtProductTypeFromRegistry.c)
 *     RXactpOpenTargetKey @ 0x18008A5B4 (RXactpOpenTargetKey.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008BBC8 (RtlpLoadInstallLanguageFallback.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800D0E2C (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D0EEC (LdrpInitializeExecutionOptions.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800DA2FC (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     WerpEscalationIsDisabled @ 0x1800DE4AC (WerpEscalationIsDisabled.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800DE55C (WerpEscalationIsWMRSendStringSet.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DEEEC (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E0070 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800E1918 (RtlOpenModernAppOptionsKey.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E19B0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E2410 (RtlSetImageMitigationPolicy.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E35F8 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800EE03C (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EF8D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800F0820 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0ED0 (RtlpSetPreferredUILanguages.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1800F4094 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F43A8 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetLocaleDataKey @ 0x1800FD004 (RtlpGetLocaleDataKey.c)
 *     RtlOsDeploymentState @ 0x180101D00 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x180101E40 (RtlQueryValidationRunlevel.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1801035E0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     _IsMachineLanguageListInMutableLocation @ 0x180105EC0 (_IsMachineLanguageListInMutableLocation.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180106928 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1801077F8 (_RtlpRemovePendingDeleteLanguages.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119848 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180119B18 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 18;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

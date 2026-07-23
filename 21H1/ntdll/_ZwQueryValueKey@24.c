/*
 * XREFs of _ZwQueryValueKey@24 @ 0x4B2F2AD0
 * Callers:
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 *     _RtlpProcessIFEOKeyFilter@12 @ 0x4B2AA107 (_RtlpProcessIFEOKeyFilter@12.c)
 *     _LdrpQueryValueKey@24 @ 0x4B2AD60A (_LdrpQueryValueKey@24.c)
 *     _RtlpTestHookInitialize@12 @ 0x4B2B1220 (_RtlpTestHookInitialize@12.c)
 *     _RtlpIsCustomLocale@4 @ 0x4B2D92D8 (_RtlpIsCustomLocale@4.c)
 *     _RtlGetPersistedStateLocation@28 @ 0x4B2E5BB0 (_RtlGetPersistedStateLocation@28.c)
 *     _LdrpCodeAuthzInitialize@0 @ 0x4B2E82F2 (_LdrpCodeAuthzInitialize@0.c)
 *     _RtlpLookupCurDirSetting@12 @ 0x4B2EA935 (_RtlpLookupCurDirSetting@12.c)
 *     _RtlpQueryRegistryValues@24 @ 0x4B2EAEA8 (_RtlpQueryRegistryValues@24.c)
 *     _RtlCapabilityCheck@12 @ 0x4B2EF210 (_RtlCapabilityCheck@12.c)
 *     _EtwpGetCpuSpeedFromRegistry@4 @ 0x4B2F0DF4 (_EtwpGetCpuSpeedFromRegistry@4.c)
 *     _EtwpGetRegDwordValue@12 @ 0x4B2F0EE6 (_EtwpGetRegDwordValue@12.c)
 *     _EtwpQueryRegString@16 @ 0x4B2F1160 (_EtwpQueryRegString@16.c)
 *     _LdrAppxHandleIntegrityFailure@4 @ 0x4B32C290 (_LdrAppxHandleIntegrityFailure@4.c)
 *     _LdrpAppxGetBinaryNameKeyInformation@12 @ 0x4B32C5D2 (_LdrpAppxGetBinaryNameKeyInformation@12.c)
 *     _LdrpInitializeCriticalSectionExceptionGlobalMitigation@0 @ 0x4B331E35 (_LdrpInitializeCriticalSectionExceptionGlobalMitigation@0.c)
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 *     _LdrpLoadDelegatedNtdll@4 @ 0x4B3331FC (_LdrpLoadDelegatedNtdll@4.c)
 *     _LdrpQueryIllegalCWDDevices@4 @ 0x4B33384B (_LdrpQueryIllegalCWDDevices@4.c)
 *     ReadUlongFromKey @ 0x4B334F29 (ReadUlongFromKey.c)
 *     _WerpEscalationReadUlongFromKey@12 @ 0x4B33BC30 (_WerpEscalationReadUlongFromKey@12.c)
 *     _RtlpLookupSafeCurDirList@0 @ 0x4B33D088 (_RtlpLookupSafeCurDirList@0.c)
 *     _RtlpGetAssemblyStorageMapRootLocation@12 @ 0x4B33E112 (_RtlpGetAssemblyStorageMapRootLocation@12.c)
 *     _RtlQueryImageMitigationPolicy@20 @ 0x4B33FE30 (_RtlQueryImageMitigationPolicy@20.c)
 *     _RtlSetImageMitigationPolicy@20 @ 0x4B3408F0 (_RtlSetImageMitigationPolicy@20.c)
 *     _RtlInitializeRXact@12 @ 0x4B345820 (_RtlInitializeRXact@12.c)
 *     _RtlpGetBootStatusPathFromRegistry@4 @ 0x4B350DA9 (_RtlpGetBootStatusPathFromRegistry@4.c)
 *     _RtlQueryRegistryValueWithFallback@28 @ 0x4B3511F0 (_RtlQueryRegistryValueWithFallback@28.c)
 *     _RtlpHpApplySegmentHeapConfigurations@0 @ 0x4B358394 (_RtlpHpApplySegmentHeapConfigurations@0.c)
 *     _RtlpHpOverrideGCInterval@4 @ 0x4B358711 (_RtlpHpOverrideGCInterval@4.c)
 *     _RtlpGetUserLocaleName@4 @ 0x4B3633E0 (_RtlpGetUserLocaleName@4.c)
 *     _RtlpGetNtProductTypeFromRegistry@4 @ 0x4B36374F (_RtlpGetNtProductTypeFromRegistry@4.c)
 *     _RtlOsDeploymentState@4 @ 0x4B369A30 (_RtlOsDeploymentState@4.c)
 *     _RtlQueryValidationRunlevel@4 @ 0x4B369B90 (_RtlQueryValidationRunlevel@4.c)
 *     __RtlpMuiRegPopulateBaseLanguages@20 @ 0x4B36C81E (__RtlpMuiRegPopulateBaseLanguages@20.c)
 *     _RtlpNtQueryValueKey@20 @ 0x4B36D280 (_RtlpNtQueryValueKey@20.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x4B38B3AF (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     _QueryRegistryValue@20 @ 0x4B38B5D1 (_QueryRegistryValue@20.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  return Wow64SystemServiceCall();
}

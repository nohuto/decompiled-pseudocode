/*
 * XREFs of _memcpy @ 0x4B2F88B0
 * Callers:
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 *     _RtlInsertElementGenericTableFullAvl@24 @ 0x4B2A6F20 (_RtlInsertElementGenericTableFullAvl@24.c)
 *     _TpCallbackSendAlpcMessageOnCompletion@16 @ 0x4B2A72A0 (_TpCallbackSendAlpcMessageOnCompletion@16.c)
 *     _RtlGetCurrentDirectory_U@8 @ 0x4B2A7BB0 (_RtlGetCurrentDirectory_U@8.c)
 *     _RtlInsertElementGenericTableFull@24 @ 0x4B2A7DA0 (_RtlInsertElementGenericTableFull@24.c)
 *     _RtlCreateProcessParametersInternal@48 @ 0x4B2A8307 (_RtlCreateProcessParametersInternal@48.c)
 *     _RtlpCopyProcString@16 @ 0x4B2A8706 (_RtlpCopyProcString@16.c)
 *     _RtlpAddHeapToProtectedList@4 @ 0x4B2A91B0 (_RtlpAddHeapToProtectedList@4.c)
 *     _RtlpQueryInformationActivationContextDetailedInformation@20 @ 0x4B2A9A59 (_RtlpQueryInformationActivationContextDetailedInformation@20.c)
 *     _RtlAddSIDToBoundaryDescriptorEx@12 @ 0x4B2A9D06 (_RtlAddSIDToBoundaryDescriptorEx@12.c)
 *     _RtlQueryAtomInAtomTable@24 @ 0x4B2A9E90 (_RtlQueryAtomInAtomTable@24.c)
 *     _RtlCreateBoundaryDescriptor@8 @ 0x4B2AA1C0 (_RtlCreateBoundaryDescriptor@8.c)
 *     _vDbgPrintExWithPrefixInternal@24 @ 0x4B2AB8F1 (_vDbgPrintExWithPrefixInternal@24.c)
 *     _RtlCopyString@8 @ 0x4B2ABAB0 (_RtlCopyString@8.c)
 *     _LdrpQueryValueKey@24 @ 0x4B2AD60A (_LdrpQueryValueKey@24.c)
 *     _EtwpEventApiCallback@8 @ 0x4B2B1011 (_EtwpEventApiCallback@8.c)
 *     _RtlpExtendFrontEndUsageArray@8 @ 0x4B2B1C10 (_RtlpExtendFrontEndUsageArray@8.c)
 *     _RtlpComputePath@16 @ 0x4B2B2EA8 (_RtlpComputePath@16.c)
 *     _RtlQueryActivationContextApplicationSettings@28 @ 0x4B2B4270 (_RtlQueryActivationContextApplicationSettings@28.c)
 *     _RtlpQueryInformationActivationContextCompatibilityInformation@16 @ 0x4B2B7E6D (_RtlpQueryInformationActivationContextCompatibilityInformation@16.c)
 *     _LdrAddLoadAsDataTable@20 @ 0x4B2B8AD0 (_LdrAddLoadAsDataTable@20.c)
 *     _LdrpGetDataModulePath@28 @ 0x4B2B8EDE (_LdrpGetDataModulePath@28.c)
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 *     @RtlpReAllocateHeap@16 @ 0x4B2C2870 (@RtlpReAllocateHeap@16.c)
 *     _RtlDosSearchPath_Ustr@36 @ 0x4B2C5170 (_RtlDosSearchPath_Ustr@36.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpAppendUnicodeStringToFilenameBuffer@8 @ 0x4B2CC7A7 (_LdrpAppendUnicodeStringToFilenameBuffer@8.c)
 *     _LdrGetDllFullName@8 @ 0x4B2CCBB0 (_LdrGetDllFullName@8.c)
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _LdrpAllocateFileNameBufferIfNeeded@8 @ 0x4B2CE9A7 (_LdrpAllocateFileNameBufferIfNeeded@8.c)
 *     _LdrpAllocatePlaceHolder@28 @ 0x4B2D0889 (_LdrpAllocatePlaceHolder@28.c)
 *     _LdrpSendPostSnapNotifications@4 @ 0x4B2D0ABB (_LdrpSendPostSnapNotifications@4.c)
 *     _LdrpHandleTlsData@4 @ 0x4B2D0CD1 (_LdrpHandleTlsData@4.c)
 *     _LdrpResolveDllName@20 @ 0x4B2D1F2E (_LdrpResolveDllName@20.c)
 *     _RtlIntegerToChar@16 @ 0x4B2D2AE0 (_RtlIntegerToChar@16.c)
 *     _RtlpMuiRegTryToAppendLangId@20 @ 0x4B2D3519 (_RtlpMuiRegTryToAppendLangId@20.c)
 *     _RtlConvertSidToUnicodeString@12 @ 0x4B2D3990 (_RtlConvertSidToUnicodeString@12.c)
 *     _RtlIntegerToUnicode@16 @ 0x4B2D3B50 (_RtlIntegerToUnicode@16.c)
 *     _RtlCreateUnicodeString@8 @ 0x4B2D40C0 (_RtlCreateUnicodeString@8.c)
 *     _RtlpMuiRegGetOrAddStringToPool@16 @ 0x4B2D4807 (_RtlpMuiRegGetOrAddStringToPool@16.c)
 *     _RtlpMuiRegLoadLicInformation@4 @ 0x4B2D50DF (_RtlpMuiRegLoadLicInformation@4.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlpInitUnicodeStringUsingBuffer@16 @ 0x4B2D5B73 (_RtlpInitUnicodeStringUsingBuffer@16.c)
 *     _RtlpMuiRegDupLanguageList@8 @ 0x4B2D5E04 (_RtlpMuiRegDupLanguageList@8.c)
 *     _RtlCopyUnicodeString@8 @ 0x4B2D5EF0 (_RtlCopyUnicodeString@8.c)
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlpGenerateInheritedAce@56 @ 0x4B2D7D3F (_RtlpGenerateInheritedAce@56.c)
 *     _RtlpCopyEffectiveAce@64 @ 0x4B2D7FF4 (_RtlpCopyEffectiveAce@64.c)
 *     _RtlpCopyAces@56 @ 0x4B2D886D (_RtlpCopyAces@56.c)
 *     _RtlpCombineAcls@32 @ 0x4B2D8CAF (_RtlpCombineAcls@32.c)
 *     _LdrpRecordUnloadEvent@4 @ 0x4B2DA5AD (_LdrpRecordUnloadEvent@4.c)
 *     _RtlCreateEnvironmentEx@12 @ 0x4B2DACF0 (_RtlCreateEnvironmentEx@12.c)
 *     _RtlpInitEnvironmentBlock@0 @ 0x4B2DAF42 (_RtlpInitEnvironmentBlock@0.c)
 *     _RtlSetEnvironmentVar@20 @ 0x4B2DB1B0 (_RtlSetEnvironmentVar@20.c)
 *     _RtlInitializeResource@4 @ 0x4B2DFA70 (_RtlInitializeResource@4.c)
 *     _RtlpAddDebugInfoToCriticalSection@4 @ 0x4B2DFCB0 (_RtlpAddDebugInfoToCriticalSection@4.c)
 *     _RtlAddAtomToAtomTableEx@16 @ 0x4B2E00E8 (_RtlAddAtomToAtomTableEx@16.c)
 *     _RtlpEnsureBufferSize@12 @ 0x4B2E1480 (_RtlpEnsureBufferSize@12.c)
 *     _LdrpAllocateTls@0 @ 0x4B2E15BF (_LdrpAllocateTls@0.c)
 *     _LdrpAcquireTlsIndex@8 @ 0x4B2E185E (_LdrpAcquireTlsIndex@8.c)
 *     _RtlpScanEnvironment@28 @ 0x4B2E2428 (_RtlpScanEnvironment@28.c)
 *     _RtlpGetActivationContextDataStorageMapAndRosterHeader@24 @ 0x4B2E262C (_RtlpGetActivationContextDataStorageMapAndRosterHeader@24.c)
 *     _RtlpResolveAssemblyStorageMapEntry@20 @ 0x4B2E28E9 (_RtlpResolveAssemblyStorageMapEntry@20.c)
 *     _RtlpAssemblyStorageMapResolutionDefaultCallback@12 @ 0x4B2E2BE0 (_RtlpAssemblyStorageMapResolutionDefaultCallback@12.c)
 *     _RtlpInsertAssemblyStorageMapEntry@16 @ 0x4B2E2D8C (_RtlpInsertAssemblyStorageMapEntry@16.c)
 *     _RtlpProbeAssemblyStorageRootForAssembly@28 @ 0x4B2E2E88 (_RtlpProbeAssemblyStorageRootForAssembly@28.c)
 *     _RtlpCreateNewDirectoryReference@12 @ 0x4B2E418B (_RtlpCreateNewDirectoryReference@12.c)
 *     _RtlpNameprepAsciiRealWorker@40 @ 0x4B2E598C (_RtlpNameprepAsciiRealWorker@40.c)
 *     _RtlGetPersistedStateLocation@28 @ 0x4B2E5BB0 (_RtlGetPersistedStateLocation@28.c)
 *     _RtlpReplaceFirstUnicodeSubstringOfEqualLength@12 @ 0x4B2E61A5 (_RtlpReplaceFirstUnicodeSubstringOfEqualLength@12.c)
 *     _RtlpAddHeapToUnprotectedList@4 @ 0x4B2E663D (_RtlpAddHeapToUnprotectedList@4.c)
 *     _RtlMakeSelfRelativeSD@12 @ 0x4B2E6A30 (_RtlMakeSelfRelativeSD@12.c)
 *     _RtlpMuiRegTryToAppendLanguageName@20 @ 0x4B2E73F5 (_RtlpMuiRegTryToAppendLanguageName@20.c)
 *     _A_SHAUpdate@12 @ 0x4B2E7BC0 (_A_SHAUpdate@12.c)
 *     _RtlSetProtectedPolicy@12 @ 0x4B2EA320 (_RtlSetProtectedPolicy@12.c)
 *     _RtlpInitParameterBlock@0 @ 0x4B2EA5B7 (_RtlpInitParameterBlock@0.c)
 *     _RtlpCallQueryRegistryRoutine@28 @ 0x4B2EB0AD (_RtlpCallQueryRegistryRoutine@28.c)
 *     _RtlpQueryRegistryDirect@16 @ 0x4B2EB1AB (_RtlpQueryRegistryDirect@16.c)
 *     _LdrpLogDeprecatedDllEtwEvent@4 @ 0x4B2EBC3E (_LdrpLogDeprecatedDllEtwEvent@4.c)
 *     _RtlDuplicateUnicodeString@12 @ 0x4B2ECEB0 (_RtlDuplicateUnicodeString@12.c)
 *     _EtwpAddEventToBuffer@28 @ 0x4B2EE106 (_EtwpAddEventToBuffer@28.c)
 *     _EtwpAddReloggedHeaderExtensionEvents@12 @ 0x4B2EE302 (_EtwpAddReloggedHeaderExtensionEvents@12.c)
 *     _SHA256Update@12 @ 0x4B2EE726 (_SHA256Update@12.c)
 *     _RtlpGetPolicyValueForSystemCapability@8 @ 0x4B2EF60F (_RtlpGetPolicyValueForSystemCapability@8.c)
 *     _MD5Update@12 @ 0x4B2EF9B0 (_MD5Update@12.c)
 *     _EtwpTraceUmMessage@24 @ 0x4B2EFAD2 (_EtwpTraceUmMessage@24.c)
 *     _EtwpAddLogHeaderToLogFile@16 @ 0x4B2F085E (_EtwpAddLogHeaderToLogFile@16.c)
 *     _EtwpQueryRegString@16 @ 0x4B2F1160 (_EtwpQueryRegString@16.c)
 *     _EtwpTrackDebugIdForSession@12 @ 0x4B2F1EA8 (_EtwpTrackDebugIdForSession@12.c)
 *     _RtlInitializeNtUserPfn@24 @ 0x4B2F4850 (_RtlInitializeNtUserPfn@24.c)
 *     _memcpy_s @ 0x4B2FFE80 (_memcpy_s.c)
 *     ReadString_1 @ 0x4B3029D2 (ReadString_1.c)
 *     _RtlDosSearchPath_U@24 @ 0x4B32D140 (_RtlDosSearchPath_U@24.c)
 *     _RtlNtPathNameToDosPathName@16 @ 0x4B32D370 (_RtlNtPathNameToDosPathName@16.c)
 *     _RtlpCheckDeviceName@12 @ 0x4B32D58D (_RtlpCheckDeviceName@12.c)
 *     _RtlSetEnvironmentStrings@8 @ 0x4B32DDE0 (_RtlSetEnvironmentStrings@8.c)
 *     _RtlpQueryEnvironmentCache@24 @ 0x4B32E179 (_RtlpQueryEnvironmentCache@24.c)
 *     _RtlpQueryPseudoEnvironmentVariable@16 @ 0x4B32E262 (_RtlpQueryPseudoEnvironmentVariable@16.c)
 *     LdrpProtectedCopyMemory @ 0x4B32F440 (LdrpProtectedCopyMemory.c)
 *     _LdrpLogDllRelocationEtwEvent@16 @ 0x4B32FD0F (_LdrpLogDllRelocationEtwEvent@16.c)
 *     _LdrpLogFatalLdrEtwEvent@8 @ 0x4B330261 (_LdrpLogFatalLdrEtwEvent@8.c)
 *     _LdrpLogNewDllLoadInternal@20 @ 0x4B3309EF (_LdrpLogNewDllLoadInternal@20.c)
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 *     _LdrpLoadDelegatedNtdll@4 @ 0x4B3331FC (_LdrpLoadDelegatedNtdll@4.c)
 *     _LdrpQueryIllegalCWDDevices@4 @ 0x4B33384B (_LdrpQueryIllegalCWDDevices@4.c)
 *     _LdrpAddRedirectedFunction@12 @ 0x4B333F08 (_LdrpAddRedirectedFunction@12.c)
 *     _RtlComputePrivatizedDllName_U@12 @ 0x4B334AB0 (_RtlComputePrivatizedDllName_U@12.c)
 *     _RtlConvertDeviceFamilyInfoToString@16 @ 0x4B334FA0 (_RtlConvertDeviceFamilyInfoToString@16.c)
 *     _RtlCopySecurityDescriptor@8 @ 0x4B335BC0 (_RtlCopySecurityDescriptor@8.c)
 *     _RtlSetProcessDebugInformation@12 @ 0x4B337540 (_RtlSetProcessDebugInformation@12.c)
 *     _RtlpCopyRemoteDebugInformation@4 @ 0x4B33790E (_RtlpCopyRemoteDebugInformation@4.c)
 *     _LdrAddDllDirectory@8 @ 0x4B33CA10 (_LdrAddDllDirectory@8.c)
 *     _LdrUpdatePackageSearchPath@4 @ 0x4B33CCE0 (_LdrUpdatePackageSearchPath@4.c)
 *     RtlpAddSystemPath @ 0x4B33CF91 (RtlpAddSystemPath.c)
 *     _RtlpQueryAssemblyInformationActivationContextDetailedInformation@20 @ 0x4B33DB86 (_RtlpQueryAssemblyInformationActivationContextDetailedInformation@20.c)
 *     _RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation@20 @ 0x4B33DD92 (_RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation@20.c)
 *     _RtlpGetAssemblyStorageMapRootLocation@12 @ 0x4B33E112 (_RtlpGetAssemblyStorageMapRootLocation@12.c)
 *     _LdrpCnvrtShortToLongFileName@12 @ 0x4B33F31F (_LdrpCnvrtShortToLongFileName@12.c)
 *     _LdrpGetModuleInfoFromVirtualMemory@28 @ 0x4B33F74C (_LdrpGetModuleInfoFromVirtualMemory@28.c)
 *     _LdrpSpecialCacheTypeHandle@8 @ 0x4B33FA35 (_LdrpSpecialCacheTypeHandle@8.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 *     _RtlQueryImageMitigationPolicy@20 @ 0x4B33FE30 (_RtlQueryImageMitigationPolicy@20.c)
 *     _RtlSetImageMitigationPolicy@20 @ 0x4B3408F0 (_RtlSetImageMitigationPolicy@20.c)
 *     _LdrpResSearchResourceHandle@32 @ 0x4B3434F8 (_LdrpResSearchResourceHandle@32.c)
 *     _RtlAddAttributeActionToRXact@32 @ 0x4B3455D0 (_RtlAddAttributeActionToRXact@32.c)
 *     _RtlNormalizeSecurityDescriptor@20 @ 0x4B3468A0 (_RtlNormalizeSecurityDescriptor@20.c)
 *     _RtlReplaceSidInSd@16 @ 0x4B346EC0 (_RtlReplaceSidInSd@16.c)
 *     _RtlpConvertAclToAutoInherit@36 @ 0x4B347B85 (_RtlpConvertAclToAutoInherit@36.c)
 *     _RtlpConvertToAutoInheritSecurityObject@24 @ 0x4B348358 (_RtlpConvertToAutoInheritSecurityObject@24.c)
 *     _RtlpCreateServerAcl@20 @ 0x4B348798 (_RtlpCreateServerAcl@20.c)
 *     _RtlpFilterSacl@16 @ 0x4B348981 (_RtlpFilterSacl@16.c)
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 *     _RtlAddAccessFilterAce@32 @ 0x4B34AD40 (_RtlAddAccessFilterAce@32.c)
 *     _RtlAddResourceAttributeAce@28 @ 0x4B34B260 (_RtlAddResourceAttributeAce@28.c)
 *     _RtlpConvertAbsoluteToRelativeSecurityAttribute@12 @ 0x4B34B9A0 (_RtlpConvertAbsoluteToRelativeSecurityAttribute@12.c)
 *     _RtlpConvertRelativeToAbsoluteSecurityAttribute@16 @ 0x4B34BDB0 (_RtlpConvertRelativeToAbsoluteSecurityAttribute@16.c)
 *     _RtlpMergeSecurityAttributeInformation@16 @ 0x4B34C610 (_RtlpMergeSecurityAttributeInformation@16.c)
 *     _RtlExtractBitMap@16 @ 0x4B34E520 (_RtlExtractBitMap@16.c)
 *     _RtlLargeIntegerToChar@16 @ 0x4B350590 (_RtlLargeIntegerToChar@16.c)
 *     _RtlLargeIntegerToUnicode@16 @ 0x4B3506E9 (_RtlLargeIntegerToUnicode@16.c)
 *     _RtlpGetBootStatusPathFromRegistry@4 @ 0x4B350DA9 (_RtlpGetBootStatusPathFromRegistry@4.c)
 *     _RtlQueryRegistryValueWithFallback@28 @ 0x4B3511F0 (_RtlQueryRegistryValueWithFallback@28.c)
 *     _RtlpQueryTimeZoneKeyNameRoutine@24 @ 0x4B351420 (_RtlpQueryTimeZoneKeyNameRoutine@24.c)
 *     _RtlGetFileMUIPath@28 @ 0x4B3519E0 (_RtlGetFileMUIPath@28.c)
 *     _RtlpAddLanguagesToMultiSZ@28 @ 0x4B35313F (_RtlpAddLanguagesToMultiSZ@28.c)
 *     _RtlpCleanupRegistryKeys@0 @ 0x4B353540 (_RtlpCleanupRegistryKeys@0.c)
 *     _RtlpConvertLCIDsToCultureNames@8 @ 0x4B353B60 (_RtlpConvertLCIDsToCultureNames@8.c)
 *     _RtlpGetMUIRedirectedFilePathInternal@28 @ 0x4B354358 (_RtlpGetMUIRedirectedFilePathInternal@28.c)
 *     _RtlpMUIEnumerateFolder@12 @ 0x4B354614 (_RtlpMUIEnumerateFolder@12.c)
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 *     _RtlpExtendedHeapInformationGenerator@8 @ 0x4B357A40 (_RtlpExtendedHeapInformationGenerator@8.c)
 *     _RtlpExtendedHeapInformationWorkerCallback@8 @ 0x4B357C60 (_RtlpExtendedHeapInformationWorkerCallback@8.c)
 *     _RtlpHpRemoteStackSerializeWriter@12 @ 0x4B358870 (_RtlpHpRemoteStackSerializeWriter@12.c)
 *     _RtlConnectToSm@16 @ 0x4B35A7D0 (_RtlConnectToSm@16.c)
 *     _RtlpThunkSmMessage@8 @ 0x4B35AA42 (_RtlpThunkSmMessage@8.c)
 *     _RtlpCopyXStateChunk@20 @ 0x4B35C23D (_RtlpCopyXStateChunk@20.c)
 *     _RtlpCopyMappedMemoryEx@24 @ 0x4B35C5E9 (_RtlpCopyMappedMemoryEx@24.c)
 *     _RtlCreateSystemVolumeInformationFolder@4 @ 0x4B35D890 (_RtlCreateSystemVolumeInformationFolder@4.c)
 *     _RtlpSysVolCheckOwnerAndSecurity@8 @ 0x4B35DAEE (_RtlpSysVolCheckOwnerAndSecurity@8.c)
 *     _RtlpPushPageDescriptor@8 @ 0x4B35E9DA (_RtlpPushPageDescriptor@8.c)
 *     _RtlpValidateHeapHeaders@8 @ 0x4B360B86 (_RtlpValidateHeapHeaders@8.c)
 *     _RtlIpv4AddressToStringExA@16 @ 0x4B361A10 (_RtlIpv4AddressToStringExA@16.c)
 *     _RtlIpv6AddressToStringExA@20 @ 0x4B361AC0 (_RtlIpv6AddressToStringExA@20.c)
 *     _RtlIpv4AddressToStringExW@16 @ 0x4B361BF0 (_RtlIpv4AddressToStringExW@16.c)
 *     _RtlIpv6AddressToStringExW@20 @ 0x4B361CE0 (_RtlIpv6AddressToStringExW@20.c)
 *     _RtlGenerate8dot3Name@16 @ 0x4B362910 (_RtlGenerate8dot3Name@16.c)
 *     RtlpHeapTrkReportResult @ 0x4B364CBD (RtlpHeapTrkReportResult.c)
 *     RtlpHeapTrkTrackStack @ 0x4B365034 (RtlpHeapTrkTrackStack.c)
 *     _RtlpIdnToUnicodeWorker@28 @ 0x4B36535D (_RtlpIdnToUnicodeWorker@28.c)
 *     _RtlRemoteCall@28 @ 0x4B366400 (_RtlRemoteCall@28.c)
 *     _RtlpStdLogCapturedStackTrace@12 @ 0x4B3694C1 (_RtlpStdLogCapturedStackTrace@12.c)
 *     _RtlSetFeatureConfigurations@16 @ 0x4B369740 (_RtlSetFeatureConfigurations@16.c)
 *     _RtlpMuiRegDupLanguageConfigList@8 @ 0x4B36B18D (_RtlpMuiRegDupLanguageConfigList@8.c)
 *     _RtlpMuiRegResizeStringPool@16 @ 0x4B36BD9D (_RtlpMuiRegResizeStringPool@16.c)
 *     _RtlpNtEnumerateSubKey@16 @ 0x4B36D180 (_RtlpNtEnumerateSubKey@16.c)
 *     _RtlpNtQueryValueKey@20 @ 0x4B36D280 (_RtlpNtQueryValueKey@20.c)
 *     _RtlpHpStackTraceEventWriter@12 @ 0x4B36E3D0 (_RtlpHpStackTraceEventWriter@12.c)
 *     _RtlpRegisterStackTrace@12 @ 0x4B36F97B (_RtlpRegisterStackTrace@12.c)
 *     _RtlpHpTagQueryHeapsRemote@12 @ 0x4B370210 (_RtlpHpTagQueryHeapsRemote@12.c)
 *     _LZNT1CompressChunk@28 @ 0x4B3724B6 (_LZNT1CompressChunk@28.c)
 *     _RtlDecompressBufferLZNT1@28 @ 0x4B372A50 (_RtlDecompressBufferLZNT1@28.c)
 *     _RtlDecompressFragmentLZNT1@32 @ 0x4B372BD0 (_RtlDecompressFragmentLZNT1@32.c)
 *     _RtlpHpReallocMove@16 @ 0x4B37981A (_RtlpHpReallocMove@16.c)
 *     _RtlSparseArrayElementAllocate@12 @ 0x4B37E34C (_RtlSparseArrayElementAllocate@12.c)
 *     _MD4Update@12 @ 0x4B380180 (_MD4Update@12.c)
 *     _EtwTraceEventInstance@20 @ 0x4B380D50 (_EtwTraceEventInstance@20.c)
 *     @EtwpRelogEvent@8 @ 0x4B380EC6 (@EtwpRelogEvent@8.c)
 *     @EtwpTraceUmEvent@20 @ 0x4B381076 (@EtwpTraceUmEvent@20.c)
 *     _EtwpWriteToPrivateBuffers@40 @ 0x4B381B7E (_EtwpWriteToPrivateBuffers@40.c)
 *     _EtwpAddBinaryInfoEvents@12 @ 0x4B38281F (_EtwpAddBinaryInfoEvents@12.c)
 *     _EtwpTrackBinaryForSession@12 @ 0x4B382FA7 (_EtwpTrackBinaryForSession@12.c)
 *     _EtwpWriteBufferCompressed@16 @ 0x4B3831CD (_EtwpWriteBufferCompressed@16.c)
 *     _TpSetDefaultPoolCpuSets@8 @ 0x4B383BD4 (_TpSetDefaultPoolCpuSets@8.c)
 *     PsspHandleDumper @ 0x4B3880B0 (PsspHandleDumper.c)
 *     _RtlpStackDbSegmentFindOrCreate@8 @ 0x4B38AB3B (_RtlpStackDbSegmentFindOrCreate@8.c)
 *     _QueryRegistryValue@20 @ 0x4B38B5D1 (_QueryRegistryValue@20.c)
 *     _RtlpFcQueryAllFeatureConfigurationsFromBuffers@12 @ 0x4B3A127F (_RtlpFcQueryAllFeatureConfigurationsFromBuffers@12.c)
 *     _RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBuffer@12 @ 0x4B3A12C4 (_RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBuffer@12.c)
 * Callees:
 *     <none>
 */

void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  char *v3; // esi
  char *v4; // edi
  unsigned int v5; // ecx
  void *result; // eax
  char *v7; // esi
  char *v8; // edi
  unsigned int v9; // ecx

  v3 = (char *)Src;
  v4 = (char *)a1;
  if ( a1 > Src && a1 < (char *)Src + (unsigned int)Size )
  {
    v7 = (char *)Src + Size - 4;
    v8 = (char *)a1 + Size - 4;
    if ( ((unsigned __int8)v8 & 3) == 0 )
    {
      v9 = (unsigned int)Size >> 2;
      if ( (unsigned int)Size >> 2 >= 8 )
      {
        while ( v9 )
        {
          *(_DWORD *)v8 = *(_DWORD *)v7;
          v7 -= 4;
          v8 -= 4;
          --v9;
        }
        switch ( Size & 3 )
        {
          case 0uLL:
            goto LABEL_32;
          case 1uLL:
            goto LABEL_33;
          case 2uLL:
            goto LABEL_34;
          case 3uLL:
            goto LABEL_35;
        }
      }
      switch ( Size & 3 )
      {
        case 0uLL:
          goto LABEL_32;
        case 1uLL:
          goto LABEL_33;
        case 2uLL:
          goto LABEL_34;
        case 3uLL:
          goto LABEL_35;
      }
    }
    switch ( (int)Size )
    {
      case 0:
LABEL_32:
        result = a1;
        break;
      case 1:
LABEL_33:
        v8[3] = v7[3];
        result = a1;
        break;
      case 2:
LABEL_34:
        v8[3] = v7[3];
        v8[2] = v7[2];
        result = a1;
        break;
      case 3:
LABEL_35:
        v8[3] = v7[3];
        v8[2] = v7[2];
        v8[1] = v7[1];
        result = a1;
        break;
      default:
        __asm { jmp     dword ptr ds:(loc_4B2F8A98+4)[eax*4] }
        return result;
    }
  }
  else
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
    {
      if ( (unsigned int)Size >= 4 )
        __asm { jmp     dword ptr ds:(loc_4B2F890C+4)[eax*4] }
      __asm { jmp     dword ptr ds:loc_4B2F8A0C[ecx*4]; jumptable 4B2F88E5 case 0 }
    }
    v5 = (unsigned int)Size >> 2;
    switch ( v5 )
    {
      case 0u:
        goto LABEL_17;
      case 1u:
        goto LABEL_16;
      case 2u:
        goto LABEL_15;
      case 3u:
        goto LABEL_14;
      case 4u:
        goto LABEL_13;
      case 5u:
        goto LABEL_12;
      case 6u:
        goto LABEL_11;
      case 7u:
        *((_DWORD *)a1 + v5 - 7) = *((_DWORD *)Src + v5 - 7);
LABEL_11:
        *((_DWORD *)a1 + v5 - 6) = *((_DWORD *)Src + v5 - 6);
LABEL_12:
        *((_DWORD *)a1 + v5 - 5) = *((_DWORD *)Src + v5 - 5);
LABEL_13:
        *((_DWORD *)a1 + v5 - 4) = *((_DWORD *)Src + v5 - 4);
LABEL_14:
        *((_DWORD *)a1 + v5 - 3) = *((_DWORD *)Src + v5 - 3);
LABEL_15:
        *((_DWORD *)a1 + v5 - 2) = *((_DWORD *)Src + v5 - 2);
LABEL_16:
        *((_DWORD *)a1 + v5 - 1) = *((_DWORD *)Src + v5 - 1);
        v3 = (char *)Src + 4 * v5;
        v4 = (char *)a1 + 4 * v5;
LABEL_17:
        switch ( Size & 3 )
        {
          case 0uLL:
            goto LABEL_18;
          case 1uLL:
            goto LABEL_19;
          case 2uLL:
            goto LABEL_20;
          case 3uLL:
            goto LABEL_21;
        }
      default:
        qmemcpy(a1, Src, 4 * v5);
        v3 = (char *)Src + 4 * v5;
        v4 = (char *)a1 + 4 * v5;
        switch ( Size & 3 )
        {
          case 0uLL:
LABEL_18:
            result = a1;
            break;
          case 1uLL:
LABEL_19:
            *v4 = *v3;
            result = a1;
            break;
          case 2uLL:
LABEL_20:
            *v4 = *v3;
            v4[1] = v3[1];
            result = a1;
            break;
          case 3uLL:
LABEL_21:
            *v4 = *v3;
            v4[1] = v3[1];
            v4[2] = v3[2];
            result = a1;
            break;
        }
        break;
    }
  }
  return result;
}

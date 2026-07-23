/*
 * XREFs of memmove @ 0x1800A4480
 * Callers:
 *     RtlLargeIntegerToChar @ 0x180001010 (RtlLargeIntegerToChar.c)
 *     LdrpProtectedCopyMemory @ 0x180001390 (LdrpProtectedCopyMemory.c)
 *     RtlpHpVaMgrRangeCreate @ 0x1800060D0 (RtlpHpVaMgrRangeCreate.c)
 *     CsrCaptureMessageBuffer @ 0x180008850 (CsrCaptureMessageBuffer.c)
 *     CsrpClientConnectToServer @ 0x1800088AC (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageString @ 0x180008C50 (CsrCaptureMessageString.c)
 *     CsrpConnectToServer @ 0x180008FE4 (CsrpConnectToServer.c)
 *     RtlpAddHeapToProtectedList @ 0x18000C1A0 (RtlpAddHeapToProtectedList.c)
 *     RtlpAddHeapToUnprotectedList @ 0x18000C5DC (RtlpAddHeapToUnprotectedList.c)
 *     RtlpIdnToUnicodeWorker @ 0x18000C7A0 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x18000D1EC (RtlpNameprepAsciiRealWorker.c)
 *     RtlIpv6StringToAddressW @ 0x18000DB60 (RtlIpv6StringToAddressW.c)
 *     RtlCopyUnicodeString @ 0x1800102F0 (RtlCopyUnicodeString.c)
 *     RtlInitializeResource @ 0x1800112E0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180011840 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x180013F10 (RtlpInsertInvertedFunctionTableEntry.c)
 *     RtlQueryEnvironmentVariable @ 0x1800157E0 (RtlQueryEnvironmentVariable.c)
 *     RtlpQueryEnvironmentCache @ 0x180015DC0 (RtlpQueryEnvironmentCache.c)
 *     RtlpScanEnvironment @ 0x1800161D0 (RtlpScanEnvironment.c)
 *     RtlIntegerToChar @ 0x1800163A0 (RtlIntegerToChar.c)
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     RtlDosSearchPath_Ustr @ 0x180019C40 (RtlDosSearchPath_Ustr.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x18001A8AC (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x18001A930 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001AF50 (RtlpDosPathNameToRelativeNtPathName.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001C2B4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180036AEC (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpGenerateInheritedAce @ 0x180036F8C (RtlpGenerateInheritedAce.c)
 *     RtlConvertSidToUnicodeString @ 0x180037250 (RtlConvertSidToUnicodeString.c)
 *     RtlIntegerToUnicode @ 0x180037440 (RtlIntegerToUnicode.c)
 *     RtlpAddKnownAce @ 0x1800375C4 (RtlpAddKnownAce.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     RtlpCopyEffectiveAce @ 0x180037A3C (RtlpCopyEffectiveAce.c)
 *     RtlCreateUnicodeString @ 0x180038AF0 (RtlCreateUnicodeString.c)
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x18003A094 (RtlpInheritAcl2.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18003B458 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x18003B794 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlpCopyAces @ 0x18003D298 (RtlpCopyAces.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18003D6F0 (RtlpMuiRegTryToAppendLanguageName.c)
 *     LdrpSendPostSnapNotifications @ 0x18003DC0C (LdrpSendPostSnapNotifications.c)
 *     LdrpQueryValueKey @ 0x18003F680 (LdrpQueryValueKey.c)
 *     SHA256Update @ 0x180040498 (SHA256Update.c)
 *     A_SHAUpdate @ 0x1800410B0 (A_SHAUpdate.c)
 *     EtwpEventApiCallback @ 0x180043934 (EtwpEventApiCallback.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180044C6C (RtlpExtendFrontEndUsageArray.c)
 *     RtlpCallQueryRegistryRoutine @ 0x180045FC4 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x1800462EC (RtlpQueryRegistryDirect.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800463F4 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlGetFileMUIPath @ 0x1800468F0 (RtlGetFileMUIPath.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180047690 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180048BF8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpQueryRegString @ 0x18004A1C8 (EtwpQueryRegString.c)
 *     RtlGetPersistedStateLocation @ 0x18004A370 (RtlGetPersistedStateLocation.c)
 *     RtlCreateProcessParametersInternal @ 0x18004A9F0 (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x18004AEEC (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x18004AFB8 (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18004B220 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18004B430 (RtlSetEnvironmentVar.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x18004C3CC (EtwpAddReloggedHeaderExtensionEvents.c)
 *     TppPrepareDirectParams @ 0x18004E250 (TppPrepareDirectParams.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005064C (EtwpWriteToPrivateBuffers.c)
 *     EtwpTraceUmEvent @ 0x180050CE4 (EtwpTraceUmEvent.c)
 *     EtwpRelogEvent @ 0x18005101C (EtwpRelogEvent.c)
 *     vDbgPrintExWithPrefixInternal @ 0x180051B08 (vDbgPrintExWithPrefixInternal.c)
 *     RtlpCopyXStateChunk @ 0x18005350C (RtlpCopyXStateChunk.c)
 *     LdrpGetDataModulePath @ 0x1800537A4 (LdrpGetDataModulePath.c)
 *     LdrpHandleTlsData @ 0x180054590 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x180054ACC (LdrpAllocateTls.c)
 *     LdrpAcquireTlsIndex @ 0x180054E64 (LdrpAcquireTlsIndex.c)
 *     LdrResSearchResource @ 0x1800554B0 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180055BD4 (LdrpResSearchResourceMappedFile.c)
 *     RtlQueryAtomInAtomTable @ 0x180059250 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18005948C (RtlAddAtomToAtomTableEx.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x18005CFC0 (RtlInsertElementGenericTableFullAvl.c)
 *     MD5Update @ 0x18005D420 (MD5Update.c)
 *     RtlGetCurrentDirectory_U @ 0x18005E7C0 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x18005FD2C (RtlpCreateNewDirectoryReference.c)
 *     LdrpResolveDllName @ 0x180060664 (LdrpResolveDllName.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180061648 (LdrpLogDeprecatedDllEtwEvent.c)
 *     WerpGlobalFlagsForProcess @ 0x180061C84 (WerpGlobalFlagsForProcess.c)
 *     RtlInsertElementGenericTableFull @ 0x180066700 (RtlInsertElementGenericTableFull.c)
 *     RtlIpv6AddressToStringExW @ 0x180066EA0 (RtlIpv6AddressToStringExW.c)
 *     RtlFormatMessageEx @ 0x180067230 (RtlFormatMessageEx.c)
 *     RtlCopySid @ 0x180068900 (RtlCopySid.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x1800689B0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     LdrpRecordUnloadEvent @ 0x18006BB54 (LdrpRecordUnloadEvent.c)
 *     RtlpSaveX87State @ 0x18006C1F0 (RtlpSaveX87State.c)
 *     LdrpAllocatePlaceHolder @ 0x18006C35C (LdrpAllocatePlaceHolder.c)
 *     RtlpComputePath @ 0x18006D800 (RtlpComputePath.c)
 *     RtlCopySecurityDescriptor @ 0x18006E020 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x18006E0E0 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x18006E2C0 (RtlMakeSelfRelativeSD.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x18006EC20 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x18006ED30 (RtlpEnsureBufferSize.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180071E58 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlpCombineAcls @ 0x180072A14 (RtlpCombineAcls.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800730C4 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180073680 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180073AA4 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180073BCC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrAddLoadAsDataTable @ 0x180074140 (LdrAddLoadAsDataTable.c)
 *     RtlpSetSecurityObject @ 0x1800777DC (RtlpSetSecurityObject.c)
 *     RtlIpv6AddressToStringExA @ 0x180078630 (RtlIpv6AddressToStringExA.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180079048 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x1800792A4 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpMuiRegDupLanguageList @ 0x180079530 (RtlpMuiRegDupLanguageList.c)
 *     RtlDuplicateUnicodeString @ 0x180079E70 (RtlDuplicateUnicodeString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18007A428 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007AE00 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlQueryImageFileKeyOption @ 0x18007B4D0 (RtlQueryImageFileKeyOption.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x18007B840 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlpNtQueryValueKey @ 0x18007C030 (RtlpNtQueryValueKey.c)
 *     RtlIpv4AddressToStringExW @ 0x18007C230 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv6StringToAddressA @ 0x18007D750 (RtlIpv6StringToAddressA.c)
 *     RtlpInitParameterBlock @ 0x18007DC28 (RtlpInitParameterBlock.c)
 *     RtlIpv4AddressToStringExA @ 0x18007E1B0 (RtlIpv4AddressToStringExA.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x180080060 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlSetProtectedPolicy @ 0x180081550 (RtlSetProtectedPolicy.c)
 *     RtlAddAttributeActionToRXact @ 0x180081B40 (RtlAddAttributeActionToRXact.c)
 *     RtlCreateBoundaryDescriptor @ 0x180082690 (RtlCreateBoundaryDescriptor.c)
 *     RtlpNtEnumerateSubKey @ 0x180082770 (RtlpNtEnumerateSubKey.c)
 *     RtlSetEnvironmentStrings @ 0x1800831F0 (RtlSetEnvironmentStrings.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800837B4 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x180084230 (RtlpMergeSecurityAttributeInformation.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180084644 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlpCopyMappedMemoryEx @ 0x180085920 (RtlpCopyMappedMemoryEx.c)
 *     RtlCopyString @ 0x180085990 (RtlCopyString.c)
 *     RtlpMUIEnumerateFolder @ 0x1800873AC (RtlpMUIEnumerateFolder.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x180087710 (RtlReplaceSystemDirectoryInPath.c)
 *     EtwpTrackBinaryForSession @ 0x180087A68 (EtwpTrackBinaryForSession.c)
 *     EtwpWriteBufferCompressed @ 0x180087EB0 (EtwpWriteBufferCompressed.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180088450 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800886E0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x180089330 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlDosSearchPath_U @ 0x1800894A0 (RtlDosSearchPath_U.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008974C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlConnectToSm @ 0x180089BE0 (RtlConnectToSm.c)
 *     RtlpCheckDeviceName @ 0x18008ABFC (RtlpCheckDeviceName.c)
 *     LdrAddDllDirectory @ 0x18008BD10 (LdrAddDllDirectory.c)
 *     RtlInitializeNtUserPfn @ 0x18008C690 (RtlInitializeNtUserPfn.c)
 *     RaiseException @ 0x180094E30 (RaiseException.c)
 *     memcpy_s @ 0x180097AE0 (memcpy_s.c)
 *     memmove_s @ 0x180097B80 (memmove_s.c)
 *     ReadString_1 @ 0x18009AABC (ReadString_1.c)
 *     RtlNtPathNameToDosPathName @ 0x1800CC480 (RtlNtPathNameToDosPathName.c)
 *     LdrpLoadEnclaveModule @ 0x1800CD918 (LdrpLoadEnclaveModule.c)
 *     LdrpCorFixupImage @ 0x1800CE7F8 (LdrpCorFixupImage.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800CF3E8 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800CFC10 (LdrpLogNewDllLoadInternal.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D0BA0 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D104C (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D4740 (LdrpQueryIllegalCWDDevices.c)
 *     LdrpAddRedirectedFunction @ 0x1800D4C54 (LdrpAddRedirectedFunction.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800D56C0 (RtlComputePrivatizedDllName_U.c)
 *     RtlQuerySecurityObject @ 0x1800D7090 (RtlQuerySecurityObject.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D76E0 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7D50 (RtlQueryProcessHeapInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D84D0 (RtlSetProcessDebugInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D8A90 (RtlpCopyRemoteDebugInformation.c)
 *     AVrfInitializeVerifier @ 0x1800D9908 (AVrfInitializeVerifier.c)
 *     ReportExceptionInternal @ 0x1800DC928 (ReportExceptionInternal.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DEC50 (LdrUpdatePackageSearchPath.c)
 *     RtlpAddSystemPath @ 0x1800DEE9C (RtlpAddSystemPath.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DF54C (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     sxsisol_RespectDotLocal @ 0x1800DF710 (sxsisol_RespectDotLocal.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DFBA8 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800DFE38 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E0180 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0FCC (LdrpCnvrtShortToLongFileName.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800E1658 (LdrpSpecialCacheTypeHandle.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E1754 (LdrpTraceLoadMUIDll.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E1AD0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E25E0 (RtlSetImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E3A78 (RtlpQueryEafPlusModuleList.c)
 *     LdrpResSearchResourceHandle @ 0x1800E472C (LdrpResSearchResourceHandle.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1800E67D0 (RtlNormalizeSecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x1800E6CB0 (RtlReplaceSidInSd.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E78E4 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E8108 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpCreateServerAcl @ 0x1800E865C (RtlpCreateServerAcl.c)
 *     RtlpFilterSacl @ 0x1800E88F0 (RtlpFilterSacl.c)
 *     RtlAddAccessFilterAce @ 0x1800E9520 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9910 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800EA0B0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800EA420 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x1800EB6E0 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x1800EB750 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x1800EBAA0 (RtlCopyBitMap.c)
 *     RtlExtractBitMap @ 0x1800EBCB0 (RtlExtractBitMap.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800ED624 (RtlpCopyBitMapTailToHead.c)
 *     RtlLargeIntegerToUnicode @ 0x1800EDB80 (RtlLargeIntegerToUnicode.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800EE39C (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1800EE730 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800EE8D0 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EF7E4 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFC30 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800F0330 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F1230 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x1800F3870 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800F3BA0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800F4870 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpPushPageDescriptor @ 0x1800F8288 (RtlpPushPageDescriptor.c)
 *     RtlpValidateHeapHeaders @ 0x1800FABB4 (RtlpValidateHeapHeaders.c)
 *     RtlWriteNonVolatileMemory @ 0x1800FC550 (RtlWriteNonVolatileMemory.c)
 *     RtlGenerate8dot3Name @ 0x1800FC800 (RtlGenerate8dot3Name.c)
 *     RtlpGetUserLocaleName @ 0x1800FD41C (RtlpGetUserLocaleName.c)
 *     RtlpHeapTrkReportResult @ 0x1800FE8A4 (RtlpHeapTrkReportResult.c)
 *     RtlpHeapTrkTrackStack @ 0x1800FED14 (RtlpHeapTrkTrackStack.c)
 *     RtlRemoteCall @ 0x1800FF0C0 (RtlRemoteCall.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1801019A8 (RtlpStdLogCapturedStackTrace.c)
 *     RtlSetFeatureConfigurations @ 0x180101CD0 (RtlSetFeatureConfigurations.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x180102CC4 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x1801046D8 (RtlpMuiRegDupLanguageConfigList.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1801054B8 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegResizeStringPool @ 0x180105B58 (RtlpMuiRegResizeStringPool.c)
 *     RtlpHpStackTraceEventWriter @ 0x180109200 (RtlpHpStackTraceEventWriter.c)
 *     RtlpRegisterStackTrace @ 0x18010ADD8 (RtlpRegisterStackTrace.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x18010B2D8 (RtlpHpTagQueryHeapsRemote.c)
 *     LZNT1CompressChunk @ 0x18010C4F4 (LZNT1CompressChunk.c)
 *     RtlDecompressBufferLZNT1 @ 0x18010CA80 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x18010CC10 (RtlDecompressFragmentLZNT1.c)
 *     RtlpHpReallocMove @ 0x18010E550 (RtlpHpReallocMove.c)
 *     RtlpHpLargeReAlloc @ 0x18010E93C (RtlpHpLargeReAlloc.c)
 *     MD4Update @ 0x1801104D0 (MD4Update.c)
 *     EtwTraceEventInstance @ 0x180110A80 (EtwTraceEventInstance.c)
 *     EtwpTraceUmMessage @ 0x180111138 (EtwpTraceUmMessage.c)
 *     EtwpAddBinaryInfoEvents @ 0x1801116B8 (EtwpAddBinaryInfoEvents.c)
 *     EtwpAddEventToBuffer @ 0x180111960 (EtwpAddEventToBuffer.c)
 *     EtwpTrackDebugIdForSession @ 0x180111B28 (EtwpTrackDebugIdForSession.c)
 *     TpSetDefaultPoolCpuSets @ 0x180111D18 (TpSetDefaultPoolCpuSets.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011504C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1801154CC (PsspCaptureVaSpaceInformation2.c)
 *     PsspHandleDumper @ 0x180116080 (PsspHandleDumper.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18011947C (RtlpStackDbSegmentFindOrCreate.c)
 *     QueryRegistryValue @ 0x18011A1CC (QueryRegistryValue.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBuffers @ 0x18011B3AC (RtlpFcQueryAllFeatureConfigurationsFromBuffers.c)
 *     RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet @ 0x18011B400 (RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  void *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  bool v7; // cf
  signed __int64 v8; // rdx
  char v9; // r11
  _BYTE *v10; // rcx
  char v11; // r11
  char *v12; // r11
  signed __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __m128 v17; // xmm1
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __m128 v23; // xmm4
  unsigned __int64 j; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  char *v31; // rcx
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  size_t v34; // r8
  _OWORD *v35; // r11
  __int128 v36; // xmm1
  size_t v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  size_t i; // r9
  size_t v43; // r8

  result = a1;
  if ( Size < 8 )
  {
    if ( Size )
    {
      v7 = Src < a1;
      v8 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 )
      {
        v10 = (char *)a1 + Size;
        do
        {
          v11 = v10[v8 - 1];
          --v10;
          --Size;
          *v10 = v11;
        }
        while ( Size );
      }
      else
      {
        do
        {
          v9 = *((_BYTE *)a1 + v8);
          a1 = (char *)a1 + 1;
          --Size;
          *((char *)a1 - 1) = v9;
        }
        while ( Size );
      }
    }
  }
  else if ( Size > 0x10 )
  {
    if ( Size > 0x20 )
    {
      v12 = (char *)Src + Size;
      v7 = Src < a1;
      v13 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 && v12 > a1 )
      {
        v31 = (char *)a1 + Size;
        v32 = *(_OWORD *)&v31[v13 - 16];
        v33 = (unsigned __int64)(v31 - 16);
        v34 = Size - 16;
        if ( (v33 & 0xF) != 0 )
        {
          v35 = (_OWORD *)v33;
          v33 &= 0xFFFFFFFFFFFFFFF0uLL;
          v36 = *(_OWORD *)(v33 + v13);
          *v35 = v32;
          v32 = v36;
          v34 = v33 - (_QWORD)result;
        }
        v37 = v34 >> 6;
        if ( v34 >> 6 )
        {
          v34 &= 0x3Fu;
          do
          {
            v38 = *(_OWORD *)(v33 + v13 - 16);
            v39 = *(_OWORD *)(v33 + v13 - 32);
            v40 = *(_OWORD *)(v33 + v13 - 48);
            v41 = *(_OWORD *)(v33 + v13 - 64);
            *(_OWORD *)v33 = v32;
            v33 -= 64LL;
            --v37;
            *(_OWORD *)(v33 + 48) = v38;
            *(_OWORD *)(v33 + 32) = v39;
            *(_OWORD *)(v33 + 16) = v40;
            v32 = v41;
          }
          while ( v37 );
        }
        for ( i = v34 >> 4; i; --i )
        {
          *(_OWORD *)v33 = v32;
          v32 = *(_OWORD *)(v33 + v13 - 16);
          v33 -= 16LL;
        }
        v43 = v34 & 0xF;
        if ( v43 )
          *(_OWORD *)(v33 - v43) = *(_OWORD *)(v33 - v43 + v13);
        *(_OWORD *)v33 = v32;
      }
      else
      {
        v14 = *(__m128 *)((char *)a1 + v13);
        v15 = (unsigned __int64)a1 + 16;
        if ( (v15 & 0xF) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = *(__m128 *)(v16 + v13);
          *(__m128 *)result = v14;
          v14 = v17;
          v15 = v16 + 16;
        }
        v18 = (unsigned __int64)result + Size - v15;
        v19 = v18 >> 6;
        if ( v18 >> 6 )
        {
          if ( v19 > 0x1000 )
          {
            v26 = v18 >> 6;
            v18 &= 0x3Fu;
            _mm_prefetch((const char *)(v15 + v13 + 64), 0);
            do
            {
              v27 = *(__m128 *)(v15 + v13);
              v28 = *(__m128 *)(v15 + v13 + 16);
              v29 = *(__m128 *)(v15 + v13 + 32);
              v30 = *(__m128 *)(v15 + v13 + 48);
              _mm_stream_ps((float *)(v15 - 16), v14);
              v15 += 64LL;
              _mm_prefetch((const char *)(v15 + v13 + 64), 0);
              --v26;
              _mm_stream_ps((float *)(v15 - 64), v27);
              _mm_stream_ps((float *)(v15 - 48), v28);
              _mm_stream_ps((float *)(v15 - 32), v29);
              v14 = v30;
            }
            while ( v26 );
            _mm_sfence();
          }
          else
          {
            v18 &= 0x3Fu;
            do
            {
              v20 = *(_OWORD *)(v15 + v13);
              v21 = *(_OWORD *)(v15 + v13 + 16);
              v22 = *(_OWORD *)(v15 + v13 + 32);
              v23 = *(__m128 *)(v15 + v13 + 48);
              *(__m128 *)(v15 - 16) = v14;
              v15 += 64LL;
              --v19;
              *(_OWORD *)(v15 - 64) = v20;
              *(_OWORD *)(v15 - 48) = v21;
              *(_OWORD *)(v15 - 32) = v22;
              v14 = v23;
            }
            while ( v19 );
          }
        }
        for ( j = v18 >> 4; j; --j )
        {
          *(__m128 *)(v15 - 16) = v14;
          v14 = *(__m128 *)(v15 + v13);
          v15 += 16LL;
        }
        v25 = v18 & 0xF;
        if ( v25 )
          *(_OWORD *)(v15 + v25 - 16) = *(_OWORD *)(v15 + v25 - 16 + v13);
        *(__m128 *)(v15 - 16) = v14;
      }
    }
    else
    {
      v6 = *(_OWORD *)((char *)Src + Size - 16);
      *(_OWORD *)a1 = *(_OWORD *)Src;
      *(_OWORD *)((char *)a1 + Size - 16) = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)Src;
    v5 = *(_QWORD *)((char *)Src + Size - 8);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)((char *)a1 + Size - 8) = v5;
  }
  return result;
}

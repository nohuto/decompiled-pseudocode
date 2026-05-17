/*
 * XREFs of memmove @ 0x1800A3C00
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
 *     RtlpCopyAces @ 0x18003D288 (RtlpCopyAces.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18003D6E0 (RtlpMuiRegTryToAppendLanguageName.c)
 *     LdrpSendPostSnapNotifications @ 0x18003DBFC (LdrpSendPostSnapNotifications.c)
 *     LdrpQueryValueKey @ 0x18003F670 (LdrpQueryValueKey.c)
 *     SHA256Update @ 0x180040488 (SHA256Update.c)
 *     A_SHAUpdate @ 0x1800410A0 (A_SHAUpdate.c)
 *     EtwpEventApiCallback @ 0x180043924 (EtwpEventApiCallback.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180044C5C (RtlpExtendFrontEndUsageArray.c)
 *     RtlpCallQueryRegistryRoutine @ 0x180045FB4 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x1800462DC (RtlpQueryRegistryDirect.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800463E4 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlGetFileMUIPath @ 0x1800468E0 (RtlGetFileMUIPath.c)
 *     LdrpHandleTlsData @ 0x180047C14 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x180048150 (LdrpAllocateTls.c)
 *     LdrpAcquireTlsIndex @ 0x1800484E8 (LdrpAcquireTlsIndex.c)
 *     LdrResSearchResource @ 0x180048B30 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180048EFC (LdrpResSearchResourceMappedFile.c)
 *     RtlQueryAtomInAtomTable @ 0x18004C220 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18004C42C (RtlAddAtomToAtomTableEx.c)
 *     RtlCreateProcessParametersInternal @ 0x18004D6D0 (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x18004DBCC (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x18004DC98 (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18004DF00 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18004E110 (RtlSetEnvironmentVar.c)
 *     EtwpWriteToPrivateBuffers @ 0x18004F4EC (EtwpWriteToPrivateBuffers.c)
 *     EtwpTraceUmEvent @ 0x18004FB84 (EtwpTraceUmEvent.c)
 *     EtwpRelogEvent @ 0x18004FEBC (EtwpRelogEvent.c)
 *     vDbgPrintExWithPrefixInternal @ 0x1800509A8 (vDbgPrintExWithPrefixInternal.c)
 *     RtlpCopyXStateChunk @ 0x18005240C (RtlpCopyXStateChunk.c)
 *     TppPrepareDirectParams @ 0x180053C10 (TppPrepareDirectParams.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800564B8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpQueryRegString @ 0x180057798 (EtwpQueryRegString.c)
 *     RtlGetPersistedStateLocation @ 0x180057D70 (RtlGetPersistedStateLocation.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x1800580B0 (EtwpAddReloggedHeaderExtensionEvents.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x18005BA40 (RtlInsertElementGenericTableFullAvl.c)
 *     MD5Update @ 0x18005BEA0 (MD5Update.c)
 *     RtlGetCurrentDirectory_U @ 0x18005D240 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x18005E72C (RtlpCreateNewDirectoryReference.c)
 *     LdrpResolveDllName @ 0x18005F064 (LdrpResolveDllName.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180060048 (LdrpLogDeprecatedDllEtwEvent.c)
 *     WerpGlobalFlagsForProcess @ 0x180060684 (WerpGlobalFlagsForProcess.c)
 *     RtlInsertElementGenericTableFull @ 0x180065100 (RtlInsertElementGenericTableFull.c)
 *     RtlIpv6AddressToStringExW @ 0x1800658A0 (RtlIpv6AddressToStringExW.c)
 *     RtlFormatMessageEx @ 0x180065C30 (RtlFormatMessageEx.c)
 *     RtlCopySid @ 0x180067300 (RtlCopySid.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x1800673B0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     LdrpGetDataModulePath @ 0x18006A008 (LdrpGetDataModulePath.c)
 *     LdrpRecordUnloadEvent @ 0x18006AA14 (LdrpRecordUnloadEvent.c)
 *     RtlpSaveX87State @ 0x18006B0B0 (RtlpSaveX87State.c)
 *     LdrpAllocatePlaceHolder @ 0x18006B21C (LdrpAllocatePlaceHolder.c)
 *     RtlpComputePath @ 0x18006C6C0 (RtlpComputePath.c)
 *     RtlCopySecurityDescriptor @ 0x18006CEE0 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x18006CFA0 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x18006D180 (RtlMakeSelfRelativeSD.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x18006DAE0 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x18006DBF0 (RtlpEnsureBufferSize.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180070D28 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlpCombineAcls @ 0x1800718E4 (RtlpCombineAcls.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180071F94 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180072550 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180072974 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180072A9C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrAddLoadAsDataTable @ 0x180073010 (LdrAddLoadAsDataTable.c)
 *     RtlpSetSecurityObject @ 0x1800766AC (RtlpSetSecurityObject.c)
 *     RtlIpv6AddressToStringExA @ 0x180077500 (RtlIpv6AddressToStringExA.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180077F18 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x180078174 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpMuiRegDupLanguageList @ 0x180078400 (RtlpMuiRegDupLanguageList.c)
 *     RtlDuplicateUnicodeString @ 0x180078D40 (RtlDuplicateUnicodeString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1800792F8 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180079CD0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlQueryImageFileKeyOption @ 0x18007A3A0 (RtlQueryImageFileKeyOption.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x18007A710 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlpNtQueryValueKey @ 0x18007AF00 (RtlpNtQueryValueKey.c)
 *     RtlIpv4AddressToStringExW @ 0x18007B100 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv6StringToAddressA @ 0x18007CCB0 (RtlIpv6StringToAddressA.c)
 *     RtlpInitParameterBlock @ 0x18007D188 (RtlpInitParameterBlock.c)
 *     RtlIpv4AddressToStringExA @ 0x18007D710 (RtlIpv4AddressToStringExA.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18007F640 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlSetProtectedPolicy @ 0x180080B30 (RtlSetProtectedPolicy.c)
 *     RtlAddAttributeActionToRXact @ 0x180081120 (RtlAddAttributeActionToRXact.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180081C50 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlCreateBoundaryDescriptor @ 0x180081E80 (RtlCreateBoundaryDescriptor.c)
 *     RtlpNtEnumerateSubKey @ 0x180081F60 (RtlpNtEnumerateSubKey.c)
 *     RtlSetEnvironmentStrings @ 0x1800829E0 (RtlSetEnvironmentStrings.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x180082FA4 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x180083D30 (RtlpMergeSecurityAttributeInformation.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180084144 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlpCopyMappedMemoryEx @ 0x180085350 (RtlpCopyMappedMemoryEx.c)
 *     RtlCopyString @ 0x1800853C0 (RtlCopyString.c)
 *     RtlpMUIEnumerateFolder @ 0x180086CAC (RtlpMUIEnumerateFolder.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x180087010 (RtlReplaceSystemDirectoryInPath.c)
 *     EtwpTrackBinaryForSession @ 0x180087368 (EtwpTrackBinaryForSession.c)
 *     EtwpWriteBufferCompressed @ 0x1800877B0 (EtwpWriteBufferCompressed.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180087D50 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x180087FE0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x180088C30 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlDosSearchPath_U @ 0x180088DA0 (RtlDosSearchPath_U.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008904C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlConnectToSm @ 0x1800894E0 (RtlConnectToSm.c)
 *     RtlpCheckDeviceName @ 0x18008A4FC (RtlpCheckDeviceName.c)
 *     LdrAddDllDirectory @ 0x18008B610 (LdrAddDllDirectory.c)
 *     RtlInitializeNtUserPfn @ 0x18008BF90 (RtlInitializeNtUserPfn.c)
 *     RaiseException @ 0x180094730 (RaiseException.c)
 *     memcpy_s @ 0x1800973E0 (memcpy_s.c)
 *     memmove_s @ 0x180097480 (memmove_s.c)
 *     ReadString_1 @ 0x18009A3BC (ReadString_1.c)
 *     RtlNtPathNameToDosPathName @ 0x1800CC320 (RtlNtPathNameToDosPathName.c)
 *     LdrpLoadEnclaveModule @ 0x1800CD7B8 (LdrpLoadEnclaveModule.c)
 *     LdrpCorFixupImage @ 0x1800CE698 (LdrpCorFixupImage.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800CF288 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800CFAB0 (LdrpLogNewDllLoadInternal.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D0A40 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D0EEC (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D4630 (LdrpQueryIllegalCWDDevices.c)
 *     LdrpAddRedirectedFunction @ 0x1800D4B44 (LdrpAddRedirectedFunction.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800D55B0 (RtlComputePrivatizedDllName_U.c)
 *     RtlQuerySecurityObject @ 0x1800D6F80 (RtlQuerySecurityObject.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D75D0 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7C40 (RtlQueryProcessHeapInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D83C0 (RtlSetProcessDebugInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D8980 (RtlpCopyRemoteDebugInformation.c)
 *     AVrfInitializeVerifier @ 0x1800D97F8 (AVrfInitializeVerifier.c)
 *     ReportExceptionInternal @ 0x1800DC818 (ReportExceptionInternal.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DEB40 (LdrUpdatePackageSearchPath.c)
 *     RtlpAddSystemPath @ 0x1800DED8C (RtlpAddSystemPath.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DF43C (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     sxsisol_RespectDotLocal @ 0x1800DF600 (sxsisol_RespectDotLocal.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DFA98 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800DFD28 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E0070 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0EBC (LdrpCnvrtShortToLongFileName.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800E1540 (LdrpSpecialCacheTypeHandle.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E163C (LdrpTraceLoadMUIDll.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E19B0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E2410 (RtlSetImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E37D8 (RtlpQueryEafPlusModuleList.c)
 *     LdrpResSearchResourceHandle @ 0x1800E448C (LdrpResSearchResourceHandle.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1800E6530 (RtlNormalizeSecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x1800E69E0 (RtlReplaceSidInSd.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E75EC (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E7E10 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpCreateServerAcl @ 0x1800E8364 (RtlpCreateServerAcl.c)
 *     RtlpFilterSacl @ 0x1800E859C (RtlpFilterSacl.c)
 *     RtlAddAccessFilterAce @ 0x1800E91D0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E95C0 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E9D50 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800EA0C0 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x1800EB380 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x1800EB3F0 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x1800EB740 (RtlCopyBitMap.c)
 *     RtlExtractBitMap @ 0x1800EB950 (RtlExtractBitMap.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800ED2C4 (RtlpCopyBitMapTailToHead.c)
 *     RtlLargeIntegerToUnicode @ 0x1800ED820 (RtlLargeIntegerToUnicode.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800EE03C (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1800EE3D0 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800EE570 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EF484 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EF8D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800EFFD0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0ED0 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x1800F3510 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800F3840 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800F4510 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpPushPageDescriptor @ 0x1800F7F28 (RtlpPushPageDescriptor.c)
 *     RtlpValidateHeapHeaders @ 0x1800FA854 (RtlpValidateHeapHeaders.c)
 *     RtlWriteNonVolatileMemory @ 0x1800FC1E0 (RtlWriteNonVolatileMemory.c)
 *     RtlGenerate8dot3Name @ 0x1800FC490 (RtlGenerate8dot3Name.c)
 *     RtlpGetUserLocaleName @ 0x1800FD0AC (RtlpGetUserLocaleName.c)
 *     RtlpHeapTrkReportResult @ 0x1800FE534 (RtlpHeapTrkReportResult.c)
 *     RtlpHeapTrkTrackStack @ 0x1800FE9A4 (RtlpHeapTrkTrackStack.c)
 *     RtlRemoteCall @ 0x1800FED50 (RtlRemoteCall.c)
 *     RtlpStdLogCapturedStackTrace @ 0x180101638 (RtlpStdLogCapturedStackTrace.c)
 *     RtlSetFeatureConfigurations @ 0x180101960 (RtlSetFeatureConfigurations.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x180102954 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x180104368 (RtlpMuiRegDupLanguageConfigList.c)
 *     RtlpMuiRegLoadLicInformation @ 0x180105148 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegResizeStringPool @ 0x1801057E8 (RtlpMuiRegResizeStringPool.c)
 *     RtlpHpStackTraceEventWriter @ 0x180108E90 (RtlpHpStackTraceEventWriter.c)
 *     RtlpRegisterStackTrace @ 0x18010AA68 (RtlpRegisterStackTrace.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x18010AF68 (RtlpHpTagQueryHeapsRemote.c)
 *     LZNT1CompressChunk @ 0x18010C184 (LZNT1CompressChunk.c)
 *     RtlDecompressBufferLZNT1 @ 0x18010C710 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x18010C8A0 (RtlDecompressFragmentLZNT1.c)
 *     RtlpHpReallocMove @ 0x18010E1E0 (RtlpHpReallocMove.c)
 *     RtlpHpLargeReAlloc @ 0x18010E5CC (RtlpHpLargeReAlloc.c)
 *     MD4Update @ 0x180110160 (MD4Update.c)
 *     EtwTraceEventInstance @ 0x180110710 (EtwTraceEventInstance.c)
 *     EtwpTraceUmMessage @ 0x180110DC8 (EtwpTraceUmMessage.c)
 *     EtwpAddBinaryInfoEvents @ 0x180111348 (EtwpAddBinaryInfoEvents.c)
 *     EtwpAddEventToBuffer @ 0x1801115F0 (EtwpAddEventToBuffer.c)
 *     EtwpTrackDebugIdForSession @ 0x1801117B4 (EtwpTrackDebugIdForSession.c)
 *     TpSetDefaultPoolCpuSets @ 0x1801119A8 (TpSetDefaultPoolCpuSets.c)
 *     PsspCaptureAuxiliaryPages @ 0x180114CDC (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18011515C (PsspCaptureVaSpaceInformation2.c)
 *     PsspHandleDumper @ 0x180115D10 (PsspHandleDumper.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801190A4 (RtlpStackDbSegmentFindOrCreate.c)
 *     QueryRegistryValue @ 0x180119DF4 (QueryRegistryValue.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBuffers @ 0x18011A3AC (RtlpFcQueryAllFeatureConfigurationsFromBuffers.c)
 *     RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet @ 0x18011A400 (RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet.c)
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

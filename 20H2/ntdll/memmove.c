/*
 * XREFs of memmove @ 0x1800A3EC0
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
 *     RtlpCopyAces @ 0x18003D2D8 (RtlpCopyAces.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18003D730 (RtlpMuiRegTryToAppendLanguageName.c)
 *     LdrpSendPostSnapNotifications @ 0x18003DC4C (LdrpSendPostSnapNotifications.c)
 *     LdrpQueryValueKey @ 0x18003F6C0 (LdrpQueryValueKey.c)
 *     SHA256Update @ 0x1800404D8 (SHA256Update.c)
 *     A_SHAUpdate @ 0x1800410F0 (A_SHAUpdate.c)
 *     EtwpEventApiCallback @ 0x180043974 (EtwpEventApiCallback.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180044CAC (RtlpExtendFrontEndUsageArray.c)
 *     RtlpCallQueryRegistryRoutine @ 0x180046004 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x18004632C (RtlpQueryRegistryDirect.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180046434 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlGetFileMUIPath @ 0x180046930 (RtlGetFileMUIPath.c)
 *     LdrpHandleTlsData @ 0x180047C64 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x1800481A0 (LdrpAllocateTls.c)
 *     LdrpAcquireTlsIndex @ 0x180048538 (LdrpAcquireTlsIndex.c)
 *     LdrResSearchResource @ 0x180048B80 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180048F4C (LdrpResSearchResourceMappedFile.c)
 *     RtlQueryAtomInAtomTable @ 0x18004C270 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18004C47C (RtlAddAtomToAtomTableEx.c)
 *     RtlCreateProcessParametersInternal @ 0x18004D720 (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x18004DC1C (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x18004DCE8 (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18004DF50 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18004E160 (RtlSetEnvironmentVar.c)
 *     EtwpWriteToPrivateBuffers @ 0x18004F53C (EtwpWriteToPrivateBuffers.c)
 *     EtwpTraceUmEvent @ 0x18004FBD4 (EtwpTraceUmEvent.c)
 *     EtwpRelogEvent @ 0x18004FF0C (EtwpRelogEvent.c)
 *     vDbgPrintExWithPrefixInternal @ 0x1800509F8 (vDbgPrintExWithPrefixInternal.c)
 *     RtlpCopyXStateChunk @ 0x18005245C (RtlpCopyXStateChunk.c)
 *     TppPrepareDirectParams @ 0x180053C60 (TppPrepareDirectParams.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180056508 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpQueryRegString @ 0x1800577E8 (EtwpQueryRegString.c)
 *     RtlGetPersistedStateLocation @ 0x180057DC0 (RtlGetPersistedStateLocation.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x180058100 (EtwpAddReloggedHeaderExtensionEvents.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x18005BA90 (RtlInsertElementGenericTableFullAvl.c)
 *     MD5Update @ 0x18005BEF0 (MD5Update.c)
 *     RtlGetCurrentDirectory_U @ 0x18005D290 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x18005E83C (RtlpCreateNewDirectoryReference.c)
 *     LdrpResolveDllName @ 0x18005F174 (LdrpResolveDllName.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180060158 (LdrpLogDeprecatedDllEtwEvent.c)
 *     WerpGlobalFlagsForProcess @ 0x180060794 (WerpGlobalFlagsForProcess.c)
 *     RtlInsertElementGenericTableFull @ 0x180065210 (RtlInsertElementGenericTableFull.c)
 *     RtlIpv6AddressToStringExW @ 0x1800659B0 (RtlIpv6AddressToStringExW.c)
 *     RtlFormatMessageEx @ 0x180065D40 (RtlFormatMessageEx.c)
 *     RtlCopySid @ 0x180067410 (RtlCopySid.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x1800674C0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     LdrpGetDataModulePath @ 0x18006A118 (LdrpGetDataModulePath.c)
 *     LdrpRecordUnloadEvent @ 0x18006AB24 (LdrpRecordUnloadEvent.c)
 *     RtlpSaveX87State @ 0x18006B1C0 (RtlpSaveX87State.c)
 *     LdrpAllocatePlaceHolder @ 0x18006B32C (LdrpAllocatePlaceHolder.c)
 *     RtlpComputePath @ 0x18006C7D0 (RtlpComputePath.c)
 *     RtlCopySecurityDescriptor @ 0x18006CFF0 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x18006D0B0 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x18006D290 (RtlMakeSelfRelativeSD.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x18006DBF0 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x18006DD00 (RtlpEnsureBufferSize.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180070E28 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlpCombineAcls @ 0x1800719E4 (RtlpCombineAcls.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180072094 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180072650 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180072A74 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180072B9C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrAddLoadAsDataTable @ 0x180073110 (LdrAddLoadAsDataTable.c)
 *     RtlpSetSecurityObject @ 0x1800767AC (RtlpSetSecurityObject.c)
 *     RtlIpv6AddressToStringExA @ 0x180077600 (RtlIpv6AddressToStringExA.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180078018 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x180078274 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpMuiRegDupLanguageList @ 0x180078500 (RtlpMuiRegDupLanguageList.c)
 *     RtlDuplicateUnicodeString @ 0x180078E40 (RtlDuplicateUnicodeString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1800793F8 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180079DD0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlQueryImageFileKeyOption @ 0x18007A4A0 (RtlQueryImageFileKeyOption.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x18007A810 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlpNtQueryValueKey @ 0x18007B000 (RtlpNtQueryValueKey.c)
 *     RtlIpv4AddressToStringExW @ 0x18007B200 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv6StringToAddressA @ 0x18007CDB0 (RtlIpv6StringToAddressA.c)
 *     RtlpInitParameterBlock @ 0x18007D288 (RtlpInitParameterBlock.c)
 *     RtlIpv4AddressToStringExA @ 0x18007D810 (RtlIpv4AddressToStringExA.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18007F740 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlSetProtectedPolicy @ 0x180080C30 (RtlSetProtectedPolicy.c)
 *     RtlAddAttributeActionToRXact @ 0x180081220 (RtlAddAttributeActionToRXact.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180081D50 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlCreateBoundaryDescriptor @ 0x180081F80 (RtlCreateBoundaryDescriptor.c)
 *     RtlpNtEnumerateSubKey @ 0x180082060 (RtlpNtEnumerateSubKey.c)
 *     RtlSetEnvironmentStrings @ 0x180082AE0 (RtlSetEnvironmentStrings.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800830A4 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x180083E30 (RtlpMergeSecurityAttributeInformation.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180084244 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlpCopyMappedMemoryEx @ 0x180085450 (RtlpCopyMappedMemoryEx.c)
 *     RtlCopyString @ 0x1800854C0 (RtlCopyString.c)
 *     RtlpMUIEnumerateFolder @ 0x180086DAC (RtlpMUIEnumerateFolder.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x180087110 (RtlReplaceSystemDirectoryInPath.c)
 *     EtwpTrackBinaryForSession @ 0x180087468 (EtwpTrackBinaryForSession.c)
 *     EtwpWriteBufferCompressed @ 0x1800878B0 (EtwpWriteBufferCompressed.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180087E50 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800880E0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x180088D30 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlDosSearchPath_U @ 0x180088EA0 (RtlDosSearchPath_U.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008914C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlConnectToSm @ 0x1800895E0 (RtlConnectToSm.c)
 *     RtlpCheckDeviceName @ 0x18008A5FC (RtlpCheckDeviceName.c)
 *     LdrAddDllDirectory @ 0x18008B710 (LdrAddDllDirectory.c)
 *     RtlInitializeNtUserPfn @ 0x18008C090 (RtlInitializeNtUserPfn.c)
 *     RaiseException @ 0x180094830 (RaiseException.c)
 *     memcpy_s @ 0x1800974E0 (memcpy_s.c)
 *     memmove_s @ 0x180097580 (memmove_s.c)
 *     ReadString_1 @ 0x18009A4BC (ReadString_1.c)
 *     RtlNtPathNameToDosPathName @ 0x1800CC500 (RtlNtPathNameToDosPathName.c)
 *     LdrpLoadEnclaveModule @ 0x1800CD998 (LdrpLoadEnclaveModule.c)
 *     LdrpCorFixupImage @ 0x1800CE878 (LdrpCorFixupImage.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800CF468 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800CFC90 (LdrpLogNewDllLoadInternal.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D0C20 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D10CC (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D49CC (LdrpQueryIllegalCWDDevices.c)
 *     LdrpAddRedirectedFunction @ 0x1800D4EE4 (LdrpAddRedirectedFunction.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800D5950 (RtlComputePrivatizedDllName_U.c)
 *     RtlQuerySecurityObject @ 0x1800D7320 (RtlQuerySecurityObject.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D7970 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7FE0 (RtlQueryProcessHeapInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D8760 (RtlSetProcessDebugInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D8D20 (RtlpCopyRemoteDebugInformation.c)
 *     AVrfInitializeVerifier @ 0x1800D9B98 (AVrfInitializeVerifier.c)
 *     ReportExceptionInternal @ 0x1800DCBB8 (ReportExceptionInternal.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DEEE0 (LdrUpdatePackageSearchPath.c)
 *     RtlpAddSystemPath @ 0x1800DF12C (RtlpAddSystemPath.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DF7DC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     sxsisol_RespectDotLocal @ 0x1800DF9A0 (sxsisol_RespectDotLocal.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DFE38 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800E00C8 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E0410 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E125C (LdrpCnvrtShortToLongFileName.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800E18E0 (LdrpSpecialCacheTypeHandle.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E19DC (LdrpTraceLoadMUIDll.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E1D50 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E27F0 (RtlSetImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E3C28 (RtlpQueryEafPlusModuleList.c)
 *     LdrpResSearchResourceHandle @ 0x1800E48DC (LdrpResSearchResourceHandle.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1800E6980 (RtlNormalizeSecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x1800E6E60 (RtlReplaceSidInSd.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E7A94 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E82B8 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpCreateServerAcl @ 0x1800E880C (RtlpCreateServerAcl.c)
 *     RtlpFilterSacl @ 0x1800E8AA0 (RtlpFilterSacl.c)
 *     RtlAddAccessFilterAce @ 0x1800E96D0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9AC0 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800EA260 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800EA5D0 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x1800EB890 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x1800EB900 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x1800EBC50 (RtlCopyBitMap.c)
 *     RtlExtractBitMap @ 0x1800EBE60 (RtlExtractBitMap.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800ED7D4 (RtlpCopyBitMapTailToHead.c)
 *     RtlLargeIntegerToUnicode @ 0x1800EDD30 (RtlLargeIntegerToUnicode.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800EE54C (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1800EE8E0 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800EEA80 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EF994 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFDE0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800F04E0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F13E0 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x1800F3A20 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800F3D50 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800F4A20 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpPushPageDescriptor @ 0x1800F8438 (RtlpPushPageDescriptor.c)
 *     RtlpValidateHeapHeaders @ 0x1800FAD64 (RtlpValidateHeapHeaders.c)
 *     RtlWriteNonVolatileMemory @ 0x1800FC6F0 (RtlWriteNonVolatileMemory.c)
 *     RtlGenerate8dot3Name @ 0x1800FC9A0 (RtlGenerate8dot3Name.c)
 *     RtlpGetUserLocaleName @ 0x1800FD5BC (RtlpGetUserLocaleName.c)
 *     RtlpHeapTrkReportResult @ 0x1800FEA44 (RtlpHeapTrkReportResult.c)
 *     RtlpHeapTrkTrackStack @ 0x1800FEEB4 (RtlpHeapTrkTrackStack.c)
 *     RtlRemoteCall @ 0x1800FF260 (RtlRemoteCall.c)
 *     RtlpStdLogCapturedStackTrace @ 0x180101B48 (RtlpStdLogCapturedStackTrace.c)
 *     RtlSetFeatureConfigurations @ 0x180101E70 (RtlSetFeatureConfigurations.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x180102E64 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x180104878 (RtlpMuiRegDupLanguageConfigList.c)
 *     RtlpMuiRegLoadLicInformation @ 0x180105658 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegResizeStringPool @ 0x180105CF8 (RtlpMuiRegResizeStringPool.c)
 *     RtlpHpStackTraceEventWriter @ 0x1801093A0 (RtlpHpStackTraceEventWriter.c)
 *     RtlpRegisterStackTrace @ 0x18010AF78 (RtlpRegisterStackTrace.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x18010B478 (RtlpHpTagQueryHeapsRemote.c)
 *     LZNT1CompressChunk @ 0x18010C694 (LZNT1CompressChunk.c)
 *     RtlDecompressBufferLZNT1 @ 0x18010CC20 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x18010CDB0 (RtlDecompressFragmentLZNT1.c)
 *     RtlpHpReallocMove @ 0x18010E6F0 (RtlpHpReallocMove.c)
 *     RtlpHpLargeReAlloc @ 0x18010EADC (RtlpHpLargeReAlloc.c)
 *     MD4Update @ 0x180110670 (MD4Update.c)
 *     EtwTraceEventInstance @ 0x180110C20 (EtwTraceEventInstance.c)
 *     EtwpTraceUmMessage @ 0x1801112D8 (EtwpTraceUmMessage.c)
 *     EtwpAddBinaryInfoEvents @ 0x180111858 (EtwpAddBinaryInfoEvents.c)
 *     EtwpAddEventToBuffer @ 0x180111B00 (EtwpAddEventToBuffer.c)
 *     EtwpTrackDebugIdForSession @ 0x180111CC8 (EtwpTrackDebugIdForSession.c)
 *     TpSetDefaultPoolCpuSets @ 0x180111EB8 (TpSetDefaultPoolCpuSets.c)
 *     PsspCaptureAuxiliaryPages @ 0x1801151EC (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18011566C (PsspCaptureVaSpaceInformation2.c)
 *     PsspHandleDumper @ 0x180116220 (PsspHandleDumper.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801195B4 (RtlpStackDbSegmentFindOrCreate.c)
 *     QueryRegistryValue @ 0x18011A304 (QueryRegistryValue.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBuffers @ 0x18011C24C (RtlpFcQueryAllFeatureConfigurationsFromBuffers.c)
 *     RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet @ 0x18011C2A0 (RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet.c)
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

/*
 * XREFs of memset @ 0x1800A4780
 * Callers:
 *     RtlLargeIntegerToChar @ 0x180001010 (RtlLargeIntegerToChar.c)
 *     RtlpHpLargeAlloc @ 0x180003404 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketActivate @ 0x180007328 (RtlpHpLfhBucketActivate.c)
 *     RtlpHpLfhContextAllocate @ 0x1800075AC (RtlpHpLfhContextAllocate.c)
 *     RtlpHpHeapAllocate @ 0x180007E6C (RtlpHpHeapAllocate.c)
 *     RtlpHpVsContextInitialize @ 0x18000813C (RtlpHpVsContextInitialize.c)
 *     RtlpHpSegContextInitialize @ 0x1800084E0 (RtlpHpSegContextInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x1800086EC (RtlpHpLfhContextInitialize.c)
 *     CsrAllocateCaptureBuffer @ 0x180008D50 (CsrAllocateCaptureBuffer.c)
 *     CsrpConnectToServer @ 0x180008FE4 (CsrpConnectToServer.c)
 *     RtlpSubSegmentInitialize @ 0x18000A090 (RtlpSubSegmentInitialize.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlIpv6StringToAddressW @ 0x18000DB60 (RtlIpv6StringToAddressW.c)
 *     RtlDeleteResource @ 0x180010F30 (RtlDeleteResource.c)
 *     TppCleanupGroupMemberDestroy @ 0x180012088 (TppCleanupGroupMemberDestroy.c)
 *     RtlpComputeLangListCheckSum @ 0x18001532C (RtlpComputeLangListCheckSum.c)
 *     RtlIntegerToChar @ 0x1800163A0 (RtlIntegerToChar.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001A9E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlGetFullPathName_Ustr @ 0x18001B430 (RtlGetFullPathName_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001C2B4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpHpAllocVA @ 0x180022BAC (RtlpHpAllocVA.c)
 *     RtlpHpSegMgrCommit @ 0x180022E90 (RtlpHpSegMgrCommit.c)
 *     RtlpHpReAllocateHeap @ 0x180023990 (RtlpHpReAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     RtlpHpVsContextAllocateInternal @ 0x180028CD0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x18002F690 (RtlpHpLfhSubsegmentInitialize.c)
 *     LdrpResolveProcedureAddress @ 0x1800303F4 (LdrpResolveProcedureAddress.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180037EF8 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18003C2D4 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlSwitchedVVI @ 0x18003CC40 (RtlSwitchedVVI.c)
 *     SbSelectProcedure @ 0x18003E0E0 (SbSelectProcedure.c)
 *     SbpUpdateCacheWithCurrentImpl @ 0x18003E2C0 (SbpUpdateCacheWithCurrentImpl.c)
 *     A_SHAFinal @ 0x180040240 (A_SHAFinal.c)
 *     SHA256Final @ 0x18004034C (SHA256Final.c)
 *     RtlpCreateWnfNameSubscription @ 0x18004277C (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateWnfUserSubscription @ 0x180042920 (RtlpCreateWnfUserSubscription.c)
 *     EtwpSetProviderTraits @ 0x180042B48 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x180042ECC (EtwpRegisterProvider.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180043280 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpCreateRegGuidsContext @ 0x180043B94 (EtwpCreateRegGuidsContext.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180044040 (RtlpGetTokenNamedObjectPath.c)
 *     EtwpDisableTraceProviders @ 0x180044FF4 (EtwpDisableTraceProviders.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x1800467D0 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpFindRegTziForCurrentYear @ 0x180046F54 (RtlpFindRegTziForCurrentYear.c)
 *     RtlCheckPortableOperatingSystem @ 0x180047C50 (RtlCheckPortableOperatingSystem.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x180047EA4 (RtlpQueryTimeZoneInformationWorker.c)
 *     EtwpAllocateUmGuidEntry @ 0x1800480A4 (EtwpAllocateUmGuidEntry.c)
 *     EtwpAllocateFreeBuffers @ 0x180048A90 (EtwpAllocateFreeBuffers.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180048BF8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180049AF0 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpGetTimeZoneInformation @ 0x180049C68 (EtwpGetTimeZoneInformation.c)
 *     EtwpQueryPartitionRegistryInformationUm @ 0x18004A040 (EtwpQueryPartitionRegistryInformationUm.c)
 *     RtlCreateProcessParametersInternal @ 0x18004A9F0 (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x18004AEEC (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x18004AFB8 (RtlpInitEnvironmentBlock.c)
 *     RtlSetEnvironmentVar @ 0x18004B430 (RtlSetEnvironmentVar.c)
 *     EtwpFlushBuffer @ 0x18004CA44 (EtwpFlushBuffer.c)
 *     TppWorkerThread @ 0x18004D110 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18004DD30 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18004E04C (TppCallbackCheckThreadAfterCallback.c)
 *     TpCheckTerminateWorker @ 0x18004EC90 (TpCheckTerminateWorker.c)
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x18004FCA4 (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005064C (EtwpWriteToPrivateBuffers.c)
 *     EtwpTraceUmEvent @ 0x180050CE4 (EtwpTraceUmEvent.c)
 *     EtwpFreeRegistration @ 0x1800515F8 (EtwpFreeRegistration.c)
 *     RtlInitializeExtendedContext2 @ 0x180053090 (RtlInitializeExtendedContext2.c)
 *     RtlpCopyXStateChunk @ 0x18005350C (RtlpCopyXStateChunk.c)
 *     LdrpGetNewTlsVector @ 0x180054CA8 (LdrpGetNewTlsVector.c)
 *     RtlSetBits @ 0x180055310 (RtlSetBits.c)
 *     RtlClearBits @ 0x180058550 (RtlClearBits.c)
 *     RtlCreateAtomTableEx @ 0x180059068 (RtlCreateAtomTableEx.c)
 *     RtlpInsertStringAtom @ 0x180059A30 (RtlpInsertStringAtom.c)
 *     RtlpFreeHandleForAtom @ 0x180059CE0 (RtlpFreeHandleForAtom.c)
 *     RtlFreeHandle @ 0x180059D40 (RtlFreeHandle.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x18005B090 (RtlCompressBufferXpressHuffStandard.c)
 *     XpressBuildHuffmanEncodings @ 0x18005BB80 (XpressBuildHuffmanEncodings.c)
 *     MD5Final @ 0x18005D350 (MD5Final.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18005DD5C (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x18005DF98 (RtlpFcBufferManagerUpdateBuffers.c)
 *     RtlReportSilentProcessExit @ 0x18005F440 (RtlReportSilentProcessExit.c)
 *     WerpGlobalFlagsForProcess @ 0x180061C84 (WerpGlobalFlagsForProcess.c)
 *     TppPoolUpdateNodeRelation @ 0x18006339C (TppPoolUpdateNodeRelation.c)
 *     RtlStringCbPrintfExW @ 0x18006ADEC (RtlStringCbPrintfExW.c)
 *     LdrpRemoveAlternateModuleCacheItem @ 0x18006C180 (LdrpRemoveAlternateModuleCacheItem.c)
 *     LdrpInitializeShimDllDependencies @ 0x18006CBC4 (LdrpInitializeShimDllDependencies.c)
 *     RtlMakeSelfRelativeSD @ 0x18006E2C0 (RtlMakeSelfRelativeSD.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x180070550 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     RtlpTpImpersonate @ 0x180071160 (RtlpTpImpersonate.c)
 *     RtlActivateActivationContextEx @ 0x1800733E0 (RtlActivateActivationContextEx.c)
 *     RtlCreateActivationContext @ 0x180073E90 (RtlCreateActivationContext.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180073FE4 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpCreateHashTable @ 0x1800743F8 (RtlpCreateHashTable.c)
 *     CompatCachepLookupCdb @ 0x1800745B4 (CompatCachepLookupCdb.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800750FC (RtlpQueryExtendedHeapInformation.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x1800751DC (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpZeroBlockFromOffset @ 0x180076114 (RtlpZeroBlockFromOffset.c)
 *     LdrpQuerySxSMUIFile @ 0x1800775AC (LdrpQuerySxSMUIFile.c)
 *     RtlpSetSecurityObject @ 0x1800777DC (RtlpSetSecurityObject.c)
 *     RtlClearAllBits @ 0x180078F30 (RtlClearAllBits.c)
 *     RtlpLocateActivationContextSectionForQuery @ 0x180079368 (RtlpLocateActivationContextSectionForQuery.c)
 *     RtlpDeleteData @ 0x180079830 (RtlpDeleteData.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18007A428 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007AE00 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlVerifyVersionInfo @ 0x18007B110 (RtlVerifyVersionInfo.c)
 *     RtlCreateMemoryBlockLookaside @ 0x18007B5C0 (RtlCreateMemoryBlockLookaside.c)
 *     RtlpQueryExtendedInformationHeap @ 0x18007B920 (RtlpQueryExtendedInformationHeap.c)
 *     RtlSidHashInitialize @ 0x18007C9A0 (RtlSidHashInitialize.c)
 *     RtlpInitializeWnf @ 0x18007D3B0 (RtlpInitializeWnf.c)
 *     RtlIpv6StringToAddressA @ 0x18007D750 (RtlIpv6StringToAddressA.c)
 *     LdrLoadAlternateResourceModule @ 0x18007E4B0 (LdrLoadAlternateResourceModule.c)
 *     RtlInitializeGenericTableAvl @ 0x18007E770 (RtlInitializeGenericTableAvl.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007EE30 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x18007EFE0 (RtlpHpLfhBucketAllocateSlot.c)
 *     TpAllocJobNotification @ 0x18007FE30 (TpAllocJobNotification.c)
 *     Normalization__LoadTables @ 0x180081090 (Normalization__LoadTables.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800817E4 (LdrpRedirectDelayloadFailure.c)
 *     EtwpShutdownPrivateLoggers @ 0x180081FC0 (EtwpShutdownPrivateLoggers.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800830F4 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlSetEnvironmentStrings @ 0x1800831F0 (RtlSetEnvironmentStrings.c)
 *     RtlInitializeCorrelationVector @ 0x180085B80 (RtlInitializeCorrelationVector.c)
 *     RtlEraseUnicodeString @ 0x180086280 (RtlEraseUnicodeString.c)
 *     RtlpMUIEnumerateFolder @ 0x1800873AC (RtlpMUIEnumerateFolder.c)
 *     RtlZeroMemory @ 0x180088400 (RtlZeroMemory.c)
 *     RtlExpandHashTable @ 0x180088CA0 (RtlExpandHashTable.c)
 *     RtlpCreateUserProcess @ 0x180089030 (RtlpCreateUserProcess.c)
 *     RtlConnectToSm @ 0x180089BE0 (RtlConnectToSm.c)
 *     RtlDestroyAtomTable @ 0x18008AD30 (RtlDestroyAtomTable.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008BF50 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlSetCurrentEnvironment @ 0x18008C1D0 (RtlSetCurrentEnvironment.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008C2C8 (RtlpLoadInstallLanguageFallback.c)
 *     memcpy_s @ 0x180097AE0 (memcpy_s.c)
 *     _output_s @ 0x1800986B4 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x180098F3C (_safecrt_wctomb_s.c)
 *     _woutput_s @ 0x18009A0DC (_woutput_s.c)
 *     ReadStringDelimited_1 @ 0x18009ACFC (ReadStringDelimited_1.c)
 *     wil_details_StagingConfig_Load @ 0x18009C59C (wil_details_StagingConfig_Load.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB690 (LdrAppxHandleIntegrityFailure.c)
 *     RtlEnableThreadProfiling @ 0x1800CBF80 (RtlEnableThreadProfiling.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1800CDB2C (RtlStringExHandleOtherFlagsW.c)
 *     LdrpLogEtwEvent @ 0x1800CF280 (LdrpLogEtwEvent.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CF7D0 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpConstructModernAppKeyName @ 0x1800D07FC (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeProcess @ 0x1800D1EC0 (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessHeap @ 0x1800D400C (LdrpInitializeProcessHeap.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D78B0 (RtlQueryProcessDebugInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7D90 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessModuleInformation @ 0x1800D8410 (RtlQueryProcessModuleInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x1800D8EA0 (RtlpQueryProcessEnumHeapsRoutine.c)
 *     AVrfpParseVerifierDllsString @ 0x1800DB0D0 (AVrfpParseVerifierDllsString.c)
 *     AVrfpSnapDllImports @ 0x1800DB410 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800DB6D0 (AvrfMiniLoadDll.c)
 *     ReportExceptionInternal @ 0x1800DC968 (ReportExceptionInternal.c)
 *     RtlReportExceptionEx @ 0x1800DCB70 (RtlReportExceptionEx.c)
 *     SendMessageToWERService @ 0x1800DD4BC (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DD8DC (WerpAllocateAndInitializeSid.c)
 *     WerpCreateCrashDataSection @ 0x1800DDA84 (WerpCreateCrashDataSection.c)
 *     LdrpMUIEtwOutput @ 0x1800E14AC (LdrpMUIEtwOutput.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E1B10 (RtlQueryImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E3AB8 (RtlpQueryEafPlusModuleList.c)
 *     LdrpResSearchResourceHandle @ 0x1800E476C (LdrpResSearchResourceHandle.c)
 *     RtlResetRtlTranslations @ 0x1800E5560 (RtlResetRtlTranslations.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1800E6810 (RtlNormalizeSecurityDescriptor.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9950 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800EA0F0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800EA460 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlClearAllBitsEx @ 0x1800EB9E0 (RtlClearAllBitsEx.c)
 *     RtlClearBitsEx @ 0x1800EBA20 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x1800ED5B0 (RtlSetBitsEx.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EE1B0 (RtlRestoreBootStatusDefaults.c)
 *     RtlConvertLCIDToString @ 0x1800EEF10 (RtlConvertLCIDToString.c)
 *     RtlUnicodeStringToLcid @ 0x1800EF718 (RtlUnicodeStringToLcid.c)
 *     RtlpSetInstallLanguage @ 0x1800F0BC0 (RtlpSetInstallLanguage.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3D00 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F4748 (RtlpHpOverrideGCInterval.c)
 *     RtlpInitializeMap @ 0x1800F8104 (RtlpInitializeMap.c)
 *     RtlFillMemory @ 0x1800FC390 (RtlFillMemory.c)
 *     RtlFillNonVolatileMemory @ 0x1800FC3B0 (RtlFillNonVolatileMemory.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1800FC6A8 (RtlStringExHandleFillBehindNullW.c)
 *     RtlInitializeContext @ 0x1800FEFD0 (RtlInitializeContext.c)
 *     RtlInitializeExceptionLog @ 0x180100918 (RtlInitializeExceptionLog.c)
 *     RtlStdInitializeStackDatabase @ 0x1801011D0 (RtlStdInitializeStackDatabase.c)
 *     RtlTraceDatabaseCreate @ 0x1801028D0 (RtlTraceDatabaseCreate.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x180106944 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180106F54 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180107458 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpHpHeapHandleError @ 0x180108500 (RtlpHpHeapHandleError.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1801087AC (RtlpHpRaiseFatalLimitError.c)
 *     RtlpHpStackTraceConfig @ 0x180109000 (RtlpHpStackTraceConfig.c)
 *     RtlpHpStackTraceEnable @ 0x1801090C8 (RtlpHpStackTraceEnable.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180109170 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpStackTraceEventWriter @ 0x180109240 (RtlpHpStackTraceEventWriter.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x180109764 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpInitializeStackTraceLog @ 0x18010994C (RtlpInitializeStackTraceLog.c)
 *     RtlpLogHeapCommit @ 0x180109F88 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapDecommit @ 0x18010A16C (RtlpLogHeapDecommit.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x18010A5A0 (RtlpLogHeapSubSegmentAlloc.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x18010A650 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x18010A700 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x18010A7B0 (RtlpLogHeapSubSegmentFreeCached.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x18010A860 (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x18010B318 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlDecompressBufferLZNT1 @ 0x18010CAC0 (RtlDecompressBufferLZNT1.c)
 *     RtlCompressBufferXpressHuffMax @ 0x18010CEB4 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x18010D5BC (RtlCompressBufferXpressLzMax.c)
 *     RtlHpHeapManagerInitialize @ 0x18010DF74 (RtlHpHeapManagerInitialize.c)
 *     RtlpInitializeLfhBitmapData @ 0x18010E71C (RtlpInitializeLfhBitmapData.c)
 *     MD4Final @ 0x18010FE80 (MD4Final.c)
 *     TppRaiseInvalidParameter @ 0x1801124DC (TppRaiseInvalidParameter.c)
 *     SbpTraceContextUpdate @ 0x180113928 (SbpTraceContextUpdate.c)
 *     PssNtCaptureSnapshot @ 0x180113CF0 (PssNtCaptureSnapshot.c)
 *     PssNtValidateDescriptor @ 0x1801148C0 (PssNtValidateDescriptor.c)
 *     PsspCaptureHandleTrace @ 0x180114B98 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x180114D90 (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011508C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18011550C (PsspCaptureVaSpaceInformation2.c)
 *     PsspWalkHandleTable @ 0x180116364 (PsspWalkHandleTable.c)
 *     PsspDumpThread @ 0x180116968 (PsspDumpThread.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x180116CD4 (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x180116E00 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x180116F80 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     PsspWalkInfoClass_PSS_WALK_VA_SPACE @ 0x180117108 (PsspWalkInfoClass_PSS_WALK_VA_SPACE.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x1801172B8 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18011785C (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlpStackDbEntryCreate @ 0x180119280 (RtlpStackDbEntryCreate.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}

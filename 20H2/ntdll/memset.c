/*
 * XREFs of memset @ 0x1800A4180
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
 *     RtlSwitchedVVI @ 0x18003CC80 (RtlSwitchedVVI.c)
 *     SbSelectProcedure @ 0x18003E120 (SbSelectProcedure.c)
 *     SbpUpdateCacheWithCurrentImpl @ 0x18003E300 (SbpUpdateCacheWithCurrentImpl.c)
 *     A_SHAFinal @ 0x180040280 (A_SHAFinal.c)
 *     SHA256Final @ 0x18004038C (SHA256Final.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800427BC (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateWnfUserSubscription @ 0x180042960 (RtlpCreateWnfUserSubscription.c)
 *     EtwpSetProviderTraits @ 0x180042B88 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x180042F0C (EtwpRegisterProvider.c)
 *     EtwpCheckForPrivatePreEnable @ 0x1800432C0 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpCreateRegGuidsContext @ 0x180043BD4 (EtwpCreateRegGuidsContext.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180044080 (RtlpGetTokenNamedObjectPath.c)
 *     EtwpDisableTraceProviders @ 0x180045034 (EtwpDisableTraceProviders.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180046810 (RtlpGetMUIRedirectedFilePath.c)
 *     LdrpGetNewTlsVector @ 0x18004837C (LdrpGetNewTlsVector.c)
 *     RtlSetBits @ 0x1800489E0 (RtlSetBits.c)
 *     RtlClearBits @ 0x18004B7E0 (RtlClearBits.c)
 *     RtlCreateAtomTableEx @ 0x18004C084 (RtlCreateAtomTableEx.c)
 *     RtlpInsertStringAtom @ 0x18004CA20 (RtlpInsertStringAtom.c)
 *     RtlpFreeHandleForAtom @ 0x18004CCD0 (RtlpFreeHandleForAtom.c)
 *     RtlFreeHandle @ 0x18004CD30 (RtlFreeHandle.c)
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x18004CF34 (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K.c)
 *     RtlCreateProcessParametersInternal @ 0x18004D720 (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x18004DC1C (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x18004DCE8 (RtlpInitEnvironmentBlock.c)
 *     RtlSetEnvironmentVar @ 0x18004E160 (RtlSetEnvironmentVar.c)
 *     EtwpWriteToPrivateBuffers @ 0x18004F53C (EtwpWriteToPrivateBuffers.c)
 *     EtwpTraceUmEvent @ 0x18004FBD4 (EtwpTraceUmEvent.c)
 *     EtwpFreeRegistration @ 0x1800504E8 (EtwpFreeRegistration.c)
 *     RtlInitializeExtendedContext2 @ 0x180051FE0 (RtlInitializeExtendedContext2.c)
 *     RtlpCopyXStateChunk @ 0x18005245C (RtlpCopyXStateChunk.c)
 *     TppWorkerThread @ 0x180052B20 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x180053740 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180053A5C (TppCallbackCheckThreadAfterCallback.c)
 *     TpCheckTerminateWorker @ 0x1800546A0 (TpCheckTerminateWorker.c)
 *     EtwpFlushBuffer @ 0x180055494 (EtwpFlushBuffer.c)
 *     EtwProcessPrivateLoggerRequest @ 0x1800559A0 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpAllocateFreeBuffers @ 0x1800563A0 (EtwpAllocateFreeBuffers.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180056508 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpQueryPartitionRegistryInformationUm @ 0x180057660 (EtwpQueryPartitionRegistryInformationUm.c)
 *     EtwpGetTimeZoneInformation @ 0x180057984 (EtwpGetTimeZoneInformation.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x180057B00 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x180059B60 (RtlCompressBufferXpressHuffStandard.c)
 *     XpressBuildHuffmanEncodings @ 0x18005A650 (XpressBuildHuffmanEncodings.c)
 *     MD5Final @ 0x18005BE20 (MD5Final.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18005C82C (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x18005CA68 (RtlpFcBufferManagerUpdateBuffers.c)
 *     RtlReportSilentProcessExit @ 0x18005DF50 (RtlReportSilentProcessExit.c)
 *     WerpGlobalFlagsForProcess @ 0x180060794 (WerpGlobalFlagsForProcess.c)
 *     TppPoolUpdateNodeRelation @ 0x180061EAC (TppPoolUpdateNodeRelation.c)
 *     RtlStringCbPrintfExW @ 0x1800698FC (RtlStringCbPrintfExW.c)
 *     LdrpRemoveAlternateModuleCacheItem @ 0x18006B150 (LdrpRemoveAlternateModuleCacheItem.c)
 *     LdrpInitializeShimDllDependencies @ 0x18006BB94 (LdrpInitializeShimDllDependencies.c)
 *     RtlMakeSelfRelativeSD @ 0x18006D290 (RtlMakeSelfRelativeSD.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18006F520 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     RtlpTpImpersonate @ 0x180070130 (RtlpTpImpersonate.c)
 *     RtlActivateActivationContextEx @ 0x1800723B0 (RtlActivateActivationContextEx.c)
 *     RtlCreateActivationContext @ 0x180072E60 (RtlCreateActivationContext.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180072FB4 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpCreateHashTable @ 0x1800733C8 (RtlpCreateHashTable.c)
 *     CompatCachepLookupCdb @ 0x180073584 (CompatCachepLookupCdb.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800740CC (RtlpQueryExtendedHeapInformation.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x1800741AC (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpZeroBlockFromOffset @ 0x1800750E4 (RtlpZeroBlockFromOffset.c)
 *     LdrpQuerySxSMUIFile @ 0x18007657C (LdrpQuerySxSMUIFile.c)
 *     RtlpSetSecurityObject @ 0x1800767AC (RtlpSetSecurityObject.c)
 *     RtlClearAllBits @ 0x180077F00 (RtlClearAllBits.c)
 *     RtlpLocateActivationContextSectionForQuery @ 0x180078338 (RtlpLocateActivationContextSectionForQuery.c)
 *     RtlpDeleteData @ 0x180078800 (RtlpDeleteData.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1800793F8 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180079DD0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlVerifyVersionInfo @ 0x18007A0E0 (RtlVerifyVersionInfo.c)
 *     RtlCreateMemoryBlockLookaside @ 0x18007A590 (RtlCreateMemoryBlockLookaside.c)
 *     RtlpQueryExtendedInformationHeap @ 0x18007A8F0 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpFindRegTziForCurrentYear @ 0x18007B7FC (RtlpFindRegTziForCurrentYear.c)
 *     RtlSidHashInitialize @ 0x18007C000 (RtlSidHashInitialize.c)
 *     RtlpInitializeWnf @ 0x18007CA10 (RtlpInitializeWnf.c)
 *     RtlIpv6StringToAddressA @ 0x18007CDB0 (RtlIpv6StringToAddressA.c)
 *     LdrLoadAlternateResourceModule @ 0x18007DB10 (LdrLoadAlternateResourceModule.c)
 *     RtlInitializeGenericTableAvl @ 0x18007DDD0 (RtlInitializeGenericTableAvl.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007E490 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x18007E640 (RtlpHpLfhBucketAllocateSlot.c)
 *     TpAllocJobNotification @ 0x18007F510 (TpAllocJobNotification.c)
 *     Normalization__LoadTables @ 0x180080770 (Normalization__LoadTables.c)
 *     LdrpRedirectDelayloadFailure @ 0x180080EC4 (LdrpRedirectDelayloadFailure.c)
 *     EtwpShutdownPrivateLoggers @ 0x1800816A0 (EtwpShutdownPrivateLoggers.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800829E4 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlSetEnvironmentStrings @ 0x180082AE0 (RtlSetEnvironmentStrings.c)
 *     EtwpAllocateUmGuidEntry @ 0x1800836EC (EtwpAllocateUmGuidEntry.c)
 *     RtlCheckPortableOperatingSystem @ 0x1800843F0 (RtlCheckPortableOperatingSystem.c)
 *     RtlInitializeCorrelationVector @ 0x1800856B0 (RtlInitializeCorrelationVector.c)
 *     RtlEraseUnicodeString @ 0x180085C80 (RtlEraseUnicodeString.c)
 *     RtlpMUIEnumerateFolder @ 0x180086DAC (RtlpMUIEnumerateFolder.c)
 *     RtlZeroMemory @ 0x180087E00 (RtlZeroMemory.c)
 *     RtlExpandHashTable @ 0x1800886A0 (RtlExpandHashTable.c)
 *     RtlpCreateUserProcess @ 0x180088A30 (RtlpCreateUserProcess.c)
 *     RtlConnectToSm @ 0x1800895E0 (RtlConnectToSm.c)
 *     RtlDestroyAtomTable @ 0x18008A730 (RtlDestroyAtomTable.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008B950 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlSetCurrentEnvironment @ 0x18008BBD0 (RtlSetCurrentEnvironment.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008BCC8 (RtlpLoadInstallLanguageFallback.c)
 *     memcpy_s @ 0x1800974E0 (memcpy_s.c)
 *     _output_s @ 0x1800980B4 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x18009893C (_safecrt_wctomb_s.c)
 *     _woutput_s @ 0x180099ADC (_woutput_s.c)
 *     ReadStringDelimited_1 @ 0x18009A6FC (ReadStringDelimited_1.c)
 *     wil_details_StagingConfig_Load @ 0x18009BE1C (wil_details_StagingConfig_Load.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB6D0 (LdrAppxHandleIntegrityFailure.c)
 *     RtlEnableThreadProfiling @ 0x1800CBFC0 (RtlEnableThreadProfiling.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1800CDB6C (RtlStringExHandleOtherFlagsW.c)
 *     LdrpLogEtwEvent @ 0x1800CF2C0 (LdrpLogEtwEvent.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CF810 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpConstructModernAppKeyName @ 0x1800D083C (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessHeap @ 0x1800D4258 (LdrpInitializeProcessHeap.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7B00 (RtlQueryProcessDebugInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7FE0 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessModuleInformation @ 0x1800D8660 (RtlQueryProcessModuleInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x1800D90F0 (RtlpQueryProcessEnumHeapsRoutine.c)
 *     AVrfpParseVerifierDllsString @ 0x1800DB320 (AVrfpParseVerifierDllsString.c)
 *     AVrfpSnapDllImports @ 0x1800DB660 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800DB920 (AvrfMiniLoadDll.c)
 *     ReportExceptionInternal @ 0x1800DCBB8 (ReportExceptionInternal.c)
 *     RtlReportExceptionEx @ 0x1800DCDC0 (RtlReportExceptionEx.c)
 *     SendMessageToWERService @ 0x1800DD70C (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DDB2C (WerpAllocateAndInitializeSid.c)
 *     WerpCreateCrashDataSection @ 0x1800DDCD4 (WerpCreateCrashDataSection.c)
 *     LdrpMUIEtwOutput @ 0x1800E16F4 (LdrpMUIEtwOutput.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E1D50 (RtlQueryImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E3C28 (RtlpQueryEafPlusModuleList.c)
 *     LdrpResSearchResourceHandle @ 0x1800E48DC (LdrpResSearchResourceHandle.c)
 *     RtlResetRtlTranslations @ 0x1800E56D0 (RtlResetRtlTranslations.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1800E6980 (RtlNormalizeSecurityDescriptor.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9AC0 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800EA260 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800EA5D0 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlClearAllBitsEx @ 0x1800EBB50 (RtlClearAllBitsEx.c)
 *     RtlClearBitsEx @ 0x1800EBB90 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x1800ED720 (RtlSetBitsEx.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EE320 (RtlRestoreBootStatusDefaults.c)
 *     RtlConvertLCIDToString @ 0x1800EF080 (RtlConvertLCIDToString.c)
 *     RtlUnicodeStringToLcid @ 0x1800EF888 (RtlUnicodeStringToLcid.c)
 *     RtlpSetInstallLanguage @ 0x1800F0D30 (RtlpSetInstallLanguage.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3E70 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F48B8 (RtlpHpOverrideGCInterval.c)
 *     RtlpInitializeMap @ 0x1800F8274 (RtlpInitializeMap.c)
 *     RtlFillMemory @ 0x1800FC4F0 (RtlFillMemory.c)
 *     RtlFillNonVolatileMemory @ 0x1800FC510 (RtlFillNonVolatileMemory.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1800FC808 (RtlStringExHandleFillBehindNullW.c)
 *     RtlInitializeContext @ 0x1800FF130 (RtlInitializeContext.c)
 *     RtlInitializeExceptionLog @ 0x180100A78 (RtlInitializeExceptionLog.c)
 *     RtlStdInitializeStackDatabase @ 0x180101330 (RtlStdInitializeStackDatabase.c)
 *     RtlTraceDatabaseCreate @ 0x180102A30 (RtlTraceDatabaseCreate.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x180106AA4 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1801070B4 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1801075B8 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpHpHeapHandleError @ 0x180108660 (RtlpHpHeapHandleError.c)
 *     RtlpHpRaiseFatalLimitError @ 0x18010890C (RtlpHpRaiseFatalLimitError.c)
 *     RtlpHpStackTraceConfig @ 0x180109160 (RtlpHpStackTraceConfig.c)
 *     RtlpHpStackTraceEnable @ 0x180109228 (RtlpHpStackTraceEnable.c)
 *     RtlpHpStackTraceEtwCallback @ 0x1801092D0 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpStackTraceEventWriter @ 0x1801093A0 (RtlpHpStackTraceEventWriter.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1801098C4 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpInitializeStackTraceLog @ 0x180109AAC (RtlpInitializeStackTraceLog.c)
 *     RtlpLogHeapCommit @ 0x18010A0E8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapDecommit @ 0x18010A2CC (RtlpLogHeapDecommit.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x18010A700 (RtlpLogHeapSubSegmentAlloc.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x18010A7B0 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x18010A860 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x18010A910 (RtlpLogHeapSubSegmentFreeCached.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x18010A9C0 (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x18010B478 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlDecompressBufferLZNT1 @ 0x18010CC20 (RtlDecompressBufferLZNT1.c)
 *     RtlCompressBufferXpressHuffMax @ 0x18010D014 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x18010D71C (RtlCompressBufferXpressLzMax.c)
 *     RtlHpHeapManagerInitialize @ 0x18010E0D4 (RtlHpHeapManagerInitialize.c)
 *     RtlpInitializeLfhBitmapData @ 0x18010E87C (RtlpInitializeLfhBitmapData.c)
 *     MD4Final @ 0x18010FFE0 (MD4Final.c)
 *     TppRaiseInvalidParameter @ 0x18011263C (TppRaiseInvalidParameter.c)
 *     SbpTraceContextUpdate @ 0x180113A88 (SbpTraceContextUpdate.c)
 *     PssNtCaptureSnapshot @ 0x180113E50 (PssNtCaptureSnapshot.c)
 *     PssNtValidateDescriptor @ 0x180114A20 (PssNtValidateDescriptor.c)
 *     PsspCaptureHandleTrace @ 0x180114CF8 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x180114EF0 (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x1801151EC (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18011566C (PsspCaptureVaSpaceInformation2.c)
 *     PsspWalkHandleTable @ 0x1801164C4 (PsspWalkHandleTable.c)
 *     PsspDumpThread @ 0x180116AC8 (PsspDumpThread.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x180116E34 (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x180116F60 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x1801170E0 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     PsspWalkInfoClass_PSS_WALK_VA_SPACE @ 0x180117268 (PsspWalkInfoClass_PSS_WALK_VA_SPACE.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180117418 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180117980 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlpStackDbEntryCreate @ 0x180119358 (RtlpStackDbEntryCreate.c)
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

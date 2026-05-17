/*
 * XREFs of memset @ 0x1800A3EC0
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
 *     RtlSwitchedVVI @ 0x18003CC30 (RtlSwitchedVVI.c)
 *     SbSelectProcedure @ 0x18003E0D0 (SbSelectProcedure.c)
 *     SbpUpdateCacheWithCurrentImpl @ 0x18003E2B0 (SbpUpdateCacheWithCurrentImpl.c)
 *     A_SHAFinal @ 0x180040230 (A_SHAFinal.c)
 *     SHA256Final @ 0x18004033C (SHA256Final.c)
 *     RtlpCreateWnfNameSubscription @ 0x18004276C (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateWnfUserSubscription @ 0x180042910 (RtlpCreateWnfUserSubscription.c)
 *     EtwpSetProviderTraits @ 0x180042B38 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x180042EBC (EtwpRegisterProvider.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180043270 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpCreateRegGuidsContext @ 0x180043B84 (EtwpCreateRegGuidsContext.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180044030 (RtlpGetTokenNamedObjectPath.c)
 *     EtwpDisableTraceProviders @ 0x180044FE4 (EtwpDisableTraceProviders.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x1800467C0 (RtlpGetMUIRedirectedFilePath.c)
 *     LdrpGetNewTlsVector @ 0x18004832C (LdrpGetNewTlsVector.c)
 *     RtlSetBits @ 0x180048990 (RtlSetBits.c)
 *     RtlClearBits @ 0x18004B790 (RtlClearBits.c)
 *     RtlCreateAtomTableEx @ 0x18004C034 (RtlCreateAtomTableEx.c)
 *     RtlpInsertStringAtom @ 0x18004C9D0 (RtlpInsertStringAtom.c)
 *     RtlpFreeHandleForAtom @ 0x18004CC80 (RtlpFreeHandleForAtom.c)
 *     RtlFreeHandle @ 0x18004CCE0 (RtlFreeHandle.c)
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x18004CEE4 (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K.c)
 *     RtlCreateProcessParametersInternal @ 0x18004D6D0 (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x18004DBCC (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x18004DC98 (RtlpInitEnvironmentBlock.c)
 *     RtlSetEnvironmentVar @ 0x18004E110 (RtlSetEnvironmentVar.c)
 *     EtwpWriteToPrivateBuffers @ 0x18004F4EC (EtwpWriteToPrivateBuffers.c)
 *     EtwpTraceUmEvent @ 0x18004FB84 (EtwpTraceUmEvent.c)
 *     EtwpFreeRegistration @ 0x180050498 (EtwpFreeRegistration.c)
 *     RtlInitializeExtendedContext2 @ 0x180051F90 (RtlInitializeExtendedContext2.c)
 *     RtlpCopyXStateChunk @ 0x18005240C (RtlpCopyXStateChunk.c)
 *     TppWorkerThread @ 0x180052AD0 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x1800536F0 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180053A0C (TppCallbackCheckThreadAfterCallback.c)
 *     TpCheckTerminateWorker @ 0x180054650 (TpCheckTerminateWorker.c)
 *     EtwpFlushBuffer @ 0x180055444 (EtwpFlushBuffer.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180055950 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpAllocateFreeBuffers @ 0x180056350 (EtwpAllocateFreeBuffers.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800564B8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpQueryPartitionRegistryInformationUm @ 0x180057610 (EtwpQueryPartitionRegistryInformationUm.c)
 *     EtwpGetTimeZoneInformation @ 0x180057934 (EtwpGetTimeZoneInformation.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x180057AB0 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x180059B10 (RtlCompressBufferXpressHuffStandard.c)
 *     XpressBuildHuffmanEncodings @ 0x18005A600 (XpressBuildHuffmanEncodings.c)
 *     MD5Final @ 0x18005BDD0 (MD5Final.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18005C7DC (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x18005CA18 (RtlpFcBufferManagerUpdateBuffers.c)
 *     RtlReportSilentProcessExit @ 0x18005DE40 (RtlReportSilentProcessExit.c)
 *     WerpGlobalFlagsForProcess @ 0x180060684 (WerpGlobalFlagsForProcess.c)
 *     TppPoolUpdateNodeRelation @ 0x180061D9C (TppPoolUpdateNodeRelation.c)
 *     RtlStringCbPrintfExW @ 0x1800697EC (RtlStringCbPrintfExW.c)
 *     LdrpRemoveAlternateModuleCacheItem @ 0x18006B040 (LdrpRemoveAlternateModuleCacheItem.c)
 *     LdrpInitializeShimDllDependencies @ 0x18006BA84 (LdrpInitializeShimDllDependencies.c)
 *     RtlMakeSelfRelativeSD @ 0x18006D180 (RtlMakeSelfRelativeSD.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18006F420 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     RtlpTpImpersonate @ 0x180070030 (RtlpTpImpersonate.c)
 *     RtlActivateActivationContextEx @ 0x1800722B0 (RtlActivateActivationContextEx.c)
 *     RtlCreateActivationContext @ 0x180072D60 (RtlCreateActivationContext.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180072EB4 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpCreateHashTable @ 0x1800732C8 (RtlpCreateHashTable.c)
 *     CompatCachepLookupCdb @ 0x180073484 (CompatCachepLookupCdb.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180073FCC (RtlpQueryExtendedHeapInformation.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x1800740AC (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpZeroBlockFromOffset @ 0x180074FE4 (RtlpZeroBlockFromOffset.c)
 *     LdrpQuerySxSMUIFile @ 0x18007647C (LdrpQuerySxSMUIFile.c)
 *     RtlpSetSecurityObject @ 0x1800766AC (RtlpSetSecurityObject.c)
 *     RtlClearAllBits @ 0x180077E00 (RtlClearAllBits.c)
 *     RtlpLocateActivationContextSectionForQuery @ 0x180078238 (RtlpLocateActivationContextSectionForQuery.c)
 *     RtlpDeleteData @ 0x180078700 (RtlpDeleteData.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1800792F8 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180079CD0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlVerifyVersionInfo @ 0x180079FE0 (RtlVerifyVersionInfo.c)
 *     RtlCreateMemoryBlockLookaside @ 0x18007A490 (RtlCreateMemoryBlockLookaside.c)
 *     RtlpQueryExtendedInformationHeap @ 0x18007A7F0 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpFindRegTziForCurrentYear @ 0x18007B6FC (RtlpFindRegTziForCurrentYear.c)
 *     RtlSidHashInitialize @ 0x18007BF00 (RtlSidHashInitialize.c)
 *     RtlpInitializeWnf @ 0x18007C910 (RtlpInitializeWnf.c)
 *     RtlIpv6StringToAddressA @ 0x18007CCB0 (RtlIpv6StringToAddressA.c)
 *     LdrLoadAlternateResourceModule @ 0x18007DA10 (LdrLoadAlternateResourceModule.c)
 *     RtlInitializeGenericTableAvl @ 0x18007DCD0 (RtlInitializeGenericTableAvl.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007E390 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x18007E540 (RtlpHpLfhBucketAllocateSlot.c)
 *     TpAllocJobNotification @ 0x18007F410 (TpAllocJobNotification.c)
 *     Normalization__LoadTables @ 0x180080670 (Normalization__LoadTables.c)
 *     LdrpRedirectDelayloadFailure @ 0x180080DC4 (LdrpRedirectDelayloadFailure.c)
 *     EtwpShutdownPrivateLoggers @ 0x1800815A0 (EtwpShutdownPrivateLoggers.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800828E4 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlSetEnvironmentStrings @ 0x1800829E0 (RtlSetEnvironmentStrings.c)
 *     EtwpAllocateUmGuidEntry @ 0x1800835EC (EtwpAllocateUmGuidEntry.c)
 *     RtlCheckPortableOperatingSystem @ 0x1800842F0 (RtlCheckPortableOperatingSystem.c)
 *     RtlInitializeCorrelationVector @ 0x1800855B0 (RtlInitializeCorrelationVector.c)
 *     RtlEraseUnicodeString @ 0x180085B80 (RtlEraseUnicodeString.c)
 *     RtlpMUIEnumerateFolder @ 0x180086CAC (RtlpMUIEnumerateFolder.c)
 *     RtlZeroMemory @ 0x180087D00 (RtlZeroMemory.c)
 *     RtlExpandHashTable @ 0x1800885A0 (RtlExpandHashTable.c)
 *     RtlpCreateUserProcess @ 0x180088930 (RtlpCreateUserProcess.c)
 *     RtlConnectToSm @ 0x1800894E0 (RtlConnectToSm.c)
 *     RtlDestroyAtomTable @ 0x18008A630 (RtlDestroyAtomTable.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008B850 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlSetCurrentEnvironment @ 0x18008BAD0 (RtlSetCurrentEnvironment.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008BBC8 (RtlpLoadInstallLanguageFallback.c)
 *     memcpy_s @ 0x1800973E0 (memcpy_s.c)
 *     _output_s @ 0x180097FB4 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x18009883C (_safecrt_wctomb_s.c)
 *     _woutput_s @ 0x1800999DC (_woutput_s.c)
 *     ReadStringDelimited_1 @ 0x18009A5FC (ReadStringDelimited_1.c)
 *     wil_details_StagingConfig_Load @ 0x18009BDF8 (wil_details_StagingConfig_Load.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB4F0 (LdrAppxHandleIntegrityFailure.c)
 *     RtlEnableThreadProfiling @ 0x1800CBDE0 (RtlEnableThreadProfiling.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1800CD98C (RtlStringExHandleOtherFlagsW.c)
 *     LdrpLogEtwEvent @ 0x1800CF0E0 (LdrpLogEtwEvent.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CF630 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpConstructModernAppKeyName @ 0x1800D065C (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessHeap @ 0x1800D3EBC (LdrpInitializeProcessHeap.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7760 (RtlQueryProcessDebugInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7C40 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessModuleInformation @ 0x1800D82C0 (RtlQueryProcessModuleInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x1800D8D50 (RtlpQueryProcessEnumHeapsRoutine.c)
 *     AVrfpParseVerifierDllsString @ 0x1800DAF80 (AVrfpParseVerifierDllsString.c)
 *     AVrfpSnapDllImports @ 0x1800DB2C0 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800DB580 (AvrfMiniLoadDll.c)
 *     ReportExceptionInternal @ 0x1800DC818 (ReportExceptionInternal.c)
 *     RtlReportExceptionEx @ 0x1800DCA20 (RtlReportExceptionEx.c)
 *     SendMessageToWERService @ 0x1800DD36C (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DD78C (WerpAllocateAndInitializeSid.c)
 *     WerpCreateCrashDataSection @ 0x1800DD934 (WerpCreateCrashDataSection.c)
 *     LdrpMUIEtwOutput @ 0x1800E1354 (LdrpMUIEtwOutput.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E19B0 (RtlQueryImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E37D8 (RtlpQueryEafPlusModuleList.c)
 *     LdrpResSearchResourceHandle @ 0x1800E448C (LdrpResSearchResourceHandle.c)
 *     RtlResetRtlTranslations @ 0x1800E5280 (RtlResetRtlTranslations.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1800E6530 (RtlNormalizeSecurityDescriptor.c)
 *     RtlAddResourceAttributeAce @ 0x1800E95C0 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E9D50 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800EA0C0 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlClearAllBitsEx @ 0x1800EB640 (RtlClearAllBitsEx.c)
 *     RtlClearBitsEx @ 0x1800EB680 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x1800ED210 (RtlSetBitsEx.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EDE10 (RtlRestoreBootStatusDefaults.c)
 *     RtlConvertLCIDToString @ 0x1800EEB70 (RtlConvertLCIDToString.c)
 *     RtlUnicodeStringToLcid @ 0x1800EF378 (RtlUnicodeStringToLcid.c)
 *     RtlpSetInstallLanguage @ 0x1800F0820 (RtlpSetInstallLanguage.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3960 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F43A8 (RtlpHpOverrideGCInterval.c)
 *     RtlpInitializeMap @ 0x1800F7D64 (RtlpInitializeMap.c)
 *     RtlFillMemory @ 0x1800FBFE0 (RtlFillMemory.c)
 *     RtlFillNonVolatileMemory @ 0x1800FC000 (RtlFillNonVolatileMemory.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1800FC2F8 (RtlStringExHandleFillBehindNullW.c)
 *     RtlInitializeContext @ 0x1800FEC20 (RtlInitializeContext.c)
 *     RtlInitializeExceptionLog @ 0x180100568 (RtlInitializeExceptionLog.c)
 *     RtlStdInitializeStackDatabase @ 0x180100E20 (RtlStdInitializeStackDatabase.c)
 *     RtlTraceDatabaseCreate @ 0x180102520 (RtlTraceDatabaseCreate.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x180106594 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180106BA4 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1801070A8 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpHpHeapHandleError @ 0x180108150 (RtlpHpHeapHandleError.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1801083FC (RtlpHpRaiseFatalLimitError.c)
 *     RtlpHpStackTraceConfig @ 0x180108C50 (RtlpHpStackTraceConfig.c)
 *     RtlpHpStackTraceEnable @ 0x180108D18 (RtlpHpStackTraceEnable.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180108DC0 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpStackTraceEventWriter @ 0x180108E90 (RtlpHpStackTraceEventWriter.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1801093B4 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpInitializeStackTraceLog @ 0x18010959C (RtlpInitializeStackTraceLog.c)
 *     RtlpLogHeapCommit @ 0x180109BD8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapDecommit @ 0x180109DBC (RtlpLogHeapDecommit.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x18010A1F0 (RtlpLogHeapSubSegmentAlloc.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x18010A2A0 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x18010A350 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x18010A400 (RtlpLogHeapSubSegmentFreeCached.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x18010A4B0 (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x18010AF68 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlDecompressBufferLZNT1 @ 0x18010C710 (RtlDecompressBufferLZNT1.c)
 *     RtlCompressBufferXpressHuffMax @ 0x18010CB04 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x18010D20C (RtlCompressBufferXpressLzMax.c)
 *     RtlHpHeapManagerInitialize @ 0x18010DBC4 (RtlHpHeapManagerInitialize.c)
 *     RtlpInitializeLfhBitmapData @ 0x18010E36C (RtlpInitializeLfhBitmapData.c)
 *     MD4Final @ 0x18010FAD0 (MD4Final.c)
 *     TppRaiseInvalidParameter @ 0x18011212C (TppRaiseInvalidParameter.c)
 *     SbpTraceContextUpdate @ 0x180113578 (SbpTraceContextUpdate.c)
 *     PssNtCaptureSnapshot @ 0x180113940 (PssNtCaptureSnapshot.c)
 *     PssNtValidateDescriptor @ 0x180114510 (PssNtValidateDescriptor.c)
 *     PsspCaptureHandleTrace @ 0x1801147E8 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x1801149E0 (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x180114CDC (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18011515C (PsspCaptureVaSpaceInformation2.c)
 *     PsspWalkHandleTable @ 0x180115FB4 (PsspWalkHandleTable.c)
 *     PsspDumpThread @ 0x1801165B8 (PsspDumpThread.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x180116924 (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x180116A50 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x180116BD0 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     PsspWalkInfoClass_PSS_WALK_VA_SPACE @ 0x180116D58 (PsspWalkInfoClass_PSS_WALK_VA_SPACE.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180116F08 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180117470 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlpStackDbEntryCreate @ 0x180118E48 (RtlpStackDbEntryCreate.c)
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

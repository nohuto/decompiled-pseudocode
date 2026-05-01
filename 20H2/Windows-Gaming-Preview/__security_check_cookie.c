/*
 * XREFs of __security_check_cookie @ 0x1800443F0
 * Callers:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180001C5C (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x180002070 (-GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x180002780 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180002F40 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x1800034C8 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x1800041A8 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z @ 0x180004674 (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z.c)
 *     ?wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z @ 0x180004820 (-wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z.c)
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH2@Z @ 0x180004984 (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH2@Z.c)
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x180004CAC (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x180005C04 (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180005EA0 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180006368 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x1800067C4 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x180007120 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV-$unique_any_t@.c)
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180007480 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180007A8C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000820C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000871C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ??$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z @ 0x18000900C (--$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z.c)
 *     DllGetActivationFactory @ 0x1800094A0 (DllGetActivationFactory.c)
 *     DllMain @ 0x1800097CC (DllMain.c)
 *     ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@PEAUIGameListChangedEventHandler@2345@PEAUHSTRING__@@@Z @ 0x180009DBC (-RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnif.c)
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A1C0 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x180011108 (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180011778 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800123BC (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 *     ?_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@PEAPEAUHSTRING__@@@Z @ 0x180013194 (-_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 *     ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x180017ABC (-JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18001B6C0 (-RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJ.c)
 *     ?_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x18001BF00 (-_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAA.c)
 *     _lambda_ad7bd321257e919ed278c75d322da1b6_::operator() @ 0x18001CF7C (_lambda_ad7bd321257e919ed278c75d322da1b6_--operator().c)
 *     ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18001D468 (-_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 *     _lambda_95a85cc3153b2a32da5e8f8bf20a59f3_::operator() @ 0x18001D938 (_lambda_95a85cc3153b2a32da5e8f8bf20a59f3_--operator().c)
 *     ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x180020900 (-Start@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview.c)
 *     ?put_Id@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJI@Z @ 0x180020BE0 (-put_Id@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Previe.c)
 *     ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x180021F60 (-Start@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVGameListEntry@GamesE.c)
 *     ?InitCausality@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00UDisableCausality@67@@WRL@Microsoft@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x180023210 (-InitCausality@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Mi.c)
 *     ?_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027C58 (-_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Wind.c)
 *     ?_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180028838 (-_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_CreateStorageFileForFilePath@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CAJPEBGPEAPEAUIStorageFile@Storage@5@@Z @ 0x18002A7E4 (-_CreateStorageFileForFilePath@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CAJP.c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002A9D0 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x1800356E0 (-Start@-$AsyncBase@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@VNil@Details@WRL@Mi.c)
 *     ?_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@H@Z @ 0x18003912C (-_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV.c)
 *     ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003A358 (-_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 *     _lambda_a569043095cd2854b0f9a8a791add160_::operator() @ 0x18003BAE0 (_lambda_a569043095cd2854b0f9a8a791add160_--operator().c)
 *     ?GetKnownFolderSubFolder@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBU_GUID@@PEBG1PEAVString@Internal@5@@Z @ 0x18003CB90 (-GetKnownFolderSubFolder@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBU_GUID@@PE.c)
 *     ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003DB50 (-PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@PEAKPEA_K1PEA_N3@Z @ 0x18003DED8 (-GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV-$share.c)
 *     ?GetLogo@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foundation@5@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x18003E260 (-GetLogo@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foundation.c)
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18003EF0C (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x18003F14C (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 *     ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x18003F5AC (-RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z.c)
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003FDB0 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 *     ?GetRawEntriesByTOCIdx@CQueryKnownGameList@@UEAAJKPEAEPEAK@Z @ 0x180040370 (-GetRawEntriesByTOCIdx@CQueryKnownGameList@@UEAAJKPEAEPEAK@Z.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180040784 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x180040D6C (-ValidateKGL@CQueryKnownGameList@@AEAAJK@Z.c)
 *     ?GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z @ 0x180041938 (-GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z.c)
 *     __GSHandlerCheckCommon @ 0x180045DC4 (__GSHandlerCheckCommon.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}

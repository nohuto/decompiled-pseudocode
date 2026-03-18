/*
 * XREFs of memmove @ 0x1C00D3840
 * Callers:
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0002CD0 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0004480 (NtDCompositionTelemetryTouchInteractionBegin.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C00077B8 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     ?Reset@CInputSpace@@QEAAXPEAU1@@Z @ 0x1C000B090 (-Reset@CInputSpace@@QEAAXPEAU1@@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C000C480 (DrvEnumDisplaySettings.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C000C9F0 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     NtUserQueryDisplayConfig @ 0x1C000D280 (NtUserQueryDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C000D570 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C000EABC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvBuildDevmodeList @ 0x1C000F520 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C000F8C0 (DrvGetDisplayDriverParameters.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C00100D4 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011E88 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0013030 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0014BA8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvGetDisplayDriverNames @ 0x1C00156E0 (DrvGetDisplayDriverNames.c)
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C002DD38 (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0037E20 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0039050 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003C9D0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     GreCombineRgn @ 0x1C003F0E0 (GreCombineRgn.c)
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 *     ?Grow@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0054CC0 (-Grow@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetK.c)
 *     DrvEnumDisplayDevices @ 0x1C0055B20 (DrvEnumDisplayDevices.c)
 *     AllocAce @ 0x1C0057AA0 (AllocAce.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C0057C00 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0057F10 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C00595B8 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0059774 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00599C4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C0059C48 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C0059F1C (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C005B4B0 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 *     NtGdiExtCreateRegion @ 0x1C005CBC0 (NtGdiExtCreateRegion.c)
 *     NtGdiOpenDCW @ 0x1C005DBC0 (NtGdiOpenDCW.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0061CF0 (NtDCompositionGetFrameLegacyTokens.c)
 *     SetHandleFlag @ 0x1C0063370 (SetHandleFlag.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0063F60 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0069850 (xxxUserChangeDisplaySettings.c)
 *     ?AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z @ 0x1C006A240 (-AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z.c)
 *     ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x1C006A344 (-EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z.c)
 *     CreateProp @ 0x1C006B0E4 (CreateProp.c)
 *     ?Grow@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C006B1DC (-Grow@-$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C006F7A0 (-ResetSystemColors@@YAXXZ.c)
 *     ?EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007AD50 (-EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatc.c)
 *     ?EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007D0AC (-EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007D3FC (-EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007E5F4 (-EmitSetCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007ECE0 (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C0081A00 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C0081AE0 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00831D0 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0086AC4 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0087248 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0087814 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0087B9C (-growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     NtUserToUnicodeEx @ 0x1C00898B0 (NtUserToUnicodeEx.c)
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C008A66C (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 *     NtUserSetSysColors @ 0x1C008B8D0 (NtUserSetSysColors.c)
 *     InitScancodeMap @ 0x1C008C300 (InitScancodeMap.c)
 *     FastGetProfileValue @ 0x1C008D170 (FastGetProfileValue.c)
 *     RtlLoadStringOrError @ 0x1C008D960 (RtlLoadStringOrError.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0090190 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     NtGdiGetRegionData @ 0x1C0090350 (NtGdiGetRegionData.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z @ 0x1C0094DA0 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z.c)
 *     ?InsertModecapList@@YAKPEAUtagModeCap@@0K@Z @ 0x1C009A334 (-InsertModecapList@@YAKPEAUtagModeCap@@0K@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C009C9BC (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C009F6FC (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C009FBD8 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     ?SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A1050 (-SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A2E10 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 *     ?ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1C00A362C (-ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationLi.c)
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C00A3BA0 (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 *     ?MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z @ 0x1C00A427C (-MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z.c)
 *     UserReAllocPool @ 0x1C00A4410 (UserReAllocPool.c)
 *     NtDCompositionGetDeletedResources @ 0x1C00A4600 (NtDCompositionGetDeletedResources.c)
 *     ?SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C00A4978 (-SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     ?AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C00A5198 (-AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1C00AA4EC (-CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z.c)
 *     ?ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00AF870 (-ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplication.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00AFE08 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x1C00AFF2C (-DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z.c)
 *     UserReAllocPoolWithQuota @ 0x1C00B0B60 (UserReAllocPoolWithQuota.c)
 *     InitSystemThread @ 0x1C00B8540 (InitSystemThread.c)
 *     ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C00BAE70 (-__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C00BB970 (-__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z @ 0x1C00BBAB0 (-FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z.c)
 *     ?DrvDriverExtraCallback@@YAJPEAGKPEAXK11@Z @ 0x1C00BBD10 (-DrvDriverExtraCallback@@YAJPEAGKPEAXK11@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1350 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     NtGdiPolyPolyDraw @ 0x1C00C4640 (NtGdiPolyPolyDraw.c)
 *     ?bClone@EPATHOBJ@@QEAAHAEAV1@@Z @ 0x1C00C50B0 (-bClone@EPATHOBJ@@QEAAHAEAV1@@Z.c)
 *     NtGdiGetCertificateByHandle @ 0x1C00C5740 (NtGdiGetCertificateByHandle.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x1C00C605C (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_.c)
 *     ?GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C6150 (-GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_ @ 0x1C00C6304 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_.c)
 *     memcpy_s @ 0x1C00CD924 (memcpy_s.c)
 *     ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00D239C (-CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@A.c)
 *     ?ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00D24E0 (-ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCAp.c)
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@I@Z @ 0x1C00D255C (-RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCA.c)
 *     RaiseException @ 0x1C00D31E0 (RaiseException.c)
 *     HMCleanupGrantedHandle @ 0x1C0119598 (HMCleanupGrantedHandle.c)
 *     UserPostNKAPCBuffer @ 0x1C0119E70 (UserPostNKAPCBuffer.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__&DrvSampleDisplayState_ @ 0x1C011A338 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__-D.c)
 *     FastGetProfileKeysW @ 0x1C0121DB0 (FastGetProfileKeysW.c)
 *     NtConfigureInputSpace @ 0x1C012B730 (NtConfigureInputSpace.c)
 *     NtMITSynthesizeTouchInput @ 0x1C012EA90 (NtMITSynthesizeTouchInput.c)
 *     NtSetShellCursorState @ 0x1C012F810 (NtSetShellCursorState.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C01302D0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0130C10 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C0132220 (NtUserGetRawPointerDeviceData.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C0132830 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0132BA0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C0132F70 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0133BB0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C0133FD0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C01343F0 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C0134F00 (NtUserMapPointsByVisualIdentifier.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0136280 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0136540 (NtUserSetManipulationInputTarget.c)
 *     NtUserSystemParametersInfo @ 0x1C01377E0 (NtUserSystemParametersInfo.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C013A8D4 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C013AB74 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C013ACE4 (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C013AE74 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C013EB40 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C013F1F4 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C013FDB0 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_ @ 0x1C0141204 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_.c)
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C014133C (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 *     ?GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C0141764 (-GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INF.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C0141920 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C0141D00 (NtGdiGetCertificate.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0145A7C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     LogDiagSDCAccessDenied @ 0x1C0149AF8 (LogDiagSDCAccessDenied.c)
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C0149D94 (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C014A160 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiSetPrivateDeviceGammaRamp @ 0x1C014A400 (NtGdiSetPrivateDeviceGammaRamp.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C014B06C (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 *     NtHWCursorUpdatePointer @ 0x1C014BE10 (NtHWCursorUpdatePointer.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C014E46C (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C014EBE8 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 *     rimCopyInstancePathFromRimDev @ 0x1C0153A74 (rimCopyInstancePathFromRimDev.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C0156B90 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMInjectInput @ 0x1C0157C30 (RIMInjectInput.c)
 *     RIMGetProductString @ 0x1C015E8FC (RIMGetProductString.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C015F618 (RIMReleasePointerDeviceInfo.c)
 *     RIMVirtCreateHidDesc @ 0x1C0162D9C (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016721C (RIMIDECreateHIDDesc.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C016A8C0 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C016B234 (RIMIDE_InitializePointerDeviceInjection.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C016B3CC (RIMIDE_InjectGenericHidInput.c)
 *     RIMFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C01710A8 (RIMFixUpAutoRepeatCompleteFrameUpDowns.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C017188C (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1C0171B40 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     rimStoreRawDataBlock @ 0x1C0172358 (rimStoreRawDataBlock.c)
 *     rimProcessInput @ 0x1C0174B40 (rimProcessInput.c)
 *     rimObsCopyMessage @ 0x1C017CA20 (rimObsCopyMessage.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C0186320 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0188B30 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C01895B4 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     SendShellClipChanged @ 0x1C01A9A90 (SendShellClipChanged.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C01B1F64 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x1C01C23B4 (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1C01CFA4C (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1C01CFC50 (-EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ.c)
 *     ?EmitSetBindingsCommand@CParticleBaseBehaviorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D0BF8 (-EmitSetBindingsCommand@CParticleBaseBehaviorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetRectanglesCommand@CRegionGeometryMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D3C00 (-EmitSetRectanglesCommand@CRegionGeometryMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x1C01DBEC8 (-EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z.c)
 *     ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01DC1A0 (-SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C01DC5BC (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C01DCC60 (-SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C01DCF34 (-AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DCFE0 (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DD160 (-EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetProperties@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C01DD560 (-SetProperties@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 *     ?EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DE32C (-EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C01DE698 (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01DE860 (-SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 *     ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01E4AA0 (-SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 *     ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01E4F40 (-SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 *     ??$AddProperty@M@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBMPEAI@Z @ 0x1C01E5B60 (--$AddProperty@M@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@.c)
 *     ??$AddProperty@UD2DMatrix@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@PEAI@Z @ 0x1C01E5C78 (--$AddProperty@UD2DMatrix@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelMod.c)
 *     ??$AddProperty@UD2DQuaternion@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@PEAI@Z @ 0x1C01E5DB4 (--$AddProperty@UD2DQuaternion@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKerne.c)
 *     ??$AddProperty@UD2DVector2@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@PEAI@Z @ 0x1C01E5ECC (--$AddProperty@UD2DVector2@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelMo.c)
 *     ??$AddProperty@UD2DVector3@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@PEAI@Z @ 0x1C01E5FE8 (--$AddProperty@UD2DVector3@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelMo.c)
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@PEAI@Z @ 0x1C01E610C (--$AddProperty@UD2D_MATRIX_3X2_F@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 *     ??$AddProperty@_N@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x1C01E6230 (--$AddProperty@_N@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x1C01E68D0 (-Grow@-$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E9CF0 (-EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01EAA50 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EB858 (-EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NP.c)
 *     ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01EBA50 (-SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCAppli.c)
 *     ?SetRemarshalingFlags@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01EBD00 (-SetRemarshalingFlags@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01F0F60 (-SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPE.c)
 *     CreateNewEventEntry @ 0x1C01F99A0 (CreateNewEventEntry.c)
 *     WppTraceCallback @ 0x1C0279370 (WppTraceCallback.c)
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

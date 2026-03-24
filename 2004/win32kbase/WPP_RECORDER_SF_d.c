/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C00AA920
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001D98 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     NtUserReportInertia @ 0x1C0003BD0 (NtUserReportInertia.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0005F50 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0006400 (RIMRegisterForInputWithCallbacks.c)
 *     RIMGetDeviceParent @ 0x1C000BD2C (RIMGetDeviceParent.c)
 *     RIMGetPanelId @ 0x1C000C218 (RIMGetPanelId.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0015D10 (RIMDirectPnpRemoveDevicesOfType.c)
 *     rimDoRimDevChange @ 0x1C0015FD8 (rimDoRimDevChange.c)
 *     xxxInternalToUnicode @ 0x1C00193E0 (xxxInternalToUnicode.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C0047A2C (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C00528A0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     RIMResetPointerDevices @ 0x1C0055490 (RIMResetPointerDevices.c)
 *     RIMRemoveInputOfType @ 0x1C00563B0 (RIMRemoveInputOfType.c)
 *     CreateKernelIocpWcp @ 0x1C0057DE0 (CreateKernelIocpWcp.c)
 *     ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C005B018 (-InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ.c)
 *     CreateKernelIocp @ 0x1C005B120 (CreateKernelIocp.c)
 *     hCreateKernelEvent @ 0x1C005D500 (hCreateKernelEvent.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C005E2E4 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     RIMDeviceIoControl @ 0x1C0064040 (RIMDeviceIoControl.c)
 *     AssociateKernelIocpWcp @ 0x1C006FE80 (AssociateKernelIocpWcp.c)
 *     RIMOnPnpNotification @ 0x1C00A9D80 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00AA480 (RIMDirectStartStopDeviceRead.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C00AA734 (RIMUnregisterCurrentProcessForInput.c)
 *     RIMUnregisterForInput @ 0x1C00AB430 (RIMUnregisterForInput.c)
 *     RIMReadInput @ 0x1C00ABA70 (RIMReadInput.c)
 *     RIMCreateHidDesc @ 0x1C00ABE60 (RIMCreateHidDesc.c)
 *     HasForegroundActivateRight @ 0x1C00AE0A0 (HasForegroundActivateRight.c)
 *     GiveForegroundActivateRight @ 0x1C00AE3F0 (GiveForegroundActivateRight.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C00AF0F0 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMAllocateHidDesc @ 0x1C00AF298 (RIMAllocateHidDesc.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B0848 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00CA7C0 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00CBA90 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00CBAD0 (RIMDirectStartDeviceClassNotifications.c)
 *     NtMapVisualRelativePoints @ 0x1C011E1C0 (NtMapVisualRelativePoints.c)
 *     hCreateKernelTimer @ 0x1C011E600 (hCreateKernelTimer.c)
 *     xxxRemoteConnect @ 0x1C011E780 (xxxRemoteConnect.c)
 *     NtUserInjectDeviceInput @ 0x1C01352C0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C01356F0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0135F00 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C0136320 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0136740 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C0137250 (NtUserMapPointsByVisualIdentifier.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C0156040 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     NtRIMAddInputObserver @ 0x1C0156210 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1C0157880 (NtRIMUpdateInputObserverRegistration.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0157990 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C0157E60 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0157FF0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0158350 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMAreSiblingDevices @ 0x1C0158700 (RIMAreSiblingDevices.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0158900 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C0158DF0 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0158F80 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C0159250 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C0159870 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0159B10 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0159D20 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C015A190 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C015A490 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C015A8D0 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C015AE40 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C015B010 (RIMRemoveInjectionDevice.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C015C34C (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015CD90 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMActivatePointerDeviceDeadzone @ 0x1C015CF20 (RIMActivatePointerDeviceDeadzone.c)
 *     RIMCreatePointerDeviceDeadzone @ 0x1C015D050 (RIMCreatePointerDeviceDeadzone.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C015D1D0 (RIMDestroyPointerDeviceDeadzone.c)
 *     RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1C015D350 (RIMUpdatePointerDeviceDeadzoneOrigin.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C015E170 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C01606CC (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C0160E5C (RIMGetProductString.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C0161B78 (RIMReleasePointerDeviceInfo.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0163668 (RIMAllocateHidConfigDesc.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C01648C4 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0164EF8 (RIMVirtAllocateHidDesc.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C0169620 (RIMIDECreateDeviceInstancePath.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C016A2F4 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDEFillContactUsageValues @ 0x1C016A774 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C016B090 (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C016B62C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C016B978 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C016C0B4 (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C016C300 (RIMIDEValidateMouseInputStruct.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C016D140 (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C016D92C (RIMIDE_InjectGenericHidInput.c)
 *     RIMDeviceNotify @ 0x1C016E2B0 (RIMDeviceNotify.c)
 *     traceFrame @ 0x1C0172C30 (traceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0173880 (RIMStartPointerDeviceFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C0173CBC (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017678C (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C0177480 (rimSignalReadComplete.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0179858 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimApplyPointerDevicePolicies @ 0x1C017A434 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C017A6A4 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C017A928 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C017B81C (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimExtractPointerDeviceUsages @ 0x1C017BC48 (rimExtractPointerDeviceUsages.c)
 *     rimExtractScantime @ 0x1C017C128 (rimExtractScantime.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C017C8FC (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C017CB20 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimProcessPointerDeviceContact @ 0x1C017D71C (rimProcessPointerDeviceContact.c)
 *     rimObsAddInputObserver @ 0x1C017E6F4 (rimObsAddInputObserver.c)
 *     rimObsCheckForObservationPermissions @ 0x1C017EC7C (rimObsCheckForObservationPermissions.c)
 *     rimObsDeliverInputToObserver @ 0x1C017EFC0 (rimObsDeliverInputToObserver.c)
 *     rimObsPopInputMessage @ 0x1C017F79C (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C017FA14 (rimObsPushInputMessage.c)
 *     rimObsStartStopDeviceRead @ 0x1C0180078 (rimObsStartStopDeviceRead.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C0180258 (rimObsUpdateInputObserverRegistration.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01829AC (RIMHandleTTMDeviceArrival.c)
 *     RIMHandleTTMDeviceInput @ 0x1C0182AFC (RIMHandleTTMDeviceInput.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C0182B8C (RIMHandleTTMDeviceRemoval.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C018B058 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C018C04C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01921C8 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTE.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0192920 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0193BCC (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C019605C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01974E4 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C019C468 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01A9608 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01AA8E8 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01AC61C (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     UnpackMouseSettings @ 0x1C01AC7E0 (UnpackMouseSettings.c)
 *     ?_ivPacketDispatch@CBaseInput@@CAJPEAU_IVSRContext@@@Z @ 0x1C01B44A0 (-_ivPacketDispatch@CBaseInput@@CAJPEAU_IVSRContext@@@Z.c)
 *     ?ivHandleKeyboardInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B4C30 (-ivHandleKeyboardInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B4DD0 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B56C0 (-ivHandlePnpCreatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B61A0 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x1C01B7C70 (-BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01B7F7C (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01B80F0 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C01B8518 (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C01B8804 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01B8BCC (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01B8E6C (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x1C01B9204 (-SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01B9388 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 *     ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C01B9790 (-SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STR.c)
 *     ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@@Z @ 0x1C01B98E8 (-SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@@Z.c)
 *     ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C01B9A10 (-SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UN.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01B9D58 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1C00AA920
 * Reason: Hex-Rays returned no pseudocode for 0x1C00AA920
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00AA920: mov     [rsp+arg_0], rbx
 * 00000001C00AA925: mov     [rsp+arg_8], rbp
 * 00000001C00AA92A: mov     [rsp+arg_10], rsi
 * 00000001C00AA92F: push    rdi
 * 00000001C00AA930: push    r14
 * 00000001C00AA932: push    r15
 * 00000001C00AA934: sub     rsp, 40h
 * 00000001C00AA938: mov     r14d, r8d
 * 00000001C00AA93B: mov     r15, rcx
 * 00000001C00AA93E: mov     edi, r8d
 * 00000001C00AA941: shr     rdi, 10h
 * 00000001C00AA945: movzx   esi, dl
 * 00000001C00AA948: lea     ebx, [r14-1]
 * 00000001C00AA94C: movzx   ebp, r9w
 * 00000001C00AA950: mov     r10d, ebx
 * 00000001C00AA953: and     ebx, 1Fh
 * 00000001C00AA956: shr     r10, 5
 * 00000001C00AA95A: lea     rax, [rdi+rdi*4]
 * 00000001C00AA95E: and     r10d, 7FFh
 * 00000001C00AA965: mov     edx, ebx
 * 00000001C00AA967: mov     ebx, 4
 * 00000001C00AA96C: lea     r11, [r10+rax*4]
 * 00000001C00AA970: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00AA977: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00AA97C: bt      eax, edx
 * 00000001C00AA97F: jb      loc_1C010F69A
 * 00000001C00AA985: and     [rsp+58h+var_20], 0
 * 00000001C00AA98B: lea     rax, [rsp+58h+arg_28]
 * 00000001C00AA993: mov     r9, [rsp+58h+arg_20]
 * 00000001C00AA99B: mov     r8d, r14d
 * 00000001C00AA99E: mov     [rsp+58h+var_28], rbx
 * 00000001C00AA9A3: mov     edx, esi
 * 00000001C00AA9A5: mov     [rsp+58h+var_30], rax
 * 00000001C00AA9AA: mov     rcx, r15
 * 00000001C00AA9AD: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00AA9B2: call    cs:__imp_WppAutoLogTrace
 * 00000001C00AA9B9: nop     dword ptr [rax+rax+00h]
 * 00000001C00AA9BE: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00AA9C3: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00AA9C8: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00AA9CD: add     rsp, 40h
 * 00000001C00AA9D1: pop     r15
 * 00000001C00AA9D3: pop     r14
 * 00000001C00AA9D5: pop     rdi
 * 00000001C00AA9D6: retn
 * 00000001C010F69A: lea     rcx, [rdi+rdi*4]
 * 00000001C010F69E: add     rcx, rcx
 * 00000001C010F6A1: cmp     [r10+rcx*8+29h], sil
 * 00000001C010F6A6: jb      loc_1C00AA985
 * 00000001C010F6AC: and     [rsp+58h+var_28], 0
 * 00000001C010F6B2: lea     rdx, [rsp+58h+arg_28]
 * 00000001C010F6BA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C010F6C1: mov     r9d, ebp
 * 00000001C010F6C4: mov     r8, [rsp+58h+arg_20]
 * 00000001C010F6CC: mov     rcx, [r10+rcx*8+18h]
 * 00000001C010F6D1: mov     [rsp+58h+var_30], rbx
 * 00000001C010F6D6: mov     [rsp+58h+var_38], rdx
 * 00000001C010F6DB: mov     edx, 2Bh ; '+'
 * 00000001C010F6E0: call    cs:__guard_dispatch_icall_fptr
 * 00000001C010F6E6: nop
 * 00000001C010F6E7: jmp     loc_1C00AA985
 */

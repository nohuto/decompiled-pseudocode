/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0063040
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001D98 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     NtUserReportInertia @ 0x1C0003BD0 (NtUserReportInertia.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0005F50 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0006400 (RIMRegisterForInputWithCallbacks.c)
 *     RIMGetDeviceParent @ 0x1C0009F48 (RIMGetDeviceParent.c)
 *     RIMGetPanelId @ 0x1C000A380 (RIMGetPanelId.c)
 *     RIMDeviceIoControl @ 0x1C0024840 (RIMDeviceIoControl.c)
 *     rimDoRimDevChange @ 0x1C002575C (rimDoRimDevChange.c)
 *     RIMResetPointerDevices @ 0x1C0025960 (RIMResetPointerDevices.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0025AD0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0025F40 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMReadInput @ 0x1C0026620 (RIMReadInput.c)
 *     RIMUnregisterForInput @ 0x1C0026970 (RIMUnregisterForInput.c)
 *     RIMOnPnpNotification @ 0x1C0026D30 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00271E0 (RIMDirectStartStopDeviceRead.c)
 *     AssociateKernelIocpWcp @ 0x1C0035080 (AssociateKernelIocpWcp.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0062E54 (RIMUnregisterCurrentProcessForInput.c)
 *     GiveForegroundActivateRight @ 0x1C00637B0 (GiveForegroundActivateRight.c)
 *     HasForegroundActivateRight @ 0x1C0064020 (HasForegroundActivateRight.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C006BCA4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     RIMAllocateHidDesc @ 0x1C006E23C (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C006E4C4 (RIMCreateHidDesc.c)
 *     RIMRemoveInputOfType @ 0x1C0075600 (RIMRemoveInputOfType.c)
 *     xxxInternalToUnicode @ 0x1C0089BE0 (xxxInternalToUnicode.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C00A8FCC (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C00B2AA0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     CreateKernelIocpWcp @ 0x1C00B78B0 (CreateKernelIocpWcp.c)
 *     ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C00BB158 (-InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ.c)
 *     CreateKernelIocp @ 0x1C00BB260 (CreateKernelIocp.c)
 *     hCreateKernelEvent @ 0x1C00BDB70 (hCreateKernelEvent.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C00BE794 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00CABF0 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00CAC30 (RIMDirectStartDeviceClassNotifications.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00CB300 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     NtMapVisualRelativePoints @ 0x1C011BE80 (NtMapVisualRelativePoints.c)
 *     hCreateKernelTimer @ 0x1C011C2C0 (hCreateKernelTimer.c)
 *     xxxRemoteConnect @ 0x1C011C440 (xxxRemoteConnect.c)
 *     NtUserInjectDeviceInput @ 0x1C0132F70 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C01333A0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0133BB0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C0133FD0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C01343F0 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C0134F00 (NtUserMapPointsByVisualIdentifier.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C0153AE0 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     NtRIMAddInputObserver @ 0x1C0153CB0 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1C0155320 (NtRIMUpdateInputObserverRegistration.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0155430 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C0155900 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0155A90 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0155DF0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMAreSiblingDevices @ 0x1C01561A0 (RIMAreSiblingDevices.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C01563A0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C0156890 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0156A20 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C0156CF0 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C0157310 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C01575B0 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C01577C0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C0157C30 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C0157F30 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C0158370 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C01588E0 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C0158AB0 (RIMRemoveInjectionDevice.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0159DEC (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015A830 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMActivatePointerDeviceDeadzone @ 0x1C015A9C0 (RIMActivatePointerDeviceDeadzone.c)
 *     RIMCreatePointerDeviceDeadzone @ 0x1C015AAF0 (RIMCreatePointerDeviceDeadzone.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C015AC70 (RIMDestroyPointerDeviceDeadzone.c)
 *     RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1C015ADF0 (RIMUpdatePointerDeviceDeadzoneOrigin.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C015BC10 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C015E16C (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C015E8FC (RIMGetProductString.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C015F618 (RIMReleasePointerDeviceInfo.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0161108 (RIMAllocateHidConfigDesc.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0162364 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162998 (RIMVirtAllocateHidDesc.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C01670C0 (RIMIDECreateDeviceInstancePath.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0167D94 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDEFillContactUsageValues @ 0x1C0168214 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C0168B30 (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C01690CC (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0169418 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C0169B54 (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C0169DA0 (RIMIDEValidateMouseInputStruct.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C016ABE0 (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C016B3CC (RIMIDE_InjectGenericHidInput.c)
 *     RIMDeviceNotify @ 0x1C016BE80 (RIMDeviceNotify.c)
 *     traceFrame @ 0x1C0170800 (traceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0171450 (RIMStartPointerDeviceFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C017188C (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017435C (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C0175050 (rimSignalReadComplete.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0177428 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0178004 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C0178274 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C01784F8 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C01793EC (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimExtractPointerDeviceUsages @ 0x1C0179818 (rimExtractPointerDeviceUsages.c)
 *     rimExtractScantime @ 0x1C0179CF8 (rimExtractScantime.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C017A4CC (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C017A6F0 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimProcessPointerDeviceContact @ 0x1C017B2EC (rimProcessPointerDeviceContact.c)
 *     rimObsAddInputObserver @ 0x1C017C2C4 (rimObsAddInputObserver.c)
 *     rimObsCheckForObservationPermissions @ 0x1C017C84C (rimObsCheckForObservationPermissions.c)
 *     rimObsDeliverInputToObserver @ 0x1C017CB90 (rimObsDeliverInputToObserver.c)
 *     rimObsPopInputMessage @ 0x1C017D36C (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C017D5E4 (rimObsPushInputMessage.c)
 *     rimObsStartStopDeviceRead @ 0x1C017DC48 (rimObsStartStopDeviceRead.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C017DE28 (rimObsUpdateInputObserverRegistration.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C018046C (RIMHandleTTMDeviceArrival.c)
 *     RIMHandleTTMDeviceInput @ 0x1C01805BC (RIMHandleTTMDeviceInput.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C018064C (RIMHandleTTMDeviceRemoval.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0188B30 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C0189B24 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C018FCA8 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTE.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0190400 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C019169C (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0193B2C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0194FB4 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C0199F68 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01A7288 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01A8568 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01AA29C (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     UnpackMouseSettings @ 0x1C01AA460 (UnpackMouseSettings.c)
 *     ?_ivPacketDispatch@CBaseInput@@CAJPEAU_IVSRContext@@@Z @ 0x1C01B2130 (-_ivPacketDispatch@CBaseInput@@CAJPEAU_IVSRContext@@@Z.c)
 *     ?ivHandleKeyboardInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B28C0 (-ivHandleKeyboardInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B2A60 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B3350 (-ivHandlePnpCreatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B3E30 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x1C01B5900 (-BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01B5C0C (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01B5D80 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C01B61A8 (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C01B6494 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01B685C (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01B6AFC (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x1C01B6E94 (-SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01B7018 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 *     ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C01B7420 (-SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STR.c)
 *     ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@@Z @ 0x1C01B7578 (-SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@@Z.c)
 *     ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C01B76A0 (-SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UN.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01B79E8 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1C0063040
 * Reason: Hex-Rays returned no pseudocode for 0x1C0063040
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0063040: mov     [rsp+arg_0], rbx
 * 00000001C0063045: mov     [rsp+arg_8], rbp
 * 00000001C006304A: mov     [rsp+arg_10], rsi
 * 00000001C006304F: push    rdi
 * 00000001C0063050: push    r14
 * 00000001C0063052: push    r15
 * 00000001C0063054: sub     rsp, 40h
 * 00000001C0063058: mov     r14d, r8d
 * 00000001C006305B: mov     r15, rcx
 * 00000001C006305E: mov     edi, r8d
 * 00000001C0063061: shr     rdi, 10h
 * 00000001C0063065: movzx   esi, dl
 * 00000001C0063068: lea     ebx, [r14-1]
 * 00000001C006306C: movzx   ebp, r9w
 * 00000001C0063070: mov     r10d, ebx
 * 00000001C0063073: and     ebx, 1Fh
 * 00000001C0063076: shr     r10, 5
 * 00000001C006307A: lea     rax, [rdi+rdi*4]
 * 00000001C006307E: and     r10d, 7FFh
 * 00000001C0063085: mov     edx, ebx
 * 00000001C0063087: mov     ebx, 4
 * 00000001C006308C: lea     r11, [r10+rax*4]
 * 00000001C0063090: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0063097: mov     eax, [r10+r11*4+2Ch]
 * 00000001C006309C: bt      eax, edx
 * 00000001C006309F: jb      loc_1C00F8358
 * 00000001C00630A5: and     [rsp+58h+var_20], 0
 * 00000001C00630AB: lea     rax, [rsp+58h+arg_28]
 * 00000001C00630B3: mov     r9, [rsp+58h+arg_20]
 * 00000001C00630BB: mov     r8d, r14d
 * 00000001C00630BE: mov     [rsp+58h+var_28], rbx
 * 00000001C00630C3: mov     edx, esi
 * 00000001C00630C5: mov     [rsp+58h+var_30], rax
 * 00000001C00630CA: mov     rcx, r15
 * 00000001C00630CD: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00630D2: call    cs:__imp_WppAutoLogTrace
 * 00000001C00630D9: nop     dword ptr [rax+rax+00h]
 * 00000001C00630DE: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00630E3: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00630E8: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00630ED: add     rsp, 40h
 * 00000001C00630F1: pop     r15
 * 00000001C00630F3: pop     r14
 * 00000001C00630F5: pop     rdi
 * 00000001C00630F6: retn
 * 00000001C00F8358: lea     rcx, [rdi+rdi*4]
 * 00000001C00F835C: add     rcx, rcx
 * 00000001C00F835F: cmp     [r10+rcx*8+29h], sil
 * 00000001C00F8364: jb      loc_1C00630A5
 * 00000001C00F836A: and     [rsp+58h+var_28], 0
 * 00000001C00F8370: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00F8378: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00F837F: mov     r9d, ebp
 * 00000001C00F8382: mov     r8, [rsp+58h+arg_20]
 * 00000001C00F838A: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00F838F: mov     [rsp+58h+var_30], rbx
 * 00000001C00F8394: mov     [rsp+58h+var_38], rdx
 * 00000001C00F8399: mov     edx, 2Bh ; '+'
 * 00000001C00F839E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00F83A4: nop
 * 00000001C00F83A5: jmp     loc_1C00630A5
 */

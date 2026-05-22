/*
 * XREFs of ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180016780 (-HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18001F9E0 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x180040678 (-DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x180040D44 (-ClearInputTargets@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z @ 0x18006BEB4 (-MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z.c)
 *     ?OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x18006CEE0 (-OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x18006CFA0 (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z @ 0x18006CFF0 (-ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z.c)
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x18006D048 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 *     ?ForcePrimaryInputType@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@W4InputType@@@Z @ 0x180072A90 (-ForcePrimaryInputType@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@W4InputType@@@Z.c)
 *     ?OnPeerConnected@MPCManager@@QEAAXPEAVBamoMPCManagerClientProxy@@@Z @ 0x1800737BC (-OnPeerConnected@MPCManager@@QEAAXPEAVBamoMPCManagerClientProxy@@@Z.c)
 *     ?ResendGamepadIsSupportedForProcess@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@I@Z @ 0x180073EB0 (-ResendGamepadIsSupportedForProcess@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@I@Z.c)
 *     ?SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z @ 0x180074550 (-SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z.c)
 *     ?SetOnlyMixedWorldRouting@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_N@Z @ 0x1800746F0 (-SetOnlyMixedWorldRouting@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_N@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18007B2E4 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x18007CA30 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x18007CAC8 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 *     ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x18007CBE4 (-UpdateState@MPCCursorManager@@QEAAXXZ.c)
 *     _lambda_3cd376e3a20bdc9f6b19457eb0f70b96_::operator() @ 0x18007D878 (_lambda_3cd376e3a20bdc9f6b19457eb0f70b96_--operator().c)
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18007EFD0 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18007F4C4 (-ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 *     ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x18008058C (-CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUfloat3@Numerics@Foundation@Win.c)
 *     ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x180081350 (-GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUHitTestResult3D@@Ufl.c)
 *     ?OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z @ 0x1800816A0 (-OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800839A0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x180084870 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x180084970 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAUInputInfo@@@Z @ 0x180084DB0 (-SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAUInputInfo@@@Z.c)
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x1800B8250 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800B85B0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x1800B9738 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ?RemoveFromRouter@MPCTarget@@MEAAXXZ @ 0x1800BB210 (-RemoveFromRouter@MPCTarget@@MEAAXXZ.c)
 *     ?SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z @ 0x18010454C (-SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z.c)
 *     ?GetPoints@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x18018A0C0 (-GetPoints@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV-$vector@UPointData3D@@V-.c)
 *     ?Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18018A430 (-Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18018E390 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18018E5D0 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018E734 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x18018F3F8 (-ResetRayLength@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18018F608 (-ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180192AA0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnPromotedToPrimary@MPCGamepadProcessor@@MEAAXXZ @ 0x1801935B0 (-OnPromotedToPrimary@MPCGamepadProcessor@@MEAAXXZ.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180193990 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180193BE0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z @ 0x180193EA8 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18019416C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x180195184 (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180195470 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180195668 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCMouseProcessor@@MEAAXPEAUInputInfo@@@Z @ 0x180196230 (-OnGazeUpdate@MPCMouseProcessor@@MEAAXPEAUInputInfo@@@Z.c)
 *     ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x180196360 (-OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ.c)
 *     ?PostHitTestProcessing@MPCMouseProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180196C80 (-PostHitTestProcessing@MPCMouseProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180196D7C (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCEyeGazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180197AC0 (-Process3DInput@MPCEyeGazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Display3DCursor@MPCHeadProcessor@@UEAA_NXZ @ 0x180197E50 (-Display3DCursor@MPCHeadProcessor@@UEAA_NXZ.c)
 *     ?Process3DInput@MPCHeadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180197FD0 (-Process3DInput@MPCHeadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18019806C (-RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?SupportsTouch@MPCHeadProcessor@@UEAA_NXZ @ 0x180198130 (-SupportsTouch@MPCHeadProcessor@@UEAA_NXZ.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180198C40 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z @ 0x180198DB8 (-ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1800695EC (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18006A264 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
struct MPCHolographicInputManager *MPCHolographicInputManager::GetInstance(void)
{
  const char *v0; // r9
  struct MPCHolographicInputManager *result; // rax
  __int64 v2; // rax
  _BYTE v3[16]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v4[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v5[16]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  char v7; // [rsp+60h] [rbp+10h] BYREF

  v7 = 0;
  __ExceptionPtrCreate(v3);
  v4[0] = v3;
  v4[1] = &v7;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&MPCHolographicInputManager::s_singletonCreated,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_a6dafc035b20d634b29ec3c0443d964a_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v4) )
  {
    if ( __ExceptionPtrToBool(v3) )
    {
      v2 = std::exception_ptr::exception_ptr((std::exception_ptr *)v5, (const struct std::exception_ptr *)v3);
      std::rethrow_exception(v2);
      __debugbreak();
    }
    std::_XGetLastError();
    __debugbreak();
    JUMPOUT(0x180056C6ELL);
  }
  __ExceptionPtrDestroy(v3);
  result = MPCHolographicInputManager::s_instance;
  if ( !MPCHolographicInputManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v0);
    __debugbreak();
  }
  return result;
}

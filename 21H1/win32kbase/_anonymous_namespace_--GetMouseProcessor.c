/*
 * XREFs of _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC
 * Callers:
 *     SynthesizeMouseInput @ 0x1C003CE40 (SynthesizeMouseInput.c)
 *     InitiateWaitForInjectionCompletion @ 0x1C003E670 (InitiateWaitForInjectionCompletion.c)
 *     NotifySetPointerGraphicDevice @ 0x1C00432F0 (NotifySetPointerGraphicDevice.c)
 *     ForceResetMouseButtonsDownState @ 0x1C004BD90 (ForceResetMouseButtonsDownState.c)
 *     ForceCapture @ 0x1C00507A0 (ForceCapture.c)
 *     IsCapturedBySystem @ 0x1C0050AD0 (IsCapturedBySystem.c)
 *     ClearLogicalCursorPos @ 0x1C0051E60 (ClearLogicalCursorPos.c)
 *     PostPendingMouseMove @ 0x1C0062B20 (PostPendingMouseMove.c)
 *     DCompHitTest @ 0x1C0064080 (DCompHitTest.c)
 *     ProcessMouseEvent @ 0x1C0064AC0 (ProcessMouseEvent.c)
 *     CaptureLogicalCursorPosToQMouseMove @ 0x1C0070220 (CaptureLogicalCursorPosToQMouseMove.c)
 *     GenerateMouseMove @ 0x1C0070470 (GenerateMouseMove.c)
 *     HandleInputDestDestruction @ 0x1C007166C (HandleInputDestDestruction.c)
 *     NtMITDisableMouseIntercept @ 0x1C01349B0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C0134ED0 (NtMITEnableMouseIntercept.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0136C20 (NtMITSynthesizeMouseInput.c)
 *     NtUserGetPointerDeviceOrientation @ 0x1C0139800 (NtUserGetPointerDeviceOrientation.c)
 *     CancelCapturedMipOverride @ 0x1C01B1110 (CancelCapturedMipOverride.c)
 *     CheckIntegrityAccessToCapture @ 0x1C01B1140 (CheckIntegrityAccessToCapture.c)
 *     ChildSynchronizeCursorAsyncWithRootPartition @ 0x1C01B12C4 (ChildSynchronizeCursorAsyncWithRootPartition.c)
 *     ExecuteMarshaledInterceptRequest @ 0x1C01B1390 (ExecuteMarshaledInterceptRequest.c)
 *     HasCapture @ 0x1C01B16A0 (HasCapture.c)
 *     IsCapturedByThread @ 0x1C01B1700 (IsCapturedByThread.c)
 *     IsMouseButtonDown @ 0x1C01B1740 (IsMouseButtonDown.c)
 *     IsMouseInterceptEnabled @ 0x1C01B1770 (IsMouseInterceptEnabled.c)
 *     MouseButtonAction @ 0x1C01B1870 (MouseButtonAction.c)
 *     MouseMove @ 0x1C01B18B0 (MouseMove.c)
 *     PostMouseInputMessage @ 0x1C01B1960 (PostMouseInputMessage.c)
 *     ReleaseMouseButton @ 0x1C01B1AF0 (ReleaseMouseButton.c)
 *     SetContentOrientation @ 0x1C01B1C80 (SetContentOrientation.c)
 *     SetUMInputObservationState @ 0x1C01B1D74 (SetUMInputObservationState.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01B1E40 (SynthesizeMouseInputForPTP.c)
 *     SynthesizeMouseInputWithNextPreview @ 0x1C01B1F70 (SynthesizeMouseInputWithNextPreview.c)
 *     UpdateGlobalCursorOwner @ 0x1C01B2130 (UpdateGlobalCursorOwner.c)
 *     UpdateSavedPoint @ 0x1C01B2190 (UpdateSavedPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 anonymous_namespace_::GetMouseProcessor()
{
  if ( qword_1C0247018 )
    return (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0247018 + 8LL))(qword_1C0247018);
  else
    return 0LL;
}

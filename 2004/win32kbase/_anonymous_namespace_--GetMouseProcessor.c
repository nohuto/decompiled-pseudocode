/*
 * XREFs of _anonymous_namespace_::GetMouseProcessor @ 0x1C00747EC
 * Callers:
 *     SynthesizeMouseInput @ 0x1C004A020 (SynthesizeMouseInput.c)
 *     InitiateWaitForInjectionCompletion @ 0x1C004BB70 (InitiateWaitForInjectionCompletion.c)
 *     NotifySetPointerGraphicDevice @ 0x1C0050D30 (NotifySetPointerGraphicDevice.c)
 *     ForceResetMouseButtonsDownState @ 0x1C0059B30 (ForceResetMouseButtonsDownState.c)
 *     ForceCapture @ 0x1C005E2A0 (ForceCapture.c)
 *     IsCapturedBySystem @ 0x1C005E5E0 (IsCapturedBySystem.c)
 *     ClearLogicalCursorPos @ 0x1C005F9C0 (ClearLogicalCursorPos.c)
 *     PostPendingMouseMove @ 0x1C006C930 (PostPendingMouseMove.c)
 *     DCompHitTest @ 0x1C006F630 (DCompHitTest.c)
 *     ProcessMouseEvent @ 0x1C006FEF0 (ProcessMouseEvent.c)
 *     CaptureLogicalCursorPosToQMouseMove @ 0x1C0074200 (CaptureLogicalCursorPosToQMouseMove.c)
 *     GenerateMouseMove @ 0x1C0074450 (GenerateMouseMove.c)
 *     HandleInputDestDestruction @ 0x1C00745DC (HandleInputDestDestruction.c)
 *     NtMITDisableMouseIntercept @ 0x1C012E9C0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C012EEE0 (NtMITEnableMouseIntercept.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0130C30 (NtMITSynthesizeMouseInput.c)
 *     NtUserGetPointerDeviceOrientation @ 0x1C0133B60 (NtUserGetPointerDeviceOrientation.c)
 *     CancelCapturedMipOverride @ 0x1C01AB3B0 (CancelCapturedMipOverride.c)
 *     CheckIntegrityAccessToCapture @ 0x1C01AB3E0 (CheckIntegrityAccessToCapture.c)
 *     ChildSynchronizeCursorAsyncWithRootPartition @ 0x1C01AB564 (ChildSynchronizeCursorAsyncWithRootPartition.c)
 *     ExecuteMarshaledInterceptRequest @ 0x1C01AB630 (ExecuteMarshaledInterceptRequest.c)
 *     HasCapture @ 0x1C01AB940 (HasCapture.c)
 *     IsCapturedByThread @ 0x1C01AB9A0 (IsCapturedByThread.c)
 *     IsMouseButtonDown @ 0x1C01AB9E0 (IsMouseButtonDown.c)
 *     IsMouseInterceptEnabled @ 0x1C01ABA10 (IsMouseInterceptEnabled.c)
 *     MouseButtonAction @ 0x1C01ABB10 (MouseButtonAction.c)
 *     MouseMove @ 0x1C01ABB50 (MouseMove.c)
 *     PostMouseInputMessage @ 0x1C01ABC00 (PostMouseInputMessage.c)
 *     ReleaseMouseButton @ 0x1C01ABD90 (ReleaseMouseButton.c)
 *     SetContentOrientation @ 0x1C01ABF20 (SetContentOrientation.c)
 *     SetUMInputObservationState @ 0x1C01AC014 (SetUMInputObservationState.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01AC0E0 (SynthesizeMouseInputForPTP.c)
 *     SynthesizeMouseInputWithNextPreview @ 0x1C01AC210 (SynthesizeMouseInputWithNextPreview.c)
 *     UpdateGlobalCursorOwner @ 0x1C01AC3D0 (UpdateGlobalCursorOwner.c)
 *     UpdateSavedPoint @ 0x1C01AC430 (UpdateSavedPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 anonymous_namespace_::GetMouseProcessor()
{
  if ( qword_1C0241018 )
    return (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0241018 + 8LL))(qword_1C0241018);
  else
    return 0LL;
}

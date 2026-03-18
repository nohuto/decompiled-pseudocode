/*
 * XREFs of _anonymous_namespace_::GetMouseProcessor @ 0x1C00554EC
 * Callers:
 *     PostPendingMouseMove @ 0x1C0030F50 (PostPendingMouseMove.c)
 *     DCompHitTest @ 0x1C00346B0 (DCompHitTest.c)
 *     ProcessMouseEvent @ 0x1C00352C0 (ProcessMouseEvent.c)
 *     CaptureLogicalCursorPosToQMouseMove @ 0x1C0054BE0 (CaptureLogicalCursorPosToQMouseMove.c)
 *     GenerateMouseMove @ 0x1C0055170 (GenerateMouseMove.c)
 *     HandleInputDestDestruction @ 0x1C005527C (HandleInputDestDestruction.c)
 *     SynthesizeMouseInput @ 0x1C00AB2C0 (SynthesizeMouseInput.c)
 *     InitiateWaitForInjectionCompletion @ 0x1C00ACDA0 (InitiateWaitForInjectionCompletion.c)
 *     NotifySetPointerGraphicDevice @ 0x1C00B13E0 (NotifySetPointerGraphicDevice.c)
 *     ForceResetMouseButtonsDownState @ 0x1C00B9850 (ForceResetMouseButtonsDownState.c)
 *     ForceCapture @ 0x1C00BE750 (ForceCapture.c)
 *     IsCapturedBySystem @ 0x1C00BE930 (IsCapturedBySystem.c)
 *     ClearLogicalCursorPos @ 0x1C00BFCE0 (ClearLogicalCursorPos.c)
 *     NtMITDisableMouseIntercept @ 0x1C012C670 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C012CB90 (NtMITEnableMouseIntercept.c)
 *     NtMITSynthesizeMouseInput @ 0x1C012E8E0 (NtMITSynthesizeMouseInput.c)
 *     NtUserGetPointerDeviceOrientation @ 0x1C0131810 (NtUserGetPointerDeviceOrientation.c)
 *     CancelCapturedMipOverride @ 0x1C01A9030 (CancelCapturedMipOverride.c)
 *     CheckIntegrityAccessToCapture @ 0x1C01A9060 (CheckIntegrityAccessToCapture.c)
 *     ChildSynchronizeCursorAsyncWithRootPartition @ 0x1C01A91E4 (ChildSynchronizeCursorAsyncWithRootPartition.c)
 *     ExecuteMarshaledInterceptRequest @ 0x1C01A92B0 (ExecuteMarshaledInterceptRequest.c)
 *     HasCapture @ 0x1C01A95C0 (HasCapture.c)
 *     IsCapturedByThread @ 0x1C01A9620 (IsCapturedByThread.c)
 *     IsMouseButtonDown @ 0x1C01A9660 (IsMouseButtonDown.c)
 *     IsMouseInterceptEnabled @ 0x1C01A9690 (IsMouseInterceptEnabled.c)
 *     MouseButtonAction @ 0x1C01A9790 (MouseButtonAction.c)
 *     MouseMove @ 0x1C01A97D0 (MouseMove.c)
 *     PostMouseInputMessage @ 0x1C01A9880 (PostMouseInputMessage.c)
 *     ReleaseMouseButton @ 0x1C01A9A10 (ReleaseMouseButton.c)
 *     SetContentOrientation @ 0x1C01A9BA0 (SetContentOrientation.c)
 *     SetUMInputObservationState @ 0x1C01A9C94 (SetUMInputObservationState.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01A9D60 (SynthesizeMouseInputForPTP.c)
 *     SynthesizeMouseInputWithNextPreview @ 0x1C01A9E90 (SynthesizeMouseInputWithNextPreview.c)
 *     UpdateGlobalCursorOwner @ 0x1C01AA050 (UpdateGlobalCursorOwner.c)
 *     UpdateSavedPoint @ 0x1C01AA0B0 (UpdateSavedPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 anonymous_namespace_::GetMouseProcessor()
{
  if ( qword_1C023F018 )
    return (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C023F018 + 8LL))(qword_1C023F018);
  else
    return 0LL;
}

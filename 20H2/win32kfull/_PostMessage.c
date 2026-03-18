/*
 * XREFs of _PostMessage @ 0x1C0013FF0
 * Callers:
 *     PostIAMShellHookMessageEx @ 0x1C0013F00 (PostIAMShellHookMessageEx.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0014360 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     TrackMouseEvent @ 0x1C00178E0 (TrackMouseEvent.c)
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C001AF20 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     SetMouseTrails @ 0x1C002AC88 (SetMouseTrails.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00BD088 (xxxCancelMouseMoveTracking.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BF1B0 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00ECF88 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxImmProcessKey @ 0x1C00FDC24 (xxxImmProcessKey.c)
 *     PostDeviceNotification @ 0x1C00FFDD0 (PostDeviceNotification.c)
 *     xxxDoHotKeyStuff @ 0x1C0102160 (xxxDoHotKeyStuff.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0116BF4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0117AE8 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 *     _SetMagnificationInputTransform @ 0x1C0128AF0 (_SetMagnificationInputTransform.c)
 *     NtUserEndMenu @ 0x1C012B280 (NtUserEndMenu.c)
 *     PowerOffGdi @ 0x1C01584D0 (PowerOffGdi.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01D7FE0 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E0BBC (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E1AF4 (TryDetachShellFrame.c)
 *     _PostMessageCheckIL @ 0x1C01E2048 (_PostMessageCheckIL.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E3D1C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     DestroyTask @ 0x1C01EA170 (DestroyTask.c)
 *     PostPointerEventMessage @ 0x1C01EE3D0 (PostPointerEventMessage.c)
 *     xxxNextWindow @ 0x1C01F3DB0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F45DC (xxxOldNextWindow.c)
 *     _PostUIActions @ 0x1C0206C90 (_PostUIActions.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C02084CC (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C0210FC0 (xxxCancelTrackingForThread.c)
 *     EditionPostInertiaMessage @ 0x1C0217E80 (EditionPostInertiaMessage.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C021A474 (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     xxxDDETrackSendHook @ 0x1C021CF6C (xxxDDETrackSendHook.c)
 *     xxxDDETrackWindowDying @ 0x1C021D0E8 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C021D2F8 (xxxFreeDdeConv.c)
 *     xxxHandleMenuMessages @ 0x1C0233AC8 (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C0234598 (xxxMNLoop.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C023D238 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0240B70 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _PostMessageExtended @ 0x1C004EE90 (_PostMessageExtended.c)
 */

__int64 __fastcall PostMessage(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rcx

  v4 = 0;
  v5 = PostMessageExtended(a1, a2, a3, a4, 0LL);
  if ( v5 < (unsigned __int64)MmSystemRangeStart )
    return (unsigned int)v5;
  LOBYTE(v4) = v5 != 0;
  return v4;
}

/*
 * XREFs of _PostMessage @ 0x1C0058410
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C000EE90 (_SetMagnificationInputTransform.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0033AE0 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     SetMouseTrails @ 0x1C004C4B8 (SetMouseTrails.c)
 *     xxxDoHotKeyStuff @ 0x1C0054B90 (xxxDoHotKeyStuff.c)
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0057C80 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00581CC (xxxCancelMouseMoveTracking.c)
 *     PostIAMShellHookMessageEx @ 0x1C0058320 (PostIAMShellHookMessageEx.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     TrackMouseEvent @ 0x1C005B8A0 (TrackMouseEvent.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F0160 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00F2718 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     PostDeviceNotification @ 0x1C00F8C00 (PostDeviceNotification.c)
 *     xxxImmProcessKey @ 0x1C0101664 (xxxImmProcessKey.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0115664 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0116598 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     NtUserEndMenu @ 0x1C0129230 (NtUserEndMenu.c)
 *     PowerOffGdi @ 0x1C0155B70 (PowerOffGdi.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01D8CA0 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E187C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E27B4 (TryDetachShellFrame.c)
 *     _PostMessageCheckIL @ 0x1C01E2D08 (_PostMessageCheckIL.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E49DC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     DestroyTask @ 0x1C01EADE0 (DestroyTask.c)
 *     PostPointerEventMessage @ 0x1C01EF040 (PostPointerEventMessage.c)
 *     xxxNextWindow @ 0x1C01F4A20 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F524C (xxxOldNextWindow.c)
 *     _PostUIActions @ 0x1C0207B00 (_PostUIActions.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C020933C (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C0211E40 (xxxCancelTrackingForThread.c)
 *     EditionPostInertiaMessage @ 0x1C0218D10 (EditionPostInertiaMessage.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C021B304 (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     xxxDDETrackSendHook @ 0x1C021DDFC (xxxDDETrackSendHook.c)
 *     xxxDDETrackWindowDying @ 0x1C021DF78 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C021E188 (xxxFreeDdeConv.c)
 *     xxxHandleMenuMessages @ 0x1C0234958 (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C0235428 (xxxMNLoop.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C023E4D8 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0241E10 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _PostMessageExtended @ 0x1C00931C0 (_PostMessageExtended.c)
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

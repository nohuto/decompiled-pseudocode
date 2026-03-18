/*
 * XREFs of __PostMessage@16 @ 0x6DA60
 * Callers:
 *     ?xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z @ 0x1364E (-xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z.c)
 *     _xxxCancelMouseMoveTracking@16 @ 0x15E12 (_xxxCancelMouseMoveTracking@16.c)
 *     ?_PostShellHookMsgWorker@@YGXIIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1718E (-_PostShellHookMsgWorker@@YGXIIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YGXPAUtagTHREADINFO@@QAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x6EBE2 (-xxxHandleCoreMessagingQueueCompletion@@YGXPAUtagTHREADINFO@@QAU_FILE_IO_COMPLETION_INFORMATION@.c)
 *     ?xxxUpdateWindow2@@YGXPAUtagWND@@K@Z @ 0x7D46A (-xxxUpdateWindow2@@YGXPAUtagWND@@K@Z.c)
 *     ?xxxCheckImeShowStatus@@YGHPAUtagWND@@PAUtagTHREADINFO@@@Z @ 0x92932 (-xxxCheckImeShowStatus@@YGHPAUtagWND@@PAUtagTHREADINFO@@@Z.c)
 *     _TrackMouseEvent@4 @ 0x9A9BE (_TrackMouseEvent@4.c)
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 *     _xxxImmProcessKey@20 @ 0xA2CE0 (_xxxImmProcessKey@20.c)
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     ?xxxKeyboardCorrectionCallout@@YGIPBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0xC12BC (-xxxKeyboardCorrectionCallout@@YGIPBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     _PostDeviceNotification@20 @ 0xC9CA6 (_PostDeviceNotification@20.c)
 *     _xxxFlashWindow@12 @ 0xCA4EE (_xxxFlashWindow@12.c)
 *     __SetMagnificationInputTransform@4 @ 0xCF572 (__SetMagnificationInputTransform@4.c)
 *     _PowerOffGdi@0 @ 0xD4366 (_PowerOffGdi@0.c)
 *     _NtUserEndMenu@0 @ 0xD4B30 (_NtUserEndMenu@0.c)
 *     _SetMouseTrails@4 @ 0xD8942 (_SetMouseTrails@4.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YGXPAUtagWND@@@Z @ 0x146A3E (-FinalizeKoreanImeCompStrOnMouseClick@@YGXPAUtagWND@@@Z.c)
 *     ?TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z @ 0x14DB96 (-TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z.c)
 *     _TryDetachShellFrame@16 @ 0x14E7E3 (_TryDetachShellFrame@16.c)
 *     __PostMessageCheckIL@20 @ 0x14EADF (__PostMessageCheckIL@20.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z @ 0x150226 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z.c)
 *     _DestroyTask@8 @ 0x1558C0 (_DestroyTask@8.c)
 *     _PostPointerEventMessage@16 @ 0x159285 (_PostPointerEventMessage@16.c)
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 *     __PostUIActions@4 @ 0x16D7D6 (__PostUIActions@4.c)
 *     ?_PostEdgyInertia@Edgy@@YGXPAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x16EE40 (-_PostEdgyInertia@Edgy@@YGXPAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     _xxxCancelTrackingForThread@4 @ 0x17668C (_xxxCancelTrackingForThread@4.c)
 *     _EditionPostInertiaMessage@24 @ 0x17C9FA (_EditionPostInertiaMessage@24.c)
 *     ?AbnormalDDEPost@@YGKPAUtagDDECONV@@K@Z @ 0x17E7A7 (-AbnormalDDEPost@@YGKPAUtagDDECONV@@K@Z.c)
 *     _xxxDDETrackSendHook@16 @ 0x180600 (_xxxDDETrackSendHook@16.c)
 *     _xxxDDETrackWindowDying@8 @ 0x180709 (_xxxDDETrackWindowDying@8.c)
 *     _xxxFreeDdeConv@4 @ 0x180896 (_xxxFreeDdeConv@4.c)
 *     ?xxxDrawClipboard@@YGXPAUtagWINDOWSTATION@@@Z @ 0x182559 (-xxxDrawClipboard@@YGXPAUtagWINDOWSTATION@@@Z.c)
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x19C316 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YGXPAUtagTHREADINFO@@@Z @ 0x19F8FE (-xxxCloseApplication@WindowManagementExtended@@YGXPAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     __PostMessageExtended@20 @ 0x6DA3C (__PostMessageExtended@20.c)
 */

unsigned int __stdcall _PostMessage(int a1, int a2, int a3, int a4)
{
  unsigned int result; // eax

  result = _PostMessageExtended(a1, a2, a3, a4, 0);
  if ( result >= (unsigned int)_MmSystemRangeStart )
    return result != 0;
  return result;
}

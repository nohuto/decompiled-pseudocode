/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1C00B3C70
 * Callers:
 *     xxxCancelTracking @ 0x1C003126C (xxxCancelTracking.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00313C8 (xxxCreateDefaultImeWindow.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0032AD4 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0034844 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxSendMessageBSM @ 0x1C0036BC0 (xxxSendMessageBSM.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0037E18 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     NtUserSwitchDesktop @ 0x1C004A560 (NtUserSwitchDesktop.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C0056400 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxSetClipboardViewer @ 0x1C00567D0 (xxxSetClipboardViewer.c)
 *     xxxEmptyClipboard @ 0x1C0056AE0 (xxxEmptyClipboard.c)
 *     NtUserGetClipboardData @ 0x1C0057340 (NtUserGetClipboardData.c)
 *     xxxTrackMouseMove @ 0x1C0057D90 (xxxTrackMouseMove.c)
 *     xxxCloseClipboard @ 0x1C0059F90 (xxxCloseClipboard.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     xxxRemoveFullScreen @ 0x1C008EABC (xxxRemoveFullScreen.c)
 *     xxxDoPaint @ 0x1C0092318 (xxxDoPaint.c)
 *     xxxReceiveMessage @ 0x1C0097200 (xxxReceiveMessage.c)
 *     zzzSetDesktop @ 0x1C00B3880 (zzzSetDesktop.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxQueryInformationThread @ 0x1C00BC518 (xxxQueryInformationThread.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BC9B8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxDesktopsRecalc @ 0x1C010575C (xxxDesktopsRecalc.c)
 *     CleanupW32ThreadLocks @ 0x1C010A560 (CleanupW32ThreadLocks.c)
 *     xxxAddFullScreen @ 0x1C01192D4 (xxxAddFullScreen.c)
 *     xxxSendMinRectMessages @ 0x1C011A928 (xxxSendMinRectMessages.c)
 *     RemoteDisableScreen @ 0x1C011E640 (RemoteDisableScreen.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C011FFD8 (xxxImmUnloadThreadsLayout.c)
 *     xxxWaitForInputIdle @ 0x1C0121F80 (xxxWaitForInputIdle.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C01220F4 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0122570 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxChangeClipboardChain @ 0x1C01511B0 (xxxChangeClipboardChain.c)
 *     xxxSnapWindow @ 0x1C015294C (xxxSnapWindow.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0155160 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C01551C4 (RemoteRedrawScreen.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01D2D5C (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01DEC40 (xxxGetDeviceChangeInfo.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E187C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E27B4 (TryDetachShellFrame.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E3450 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E3A50 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E3E30 (xxxImmActivateThreadsLayout.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E69BC (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxDrawDragRectEx @ 0x1C0211F54 (xxxDrawDragRectEx.c)
 *     xxxDeferredDesktopRotation @ 0x1C021F100 (xxxDeferredDesktopRotation.c)
 *     xxxHardErrorControl @ 0x1C0242CAC (xxxHardErrorControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PopAndFreeW32ThreadLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v11; // rcx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v11),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  result = *(_QWORD *)a1;
  *(_QWORD *)(v3 + 16) = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 8) )
    return (*(__int64 (**)(void))(a1 + 16))();
  return result;
}

/*
 * XREFs of _PopAndFreeW32ThreadLock@4 @ 0x3C354
 * Callers:
 *     _xxxCloseClipboard@4 @ 0x11D76 (_xxxCloseClipboard@4.c)
 *     _xxxAddFullScreen@4 @ 0x12380 (_xxxAddFullScreen@4.c)
 *     _xxxTrackMouseMove@12 @ 0x129D6 (_xxxTrackMouseMove@12.c)
 *     ?xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x17292 (-xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _xxxCancelTracking@0 @ 0x17842 (_xxxCancelTracking@0.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x18278 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     _xxxCreateDefaultImeWindow@12 @ 0x1D8EA (_xxxCreateDefaultImeWindow@12.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxDoPaint@8 @ 0x6BD40 (_xxxDoPaint@8.c)
 *     _zzzSetDesktop@12 @ 0x6EDEC (_zzzSetDesktop@12.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxRemoveFullScreen@4 @ 0x7202E (_xxxRemoveFullScreen@4.c)
 *     ?DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0x7CC38 (-DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     _xxxSendMessageBSM@24 @ 0x7F422 (_xxxSendMessageBSM@24.c)
 *     _CleanupW32ThreadLocks@4 @ 0xA3CD8 (_CleanupW32ThreadLocks@4.c)
 *     _xxxSendMinRectMessages@8 @ 0xA7C5A (_xxxSendMinRectMessages@8.c)
 *     _xxxEmptyClipboard@4 @ 0xACB3A (_xxxEmptyClipboard@4.c)
 *     _NtUserSwitchDesktop@12 @ 0xAF4AC (_NtUserSwitchDesktop@12.c)
 *     _xxxDesktopsRecalc@8 @ 0xB0468 (_xxxDesktopsRecalc@8.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _xxxQueryInformationThread@16 @ 0xCF7F4 (_xxxQueryInformationThread@16.c)
 *     _RemoteDisableScreen@16 @ 0xD17D8 (_RemoteDisableScreen@16.c)
 *     _xxxRestoreDesktopsMonitorsAndWindowsRects@8 @ 0xD23F0 (_xxxRestoreDesktopsMonitorsAndWindowsRects@8.c)
 *     _RemoteRedrawScreen@4 @ 0xD2434 (_RemoteRedrawScreen@4.c)
 *     _xxxWaitForInputIdle@12 @ 0xE365C (_xxxWaitForInputIdle@12.c)
 *     ?xxxPollAndWaitForSingleObject@@YGKPAU_KEVENT@@PAXK@Z @ 0xE3788 (-xxxPollAndWaitForSingleObject@@YGKPAU_KEVENT@@PAXK@Z.c)
 *     ?xxxSystemBroadcastMessage@@YGXIIJIPATtagBROADCASTMSG@@HI@Z @ 0xE719A (-xxxSystemBroadcastMessage@@YGXIIJIPATtagBROADCASTMSG@@HI@Z.c)
 *     _xxxImmUnloadThreadsLayout@16 @ 0xE72DE (_xxxImmUnloadThreadsLayout@16.c)
 *     ?xxxCallGenerateIAMKey@@YGJPAUtagIAM_KKEY@@@Z @ 0x1416FE (-xxxCallGenerateIAMKey@@YGJPAUtagIAM_KKEY@@@Z.c)
 *     _xxxGetDeviceChangeInfo@0 @ 0x14B4F7 (_xxxGetDeviceChangeInfo@0.c)
 *     ?TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z @ 0x14DB96 (-TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z.c)
 *     _TryDetachShellFrame@16 @ 0x14E7E3 (_TryDetachShellFrame@16.c)
 *     ?xxxSendMessageToUI@@YGJPAUtagTHREADINFO@@PAUtagIMEUI@@IIJ@Z @ 0x14EEFD (-xxxSendMessageToUI@@YGJPAUtagTHREADINFO@@PAUtagIMEUI@@IIJ@Z.c)
 *     _xxxImmActivateAndUnloadThreadsLayout@20 @ 0x14F3AC (_xxxImmActivateAndUnloadThreadsLayout@20.c)
 *     _xxxImmActivateThreadsLayout@12 @ 0x14F6B9 (_xxxImmActivateThreadsLayout@12.c)
 *     _xxxForceUpdateProcessDpiAwarenessContext@8 @ 0x1523FE (_xxxForceUpdateProcessDpiAwarenessContext@8.c)
 *     _NtUserGetClipboardData@8 @ 0x161F6A (_NtUserGetClipboardData@8.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 *     _xxxDeferredDesktopRotation@0 @ 0x1815B6 (_xxxDeferredDesktopRotation@0.c)
 *     ?xxxDisownClipboard@@YGXPAUtagWND@@@Z @ 0x18244D (-xxxDisownClipboard@@YGXPAUtagWND@@@Z.c)
 *     _xxxChangeClipboardChain@8 @ 0x182FF0 (_xxxChangeClipboardChain@8.c)
 *     _xxxSetClipboardViewer@4 @ 0x183220 (_xxxSetClipboardViewer@4.c)
 *     _xxxHardErrorControl@12 @ 0x1A022C (_xxxHardErrorControl@12.c)
 *     _xxxSnapWindow@8 @ 0x1A20A2 (_xxxSnapWindow@8.c)
 * Callees:
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

int __stdcall PopAndFreeW32ThreadLock(int a1)
{
  PKTHREAD CurrentThread; // edi
  int v2; // esi
  int *ThreadWin32Thread; // eax
  int result; // eax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
  }
  *(_DWORD *)(v2 + 8) = *(_DWORD *)a1;
  result = *(_DWORD *)(a1 + 4);
  if ( result )
    return (*(int (__stdcall **)(_DWORD))(a1 + 8))(*(_DWORD *)(a1 + 4));
  return result;
}

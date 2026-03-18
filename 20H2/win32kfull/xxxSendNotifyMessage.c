/*
 * XREFs of xxxSendNotifyMessage @ 0x1C00399D0
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C00058A0 (xxxSetModernAppWindow.c)
 *     NtUserNavigateFocus @ 0x1C00077C0 (NtUserNavigateFocus.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0014360 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00197A8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     xxxBroadcastMessageEx @ 0x1C0038FD0 (xxxBroadcastMessageEx.c)
 *     ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0039900 (-xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0073F0C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00BAF3C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00BB764 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00C1CB4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxDWP_UpdateUIState @ 0x1C00C7408 (xxxDWP_UpdateUIState.c)
 *     xxxFullScreenCleanup @ 0x1C0111200 (xxxFullScreenCleanup.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C011A8C4 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C0124E9C (xxxSetDeskWallpaper.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C0125010 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     _NotifyOverlayWindow @ 0x1C01D7450 (_NotifyOverlayWindow.c)
 *     xxxNextWindow @ 0x1C01F3DB0 (xxxNextWindow.c)
 *     xxxMNLoop @ 0x1C0234598 (xxxMNLoop.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0234CF0 (xxxBroadcastPaletteChanged.c)
 *     xxxSendMenuSelect @ 0x1C0250E6C (xxxSendMenuSelect.c)
 * Callees:
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0018F34 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSendMessageCallback @ 0x1C0039C44 (xxxSendMessageCallback.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C0129DA0 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxSendNotifyMessage(__int64 a1, unsigned int a2, __int64 a3, struct _LARGE_STRING *a4, int a5)
{
  struct _LARGE_STRING *v5; // r10
  char v9; // di
  __int128 v10; // [rsp+50h] [rbp-38h] BYREF
  __int128 v11; // [rsp+60h] [rbp-28h] BYREF
  __int64 v12; // [rsp+70h] [rbp-18h]

  v5 = a4;
  if ( a1 != -1 )
    return xxxSendMessageCallback(a1, a2, a3, (int)a4, 0LL, 0LL, 0, a5, 0);
  v9 = 0;
  v12 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  if ( a2 < 0x1A )
    return xxxSendMessageCallback(a1, a2, a3, (int)a4, 0LL, 0LL, 0, a5, 0);
  if ( a2 > 0x1B )
  {
    if ( a2 == 42 )
      goto LABEL_8;
    return xxxSendMessageCallback(a1, a2, a3, (int)a4, 0LL, 0LL, 0, a5, 0);
  }
  if ( a4 )
  {
    if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)&v10, a4) )
      return 0LL;
    PushW32ThreadLock(*((_QWORD *)&v10 + 1), &v11, Win32FreePool);
    v5 = (struct _LARGE_STRING *)&v10;
    v9 = 1;
  }
LABEL_8:
  xxxSystemBroadcastMessage(a2, a3, (__int64)v5, 1, 0LL, a5, 0);
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock(&v11);
  return 1LL;
}

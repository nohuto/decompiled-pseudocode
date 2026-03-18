/*
 * XREFs of _xxxSendNotifyMessage@20 @ 0x4823C
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172 (-xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x18278 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x19E68 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxBroadcastMessageEx@32 @ 0x48942 (_xxxBroadcastMessageEx@32.c)
 *     ?xxxSendBSMtoDesktop@@YGHPAUtagWND@@IIJPAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x7F518 (-xxxSendBSMtoDesktop@@YGHPAUtagWND@@IIJPAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?xxxWrapSendNotifyMessage@@YGJPAUtagWND@@IIJK@Z @ 0xA48D6 (-xxxWrapSendNotifyMessage@@YGJPAUtagWND@@IIJK@Z.c)
 *     _xxxDWP_UpdateUIState@12 @ 0xA50F8 (_xxxDWP_UpdateUIState@12.c)
 *     _xxxFullScreenCleanup@0 @ 0xA7816 (_xxxFullScreenCleanup@0.c)
 *     _xxxSetModernAppWindow@8 @ 0xC6BDE (_xxxSetModernAppWindow@8.c)
 *     _xxxSetDeskWallpaper@8 @ 0xE631C (_xxxSetDeskWallpaper@8.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YGHXZ @ 0xE6432 (-xxxNotifyShellOfWallpaperChange@@YGHXZ.c)
 *     __NotifyOverlayWindow@8 @ 0x145F10 (__NotifyOverlayWindow@8.c)
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 *     _NtUserNavigateFocus@8 @ 0x16716A (_NtUserNavigateFocus@8.c)
 *     ?xxxDrawClipboard@@YGXPAUtagWINDOWSTATION@@@Z @ 0x182559 (-xxxDrawClipboard@@YGXPAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxSendClipboardMessage@@YGXPAUtagWINDOWSTATION@@I@Z @ 0x182BFB (-xxxSendClipboardMessage@@YGXPAUtagWINDOWSTATION@@I@Z.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 *     _xxxBroadcastPaletteChanged@8 @ 0x196256 (_xxxBroadcastPaletteChanged@8.c)
 *     _xxxSendMenuSelect@20 @ 0x1AD617 (_xxxSendMenuSelect@20.c)
 * Callees:
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     ?xxxSystemBroadcastMessage@@YGXIIJIPATtagBROADCASTMSG@@HI@Z @ 0xE719A (-xxxSystemBroadcastMessage@@YGXIIJIPATtagBROADCASTMSG@@HI@Z.c)
 *     ?CaptureBroadcastString@@YGHPAU_LARGE_UNICODE_STRING@@PAU_LARGE_STRING@@@Z @ 0xE9F68 (-CaptureBroadcastString@@YGHPAU_LARGE_UNICODE_STRING@@PAU_LARGE_STRING@@@Z.c)
 */

size_t __stdcall xxxSendNotifyMessage(int a1, unsigned int a2, struct tagWND *a3, size_t a4, size_t MaxCount)
{
  char v6; // bl
  _DWORD *v7; // eax
  struct _LARGE_UNICODE_STRING *v8; // [esp+0h] [ebp-20h]
  struct _LARGE_STRING *v9; // [esp+4h] [ebp-1Ch]
  _BYTE v10[12]; // [esp+8h] [ebp-18h] BYREF
  _DWORD v11[2]; // [esp+14h] [ebp-Ch] BYREF
  int v12; // [esp+1Ch] [ebp-4h]

  if ( a1 != -1 )
    return xxxSendMessageCallback(a1, a2, a3, a4, 0, 0, 0, MaxCount, 0);
  memset(v10, 0, sizeof(v10));
  v6 = 0;
  v11[0] = 0;
  v11[1] = 0;
  v12 = 0;
  if ( a2 < 0x1A )
    return xxxSendMessageCallback(a1, a2, a3, a4, 0, 0, 0, MaxCount, 0);
  if ( a2 > 0x1B )
  {
    if ( a2 == 42 )
    {
      v7 = (_DWORD *)a4;
      goto LABEL_10;
    }
    return xxxSendMessageCallback(a1, a2, a3, a4, 0, 0, 0, MaxCount, 0);
  }
  v7 = (_DWORD *)a4;
  if ( a4 )
  {
    if ( !CaptureBroadcastString(v8, v9) )
      return 0;
    PushW32ThreadLock(v12, v10, Win32FreePool);
    v6 = 1;
    v7 = v11;
  }
LABEL_10:
  xxxSystemBroadcastMessage((unsigned int)v7, 1u, 0, MaxCount, 0, (int)v8, (unsigned int)v9);
  if ( v6 )
    PopAndFreeAlwaysW32ThreadLock(v10);
  return 1;
}

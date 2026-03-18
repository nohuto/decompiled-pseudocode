/*
 * XREFs of ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0
 * Callers:
 *     _xxxSetTrayWindow@8 @ 0x13758 (_xxxSetTrayWindow@8.c)
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     _xxxRedrawTitle@8 @ 0x17084 (_xxxRedrawTitle@8.c)
 *     ?xxxSetFocus@@YGPAUtagWND@@PAU1@@Z @ 0x17FFC (-xxxSetFocus@@YGPAUtagWND@@PAU1@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _xxxNotifyMonitorChanged@16 @ 0x26F18 (_xxxNotifyMonitorChanged@16.c)
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     ?xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z @ 0x45220 (-xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z.c)
 *     _xxxSleepTask@8 @ 0x457AA (_xxxSleepTask@8.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0 (-xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z.c)
 *     _xxxCallCtfHook@16 @ 0x6D91E (_xxxCallCtfHook@16.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _xxxGetInputEvent@4 @ 0x82D1E (_xxxGetInputEvent@4.c)
 *     _xxxCallMsgFilter@8 @ 0x94CF8 (_xxxCallMsgFilter@8.c)
 *     _xxxNotifyIMEStatus@12 @ 0xA58A2 (_xxxNotifyIMEStatus@12.c)
 *     _xxxDesktopThreadWaiter@8 @ 0xA6EF2 (_xxxDesktopThreadWaiter@8.c)
 *     _xxxSendMinRectMessages@8 @ 0xA7C5A (_xxxSendMinRectMessages@8.c)
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     _EditionNotifyShellLanguageHook@12 @ 0xAE9B6 (_EditionNotifyShellLanguageHook@12.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     ?xxxNotifyShellOfWindowSwap@@YGXPAUtagWND@@0@Z @ 0xC26E2 (-xxxNotifyShellOfWindowSwap@@YGXPAUtagWND@@0@Z.c)
 *     _xxxFlashWindow@12 @ 0xCA4EE (_xxxFlashWindow@12.c)
 *     _EditionCallAccessibilityHook@0 @ 0xF0436 (_EditionCallAccessibilityHook@0.c)
 *     _xxxCallJournalPlaybackHook@4 @ 0x1527A2 (_xxxCallJournalPlaybackHook@4.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YGHPAUtagTHREADINFO@@K@Z @ 0x15B280 (-xxxDiscardPointerWindowFrameMessages@@YGHPAUtagTHREADINFO@@K@Z.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 *     _xxxRedrawFrameAndHook@4 @ 0x1A13C6 (_xxxRedrawFrameAndHook@4.c)
 *     ?xxxHandleOwnerSwitch@@YGXPAUtagWND@@00@Z @ 0x1A5A84 (-xxxHandleOwnerSwitch@@YGXPAUtagWND@@00@Z.c)
 *     _xxxIsDragging@16 @ 0x1A68B7 (_xxxIsDragging@16.c)
 * Callees:
 *     _PhkNextValid@4 @ 0x1299C (_PhkNextValid@4.c)
 *     ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0 (-xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z.c)
 *     _xxxPointerCallHook@20 @ 0x15A676 (_xxxPointerCallHook@20.c)
 */

int __userpurge xxxCallHook@<eax>(
        struct tagHOOK *a1@<edx>,
        int a2@<ecx>,
        unsigned int *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  unsigned int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  int *v11; // [esp+0h] [ebp-10h]
  bool v12; // [esp+4h] [ebp-Ch]

  if ( a4 == 3 )
    goto LABEL_2;
  if ( a4 > 6 )
  {
    if ( a4 == 12 )
    {
      v7 = a3[3];
      goto LABEL_3;
    }
    if ( a4 != -1 )
    {
LABEL_22:
      v7 = 0;
      LOWORD(v8) = 0;
      goto LABEL_5;
    }
  }
  else if ( a4 != 6 )
  {
    if ( !a4 )
    {
      v7 = *a3;
      LOWORD(v8) = 0;
      goto LABEL_4;
    }
    if ( a4 == 4 )
    {
      v7 = a3[2];
      v8 = a3[1];
      goto LABEL_4;
    }
    goto LABEL_22;
  }
LABEL_2:
  v7 = a3[1];
LABEL_3:
  v8 = a3[2];
LABEL_4:
  if ( v7 < 0x241 || v7 > 0x244 )
  {
LABEL_5:
    if ( v7 < 0x245 || v7 > 0x257 || v7 == 589 )
      goto LABEL_6;
  }
  if ( v7 != 595 )
    return xxxPointerCallHook(a2, a3, a4, dword_2510E4[a4]);
LABEL_6:
  if ( v7 == 528 && (_WORD)v8 == 582 )
    return xxxPointerCallHook(a2, a3, a4, dword_2510E4[a4]);
  v9 = *(_DWORD *)(_gptiCurrent + 4 * a4 + 516);
  if ( (v9 || (v9 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 252) + 4 * a4 + 24)) != 0) && *(char *)(v9 + 32) < 0 )
    PhkNextValid(v9);
  return xxxCallHook2(a1, (int)a3, 0, 0, v11, v12);
}

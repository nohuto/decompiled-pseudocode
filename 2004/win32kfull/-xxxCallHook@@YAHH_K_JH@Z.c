/*
 * XREFs of ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30
 * Callers:
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0004968 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxSetTrayWindow @ 0x1C00338B4 (xxxSetTrayWindow.c)
 *     xxxRedrawTitle @ 0x1C0033990 (xxxRedrawTitle.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00344E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxSendMessageCallback @ 0x1C0036784 (xxxSendMessageCallback.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     xxxNotifyMonitorChanged @ 0x1C006B018 (xxxNotifyMonitorChanged.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006DEE0 (xxxEndDeferWindowPosEx.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxCallCtfHook @ 0x1C0091874 (xxxCallCtfHook.c)
 *     xxxGetInputEvent @ 0x1C0091F60 (xxxGetInputEvent.c)
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0096AE0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxReceiveMessage @ 0x1C0097200 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C009A2E0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDesktopThreadWaiter @ 0x1C00BE118 (xxxDesktopThreadWaiter.c)
 *     xxxNotifyIMEStatus @ 0x1C01094B8 (xxxNotifyIMEStatus.c)
 *     xxxFlashWindow @ 0x1C0113948 (xxxFlashWindow.c)
 *     xxxSendMinRectMessages @ 0x1C011A928 (xxxSendMinRectMessages.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C011B4E4 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     EditionNotifyShellLanguageHook @ 0x1C0128020 (EditionNotifyShellLanguageHook.c)
 *     xxxRedrawFrameAndHook @ 0x1C0153940 (xxxRedrawFrameAndHook.c)
 *     NtUserCallMsgFilter @ 0x1C0153EA0 (NtUserCallMsgFilter.c)
 *     EditionCallAccessibilityHook @ 0x1C01D7D00 (EditionCallAccessibilityHook.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E6EA4 (xxxCallJournalPlaybackHook.c)
 *     xxxCallMsgFilter @ 0x1C01E73FC (xxxCallMsgFilter.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F1D44 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020F978 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMoveSize @ 0x1C02132C4 (xxxMoveSize.c)
 *     xxxIsDragging @ 0x1C0249DA8 (xxxIsDragging.c)
 * Callees:
 *     PhkNextValid @ 0x1C0046050 (PhkNextValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C009A2E0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxPointerCallHook @ 0x1C01F0B3C (xxxPointerCallHook.c)
 */

__int64 __fastcall xxxCallHook(int a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // r10
  int v5; // r11d
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 Valid; // rcx

  v4 = a2;
  v5 = a1;
  if ( a4 == 3 )
    goto LABEL_2;
  if ( a4 == 4 )
  {
    v6 = *(_DWORD *)(a3 + 16);
    v7 = *(_QWORD *)(a3 + 8);
  }
  else
  {
    if ( a4 )
    {
      if ( a4 != -1 && a4 != 6 )
      {
        if ( a4 != 12 )
        {
          v6 = 0;
          LOWORD(v7) = 0;
          goto LABEL_5;
        }
        v6 = *(_DWORD *)(a3 + 24);
        goto LABEL_3;
      }
LABEL_2:
      v6 = *(_DWORD *)(a3 + 8);
LABEL_3:
      v7 = *(_QWORD *)(a3 + 16);
      goto LABEL_4;
    }
    v6 = *(_DWORD *)a3;
    LOWORD(v7) = 0;
  }
LABEL_4:
  if ( v6 - 577 > 3 )
  {
LABEL_5:
    if ( v6 < 0x245 || v6 > 0x257 || v6 == 589 )
      goto LABEL_6;
  }
  if ( v6 != 595 )
    return xxxPointerCallHook(a1, v4, a3, dword_1C02EBC54[a4]);
LABEL_6:
  if ( v6 == 528 && (_WORD)v7 == 582 )
    return xxxPointerCallHook(a1, v4, a3, dword_1C02EBC54[a4]);
  Valid = *(_QWORD *)(gptiCurrent + 8LL * a4 + 912);
  if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL * a4 + 48)) != 0)
    && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
  {
    Valid = PhkNextValid(Valid);
  }
  return xxxCallHook2((struct tagHOOK *)Valid, v5, v4, a3, 0LL, 0);
}

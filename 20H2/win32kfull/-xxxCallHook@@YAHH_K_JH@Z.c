/*
 * XREFs of ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10
 * Callers:
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0004808 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     xxxFlashWindow @ 0x1C0019218 (xxxFlashWindow.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     xxxSendMessageCallback @ 0x1C0039C44 (xxxSendMessageCallback.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 *     xxxNotifyMonitorChanged @ 0x1C004A38C (xxxNotifyMonitorChanged.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxCallCtfHook @ 0x1C004D454 (xxxCallCtfHook.c)
 *     xxxGetInputEvent @ 0x1C004DC30 (xxxGetInputEvent.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00527B0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxReceiveMessage @ 0x1C0052EE0 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0055FC0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxDesktopThreadWaiter @ 0x1C007E9C8 (xxxDesktopThreadWaiter.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00BAF3C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxSetTrayWindow @ 0x1C00BEF88 (xxxSetTrayWindow.c)
 *     xxxRedrawTitle @ 0x1C00BF060 (xxxRedrawTitle.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00C1950 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxNotifyIMEStatus @ 0x1C010A2D8 (xxxNotifyIMEStatus.c)
 *     xxxSendMinRectMessages @ 0x1C011B6F8 (xxxSendMinRectMessages.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C011BED4 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 *     EditionNotifyShellLanguageHook @ 0x1C012A030 (EditionNotifyShellLanguageHook.c)
 *     xxxRedrawFrameAndHook @ 0x1C0156270 (xxxRedrawFrameAndHook.c)
 *     NtUserCallMsgFilter @ 0x1C01567D0 (NtUserCallMsgFilter.c)
 *     EditionCallAccessibilityHook @ 0x1C01D7040 (EditionCallAccessibilityHook.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E61E4 (xxxCallJournalPlaybackHook.c)
 *     xxxCallMsgFilter @ 0x1C01E673C (xxxCallMsgFilter.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F10D4 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMoveSize @ 0x1C0212444 (xxxMoveSize.c)
 *     xxxIsDragging @ 0x1C02487F8 (xxxIsDragging.c)
 * Callees:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0055FC0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     PhkNextValid @ 0x1C0074F10 (PhkNextValid.c)
 *     xxxPointerCallHook @ 0x1C01EFECC (xxxPointerCallHook.c)
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
    return xxxPointerCallHook(a1, v4, a3, dword_1C02EAD34[a4]);
LABEL_6:
  if ( v6 == 528 && (_WORD)v7 == 582 )
    return xxxPointerCallHook(a1, v4, a3, dword_1C02EAD34[a4]);
  Valid = *(_QWORD *)(gptiCurrent + 8LL * a4 + 920);
  if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 8LL * a4 + 48)) != 0)
    && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
  {
    Valid = PhkNextValid(Valid);
  }
  return xxxCallHook2((struct tagHOOK *)Valid, v5, v4, a3, 0LL, 0);
}

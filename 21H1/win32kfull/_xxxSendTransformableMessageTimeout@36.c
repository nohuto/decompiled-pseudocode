/*
 * XREFs of _xxxSendTransformableMessageTimeout@36 @ 0x402E0
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172 (-xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z.c)
 *     _xxxGetWindowSmIcon@8 @ 0x1D0E0 (_xxxGetWindowSmIcon@8.c)
 *     ?xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x26470 (-xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS.c)
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     _xxxSendTransformableMessage@20 @ 0x2D496 (_xxxSendTransformableMessage@20.c)
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxBroadcastMessageEx@32 @ 0x48942 (_xxxBroadcastMessageEx@32.c)
 *     _xxxGetScrollBarInfo@12 @ 0x6D508 (_xxxGetScrollBarInfo@12.c)
 *     ?xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z @ 0x7007A (-xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _xxxWindowHitTest2@20 @ 0x7D1C4 (_xxxWindowHitTest2@20.c)
 *     ?xxxSendBSMtoDesktop@@YGHPAUtagWND@@IIJPAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x7F518 (-xxxSendBSMtoDesktop@@YGHPAUtagWND@@IIJPAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     _xxxEnableScrollBar@12 @ 0x8E0EE (_xxxEnableScrollBar@12.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x92764 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     _xxxSendMessageEx@20 @ 0x9E444 (_xxxSendMessageEx@20.c)
 *     ?xxxWrapSendMessage@@YGJPAUtagWND@@IIJK@Z @ 0xA3882 (-xxxWrapSendMessage@@YGJPAUtagWND@@IIJK@Z.c)
 *     _xxxSendMinRectMessages@8 @ 0xA7C5A (_xxxSendMinRectMessages@8.c)
 *     _xxxTranslateAccelerator@12 @ 0xA8452 (_xxxTranslateAccelerator@12.c)
 *     _xxxHandleWindowPosChanged@8 @ 0xAB7B6 (_xxxHandleWindowPosChanged@8.c)
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _xxxSendSizeMessage@8 @ 0xB2C46 (_xxxSendSizeMessage@8.c)
 *     _xxxGetMenuBarInfo@16 @ 0xB81C8 (_xxxGetMenuBarInfo@16.c)
 *     ?xxxKeyboardCorrectionCallout@@YGIPBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0xC12BC (-xxxKeyboardCorrectionCallout@@YGIPBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     _xxxFlashWindow@12 @ 0xCA4EE (_xxxFlashWindow@12.c)
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 *     _xxxSendMessageFF@20 @ 0xED808 (_xxxSendMessageFF@20.c)
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 *     _xxxMetricsRecalc@28 @ 0x145FE4 (_xxxMetricsRecalc@28.c)
 *     _xxxImmUnloadLayout@8 @ 0x14F941 (_xxxImmUnloadLayout@8.c)
 *     ?xxxQueryLegacyActivation@@YGJPAUtagWND@@0FPBUtagPOINTEREVENTINT@@@Z @ 0x15B7A9 (-xxxQueryLegacyActivation@@YGJPAUtagWND@@0FPBUtagPOINTEREVENTINT@@@Z.c)
 *     ?DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z @ 0x15C04A (-DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z.c)
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 *     _EditionSendIMENotification@20 @ 0x16F292 (_EditionSendIMENotification@20.c)
 *     ?xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z @ 0x175D86 (-xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z.c)
 *     ?xxxTrackInitSize@@YGHPAUtagWND@@IIJPAU_MOVESIZEDATA@@@Z @ 0x176158 (-xxxTrackInitSize@@YGHPAUtagWND@@IIJPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxSendNCHitTest@@YGXPAUtagWND@@UtagPOINT@@1PAU2@PAHPAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x17A904 (-xxxSendNCHitTest@@YGXPAUtagWND@@UtagPOINT@@1PAU2@PAHPAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@PAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x17B14E (-xxxWindowHitTestFromTargetingProperty@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTT.c)
 *     _xxxPerformTargetingWithinPwnd@12 @ 0x17C0BC (_xxxPerformTargetingWithinPwnd@12.c)
 *     _xxxRequestOutOfFullScreenMode@0 @ 0x181663 (_xxxRequestOutOfFullScreenMode@0.c)
 *     ?xxxGetRenderData@@YGPAXPAUtagWINDOWSTATION@@I@Z @ 0x182AF1 (-xxxGetRenderData@@YGPAXPAUtagWINDOWSTATION@@I@Z.c)
 *     ?xxxSendClipboardMessage@@YGXPAUtagWINDOWSTATION@@I@Z @ 0x182BFB (-xxxSendClipboardMessage@@YGXPAUtagWINDOWSTATION@@I@Z.c)
 *     _xxxChangeClipboardChain@8 @ 0x182FF0 (_xxxChangeClipboardChain@8.c)
 *     _xxxHandleNCMouseGuys@16 @ 0x18587E (_xxxHandleNCMouseGuys@16.c)
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 *     _xxxMNDismissIfOffMenu@8 @ 0x1984BA (_xxxMNDismissIfOffMenu@8.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AAEXPAUtagWND@@@Z @ 0x19FDC6 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AAEXPAUtagWND@@@Z.c)
 *     ?xxxDWP_NCMouse@@YGXPAUtagWND@@IIJ@Z @ 0x1A1C90 (-xxxDWP_NCMouse@@YGXPAUtagWND@@IIJ@Z.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 *     ?xxxQueryDropObject@@YGPAUtagCURSOR@@PAUtagWND@@PAUtagDROPSTRUCT@@@Z @ 0x1A61CC (-xxxQueryDropObject@@YGPAUtagCURSOR@@PAUtagWND@@PAUtagDROPSTRUCT@@@Z.c)
 *     _xxxDragObject@20 @ 0x1A6347 (_xxxDragObject@20.c)
 *     _xxxSendHelpMessage@20 @ 0x1ACB94 (_xxxSendHelpMessage@20.c)
 * Callees:
 *     _xxxEventWndProc@16 @ 0x15E80 (_xxxEventWndProc@16.c)
 *     _xxxDesktopWndProc@16 @ 0x16118 (_xxxDesktopWndProc@16.c)
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _IsThreadHung@8 @ 0x175E4 (_IsThreadHung@8.c)
 *     ?xxxSendMessageToClient@@YGXPAUtagWND@@IIJPAUtagSMS@@HPAJ@Z @ 0x40764 (-xxxSendMessageToClient@@YGXPAUtagWND@@IIJPAUtagSMS@@HPAJ@Z.c)
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _xxxBroadcastMessage@28 @ 0xAE8A2 (_xxxBroadcastMessage@28.c)
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __FreeTouchInputInfo@8 @ 0x149EED (__FreeTouchInputInfo@8.c)
 *     _IsMiPEnabledForWindow@4 @ 0x14E372 (_IsMiPEnabledForWindow@4.c)
 *     _xxxSwitchWndProc@16 @ 0x15DF4B (_xxxSwitchWndProc@16.c)
 *     _ValidateDDEConvPair@8 @ 0x17FF6F (_ValidateDDEConvPair@8.c)
 *     _xxxDDETrackSendHook@16 @ 0x180600 (_xxxDDETrackSendHook@16.c)
 *     __FreeGestureInfo@8 @ 0x188C90 (__FreeGestureInfo@8.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __fastcall xxxSendTransformableMessageTimeout(
        int BugCheckParameter2,
        unsigned int a2,
        unsigned int HighLimit,
        int a4,
        unsigned int LowLimit,
        struct tagDDECONV *a6,
        int *a7,
        size_t MaxCount,
        int a9)
{
  int v11; // ecx
  ULONG_PTR v12; // edx
  unsigned int *v13; // eax
  struct tagDDECONV *v15; // eax
  struct tagWND *v16; // ebx
  unsigned int *ThreadWin32Thread; // eax
  unsigned int v18; // ecx
  BOOL v19; // eax
  int *v20; // eax
  unsigned int v21; // eax
  int v22; // esi
  int *v23; // eax
  int v24; // ebx
  int v25; // [esp+0h] [ebp-58h]
  int v26; // [esp+0h] [ebp-58h]
  int *v27; // [esp+4h] [ebp-54h]
  int v28; // [esp+4h] [ebp-54h]
  int v29; // [esp+10h] [ebp-48h] BYREF
  int v30; // [esp+14h] [ebp-44h] BYREF
  int v31; // [esp+18h] [ebp-40h] BYREF
  struct tagWND *v32; // [esp+1Ch] [ebp-3Ch]
  unsigned int v33; // [esp+20h] [ebp-38h] BYREF
  struct tagDDECONV *v34; // [esp+24h] [ebp-34h]
  int v35; // [esp+28h] [ebp-30h]
  int v36; // [esp+2Ch] [ebp-2Ch]
  int v37; // [esp+30h] [ebp-28h]
  PKTHREAD CurrentThread; // [esp+34h] [ebp-24h]
  int v39; // [esp+38h] [ebp-20h] BYREF
  int v40; // [esp+3Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  CurrentThread = (PKTHREAD)BugCheckParameter2;
  v40 = 0;
  v39 = 0;
  v11 = (int)a7;
  if ( a7 )
    *a7 = 0;
  v12 = 0;
  if ( BugCheckParameter2 != -1 )
  {
    v37 = 0;
    ms_exc.registration.TryLevel = 0;
    if ( BugCheckParameter2 )
      v15 = *(struct tagDDECONV **)BugCheckParameter2;
    else
      LOWORD(v15) = 0;
    v36 = (unsigned __int16)v15;
    ms_exc.registration.TryLevel = -2;
    if ( (unsigned int)(unsigned __int16)v15 >= *(_DWORD *)(_gpsi + 4)
      || (v12 = _gSharedInfo[1] + (unsigned __int16)v15 * _gSharedInfo[2],
          *(_DWORD *)(_gpKernelHandleTable + 12 * (unsigned __int16)v15) != BugCheckParameter2)
      || *(_BYTE *)(v12 + 12) != 1 )
    {
      KeBugCheckEx(0x197u, 1u, BugCheckParameter2, v12, 1u);
    }
    if ( a2 - 992 > 8 )
    {
      if ( a2 - 577 > 3 && (a2 - 581 > 0x12 || a2 == 589) )
      {
        v16 = (struct tagWND *)HighLimit;
        if ( a2 != 528 || (_WORD)HighLimit != 582 )
          goto LABEL_22;
        v19 = HIWORD(HighLimit) == 1;
      }
      else
      {
        v16 = (struct tagWND *)HighLimit;
        v19 = (_WORD)HighLimit == 1;
      }
      if ( v19 && !IsMiPEnabledForWindow(BugCheckParameter2) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
        return 0;
      }
    }
    else
    {
      v16 = (struct tagWND *)HighLimit;
      if ( !xxxDDETrackSendHook((struct tagDDECONV **)BugCheckParameter2, HighLimit, a4) )
        return 0;
      if ( a2 == 992 && guDdeSendTimeout )
      {
        if ( !a7 )
          a7 = &v39;
        LowLimit |= 2u;
        a6 = (struct tagDDECONV *)guDdeSendTimeout;
      }
      if ( ValidateDDEConvPair(v16, BugCheckParameter2) )
        MaxCount = 1;
    }
LABEL_22:
    CurrentThread = KeGetCurrentThread();
    HighLimit = 0;
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = (unsigned int *)PsGetThreadWin32Thread(CurrentThread)) == 0 )
    {
      v18 = 0;
    }
    else
    {
      v18 = *ThreadWin32Thread;
      HighLimit = *ThreadWin32Thread;
    }
    if ( v18 != *(_DWORD *)(BugCheckParameter2 + 8) )
    {
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      if ( (*(_BYTE *)(_HMPheFromObject(BugCheckParameter2) + 13) & 1) != 0 )
        return xxxDefWindowProc(BugCheckParameter2, a2, (int)v16, a4);
      if ( !a7 )
      {
        v20 = 0;
        return xxxInterSendMsgEx(v16, a4, 1, *(_DWORD *)(BugCheckParameter2 + 8), (int)v20, MaxCount, a9);
      }
      if ( (LowLimit & 2) == 0 || !IsThreadHung(*(_DWORD **)(BugCheckParameter2 + 8), 0) )
      {
        v29 = 2;
        v33 = LowLimit;
        v34 = a6;
        v35 = (int)a7;
        v20 = &v29;
        return xxxInterSendMsgEx(v16, a4, 1, *(_DWORD *)(BugCheckParameter2 + 8), (int)v20, MaxCount, a9);
      }
      return 0;
    }
    if ( BugCheckParameter2 != *(_DWORD *)(v18 + 836)
      && (a2 >= 0x400
       || (MessageTable[a2] & 0x4000) == 0
       || (*(_BYTE *)(*(_DWORD *)(BugCheckParameter2 + 20) + 10) & 4) == 0)
      && ((*(_BYTE *)(v18 + 372) | *(_BYTE *)(**(_DWORD **)(v18 + 252) + 8)) & 0x20) != 0 )
    {
      v34 = *(struct tagDDECONV **)BugCheckParameter2;
      v33 = a2;
      v32 = v16;
      v31 = a4;
      v35 = 0;
      xxxCallHook((int)&v31, 4u, v25, (int)v27);
    }
    if ( (*(_BYTE *)(*(_DWORD *)(BugCheckParameter2 + 20) + 10) & 4) != 0 )
    {
      HighLimit = 0;
      LowLimit = 0;
      IoGetStackLimits(&LowLimit, &HighLimit);
      if ( (unsigned int)&HighLimit - LowLimit < 0x1000 )
        return 0;
      v21 = *(_DWORD *)(*(_DWORD *)(BugCheckParameter2 + 20) + 84);
      if ( v21 >= 7 )
        return 0;
      v22 = ((int (__stdcall *)(int, int, int, int))(&gServerHandlers)[v21])(BugCheckParameter2, a2, (int)v16, a4);
      v23 = a7;
      if ( !a7 )
        return v22;
    }
    else
    {
      xxxSendMessageToClient(v16, a4, 0, 0, (struct tagSMS *)&v40, v25, v27);
      if ( BugCheckParameter2 == *(_DWORD *)(HighLimit + 836)
        || ((*(_DWORD *)(HighLimit + 372) | *(_DWORD *)(**(_DWORD **)(HighLimit + 252) + 8)) & 0x2000) == 0 )
      {
        v22 = v40;
        v24 = a4;
      }
      else
      {
        v34 = *(struct tagDDECONV **)BugCheckParameter2;
        v33 = a2;
        v32 = v16;
        v24 = a4;
        v31 = a4;
        v22 = v40;
        v30 = v40;
        v35 = 0;
        xxxCallHook((int)&v30, 0xCu, v26, v28);
      }
      if ( a2 == 576 )
      {
        _FreeTouchInputInfo(v24, 1);
      }
      else if ( a2 == 281 )
      {
        _FreeGestureInfo(v24, 1);
      }
      v23 = a7;
      if ( !a7 )
        return v22;
    }
    *v23 = v22;
    return 1;
  }
  v13 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  if ( v11 )
  {
    v12 = 4;
    v33 = LowLimit;
    v34 = a6;
    v35 = v11;
    v13 = &v33;
  }
  return xxxBroadcastMessage(HighLimit, a4, v12, v13, MaxCount);
}

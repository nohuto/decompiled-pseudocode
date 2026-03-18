/*
 * XREFs of xxxSendTransformableMessageTimeout @ 0x1C0097EC0
 * Callers:
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00225CC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxSendSizeMessage @ 0x1C00251C0 (xxxSendSizeMessage.c)
 *     xxxGetScrollBarInfo @ 0x1C00272B4 (xxxGetScrollBarInfo.c)
 *     xxxGetWindowSmIcon @ 0x1C002BFF8 (xxxGetWindowSmIcon.c)
 *     xxxBroadcastMessageEx @ 0x1C0035B10 (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C0036D38 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0056C74 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxScrollWindowEx @ 0x1C00695EC (xxxScrollWindowEx.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F48C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006FA2C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     ?xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0097E90 (-xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxSendMessageEx @ 0x1C009BA10 (xxxSendMessageEx.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     xxxGetMenuBarInfo @ 0x1C00A76D4 (xxxGetMenuBarInfo.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00B2490 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00BA9D4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C00BB110 (xxxTooltipWndProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00BB6EC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C00BEDF0 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     xxxSetScrollBar @ 0x1C00F0C18 (xxxSetScrollBar.c)
 *     xxxEnableScrollBar @ 0x1C00F12C0 (xxxEnableScrollBar.c)
 *     xxxTranslateAccelerator @ 0x1C0103018 (xxxTranslateAccelerator.c)
 *     xxxWindowHitTest2 @ 0x1C010B3CC (xxxWindowHitTest2.c)
 *     xxxFlashWindow @ 0x1C0113948 (xxxFlashWindow.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0116598 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C011A928 (xxxSendMinRectMessages.c)
 *     xxxImmActivateLayout @ 0x1C012B148 (xxxImmActivateLayout.c)
 *     xxxGetComboBoxInfo @ 0x1C0145ED4 (xxxGetComboBoxInfo.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C014E90C (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxChangeClipboardChain @ 0x1C01511B0 (xxxChangeClipboardChain.c)
 *     xxxSendMessageFF @ 0x1C0153DC0 (xxxSendMessageFF.c)
 *     xxxMetricsRecalc @ 0x1C01D8204 (xxxMetricsRecalc.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E3450 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01E36A0 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 *     xxxImmUnloadLayout @ 0x1C01E4100 (xxxImmUnloadLayout.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01F2454 (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F3270 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     xxxNextWindow @ 0x1C01F4A20 (xxxNextWindow.c)
 *     EditionSendIMENotification @ 0x1C02099A0 (EditionSendIMENotification.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C021127C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02116E4 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C02168F0 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0217344 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C021820C (xxxPerformTargetingWithinPwnd.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C021F1F4 (xxxRequestOutOfFullScreenMode.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C021FFBC (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C02246E4 (xxxHandleNCMouseGuys.c)
 *     xxxMNCancel @ 0x1C0237E64 (xxxMNCancel.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0238AB4 (xxxMNDismissIfOffMenu.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C0242A68 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 *     xxxSBWndProc @ 0x1C0246EA0 (xxxSBWndProc.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C02494D8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C02496A4 (xxxDragObject.c)
 *     xxxGetListBoxInfo @ 0x1C024A580 (xxxGetListBoxInfo.c)
 *     xxxSendHelpMessage @ 0x1C02516EC (xxxSendHelpMessage.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C0035B10 (xxxBroadcastMessageEx.c)
 *     PhkNextValid @ 0x1C0046050 (PhkNextValid.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0098440 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxInterSendMsgEx @ 0x1C0098820 (xxxInterSendMsgEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C009A2E0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxDefWindowProc @ 0x1C00AF770 (xxxDefWindowProc.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     _FreeTouchInputInfo @ 0x1C01DD0A0 (_FreeTouchInputInfo.c)
 *     IsMiPEnabledForWindow @ 0x1C01E23D8 (IsMiPEnabledForWindow.c)
 *     xxxPointerCallHook @ 0x1C01F0B3C (xxxPointerCallHook.c)
 *     ValidateDDEConvPair @ 0x1C021D530 (ValidateDDEConvPair.c)
 *     xxxDDETrackSendHook @ 0x1C021DDFC (xxxDDETrackSendHook.c)
 *     _FreeGestureInfo @ 0x1C0228620 (_FreeGestureInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxSendTransformableMessageTimeout(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        unsigned int a5,
        unsigned int a6,
        __int64 *LowLimit,
        int a8,
        int a9)
{
  __int64 v11; // rsi
  _OWORD *v13; // r14
  __int64 *v14; // r13
  ULONG_PTR v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *ThreadWin32Thread; // rax
  int v24; // edx
  __int64 Valid; // rcx
  __int64 v26; // r12
  unsigned __int64 v27; // rdi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbx
  __int64 result; // rax
  _QWORD *v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  union tagBROADCASTMSG *v35; // rcx
  unsigned int v36; // r9d
  __int64 v37; // r8
  __int64 *v38; // rax
  bool v39; // zf
  __int64 v40; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v43; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v45; // [rsp+50h] [rbp-F8h] BYREF
  int v46; // [rsp+58h] [rbp-F0h]
  __int64 v47; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v48; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v49; // [rsp+78h] [rbp-D0h]
  __int64 v50[2]; // [rsp+80h] [rbp-C8h] BYREF
  int v51; // [rsp+90h] [rbp-B8h]
  __int64 v52; // [rsp+98h] [rbp-B0h]
  __int64 v53; // [rsp+A0h] [rbp-A8h]
  _OWORD v54[2]; // [rsp+A8h] [rbp-A0h] BYREF
  __int128 v55; // [rsp+C8h] [rbp-80h]
  __int64 v56[3]; // [rsp+D8h] [rbp-70h] BYREF
  int v57; // [rsp+F0h] [rbp-58h]
  __int64 v58; // [rsp+F8h] [rbp-50h]
  __int64 v59; // [rsp+100h] [rbp-48h]
  unsigned __int64 HighLimit; // [rsp+150h] [rbp+8h] BYREF
  unsigned __int64 v61; // [rsp+160h] [rbp+18h]
  __int64 v62; // [rsp+168h] [rbp+20h]

  v62 = (__int64)a4;
  v61 = a3;
  HighLimit = a1;
  v11 = a2;
  v13 = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  v14 = LowLimit;
  if ( LowLimit )
    *LowLimit = 0LL;
  if ( a1 == -1LL )
  {
    v48 = 0LL;
    v49 = 0LL;
    v35 = 0LL;
    v36 = 0;
    if ( v14 )
    {
      v36 = 4;
      *(_QWORD *)&v48 = __PAIR64__(a6, a5);
      *((_QWORD *)&v48 + 1) = v14;
      v35 = (union tagBROADCASTMSG *)&v48;
    }
    return (int)xxxBroadcastMessageEx(0LL, a2, a3, a4, v36, v35, a8, 0);
  }
  v15 = 0LL;
  LowLimit = 0LL;
  if ( a1 )
    v16 = *(_QWORD *)a1;
  else
    LOWORD(v16) = 0;
  v46 = (unsigned __int16)v16;
  if ( (unsigned __int64)(unsigned __int16)v16 >= *(_QWORD *)(gpsi + 8LL)
    || (v15 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v16 * LODWORD(gSharedInfo[2]),
        v17 = gpKernelHandleTable,
        *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v16) != a1)
    || *(_BYTE *)(v15 + 24) != 1 )
  {
    KeBugCheckEx(0x197u, 1uLL, a1, v15, 1uLL);
  }
  if ( a2 - 992 <= 8 )
  {
    if ( !(unsigned int)xxxDDETrackSendHook((struct tagWND *)a1) )
      return 0LL;
    if ( (_DWORD)v11 == 992 && guDdeSendTimeout )
    {
      a5 |= 2u;
      a6 = guDdeSendTimeout;
      v38 = &v47;
      if ( v14 )
        v38 = v14;
      v14 = v38;
    }
    if ( (unsigned int)ValidateDDEConvPair(a3, a1, v37) )
      a8 = 1;
  }
  else
  {
    if ( a2 - 577 <= 0xB || a2 - 590 <= 9 )
    {
      v39 = (_WORD)a3 == 1;
    }
    else
    {
      if ( a2 != 528 || (_WORD)a3 != 582 )
        goto LABEL_14;
      v39 = WORD1(a3) == 1;
    }
    v17 = v39;
    if ( v39 && !(unsigned int)IsMiPEnabledForWindow(a1) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v40);
      return 0LL;
    }
  }
LABEL_14:
  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v17)
    || (CurrentProcess = PsGetCurrentProcess(v21, v20, v22),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v43),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v19 = *ThreadWin32Thread;
  }
  if ( v19 == *(_QWORD *)(a1 + 16) )
  {
    if ( a1 != *(_QWORD *)(v19 + 1456)
      && ((unsigned int)v11 >= 0x400
       || (MessageTable[v11] & 0x4000) == 0
       || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 18LL) & 4) == 0)
      && ((*(_BYTE *)(v19 + 672) | *(_BYTE *)(**(_QWORD **)(v19 + 456) + 16LL)) & 0x20) != 0 )
    {
      v52 = *(_QWORD *)a1;
      v51 = v11;
      v50[1] = v61;
      v50[0] = v62;
      v53 = 0LL;
      if ( (unsigned int)(v11 - 577) <= 0x16 && (v24 = 8122367, _bittest(&v24, v11 - 577))
        || (_DWORD)v11 == 528 && (_WORD)v61 == 582 )
      {
        xxxPointerCallHook(0, 0LL, (__int64)v50, 0);
      }
      else
      {
        Valid = *(_QWORD *)(gptiCurrent + 944LL);
        if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 80LL)) != 0)
          && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
        {
          Valid = PhkNextValid(Valid);
        }
        xxxCallHook2((struct tagHOOK *)Valid, 0, 0LL, (__int64)v50, 0LL, 0);
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 18LL) & 4) == 0 )
    {
      v26 = v62;
      v27 = v61;
      xxxSendMessageToClient((struct tagWND *)a1, v11, v61, v62, 0LL, 0, &v45);
      if ( a1 != *(_QWORD *)(v19 + 1456)
        && ((*(_DWORD *)(v19 + 672) | *(_DWORD *)(**(_QWORD **)(v19 + 456) + 16LL)) & 0x2000) != 0 )
      {
        v58 = *(_QWORD *)a1;
        v57 = v11;
        v56[2] = v27;
        v56[1] = v26;
        v30 = v45;
        v56[0] = v45;
        v59 = 0LL;
        xxxCallHook(0, 0LL, (__int64)v56, 12);
      }
      else
      {
        v30 = v45;
      }
      if ( (_DWORD)v11 == 576 )
      {
        FreeTouchInputInfo(v26, 1LL, v28, v29);
      }
      else if ( (_DWORD)v11 == 281 )
      {
        FreeGestureInfo(v26, 1LL, v28, v29);
      }
      if ( !v14 )
        return v30;
LABEL_48:
      *v14 = v30;
      return 1LL;
    }
    HighLimit = 0LL;
    LowLimit = 0LL;
    IoGetStackLimits((PULONG_PTR)&LowLimit, &HighLimit);
    if ( (unsigned __int64)((char *)&HighLimit - (char *)LowLimit) < 0x2000 )
      return 0LL;
    v34 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
    if ( v34 >= 7 )
      return 0LL;
    result = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, unsigned __int64, __int64))(&gServerHandlers)[v34])(
               a1,
               (unsigned int)v11,
               v61,
               v62);
    v30 = result;
    if ( v14 )
      goto LABEL_48;
  }
  else
  {
    memset(v54, 0, sizeof(v54));
    v55 = 0LL;
    if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
    {
      if ( v14 )
      {
        if ( (a5 & 2) != 0 )
        {
          v32 = *(_QWORD **)(a1 + 16);
          v33 = v32[55];
          if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
             - *(_DWORD *)(v33 + 12) > gdwHungAppTimeout
            && (*(_WORD *)(v33 + 10) & 0x1C07) == 0
            && !(unsigned int)PsGetThreadFreezeCount(*v32)
            && (*(_DWORD *)(v32[52] + 12LL) & 0x40) == 0 )
          {
            return 0LL;
          }
        }
        LODWORD(v54[0]) = 2;
        *(_QWORD *)&v55 = __PAIR64__(a6, a5);
        *((_QWORD *)&v55 + 1) = v14;
        v13 = v54;
      }
      return xxxInterSendMsgEx(a1, (unsigned int)v11, v61, v62, 1, *(_QWORD *)(a1 + 16), v13, a8, a9);
    }
    return xxxDefWindowProc(a1, v11, v61, v62);
  }
  return result;
}

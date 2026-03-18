/*
 * XREFs of xxxMakeWindowForegroundWithState @ 0x1C0032AD4
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00BB6EC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     PowerOnGdi @ 0x1C0155930 (PowerOnGdi.c)
 *     xxxbFullscreenSwitch @ 0x1C021F2EC (xxxbFullscreenSwitch.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 *     zzzLockWindowUpdate2 @ 0x1C0031334 (zzzLockWindowUpdate2.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032D80 (WPP_RECORDER_SF_d.c)
 *     LockW32Thread @ 0x1C00343CC (LockW32Thread.c)
 *     xxxCapture @ 0x1C0035FA8 (xxxCapture.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C003B470 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     SetPointer @ 0x1C004D9F0 (SetPointer.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     xxxRedrawWindow @ 0x1C0071544 (xxxRedrawWindow.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     ThreadLockExchange @ 0x1C00B2F7C (ThreadLockExchange.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMakeWindowForegroundWithState(__int64 a1, char a2)
{
  int v2; // r14d
  __int64 v4; // rdi
  int v5; // edx
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 DesktopWindow; // rdi
  struct tagWND *v12; // rsi
  int v13; // ecx
  unsigned __int8 v15; // r12
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD v31[3]; // [rsp+38h] [rbp-49h] BYREF
  __int128 v32; // [rsp+50h] [rbp-31h] BYREF
  __int64 v33; // [rsp+60h] [rbp-21h]
  _QWORD v34[2]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v35[2]; // [rsp+78h] [rbp-9h] BYREF
  _QWORD v36[2]; // [rsp+88h] [rbp+7h] BYREF
  _QWORD v37[4]; // [rsp+98h] [rbp+17h] BYREF

  v2 = 0;
  v31[2] = 0LL;
  v4 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(a1, 4, 12, 12, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_q(a1, v5, 12, 13, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids, v4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_d(a1, v6, 12, 14, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids, a2);
      }
    }
  }
  v7 = 1;
  if ( v4 )
  {
    if ( a2 == 2 )
    {
      v34[0] = &gspwndShouldBeForeground;
      v34[1] = v4;
      HMAssignmentLock(v34);
    }
    SetOrClrWF(0LL, v4, 1799LL, 1LL);
    SetOrClrWF(1LL, v4, a2 & 7 | 0x700u, 1LL);
    if ( a2 == 1 )
    {
      LODWORD(a1) = gpqForeground;
      if ( !gpqForeground || *(_QWORD *)(gpqForeground + 120LL) != v4 )
      {
        SetOrClrWF(0LL, v4, 1799LL, 1LL);
        SetOrClrWF(1LL, v4, 1796LL, 1LL);
      }
    }
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a1, 4, 12, 15, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
    return v7;
  }
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = PsGetCurrentThreadId();
  v10 = gptiCurrent;
  v31[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v31;
  v31[1] = 0LL;
  do
  {
    DesktopWindow = gspwndShouldBeForeground;
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = 0;
    if ( gspwndShouldBeForeground )
    {
      ThreadLockExchange(gspwndShouldBeForeground, v31);
      HMAssignmentUnlock(&gspwndShouldBeForeground);
    }
    else if ( gpqForeground && (DesktopWindow = *(_QWORD *)(gpqForeground + 120LL)) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(DesktopWindow + 40) + 23LL) & 3) == 0 )
        DesktopWindow = GetDesktopWindow(DesktopWindow);
    }
    else
    {
      v10 = grpdeskRitInput;
      DesktopWindow = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
    }
    v12 = gspwndFullScreen;
    if ( (struct tagWND *)DesktopWindow == gspwndFullScreen )
      break;
    v15 = *(_BYTE *)(*(_QWORD *)(DesktopWindow + 40) + 23LL) & 7;
    v37[2] = 0LL;
    ThreadLockExchange(DesktopWindow, v31);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v37[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v37;
    v37[1] = v12;
    if ( v12 )
      HMLockObject(v12);
    v35[0] = &gspwndFullScreen;
    v35[1] = DesktopWindow;
    HMAssignmentLock(v35);
    gbFullScreen = v15;
    if ( (v12 || gbNonServiceSession) && gbFullScreen == 2 && v15 == 2 )
    {
      xxxRedrawWindow((struct tagWND *)DesktopWindow);
      ThreadUnlock1(v21, v20, v22);
    }
    else
    {
      v33 = 0LL;
      v32 = 0LL;
      if ( v12 )
      {
        v18 = (unsigned int)gbFullScreen - 1;
        if ( gbFullScreen == 1 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 23LL) & 7) == 1 )
          {
            SetOrClrWF(0LL, v12, 1799LL, 1LL);
            SetOrClrWF(1LL, v12, 1796LL, 1LL);
          }
          xxxSendMessage(v12, 58LL, 0LL, 0LL);
          v23 = *((_QWORD *)v12 + 2);
          if ( v23 != gptiCurrent )
          {
            LockW32Thread(v23, &v32);
            v23 = *((_QWORD *)v12 + 2);
            v2 = 1;
          }
          xxxCapture(v23, 0LL, 5LL);
          if ( v2 )
          {
            PopAndFreeW32ThreadLock(&v32);
            v2 = 0;
          }
        }
        else if ( gbFullScreen == 2 )
        {
          zzzLockWindowUpdate2(v12, 1);
          gdwPUDFlags |= 0x20000000u;
          if ( gProtocolType || gfSwitchInProgress || !(unsigned int)SafeDisableMDEV(2LL) )
          {
            gdwPUDFlags &= ~0x20000000u;
            zzzLockWindowUpdate2(0LL, 1);
            v36[1] = v12;
            v36[0] = &gspwndFullScreen;
            HMAssignmentLock(v36);
            ThreadUnlock1(v26, v25, v27);
            ThreadUnlock1(v29, v28, v30);
            v7 = 0;
            goto LABEL_16;
          }
          gfGdiEnabled = 0;
          v18 = gpsi;
          gptCursorFullScreen = *(struct tagPOINT *)(gpsi + 4960LL);
        }
      }
      ThreadUnlock1(v18, v17, v19);
      v10 = (unsigned int)v15 - 1;
      if ( v15 == 1 )
      {
        v24 = *(_QWORD *)(DesktopWindow + 16);
        if ( v24 != gptiCurrent )
        {
          LockW32Thread(v24, &v32);
          v24 = *(_QWORD *)(DesktopWindow + 16);
          v2 = 1;
        }
        xxxCapture(v24, DesktopWindow, 5LL);
        if ( v2 )
          PopAndFreeW32ThreadLock(&v32);
        xxxSendMessage(DesktopWindow, 58LL, 1LL, 0LL);
LABEL_58:
        v2 = 0;
        continue;
      }
      if ( v15 != 2 )
        goto LABEL_58;
      SafeEnableMDEV(2LL);
      v2 = 0;
      gfGdiEnabled = 1;
      gpcurLogCurrent = 0LL;
      gpcurPhysCurrent = 0LL;
      gpqCursor = 0LL;
      SetPointer(0LL);
      gptSSCursor = gptCursorFullScreen;
      zzzInternalSetCursorPos((unsigned int)gptCursorFullScreen.x, (unsigned int)gptCursorFullScreen.y, 2LL, 0LL);
      gdwPUDFlags &= ~0x20000000u;
      zzzLockWindowUpdate2(0LL, 1);
      xxxRedrawWindow((struct tagWND *)DesktopWindow);
    }
  }
  while ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) );
  ThreadUnlock1(v10, v8, v9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v13, 4, 12, 16, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
LABEL_16:
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
  return v7;
}

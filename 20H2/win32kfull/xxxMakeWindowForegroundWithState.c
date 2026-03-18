/*
 * XREFs of xxxMakeWindowForegroundWithState @ 0x1C00BCC58
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0073F0C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00BAF3C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 *     PowerOnGdi @ 0x1C0158290 (PowerOnGdi.c)
 *     xxxbFullscreenSwitch @ 0x1C021E45C (xxxbFullscreenSwitch.c)
 * Callees:
 *     SetPointer @ 0x1C002B0A0 (SetPointer.c)
 *     xxxCapture @ 0x1C0039468 (xxxCapture.c)
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     xxxRedrawWindow @ 0x1C00429A4 (xxxRedrawWindow.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     LockW32Thread @ 0x1C00BAF00 (LockW32Thread.c)
 *     WPP_RECORDER_SF_d @ 0x1C00BCF04 (WPP_RECORDER_SF_d.c)
 *     zzzLockWindowUpdate2 @ 0x1C00BF2BC (zzzLockWindowUpdate2.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00C0948 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     ThreadLockExchange @ 0x1C00D750C (ThreadLockExchange.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMakeWindowForegroundWithState(__int64 a1, unsigned __int8 a2)
{
  int v2; // r14d
  int v3; // esi
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
  __int64 v31; // [rsp+30h] [rbp-51h]
  _QWORD v32[3]; // [rsp+38h] [rbp-49h] BYREF
  __int128 v33; // [rsp+50h] [rbp-31h] BYREF
  __int64 v34; // [rsp+60h] [rbp-21h]
  _QWORD v35[2]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v36[2]; // [rsp+78h] [rbp-9h] BYREF
  _QWORD v37[2]; // [rsp+88h] [rbp+7h] BYREF
  _QWORD v38[4]; // [rsp+98h] [rbp+17h] BYREF

  v2 = 0;
  v3 = a2;
  v32[2] = 0LL;
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
        LODWORD(v31) = v3;
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_d(a1, v6, 12, 14, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids, v31);
      }
    }
  }
  v7 = 1;
  if ( v4 )
  {
    if ( (_BYTE)v3 == 2 )
    {
      v35[0] = &gspwndShouldBeForeground;
      v35[1] = v4;
      HMAssignmentLock(v35);
    }
    SetOrClrWF(0LL, v4, 1799LL, 1LL);
    SetOrClrWF(1LL, v4, v3 & 7 | 0x700u, 1LL);
    if ( (_BYTE)v3 == 1 )
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
    LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a1, 4, 12, 15, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
    return v7;
  }
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = PsGetCurrentThreadId();
  v10 = gptiCurrent;
  v32[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v32;
  v32[1] = 0LL;
  do
  {
    DesktopWindow = gspwndShouldBeForeground;
    LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = 0;
    if ( gspwndShouldBeForeground )
    {
      ThreadLockExchange(gspwndShouldBeForeground, v32);
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
    v38[2] = 0LL;
    ThreadLockExchange(DesktopWindow, v32);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v38[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v38;
    v38[1] = v12;
    if ( v12 )
      HMLockObject(v12);
    v36[0] = &gspwndFullScreen;
    v36[1] = DesktopWindow;
    HMAssignmentLock(v36);
    gbFullScreen = v15;
    if ( (v12 || gbNonServiceSession) && gbFullScreen == 2 && v15 == 2 )
    {
      xxxRedrawWindow((struct tagWND *)DesktopWindow, 0LL, 0LL, 645);
      ThreadUnlock1(v21, v20, v22);
    }
    else
    {
      v34 = 0LL;
      v33 = 0LL;
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
          xxxSendMessage((unsigned __int64)v12, 0x3Au, 0LL, 0LL);
          v23 = *((_QWORD *)v12 + 2);
          if ( v23 != gptiCurrent )
          {
            LockW32Thread(v23, &v33);
            v23 = *((_QWORD *)v12 + 2);
            v2 = 1;
          }
          xxxCapture(v23, 0LL, 5);
          if ( v2 )
          {
            PopAndFreeW32ThreadLock(&v33);
            v2 = 0;
          }
        }
        else if ( gbFullScreen == 2 )
        {
          zzzLockWindowUpdate2(v12);
          gdwPUDFlags |= 0x20000000u;
          if ( gProtocolType || gfSwitchInProgress || !(unsigned int)SafeDisableMDEV(2LL) )
          {
            gdwPUDFlags &= ~0x20000000u;
            zzzLockWindowUpdate2(0LL);
            v37[1] = v12;
            v37[0] = &gspwndFullScreen;
            HMAssignmentLock(v37);
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
          LockW32Thread(v24, &v33);
          v24 = *(_QWORD *)(DesktopWindow + 16);
          v2 = 1;
        }
        xxxCapture(v24, (struct tagWND *)DesktopWindow, 5);
        if ( v2 )
          PopAndFreeW32ThreadLock(&v33);
        xxxSendMessage(DesktopWindow, 0x3Au, 1uLL, 0LL);
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
      zzzInternalSetCursorPos((unsigned int)gptCursorFullScreen.x, (unsigned int)gptCursorFullScreen.y, 2LL);
      gdwPUDFlags &= ~0x20000000u;
      zzzLockWindowUpdate2(0LL);
      xxxRedrawWindow((struct tagWND *)DesktopWindow, 0LL, 0LL, 645);
    }
  }
  while ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) );
  ThreadUnlock1(v10, v8, v9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v13, 4, 12, 16, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
LABEL_16:
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
  return v7;
}

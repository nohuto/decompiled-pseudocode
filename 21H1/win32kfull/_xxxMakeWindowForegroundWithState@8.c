/*
 * XREFs of _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172 (-xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     _PowerOnGdi@12 @ 0xD37F0 (_PowerOnGdi@12.c)
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 *     _xxxbFullscreenSwitch@8 @ 0x181710 (_xxxbFullscreenSwitch@8.c)
 * Callees:
 *     _zzzLockWindowUpdate2@8 @ 0x178C6 (_zzzLockWindowUpdate2@8.c)
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _LockW32Thread@8 @ 0x3C2F8 (_LockW32Thread@8.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ?zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z @ 0x7B8F8 (-zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z.c)
 *     _ThreadLockExchange@8 @ 0xA378E (_ThreadLockExchange@8.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall xxxMakeWindowForegroundWithState(int a1, char a2)
{
  int v4; // esi
  int DesktopWindow; // ebx
  char v6; // al
  ULONG_PTR v7; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  char v11; // dl
  _DWORD *v12; // ecx
  char v13; // cl
  int v14; // edi
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  char v18; // dl
  int v19; // ecx
  char v20; // [esp+8h] [ebp-3Ah]
  char v21; // [esp+9h] [ebp-39h]
  int v22; // [esp+Ah] [ebp-38h]
  int v23; // [esp+12h] [ebp-30h]
  int v24; // [esp+1Eh] [ebp-24h] BYREF
  int v25; // [esp+22h] [ebp-20h] BYREF
  int v26; // [esp+26h] [ebp-1Ch]
  int v27; // [esp+2Ah] [ebp-18h]
  _DWORD v28[3]; // [esp+36h] [ebp-Ch] BYREF

  v26 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(12, 12, &WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(12, 13, &WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids, a1);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(12, 14, &WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids, a2);
    }
  }
  v4 = 1;
  if ( a1 )
  {
    if ( a2 == 2 )
      HMAssignmentLock(a1, a2);
    SetOrClrWF(1799, 1);
    SetOrClrWF(a2 & 7 | 0x700, 1);
    if ( a2 == 1 && (!_gpqForeground || *(_DWORD *)(_gpqForeground + 64) != a1) )
    {
      SetOrClrWF(1799, 1);
      SetOrClrWF(1796, 1);
    }
  }
  if ( ghSwitcher )
  {
    gfRedoFullScreenSwitch = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(12, 15, &WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
    return v4;
  }
  ghSwitcher = PsGetCurrentThreadId();
  v24 = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = &v24;
  v25 = 0;
  do
  {
    DesktopWindow = gspwndShouldBeForeground;
    gfRedoFullScreenSwitch = 0;
    if ( gspwndShouldBeForeground )
    {
      ThreadLockExchange(gspwndShouldBeForeground, &v24);
      HMAssignmentUnlock(&gspwndShouldBeForeground);
    }
    else if ( _gpqForeground && (DesktopWindow = *(_DWORD *)(_gpqForeground + 64)) != 0 )
    {
      v6 = *(_BYTE *)(*(_DWORD *)(DesktopWindow + 20) + 15) & 7;
      if ( !v6 || v6 == 4 )
        DesktopWindow = _GetDesktopWindow(DesktopWindow);
    }
    else
    {
      DesktopWindow = *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 4) + 12);
    }
    v7 = gspwndFullScreen;
    if ( DesktopWindow == gspwndFullScreen )
      break;
    v28[2] = 0;
    ThreadLockExchange(DesktopWindow, &v24);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v28[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    v12 = v28;
    *(_DWORD *)(ThreadWin32Thread + 228) = v28;
    v28[1] = v7;
    if ( v7 )
      HMLockObject(v7);
    HMAssignmentLock(v12, v11);
    _gbFullScreen = v21;
    if ( !v7 && !_gbNonServiceSession )
    {
      v13 = v20;
LABEL_40:
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v22 = 0;
      if ( v23 )
      {
        if ( v13 == 1 )
        {
          if ( (*(_BYTE *)(*(_DWORD *)(v23 + 20) + 15) & 7) == 1 )
          {
            SetOrClrWF(1799, 1);
            SetOrClrWF(1796, 1);
          }
          xxxSendMessage(0, 0);
          v15 = *(_DWORD *)(v23 + 8);
          if ( v15 != _gptiCurrent )
          {
            LockW32Thread(v15, &v25);
            v22 = 1;
          }
          xxxCapture(5);
          v14 = v22;
          if ( v22 )
          {
            PopAndFreeW32ThreadLock(&v25);
            goto LABEL_47;
          }
LABEL_55:
          ThreadUnlock1();
          if ( v21 == 1 )
          {
            v17 = *(_DWORD *)(DesktopWindow + 8);
            if ( v17 != _gptiCurrent )
            {
              LockW32Thread(v17, &v25);
              v14 = 1;
            }
            xxxCapture(5);
            if ( v14 )
              PopAndFreeW32ThreadLock(&v25);
            xxxSendMessage(1u, 0);
          }
          else if ( v21 == 2 )
          {
            SafeEnableMDEV(2);
            LOBYTE(v16) = 0;
            gfGdiEnabled = 1;
            _gpqCursor = 0;
            gpcurLogCurrent = 0;
            gpcurPhysCurrent = 0;
            SetPointerInternal(v16, 6, &gspwndFullScreen, DesktopWindow);
            _gptSSCursor[0] = gptCursorFullScreen.x;
            _gptSSCursor[1] = gptCursorFullScreen.y;
            zzzInternalSetCursorPos(2, 0);
            _gdwPUDFlags &= ~0x20000000u;
            zzzLockWindowUpdate2(0, 1);
            xxxRedrawWindow(0, 645);
          }
          continue;
        }
        if ( v13 == 2 )
        {
          zzzLockWindowUpdate2(v23, 1);
          _gdwPUDFlags |= 0x20000000u;
          if ( _gProtocolType || _gfSwitchInProgress || !SafeDisableMDEV(2) )
          {
            _gdwPUDFlags &= ~0x20000000u;
            zzzLockWindowUpdate2(0, 1);
            HMAssignmentLock(v19, v18);
            _gbFullScreen = BYTE2(DesktopWindow);
            ThreadUnlock1();
            ThreadUnlock1();
            v4 = 0;
            goto LABEL_16;
          }
          gptCursorFullScreen = *(struct tagPOINT *)(_gpsi + 4428);
          gfGdiEnabled = 0;
LABEL_47:
          v14 = 0;
          goto LABEL_55;
        }
      }
      v14 = 0;
      goto LABEL_55;
    }
    v13 = v20;
    if ( v20 != 2 || v21 != 2 )
      goto LABEL_40;
    xxxRedrawWindow(0, 645);
    ThreadUnlock1();
  }
  while ( gfRedoFullScreenSwitch );
  ThreadUnlock1();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(12, 16, &WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
LABEL_16:
  ghSwitcher = 0;
  return v4;
}

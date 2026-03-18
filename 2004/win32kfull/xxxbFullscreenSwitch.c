/*
 * XREFs of xxxbFullscreenSwitch @ 0x1C021F2EC
 * Callers:
 *     xxxConsoleControl @ 0x1C0027F08 (xxxConsoleControl.c)
 * Callees:
 *     xxxMakeWindowForegroundWithState @ 0x1C0032AD4 (xxxMakeWindowForegroundWithState.c)
 *     xxxSleepThread2 @ 0x1C0096960 (xxxSleepThread2.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F0110 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxbFullscreenSwitch(int a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // zf
  __int64 result; // rax
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v15[2] = 0LL;
  v3 = 1;
  v4 = ValidateHwnd(a2);
  v5 = v4;
  if ( !v4 || (((*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x3FFF) - 669) & 0xFFFFFFFD) == 0 )
    return 4294967291LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v15[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v15;
  v15[1] = v5;
  HMLockObject(v5);
  while ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    xxxSleepThread2(0, 1u, 0, 0, 0LL);
  if ( !gfSwitchInProgress && !gProtocolType && !gfSessionSwitchBlock )
  {
    gfSessionSwitchBlock = 1;
    if ( a1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 23LL) & 7) != 1 )
      {
        xxxShowWindowEx((struct tagWND *)v5, 2u, gdwPUDFlags & 0x10000);
        xxxInternalUpdateWindow((struct tagWND *)v5, 1u);
      }
      if ( !(unsigned int)xxxMakeWindowForegroundWithState(v5, 1) || *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
        goto LABEL_19;
      v13 = gbFullScreen == 1;
    }
    else
    {
      if ( !(unsigned int)xxxMakeWindowForegroundWithState(v5, 0) || *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
        goto LABEL_19;
      v13 = gbFullScreen == 2;
    }
    if ( v13 )
    {
LABEL_22:
      ThreadUnlock1(v11, v10, v12);
      result = v3;
      gfSessionSwitchBlock = 0;
      return result;
    }
LABEL_19:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(v11, v10, 3, 17, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
    }
    v3 = 0;
    goto LABEL_22;
  }
  ThreadUnlock1(v8, v7, v9);
  return 0LL;
}

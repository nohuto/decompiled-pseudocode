/*
 * XREFs of xxxFullScreenCleanup @ 0x1C0110080
 * Callers:
 *     <none>
 * Callees:
 *     zzzLockWindowUpdate2 @ 0x1C0031334 (zzzLockWindowUpdate2.c)
 *     xxxSendNotifyMessage @ 0x1C0036510 (xxxSendNotifyMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxFullScreenCleanup()
{
  __int64 result; // rax
  int v1; // edx
  int v2; // ecx
  __int64 v3; // rbx
  __int64 ThreadWin32Thread; // rax
  struct _LARGE_STRING **v5; // rcx
  struct _LARGE_STRING *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  result = (__int64)PsGetCurrentThreadId();
  if ( result == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    if ( gfGdiEnabled )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v1) = 4;
        WPP_RECORDER_SF_(v2, v1, 12, 10, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
      }
      gdwPUDFlags &= ~0x20000000u;
      result = zzzLockWindowUpdate2(0LL, 1);
    }
    else
    {
      v10[2] = 0LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v1) = 4;
        WPP_RECORDER_SF_(v2, v1, 12, 11, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
      }
      HMAssignmentUnlock(&gspwndFullScreen);
      gbFullScreen = 1;
      v3 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v10[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v10;
      v10[1] = v3;
      if ( v3 )
        HMLockObject(v3);
      v5 = *(struct _LARGE_STRING ***)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
      if ( v5 )
        v6 = *v5;
      else
        v6 = 0LL;
      xxxSendNotifyMessage((__int64)v5, 0x3Au, 2uLL, v6, 1);
      result = ThreadUnlock1(v8, v7, v9);
    }
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = 0;
  }
  return result;
}

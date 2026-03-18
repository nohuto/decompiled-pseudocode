/*
 * XREFs of xxxRequestOutOfFullScreenMode @ 0x1C021F1F4
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C011E080 (xxxRemoteDisconnect.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C0096960 (xxxSleepThread2.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 xxxRequestOutOfFullScreenMode()
{
  struct tagWND *v0; // rdi
  unsigned int v1; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD v7[5]; // [rsp+50h] [rbp-28h] BYREF

  v0 = gspwndFullScreen;
  v1 = 0;
  v7[2] = 0LL;
  if ( gspwndFullScreen )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v7[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v7;
    v7[1] = v0;
    HMLockObject(v0);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((unsigned __int64)gspwndFullScreen, 0x406u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v4, v3, v5);
    while ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
      xxxSleepThread2(0, 1u, 0, 0, 0LL);
    if ( gspwndFullScreen && gbFullScreen == 1 )
      return (unsigned int)-1073741823;
  }
  return v1;
}

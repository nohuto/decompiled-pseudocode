/*
 * XREFs of RemoteRedrawRectangle @ 0x1C021EFCC
 * Callers:
 *     NtUserRemoteRedrawRectangle @ 0x1C02019A0 (NtUserRemoteRedrawRectangle.c)
 *     CtxDisplayIOCtl @ 0x1C0226C44 (CtxDisplayIOCtl.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C0071544 (xxxRedrawWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     vDrvInvalidateRect @ 0x1C02C0C78 (vDrvInvalidateRect.c)
 */

__int64 __fastcall RemoteRedrawRectangle(int *a1)
{
  __int64 result; // rax
  struct tagWND *v3; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)a1, 4, 9, 18, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
  result = gspdeskShouldBeForeground;
  if ( !gspdeskShouldBeForeground )
  {
    v3 = gspwndFullScreen;
    if ( gspwndFullScreen )
    {
      v8[2] = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v8[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v8;
      v8[1] = v3;
      HMLockObject(v3);
      vDrvInvalidateRect(*(_QWORD *)(gpDispInfo + 40LL), a1);
      xxxRedrawWindow(gspwndFullScreen, a1, 0LL, 645);
      return ThreadUnlock1(v6, v5, v7);
    }
  }
  return result;
}

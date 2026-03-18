/*
 * XREFs of ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C023FFC8
 * Callers:
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C02409FC (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     IsThreadHung @ 0x1C00C171C (IsThreadHung.c)
 *     ?GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ @ 0x1C0240100 (-GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ.c)
 */

char __fastcall CWindow::ForceForeground(CWindow *this)
{
  struct tagWND *WindowToForegroundActivate; // rbx
  char v2; // di
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF

  WindowToForegroundActivate = CWindow::GetWindowToForegroundActivate(this);
  if ( !WindowToForegroundActivate )
    return 0;
  v8[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v8[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v8;
  v8[1] = WindowToForegroundActivate;
  HMLockObject(WindowToForegroundActivate);
  v2 = xxxSetForegroundWindowWithOptions((__int64)WindowToForegroundActivate, 2LL, 0LL, 0LL);
  if ( v2 )
  {
    v5 = *((_QWORD *)WindowToForegroundActivate + 5);
    if ( (*(_BYTE *)(v5 + 31) & 0x20) != 0
      && !(unsigned int)IsThreadHung(*((_QWORD **)WindowToForegroundActivate + 2), 0) )
    {
      PostEventMessageEx(
        *((struct tagTHREADINFO **)WindowToForegroundActivate + 2),
        *(struct tagQ **)(*((_QWORD *)WindowToForegroundActivate + 2) + 432LL),
        7u,
        WindowToForegroundActivate,
        0x112u,
        0xF120uLL,
        0LL,
        0LL);
    }
  }
  ThreadUnlock1(v5, v4, v6);
  return v2;
}

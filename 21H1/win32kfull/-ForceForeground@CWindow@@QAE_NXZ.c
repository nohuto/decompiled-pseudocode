/*
 * XREFs of ?ForceForeground@CWindow@@QAE_NXZ @ 0x19F061
 * Callers:
 *     ?_UpdateWindowInternal@CWindowGroup@@AAE_NPAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x19F7F7 (-_UpdateWindowInternal@CWindowGroup@@AAE_NPAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OP.c)
 * Callees:
 *     _IsThreadHung@8 @ 0x175E4 (_IsThreadHung@8.c)
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?GetWindowToForegroundActivate@CWindow@@QBEPAUtagWND@@XZ @ 0x19F1D5 (-GetWindowToForegroundActivate@CWindow@@QBEPAUtagWND@@XZ.c)
 */

char __thiscall CWindow::ForceForeground(CWindow *this)
{
  struct tagWND *WindowToForegroundActivate; // esi
  char v2; // bl
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v6; // [esp+0h] [ebp-18h]
  struct tagINPUT_MESSAGE_SOURCE *v7; // [esp+4h] [ebp-14h]
  _DWORD v8[3]; // [esp+Ch] [ebp-Ch] BYREF

  WindowToForegroundActivate = CWindow::GetWindowToForegroundActivate(this);
  if ( !WindowToForegroundActivate )
    return 0;
  v8[2] = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v8[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v8;
  v8[1] = WindowToForegroundActivate;
  HMLockObject(WindowToForegroundActivate);
  v2 = xxxSetForegroundWindowWithOptions((unsigned int *)WindowToForegroundActivate, 2, 0, 0);
  if ( v2
    && (*(_BYTE *)(*((_DWORD *)WindowToForegroundActivate + 5) + 23) & 0x20) != 0
    && !IsThreadHung(*((_DWORD **)WindowToForegroundActivate + 2), 0) )
  {
    PostEventMessageEx(
      *(tagDomLock **)(*((_DWORD *)WindowToForegroundActivate + 2) + 236),
      *((_DWORD *)WindowToForegroundActivate + 2),
      (struct tagTHREADINFO *)7,
      (HWND *)WindowToForegroundActivate,
      (struct tagQMSG *)0x112,
      (struct tagWND *)0xF120,
      0,
      0,
      v6,
      v7);
  }
  ThreadUnlock1();
  return v2;
}

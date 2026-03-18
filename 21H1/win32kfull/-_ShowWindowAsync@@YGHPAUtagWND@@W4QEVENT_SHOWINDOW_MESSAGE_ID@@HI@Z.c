/*
 * XREFs of ?_ShowWindowAsync@@YGHPAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@HI@Z @ 0xF505E
 * Callers:
 *     _xxxSetWindowPlacement@8 @ 0xB2DF4 (_xxxSetWindowPlacement@8.c)
 *     _NtUserShowWindowAsync@8 @ 0xD450A (_NtUserShowWindowAsync@8.c)
 *     ?xxxSetWindowShowState@@YG_NPAUtagWND@@EPAUtagRECT@@@Z @ 0x1A0652 (-xxxSetWindowShowState@@YG_NPAUtagWND@@EPAUtagRECT@@@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

int __fastcall _ShowWindowAsync(int a1, struct tagQMSG *a2, int a3, struct tagWND *a4)
{
  int v5; // [esp+0h] [ebp-8h]
  struct tagINPUT_MESSAGE_SOURCE *v6; // [esp+4h] [ebp-4h]

  return PostEventMessageEx(
           *(tagDomLock **)(*(_DWORD *)(a1 + 8) + 236),
           *(_DWORD *)(a1 + 8),
           (struct tagTHREADINFO *)1,
           (HWND *)a1,
           a2,
           a4,
           a3 | _gdwPUDFlags & 0x10000,
           0,
           v5,
           v6);
}

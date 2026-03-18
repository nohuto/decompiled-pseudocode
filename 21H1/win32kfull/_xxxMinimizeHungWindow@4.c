/*
 * XREFs of _xxxMinimizeHungWindow@4 @ 0x19E29E
 * Callers:
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 * Callees:
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     ?xxxActivateOnMinimize@@YGHPAUtagWND@@@Z @ 0x256DC (-xxxActivateOnMinimize@@YGHPAUtagWND@@@Z.c)
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _xxxSendMinRectMessages@8 @ 0xA7C5A (_xxxSendMinRectMessages@8.c)
 *     _xxxShowOwnedWindows@12 @ 0xB4B0A (_xxxShowOwnedWindows@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     _xxxDrawAnimatedRects@16 @ 0x19E161 (_xxxDrawAnimatedRects@16.c)
 */

char __thiscall xxxMinimizeHungWindow(struct tagQ *this)
{
  char result; // al
  int *v3; // ecx
  int RectRgnIndirect; // esi
  _DWORD *v5; // ecx
  int v6; // [esp+0h] [ebp-20h]
  struct tagINPUT_MESSAGE_SOURCE *v7; // [esp+4h] [ebp-1Ch]
  unsigned int v8[4]; // [esp+Ch] [ebp-14h] BYREF

  memset(v8, 0, sizeof(v8));
  result = *(_BYTE *)(*((_DWORD *)this + 5) + 23);
  if ( (result & 0x20) == 0 && (result & 0x10) != 0 )
  {
    if ( (_gdwPUDFlags & 0x10000) != 0 )
    {
      xxxSendMinRectMessages(this, v8);
      if ( !ERECTL::bWrapped((ERECTL *)v8) )
        xxxDrawAnimatedRects(this, 3, (int *)(*((_DWORD *)this + 5) + 52), v3);
    }
    SetVisible(this, 0);
    RectRgnIndirect = GreCreateRectRgnIndirect(*((_DWORD *)this + 5) + 52);
    xxxShowOwnedWindows(this, 1u, RectRgnIndirect);
    zzzLockDisplayAreaAndInvalidateDCCache((int)this, 1, 0);
    xxxRedrawWindow(0, 0, RectRgnIndirect, 133);
    GreDeleteObject(RectRgnIndirect);
    if ( *((_DWORD *)this + 14) == _GetDesktopWindow(this) )
      xxxActivateOnMinimize(v5);
    return PostEventMessageEx(
             *(tagDomLock **)(*((_DWORD *)this + 2) + 236),
             *((_DWORD *)this + 2),
             (struct tagTHREADINFO *)0xA,
             (HWND *)this,
             0,
             0,
             0,
             0,
             v6,
             v7);
  }
  return result;
}

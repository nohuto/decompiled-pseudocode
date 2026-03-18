/*
 * XREFs of ?xxxSwpActivate@@YGHPAUtagWND@@@Z @ 0x1A230
 * Callers:
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 * Callees:
 *     ?xxxActivateWindow@@YG_NPAUtagWND@@@Z @ 0x1A2B0 (-xxxActivateWindow@@YG_NPAUtagWND@@@Z.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 */

int __thiscall xxxSwpActivate(_DWORD *this)
{
  int v2; // edx
  struct tagWND *v3; // [esp+0h] [ebp-Ch]

  if ( !this )
    return 0;
  if ( (*(_BYTE *)(this[5] + 23) & 0xC0) == 0x40 )
  {
    xxxSendMessage(0, 0);
    return 0;
  }
  if ( *(_DWORD **)(*(_DWORD *)(_gptiCurrent + 236) + 64) == this || !xxxActivateWindow(v3) )
    return 0;
  v2 = *(_DWORD *)(_gptiCurrent + 236);
  if ( *(_DWORD *)(v2 + 64) )
  {
    SetOrClrWF(257, 1);
    v2 = *(_DWORD *)(_gptiCurrent + 236);
  }
  if ( *(_DWORD *)(v2 + 68) )
    SetOrClrWF(257, 1);
  return 1;
}

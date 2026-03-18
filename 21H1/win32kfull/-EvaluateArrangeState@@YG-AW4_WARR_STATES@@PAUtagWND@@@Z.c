/*
 * XREFs of ?EvaluateArrangeState@@YG?AW4_WARR_STATES@@PAUtagWND@@@Z @ 0x1710C7
 * Callers:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     ?xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x173243 (-xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 * Callees:
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     ?IsVerticallyMaximized@@YG_NPBUtagWND@@@Z @ 0xB4A40 (-IsVerticallyMaximized@@YG_NPBUtagWND@@@Z.c)
 */

int __thiscall EvaluateArrangeState(_DWORD *this)
{
  int DesktopWindow; // eax
  _DWORD *v2; // ecx
  char v4; // al
  int v5; // edx
  char v6; // al

  DesktopWindow = _GetDesktopWindow(this);
  if ( v2[14] != DesktopWindow )
    return 6;
  v4 = *(_BYTE *)(v2[5] + 23);
  if ( (v4 & 0x20) != 0 )
    return 5;
  if ( (v4 & 1) != 0 )
    return 0;
  if ( IsVerticallyMaximized(v2) )
    return 1;
  v6 = *(_BYTE *)(v5 + 145);
  if ( (v6 & 1) != 0 )
    return 2;
  else
    return 4 - ((v6 & 2) != 0);
}

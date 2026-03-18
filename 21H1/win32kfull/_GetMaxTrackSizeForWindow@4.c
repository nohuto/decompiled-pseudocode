/*
 * XREFs of _GetMaxTrackSizeForWindow@4 @ 0x706DC
 * Callers:
 *     _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46 (_xxxInitSendValidateMinMaxInfoEx@16.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YGXPAUtagWND@@PAUtagSIZERECT@@@Z @ 0x13F619 (-ExtendArrangedRectangleByFrameMargin@@YGXPAUtagWND@@PAUtagSIZERECT@@@Z.c)
 * Callees:
 *     ?GetWindowCompositedDpiContext@@YGKPBUtagWND@@@Z @ 0x335EE (-GetWindowCompositedDpiContext@@YGKPBUtagWND@@@Z.c)
 *     _GetScreenRectForDpiContext@4 @ 0x338A8 (_GetScreenRectForDpiContext@4.c)
 *     ?ComputeMaxTrackSize@@YG?AUtagSIZE@@UtagRECT@@G@Z @ 0x7067C (-ComputeMaxTrackSize@@YG-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     ?GetWindowCompositedDpi@@YGGPBUtagWND@@@Z @ 0x70750 (-GetWindowCompositedDpi@@YGGPBUtagWND@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall GetMaxTrackSizeForWindow(_DWORD *this)
{
  unsigned __int16 WindowCompositedDpi; // bx
  _DWORD *v2; // ecx
  unsigned int WindowCompositedDpiContext; // eax
  int v4; // edx
  const struct tagWND *v6; // [esp+0h] [ebp-38h]
  unsigned __int16 v7; // [esp+0h] [ebp-38h]
  INT v8[4]; // [esp+10h] [ebp-28h] BYREF
  struct tagRECT v9; // [esp+20h] [ebp-18h]
  _DWORD *v10; // [esp+30h] [ebp-8h]

  v10 = this;
  WindowCompositedDpi = GetWindowCompositedDpi(v6);
  WindowCompositedDpiContext = GetWindowCompositedDpiContext(v2);
  v9 = *(struct tagRECT *)GetScreenRectForDpiContext(WindowCompositedDpiContext, v4, v8);
  if ( !WindowCompositedDpi )
    WindowCompositedDpi = *(_WORD *)(*(_DWORD *)(v10[2] + 232) + 160);
  return ComputeMaxTrackSize(WindowCompositedDpi, v9, v7);
}

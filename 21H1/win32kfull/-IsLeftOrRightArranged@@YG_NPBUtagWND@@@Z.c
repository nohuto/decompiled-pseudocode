/*
 * XREFs of ?IsLeftOrRightArranged@@YG_NPBUtagWND@@@Z @ 0x1718C2
 * Callers:
 *     ?IsWindowSubjectToShellSizingPolicy@@YG_NPAUtagWND@@@Z @ 0x17198D (-IsWindowSubjectToShellSizingPolicy@@YG_NPAUtagWND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     _UpdateSizeTrackingInfo@12 @ 0x1764E7 (_UpdateSizeTrackingInfo@12.c)
 * Callees:
 *     ?IsSemiMaximized@@YG_NPBUtagWND@@@Z @ 0x35818 (-IsSemiMaximized@@YG_NPBUtagWND@@@Z.c)
 *     ?IsVerticallyMaximized@@YG_NPBUtagWND@@@Z @ 0xB4A40 (-IsVerticallyMaximized@@YG_NPBUtagWND@@@Z.c)
 */

bool __thiscall IsLeftOrRightArranged(_DWORD *this)
{
  _DWORD *v1; // ecx

  return IsSemiMaximized(this) && !IsVerticallyMaximized(v1);
}

/*
 * XREFs of _GetScreenRectForWindow@4 @ 0x1B725D
 * Callers:
 *     _xxxCheckFullScreen@8 @ 0x71BE6 (_xxxCheckFullScreen@8.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 *     ?CalcVirtualScreenClipRegion@@YGXPAUHRGN__@@PAUtagWND@@@Z @ 0x1962EE (-CalcVirtualScreenClipRegion@@YGXPAUHRGN__@@PAUtagWND@@@Z.c)
 *     ?IsVSlick@@YGHPAUtagWND@@@Z @ 0x19C50E (-IsVSlick@@YGHPAUtagWND@@@Z.c)
 * Callees:
 *     ?GetWindowCompositedDpiContext@@YGKPBUtagWND@@@Z @ 0x335EE (-GetWindowCompositedDpiContext@@YGKPBUtagWND@@@Z.c)
 *     _GetScreenRectForDpiContext@4 @ 0x338A8 (_GetScreenRectForDpiContext@4.c)
 */

_DWORD *__thiscall GetScreenRectForWindow(_DWORD *this, _DWORD *a2)
{
  unsigned int WindowCompositedDpiContext; // eax
  int v3; // edx
  INT *ScreenRectForDpiContext; // esi
  _DWORD *result; // eax
  INT v6[5]; // [esp+8h] [ebp-14h] BYREF

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(this);
  ScreenRectForDpiContext = GetScreenRectForDpiContext(WindowCompositedDpiContext, v3, v6);
  result = a2;
  *a2 = *ScreenRectForDpiContext++;
  a2[1] = *ScreenRectForDpiContext++;
  a2[2] = *ScreenRectForDpiContext;
  a2[3] = ScreenRectForDpiContext[1];
  return result;
}

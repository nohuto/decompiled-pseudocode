/*
 * XREFs of GetScreenRectForWindow @ 0x1C025EAA0
 * Callers:
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C005FA8C (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     xxxCheckFullScreen @ 0x1C008E698 (xxxCheckFullScreen.c)
 *     xxxInitializeMoveSizeData @ 0x1C021285C (xxxInitializeMoveSizeData.c)
 *     ?IsVSlick@@YAHPEAUtagWND@@@Z @ 0x1C023E874 (-IsVSlick@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     GetScreenRectForDpiContext @ 0x1C0023174 (GetScreenRectForDpiContext.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C008EA80 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 */

__m128i *__fastcall GetScreenRectForWindow(__m128i *a1, const struct tagWND *a2)
{
  unsigned int WindowCompositedDpiContext; // eax
  __m128i v4; // xmm0
  __m128i *result; // rax
  __m128i v6; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a2);
  v4 = *GetScreenRectForDpiContext(&v6, WindowCompositedDpiContext);
  result = a1;
  *a1 = v4;
  return result;
}

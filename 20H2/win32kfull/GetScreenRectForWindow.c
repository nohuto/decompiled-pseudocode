/*
 * XREFs of GetScreenRectForWindow @ 0x1C025D48C
 * Callers:
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C00387D8 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     xxxCheckFullScreen @ 0x1C00D3A38 (xxxCheckFullScreen.c)
 *     xxxInitializeMoveSizeData @ 0x1C02119DC (xxxInitializeMoveSizeData.c)
 *     ?IsVSlick@@YAHPEAUtagWND@@@Z @ 0x1C023D5D4 (-IsVSlick@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     GetScreenRectForDpiContext @ 0x1C003DB40 (GetScreenRectForDpiContext.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C00D3E20 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 */

__m128i *__fastcall GetScreenRectForWindow(__m128i *a1, const struct tagWND *a2)
{
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  __m128i v6; // xmm0
  __m128i *result; // rax
  __m128i v8; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a2);
  v6 = *GetScreenRectForDpiContext(&v8, WindowCompositedDpiContext, v4, v5);
  result = a1;
  *a1 = v6;
  return result;
}

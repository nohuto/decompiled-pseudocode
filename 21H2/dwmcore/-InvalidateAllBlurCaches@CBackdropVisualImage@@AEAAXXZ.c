/*
 * XREFs of ?InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ @ 0x1800D40B4
 * Callers:
 *     ?SetEffectInputParameters@CBackdropVisualImage@@QEAAXAEBVMatrix3x3@@PEA_N@Z @ 0x1800D3F84 (-SetEffectInputParameters@CBackdropVisualImage@@QEAAXAEBVMatrix3x3@@PEA_N@Z.c)
 * Callees:
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z @ 0x180058E54 (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z.c)
 *     ?GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA?AVRenderTargetInfo@@XZ @ 0x1800590C0 (-GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA-AVRenderTargetInfo@@XZ.c)
 */

void __fastcall CBackdropVisualImage::InvalidateAllBlurCaches(CBackdropVisualImage *this)
{
  __int64 *v1; // rsi
  __int64 *i; // rbx
  const struct RenderTargetInfo *RenderTargetInfo; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 25);
  for ( i = (__int64 *)*((_QWORD *)this + 24); i != v1; ++i )
  {
    RenderTargetInfo = (const struct RenderTargetInfo *)CCachedVisualImage::CCachedTarget::GetRenderTargetInfo(
                                                          *i,
                                                          (__int64)v5);
    CBackdropVisualImage::InvalidateBlurCache(this, RenderTargetInfo);
  }
}

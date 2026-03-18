/*
 * XREFs of ?ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z @ 0x1800D304C
 * Callers:
 *     ?SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z @ 0x1800D2FBC (-SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1801F57E0 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008BE50 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

float __fastcall ValidateSDRBoost(float a1, enum DXGI_COLOR_SPACE_TYPE *a2)
{
  if ( IsDXGIColorSpaceHDR(a2[2]) )
    return fmaxf(1.0, a1);
  else
    return 0.0;
}

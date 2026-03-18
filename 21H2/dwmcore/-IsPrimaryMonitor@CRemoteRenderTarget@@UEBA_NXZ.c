/*
 * XREFs of ?IsPrimaryMonitor@CRemoteRenderTarget@@UEBA_NXZ @ 0x1800FEA10
 * Callers:
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800FE630 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Present@CRemoteRenderTarget@@UEAAJ_N@Z @ 0x1800FE958 (-Present@CRemoteRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRemoteRenderTarget::IsPrimaryMonitor(CRemoteRenderTarget *this)
{
  return *((float *)this + 14) == 0.0 && *((float *)this + 15) == 0.0;
}

/*
 * XREFs of ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x180188DD4
 * Callers:
 *     ?Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E8148 (-Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x180188AD4 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?Present@CCaptureRenderTarget@@UEAAJ_N@Z @ 0x180188E2C (-Present@CCaptureRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

struct IDXGIResource *__fastcall CCaptureRenderTarget::GetCurrentFrameBuffer(CCaptureRenderTarget *this)
{
  unsigned int v1; // eax

  v1 = *((_DWORD *)this + 486);
  if ( v1 == -1 )
    return 0LL;
  else
    return *(struct IDXGIResource **)(*((_QWORD *)this + 251) + 8LL * v1);
}

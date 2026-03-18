/*
 * XREFs of ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x1801C4B6C
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801C427C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?Present@CCaptureRenderTarget@@UEAAJ_N@Z @ 0x1801C4D3C (-Present@CCaptureRenderTarget@@UEAAJ_N@Z.c)
 *     ?Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C53B8 (-Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct IDXGIResource *__fastcall CCaptureRenderTarget::GetCurrentFrameBuffer(CCaptureRenderTarget *this)
{
  unsigned int v1; // eax

  v1 = *((_DWORD *)this + 482);
  if ( v1 == -1 )
    return 0LL;
  else
    return *(struct IDXGIResource **)(*((_QWORD *)this + 248) + 8LL * v1);
}

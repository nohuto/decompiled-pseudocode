/*
 * XREFs of ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801896C8
 * Callers:
 *     ?Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E8148 (-Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x1800E80A8 (-GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x180188AD4 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::TryTargetNextBuffer(CCaptureRenderTarget *this)
{
  unsigned int v2; // ebx
  int NextBufferIndexAvailable; // eax
  int RenderTargetForFrameBuffer; // eax
  __int64 v5; // rcx

  v2 = 0;
  NextBufferIndexAvailable = CCaptureRenderTarget::GetNextBufferIndexAvailable(this);
  if ( NextBufferIndexAvailable >= 0 )
  {
    *((_DWORD *)this + 486) = NextBufferIndexAvailable;
    RenderTargetForFrameBuffer = CCaptureRenderTarget::CreateRenderTargetForFrameBuffer(this);
    v2 = RenderTargetForFrameBuffer;
    if ( RenderTargetForFrameBuffer < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, RenderTargetForFrameBuffer, 0x299u, 0LL);
  }
  return v2;
}

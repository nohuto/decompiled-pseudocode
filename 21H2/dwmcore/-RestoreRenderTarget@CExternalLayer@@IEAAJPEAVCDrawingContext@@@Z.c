/*
 * XREFs of ?RestoreRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801D8424
 * Callers:
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800D1A00 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18007F044 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CExternalLayer::RestoreRenderTarget(CExternalLayer *this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx

  v2 = 0;
  if ( *((_BYTE *)this + 33) )
  {
    v3 = CDrawingContext::PopRenderTargetInternal(a2, 0);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, v3, 0x9Bu);
  }
  return v2;
}

/*
 * XREFs of ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FAA30
 * Callers:
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800347DC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E9490 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180185EBC (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18018DD30 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18018ED30 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FAAD4 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FACD0 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 */

__int64 __fastcall CComposeTop::FullRender(CComposeTop *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  v3 = 0;
  if ( *((_QWORD *)a1 + 2) && (v7 = CComposeTop::NewContentRendered(a1), v3 = v7, v7 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x10Cu, 0LL);
  }
  else if ( *((_QWORD *)a1 + 20) )
  {
    v9 = CComposeTop::RenderWorker(a1, a2, a3);
    v3 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x114u, 0LL);
  }
  return v3;
}

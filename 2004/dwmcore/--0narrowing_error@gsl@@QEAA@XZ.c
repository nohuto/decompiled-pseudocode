/*
 * XREFs of ??0narrowing_error@gsl@@QEAA@XZ @ 0x180165460
 * Callers:
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x180051590 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x18007C6E8 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18007CDF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 * Callees:
 *     <none>
 */

gsl::narrowing_error *__fastcall gsl::narrowing_error::narrowing_error(gsl::narrowing_error *this)
{
  *((_QWORD *)this + 1) = "unknown";
  *(_QWORD *)this = &gsl::narrowing_error::`vftable';
  return this;
}

/*
 * XREFs of ??$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z @ 0x180163648
 * Callers:
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x18004F1F4 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x18009B608 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18009BD18 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x1800A18C0 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __noreturn gsl::details::throw_exception<gsl::narrowing_error>()
{
  ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  __debugbreak();
}

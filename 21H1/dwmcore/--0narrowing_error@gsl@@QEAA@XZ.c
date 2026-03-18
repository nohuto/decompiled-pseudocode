/*
 * XREFs of ??0narrowing_error@gsl@@QEAA@XZ @ 0x180167FC0
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18006BCD8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 * Callees:
 *     <none>
 */

gsl::narrowing_error *__fastcall gsl::narrowing_error::narrowing_error(gsl::narrowing_error *this)
{
  *((_QWORD *)this + 1) = "unknown";
  *(_QWORD *)this = &gsl::narrowing_error::`vftable';
  return this;
}

/*
 * XREFs of ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NNN@Z @ 0x180093B6C
 * Callers:
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x1800937AC (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z.c)
 *     ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z @ 0x180093BA4 (-s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CThumbnailVisual::s_IsCloseEnoughToReuse(double a1, double a2)
{
  return a2 > 0.0 && COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1 - a2) & _xmm) / a2 < 0.1;
}

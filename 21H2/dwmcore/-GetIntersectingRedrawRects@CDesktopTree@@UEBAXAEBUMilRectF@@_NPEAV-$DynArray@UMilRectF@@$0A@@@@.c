/*
 * XREFs of ?GetIntersectingRedrawRects@CDesktopTree@@UEBAXAEBUMilRectF@@_NPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x18016E900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopTree::GetIntersectingRedrawRects(__int64 a1)
{
  return CDirtyRegion::GetIntersectingRedrawRects(a1 + 1264);
}

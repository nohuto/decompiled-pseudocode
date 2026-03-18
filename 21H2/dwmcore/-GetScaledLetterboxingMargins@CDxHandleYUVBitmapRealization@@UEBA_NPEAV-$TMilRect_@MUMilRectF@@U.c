/*
 * XREFs of ?GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180116342
 * Callers:
 *     ?GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010C650 (-GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAV-$TMilRect_@M.c)
 * Callees:
 *     <none>
 */

char __fastcall CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins(__int64 a1, struct MilRectF *a2)
{
  return CBitmapRealization::GetScaledLetterboxingMargins((CBitmapRealization *)(a1 - 512), a2);
}

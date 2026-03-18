/*
 * XREFs of ?GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F31E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::GetTransform(__int64 a1, __int64 a2, float *a3)
{
  return CDxHandleBitmapRealization::GetTransform(a1 - *(int *)(a1 - 4) - 104, a2, a3);
}

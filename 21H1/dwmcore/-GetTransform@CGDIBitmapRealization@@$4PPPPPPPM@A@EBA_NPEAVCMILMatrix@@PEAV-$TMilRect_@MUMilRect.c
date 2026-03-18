/*
 * XREFs of ?GetTransform@CGDIBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F01A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CGDIBitmapRealization::GetTransform(__int64 a1, __int64 a2, float *a3)
{
  return CGDIBitmapRealization::GetTransform(a1 - *(int *)(a1 - 4), a2, a3);
}

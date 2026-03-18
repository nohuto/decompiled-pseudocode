/*
 * XREFs of ?GetBounds@CShapeTree@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F0C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CShapeTree::GetBounds(__int64 a1)
{
  return CShapeTree::GetBounds(a1 - *(int *)(a1 - 4));
}

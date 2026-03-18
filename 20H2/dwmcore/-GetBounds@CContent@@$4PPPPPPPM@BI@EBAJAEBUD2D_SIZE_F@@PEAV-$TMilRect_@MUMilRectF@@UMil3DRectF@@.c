/*
 * XREFs of ?GetBounds@CContent@@$4PPPPPPPM@BI@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EF0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CContent::GetBounds(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  return CBrush::GetBounds(a1 - *(int *)(a1 - 4) - 24, a2, a3);
}

/*
 * XREFs of ?GetBounds@CSceneWorld@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F6C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSceneWorld::GetBounds(__int64 a1)
{
  return CSceneWorld::GetBounds(a1 - *(int *)(a1 - 4));
}

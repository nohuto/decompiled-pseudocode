/*
 * XREFs of ?GetBounds@CVectorShape@@$4PPPPPPPM@HA@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EEC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVectorShape::GetBounds(__int64 a1)
{
  return CLegacyStereoSwapChain::EnsureComputeScribbleResources((CLegacyStereoSwapChain *)(a1 - *(int *)(a1 - 4) - 112));
}

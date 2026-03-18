/*
 * XREFs of ?IsHardwareProtected@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F0160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CRenderTargetBitmap::IsHardwareProtected(__int64 a1)
{
  return CRenderTargetBitmap::IsHardwareProtected((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4)));
}

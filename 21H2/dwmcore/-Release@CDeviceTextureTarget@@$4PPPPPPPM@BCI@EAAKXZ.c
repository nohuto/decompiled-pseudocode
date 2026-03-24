/*
 * XREFs of ?Release@CDeviceTextureTarget@@$4PPPPPPPM@BCI@EAAKXZ @ 0x1800F8320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::Release(__int64 a1)
{
  return CRenderTargetBitmap::Release((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 296));
}

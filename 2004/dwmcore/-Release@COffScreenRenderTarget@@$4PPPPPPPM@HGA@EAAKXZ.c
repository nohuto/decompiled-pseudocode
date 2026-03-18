/*
 * XREFs of ?Release@COffScreenRenderTarget@@$4PPPPPPPM@HGA@EAAKXZ @ 0x1800EFE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall COffScreenRenderTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 1888));
}

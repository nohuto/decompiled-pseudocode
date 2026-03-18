/*
 * XREFs of ?Release@CRenderTarget@@$4PPPPPPPM@BCI@EAAKXZ @ 0x1800EFF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRenderTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 296));
}

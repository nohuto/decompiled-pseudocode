/*
 * XREFs of ?Release@CDDisplayRenderTarget@@$4PPPPPPPM@EINA@EAAKXZ @ 0x1800EF7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDisplayRenderTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 18640));
}

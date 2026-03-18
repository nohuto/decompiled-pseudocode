/*
 * XREFs of ?Release@CLocalAppRenderTarget@@$4PPPPPPPM@LA@EAAKXZ @ 0x1800ED0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLocalAppRenderTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 176));
}

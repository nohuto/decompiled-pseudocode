/*
 * XREFs of ?Release@CRemoteRenderTarget@@$4PPPPPPPM@BEA@EAAKXZ @ 0x1800EF940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRemoteRenderTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 320));
}

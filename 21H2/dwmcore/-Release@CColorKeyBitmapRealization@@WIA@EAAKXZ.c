/*
 * XREFs of ?Release@CColorKeyBitmapRealization@@WIA@EAAKXZ @ 0x18010B4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorKeyBitmapRealization::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 128));
}

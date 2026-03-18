/*
 * XREFs of ?Release@CColorKeyBitmapRealization@@WIA@EAAKXZ @ 0x1800EFF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CColorKeyBitmapRealization::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 128));
}

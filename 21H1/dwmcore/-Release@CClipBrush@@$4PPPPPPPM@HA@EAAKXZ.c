/*
 * XREFs of ?Release@CClipBrush@@$4PPPPPPPM@HA@EAAKXZ @ 0x1800ECB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CClipBrush::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 112));
}

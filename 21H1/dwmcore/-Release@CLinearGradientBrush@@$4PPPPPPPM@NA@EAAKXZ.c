/*
 * XREFs of ?Release@CLinearGradientBrush@@$4PPPPPPPM@NA@EAAKXZ @ 0x1800EDE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLinearGradientBrush::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 208));
}

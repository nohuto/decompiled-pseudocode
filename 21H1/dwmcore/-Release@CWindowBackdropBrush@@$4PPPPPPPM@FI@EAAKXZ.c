/*
 * XREFs of ?Release@CWindowBackdropBrush@@$4PPPPPPPM@FI@EAAKXZ @ 0x1800ECD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWindowBackdropBrush::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 88));
}

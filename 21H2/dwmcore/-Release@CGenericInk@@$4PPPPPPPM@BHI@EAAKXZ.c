/*
 * XREFs of ?Release@CGenericInk@@$4PPPPPPPM@BHI@EAAKXZ @ 0x1800F5600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CGenericInk::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 376));
}

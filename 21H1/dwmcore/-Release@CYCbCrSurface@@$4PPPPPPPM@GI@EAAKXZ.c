/*
 * XREFs of ?Release@CYCbCrSurface@@$4PPPPPPPM@GI@EAAKXZ @ 0x1800EBE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CYCbCrSurface::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 104));
}

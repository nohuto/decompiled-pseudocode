/*
 * XREFs of ?Release@CD2DResource@@$4PPPPPPPM@FI@EAAKXZ @ 0x180108270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DResource::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 88));
}

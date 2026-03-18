/*
 * XREFs of ?Release@CD2DResource@@$4PPPPPPPM@GI@EAAKXZ @ 0x1801093B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DResource::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 104));
}

/*
 * XREFs of ?Release@CSectionBitmapRealization@@$4PPPPPPPM@BKA@EAAKXZ @ 0x18010B3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSectionBitmapRealization::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 416));
}

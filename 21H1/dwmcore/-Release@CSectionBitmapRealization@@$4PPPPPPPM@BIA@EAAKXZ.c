/*
 * XREFs of ?Release@CSectionBitmapRealization@@$4PPPPPPPM@BIA@EAAKXZ @ 0x1800EF760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSectionBitmapRealization::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 384));
}

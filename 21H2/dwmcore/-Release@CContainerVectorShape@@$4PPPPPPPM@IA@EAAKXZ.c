/*
 * XREFs of ?Release@CContainerVectorShape@@$4PPPPPPPM@IA@EAAKXZ @ 0x1800F55B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CContainerVectorShape::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 128));
}

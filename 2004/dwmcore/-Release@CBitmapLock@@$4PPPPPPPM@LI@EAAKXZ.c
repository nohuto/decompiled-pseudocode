/*
 * XREFs of ?Release@CBitmapLock@@$4PPPPPPPM@LI@EAAKXZ @ 0x1800F13E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmapLock::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 184));
}

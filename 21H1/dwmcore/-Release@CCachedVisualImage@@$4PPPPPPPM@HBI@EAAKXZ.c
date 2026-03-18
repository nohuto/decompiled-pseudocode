/*
 * XREFs of ?Release@CCachedVisualImage@@$4PPPPPPPM@HBI@EAAKXZ @ 0x1800ECAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCachedVisualImage::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 1816));
}

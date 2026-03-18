/*
 * XREFs of ?GetPixelFormatInfo@CGdiSpriteBitmap@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1800F08A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::GetPixelFormatInfo(__int64 a1)
{
  return CGdiSpriteBitmap::GetPixelFormatInfo(a1 - *(int *)(a1 - 4));
}

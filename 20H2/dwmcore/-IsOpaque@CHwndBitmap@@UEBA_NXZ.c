/*
 * XREFs of ?IsOpaque@CHwndBitmap@@UEBA_NXZ @ 0x1801C3F20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatInfo@CHwndBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801C3CF0 (-GetPixelFormatInfo@CHwndBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 */

bool __fastcall CHwndBitmap::IsOpaque(CHwndBitmap *this)
{
  _DWORD v2[6]; // [rsp+20h] [rbp-18h] BYREF

  return CHwndBitmap::GetPixelFormatInfo((__int64)this, v2)[1] == 3;
}

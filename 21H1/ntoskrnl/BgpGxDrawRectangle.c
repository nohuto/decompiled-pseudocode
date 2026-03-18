/*
 * XREFs of BgpGxDrawRectangle @ 0x140398978
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1403AF7F4 (BgpTxtDisplayCharacter.c)
 *     BgpClearScreen @ 0x1405BE6A4 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405BFB34 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwpFadeAnimationTimer @ 0x1409EF4C0 (AnFwpFadeAnimationTimer.c)
 *     BgpGxDrawBitmapImage @ 0x1409F4704 (BgpGxDrawBitmapImage.c)
 *     BgpTxtClearRegion @ 0x1409F4754 (BgpTxtClearRegion.c)
 *     BgpTxtDisplayString @ 0x1409F4784 (BgpTxtDisplayString.c)
 * Callees:
 *     GxpWriteFrameBufferPixels @ 0x140398A08 (GxpWriteFrameBufferPixels.c)
 *     BgpGetBitsPerPixel @ 0x140398D60 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x140398F4C (BgpGxConvertRectangleEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     BgpGxRectangleDestroy @ 0x1409EF290 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxDrawRectangle(_BYTE *a1, __int64 a2)
{
  _BYTE *v4; // rdi
  unsigned int BitsPerPixel; // eax
  _BYTE *v6; // rsi
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v9; // r9
  _BYTE *v10; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v11[80]; // [rsp+30h] [rbp-78h] BYREF

  memset(v11, 0, 0x48uLL);
  v4 = 0LL;
  v10 = 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  v6 = 0LL;
  if ( *((_DWORD *)a1 + 2) != BitsPerPixel )
  {
    if ( (dword_140C132D0 & 0xC00) != 0 )
    {
      v9 = 1LL;
      v10 = v11;
    }
    else
    {
      v9 = 0LL;
    }
    result = BgpGxConvertRectangleEx(a1, BitsPerPixel, &v10, v9);
    if ( (int)result < 0 )
      return result;
    v4 = v10;
    a1 = v10;
    v6 = v10;
  }
  v7 = GxpWriteFrameBufferPixels(a1, a2);
  if ( v6 )
  {
    if ( v6 != v11 )
      BgpGxRectangleDestroy(v4);
  }
  return v7;
}

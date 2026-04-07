/*
 * XREFs of ?Release@CWICBitmapWrapper@@UEAAKXZ @ 0x180051770
 * Callers:
 *     ?Release@CWICBitmapWrapper@@WBA@EAAKXZ @ 0x180056250 (-Release@CWICBitmapWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x180056260 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x180056270 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x180056280 (-Release@CWICBitmapWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WDA@EAAKXZ @ 0x180056290 (-Release@CWICBitmapWrapper@@WDA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WPA@EAAKXZ @ 0x180056320 (-Release@CCompressedSourceBitmap@@WPA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WPI@EAAKXZ @ 0x180056330 (-Release@CCompressedSourceBitmap@@WPI@EAAKXZ.c)
 *     ?Release@CBitmapLock@@WEI@EAAKXZ @ 0x180056400 (-Release@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?Release@CBitmapLock@@WFA@EAAKXZ @ 0x180056410 (-Release@CBitmapLock@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CWICBitmapWrapper::Release(CWICBitmapWrapper *this)
{
  return CMILCOMBase::InternalRelease(this);
}

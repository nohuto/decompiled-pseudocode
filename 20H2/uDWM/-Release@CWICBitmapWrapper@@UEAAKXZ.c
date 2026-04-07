/*
 * XREFs of ?Release@CWICBitmapWrapper@@UEAAKXZ @ 0x1800504C0
 * Callers:
 *     ?Release@CWICBitmapWrapper@@WBA@EAAKXZ @ 0x1800565A0 (-Release@CWICBitmapWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x1800565B0 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x1800565C0 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x1800565D0 (-Release@CWICBitmapWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WDA@EAAKXZ @ 0x1800565E0 (-Release@CWICBitmapWrapper@@WDA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WPA@EAAKXZ @ 0x180056670 (-Release@CCompressedSourceBitmap@@WPA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WPI@EAAKXZ @ 0x180056680 (-Release@CCompressedSourceBitmap@@WPI@EAAKXZ.c)
 *     ?Release@CBitmapLock@@WEI@EAAKXZ @ 0x180056750 (-Release@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?Release@CBitmapLock@@WFA@EAAKXZ @ 0x180056760 (-Release@CBitmapLock@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CWICBitmapWrapper::Release(CWICBitmapWrapper *this)
{
  return CMILCOMBase::InternalRelease(this);
}

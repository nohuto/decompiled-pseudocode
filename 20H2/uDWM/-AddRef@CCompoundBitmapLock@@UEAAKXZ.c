/*
 * XREFs of ?AddRef@CCompoundBitmapLock@@UEAAKXZ @ 0x1800502A0
 * Callers:
 *     ?AddRef@CBitmap@@WBA@EAAKXZ @ 0x1800564D0 (-AddRef@CBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x1800564E0 (-AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x1800564F0 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ @ 0x180056500 (-AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x180056510 (-AddRef@CBitmap@@WDA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WPA@EAAKXZ @ 0x180056610 (-AddRef@CCompressedSourceBitmap@@WPA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WPI@EAAKXZ @ 0x180056620 (-AddRef@CCompressedSourceBitmap@@WPI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x1800566E0 (-AddRef@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WFA@EAAKXZ @ 0x1800566F0 (-AddRef@CBitmapLock@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CCompoundBitmapLock::AddRef(CCompoundBitmapLock *this)
{
  return CMILCOMBase::InternalAddRef(this);
}

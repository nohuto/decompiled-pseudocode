/*
 * XREFs of ?Release@CSecondarySysmemBitmap@@UEAAKXZ @ 0x1800EB130
 * Callers:
 *     ?Release@CColorKeyBitmap@@$4PPPPPPPM@II@EAAKXZ @ 0x18010D3F0 (-Release@CColorKeyBitmap@@$4PPPPPPPM@II@EAAKXZ.c)
 *     ?Release@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAKXZ @ 0x18010D470 (-Release@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondarySysmemBitmap::Release(CSecondarySysmemBitmap *this)
{
  return CMILRefCountBaseT<ID2DBitmapCacheSource>::InternalRelease((char *)this - 24);
}

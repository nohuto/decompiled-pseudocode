/*
 * XREFs of ?QueryInterface@CColorKeyBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A9550
 * Callers:
 *     ?QueryInterface@CColorKeyBitmap@@$4PPPPPPPM@II@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010D3D0 (-QueryInterface@CColorKeyBitmap@@$4PPPPPPPM@II@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010D450 (-QueryInterface@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorKeyBitmap::QueryInterface(CColorKeyBitmap *this, struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<ID2DBitmapCacheSource>::InternalQueryInterface((_QWORD *)this - 3, a2, (__int64 *)a3);
}

/*
 * XREFs of ?QueryInterface@CCompositionSurfaceBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180106390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CGDIBitmapRealization::QueryInterface((CGDIBitmapRealization *)(a1 - 96), a2, a3);
}

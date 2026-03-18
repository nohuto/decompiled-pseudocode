/*
 * XREFs of ?QueryInterface@CCompositionSurfaceBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180106370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CGDIBitmapRealization::QueryInterface((CGDIBitmapRealization *)(a1 - 88), a2, a3);
}

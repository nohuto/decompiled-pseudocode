/*
 * XREFs of ?Release@CCompositionSurfaceBitmap@@WFI@EAAKXZ @ 0x1800EF790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::Release(__int64 a1)
{
  return CRenderTargetBitmap::Release((CRenderTargetBitmap *)(a1 - 88));
}

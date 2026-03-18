/*
 * XREFs of ?Release@CCompositionSurfaceBitmap@@WFA@EAAKXZ @ 0x1800EFAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::Release(__int64 a1)
{
  return CRenderTargetBitmap::Release((CRenderTargetBitmap *)(a1 - 80));
}

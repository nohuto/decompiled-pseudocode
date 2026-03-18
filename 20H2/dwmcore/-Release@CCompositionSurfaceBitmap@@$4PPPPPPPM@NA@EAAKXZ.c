/*
 * XREFs of ?Release@CCompositionSurfaceBitmap@@$4PPPPPPPM@NA@EAAKXZ @ 0x1800EF760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::Release(__int64 a1)
{
  return CRenderTargetBitmap::Release((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 208));
}

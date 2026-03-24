/*
 * XREFs of ?Release@CLegacyRenderTarget@@$4PPPPPPPM@EIMA@EAAKXZ @ 0x1800F5680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::Release(__int64 a1)
{
  return CRenderTargetBitmap::Release((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 18624));
}

/*
 * XREFs of ?Release@COffScreenRenderTarget@@$4PPPPPPPM@IBA@EAAKXZ @ 0x1801067F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall COffScreenRenderTarget::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 2064));
}

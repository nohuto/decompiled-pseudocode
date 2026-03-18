/*
 * XREFs of ?Release@CDDisplayRenderTarget@@$4PPPPPPPM@EIKA@EAAKXZ @ 0x180106710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDisplayRenderTarget::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 18592));
}

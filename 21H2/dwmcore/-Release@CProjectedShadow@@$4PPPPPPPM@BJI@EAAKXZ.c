/*
 * XREFs of ?Release@CProjectedShadow@@$4PPPPPPPM@BJI@EAAKXZ @ 0x180106730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CProjectedShadow::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 408));
}

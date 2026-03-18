/*
 * XREFs of ?Release@CContent@@$4PPPPPPPM@LI@EAAKXZ @ 0x180107B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CContent::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 184));
}

/*
 * XREFs of ?Release@CRenderData@@$4PPPPPPPM@BDI@EAAKXZ @ 0x180107A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRenderData::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 312));
}

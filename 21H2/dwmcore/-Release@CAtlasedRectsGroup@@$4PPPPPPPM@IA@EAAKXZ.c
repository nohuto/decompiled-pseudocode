/*
 * XREFs of ?Release@CAtlasedRectsGroup@@$4PPPPPPPM@IA@EAAKXZ @ 0x180106610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAtlasedRectsGroup::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 128));
}

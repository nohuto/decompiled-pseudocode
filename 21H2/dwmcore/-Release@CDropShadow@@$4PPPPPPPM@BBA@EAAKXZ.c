/*
 * XREFs of ?Release@CDropShadow@@$4PPPPPPPM@BBA@EAAKXZ @ 0x180106870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDropShadow::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 272));
}

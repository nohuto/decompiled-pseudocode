/*
 * XREFs of Normalization__PageLookup @ 0x1409BE43C
 * Callers:
 *     NormBuffer__GetLastChar @ 0x1405ED1F8 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x1405ED354 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x1405ED6E4 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__PageLookup(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}

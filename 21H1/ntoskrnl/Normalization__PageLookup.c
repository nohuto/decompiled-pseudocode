/*
 * XREFs of Normalization__PageLookup @ 0x140914728
 * Callers:
 *     NormBuffer__GetLastChar @ 0x1405880F8 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x140588248 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x1405885D4 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__PageLookup(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}

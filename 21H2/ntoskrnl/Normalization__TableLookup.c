/*
 * XREFs of Normalization__TableLookup @ 0x140918F20
 * Callers:
 *     NormBuffer__GetLastChar @ 0x14058DDC8 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x14058DF18 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x14058E2A4 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__TableLookup(__int64 a1, char a2, unsigned __int8 a3)
{
  return *(_BYTE *)(((unsigned __int64)a3 << 7) + (a2 & 0x7F) + *(_QWORD *)(a1 + 40) - 128);
}

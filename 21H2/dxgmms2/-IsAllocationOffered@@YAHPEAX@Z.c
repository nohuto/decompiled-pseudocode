/*
 * XREFs of ?IsAllocationOffered@@YAHPEAX@Z @ 0x1C00A7130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsAllocationOffered(_DWORD *a1)
{
  return a1[112] != 4 && *(_WORD *)(*((_QWORD *)a1 + 66) + 4LL) == 2;
}

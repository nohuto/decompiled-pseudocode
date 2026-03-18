/*
 * XREFs of ?IsAllocationOffered@@YAHPEAX@Z @ 0x1C00C8800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsAllocationOffered(_DWORD *a1)
{
  return a1[106] != 4 && *(_WORD *)(*((_QWORD *)a1 + 62) + 4LL) == 2;
}

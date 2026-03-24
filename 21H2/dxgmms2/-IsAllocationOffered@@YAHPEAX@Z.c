/*
 * XREFs of ?IsAllocationOffered@@YAHPEAX@Z @ 0x1C00C7430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsAllocationOffered(_DWORD *a1)
{
  return a1[110] != 4 && *(_WORD *)(*((_QWORD *)a1 + 64) + 4LL) == 2;
}

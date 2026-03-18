/*
 * XREFs of KdIsThisAKdTrap @ 0x1409B2008
 * Callers:
 *     KiDispatchException @ 0x1402E5930 (KiDispatchException.c)
 * Callees:
 *     <none>
 */

bool __fastcall KdIsThisAKdTrap(__int64 a1)
{
  return (*(_DWORD *)a1 == -2147483645 || *(_DWORD *)a1 == 1073741855) && *(_DWORD *)(a1 + 24) && *(_QWORD *)(a1 + 32);
}

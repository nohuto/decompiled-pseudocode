/*
 * XREFs of sub_1406C1C80 @ 0x1406C1C80
 * Callers:
 *     SPCall2ServerInternal @ 0x1405D6678 (SPCall2ServerInternal.c)
 *     sub_1406B8B24 @ 0x1406B8B24 (sub_1406B8B24.c)
 *     sub_1407B1120 @ 0x1407B1120 (sub_1407B1120.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406C1C80(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return a7 ^ (unsigned int)(*(_DWORD *)(a6 + 4LL * (a1 & 1)) ^ *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)));
}

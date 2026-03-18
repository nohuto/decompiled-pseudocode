/*
 * XREFs of sub_1406E2200 @ 0x1406E2200
 * Callers:
 *     SPCall2ServerInternal @ 0x14066C0B8 (SPCall2ServerInternal.c)
 *     sub_1406D83D4 @ 0x1406D83D4 (sub_1406D83D4.c)
 *     sub_1407B4290 @ 0x1407B4290 (sub_1407B4290.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406E2200(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return a7 ^ (unsigned int)(*(_DWORD *)(a6 + 4LL * (a1 & 1)) ^ *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)));
}

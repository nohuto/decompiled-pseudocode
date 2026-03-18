/*
 * XREFs of sub_1406EA220 @ 0x1406EA220
 * Callers:
 *     SPCall2ServerInternal @ 0x14066C0B8 (SPCall2ServerInternal.c)
 *     sub_1406D83D4 @ 0x1406D83D4 (sub_1406D83D4.c)
 *     sub_1407B4290 @ 0x1407B4290 (sub_1407B4290.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406EA220(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return __ROR4__(a7, a4 % 0x1F + 1)
       + (unsigned int)*(unsigned __int16 *)(a6 + 2 * (a1 & 3))
       * __ROR4__(*(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)) - a7, a3 % 0x1F + 1);
}

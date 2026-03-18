/*
 * XREFs of sub_1406D8580 @ 0x1406D8580
 * Callers:
 *     SPCall2ServerInternal @ 0x14066C0B8 (SPCall2ServerInternal.c)
 *     sub_1406D83D4 @ 0x1406D83D4 (sub_1406D83D4.c)
 *     sub_1407B4290 @ 0x1407B4290 (sub_1407B4290.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406D8580(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return (__ROR4__(a7, a2 % 0xF + 1) - *(unsigned __int16 *)(a6 + 2LL * (a1 & 3)))
       * (unsigned int)*(unsigned __int16 *)(a6 + 2LL * (((a1 & 3) + (unsigned __int8)(a3 / 3) + (_BYTE)a3 + 1) & 3));
}

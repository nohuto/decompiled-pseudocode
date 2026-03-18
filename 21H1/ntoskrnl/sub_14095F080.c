/*
 * XREFs of sub_14095F080 @ 0x14095F080
 * Callers:
 *     SPCall2ServerInternal @ 0x1405D6678 (SPCall2ServerInternal.c)
 *     sub_1406B8B24 @ 0x1406B8B24 (sub_1406B8B24.c)
 *     sub_1407B1120 @ 0x1407B1120 (sub_1407B1120.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14095F080(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return *(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
       * (a7 ^ (unsigned int)*(unsigned __int16 *)(a6
                                                 + 2LL * (((a1 & 3) + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3)))
       - __ROR4__(a7, a3 % 0xF + 1);
}

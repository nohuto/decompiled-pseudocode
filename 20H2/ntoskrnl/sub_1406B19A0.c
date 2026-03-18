/*
 * XREFs of sub_1406B19A0 @ 0x1406B19A0
 * Callers:
 *     sub_140689640 @ 0x140689640 (sub_140689640.c)
 *     sub_1406B17F4 @ 0x1406B17F4 (sub_1406B17F4.c)
 *     sub_1407C2AC0 @ 0x1407C2AC0 (sub_1407C2AC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406B19A0(
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

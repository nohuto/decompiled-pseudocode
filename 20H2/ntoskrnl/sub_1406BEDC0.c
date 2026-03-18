/*
 * XREFs of sub_1406BEDC0 @ 0x1406BEDC0
 * Callers:
 *     sub_140689640 @ 0x140689640 (sub_140689640.c)
 *     sub_1406B17F4 @ 0x1406B17F4 (sub_1406B17F4.c)
 *     sub_1407C2AC0 @ 0x1407C2AC0 (sub_1407C2AC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406BEDC0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  return *(unsigned __int16 *)(a6 + 2 * (a1 & 3))
       * __ROL4__(a7 ^ *(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)), a3 % 7 + 1)
       - (a7 >> (a4 % 0xF + 1));
}

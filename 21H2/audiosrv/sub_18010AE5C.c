/*
 * XREFs of sub_18010AE5C @ 0x18010AE5C
 * Callers:
 *     sub_180106DAC @ 0x180106DAC (sub_180106DAC.c)
 *     sub_18010B238 @ 0x18010B238 (sub_18010B238.c)
 *     sub_18010B7C4 @ 0x18010B7C4 (sub_18010B7C4.c)
 * Callees:
 *     sub_18010B0CC @ 0x18010B0CC (sub_18010B0CC.c)
 */

__int64 __fastcall sub_18010AE5C(__int64 a1, unsigned int a2)
{
  unsigned int v4; // eax

  v4 = sub_18010B0CC();
  return sub_18010AE90(a1, a2, v4);
}

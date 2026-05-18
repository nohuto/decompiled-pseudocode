/*
 * XREFs of sub_18007FCB4 @ 0x18007FCB4
 * Callers:
 *     sub_180096B80 @ 0x180096B80 (sub_180096B80.c)
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 */

_QWORD *__fastcall sub_18007FCB4(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001CDF8(a2, a1 + 400);
  return a2;
}

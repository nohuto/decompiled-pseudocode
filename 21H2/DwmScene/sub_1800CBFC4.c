/*
 * XREFs of sub_1800CBFC4 @ 0x1800CBFC4
 * Callers:
 *     sub_180022D60 @ 0x180022D60 (sub_180022D60.c)
 *     sub_1800B9340 @ 0x1800B9340 (sub_1800B9340.c)
 * Callees:
 *     sub_180022CEC @ 0x180022CEC (sub_180022CEC.c)
 */

__m128 *__fastcall sub_1800CBFC4(__m128 *a1, __m128 *a2)
{
  sub_180022CEC(a1 + 3, a2);
  sub_180022CEC(a1 + 4, a2);
  return sub_180022CEC(a1 + 5, a2);
}

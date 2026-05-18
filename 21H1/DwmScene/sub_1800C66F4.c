/*
 * XREFs of sub_1800C66F4 @ 0x1800C66F4
 * Callers:
 *     sub_18001D490 @ 0x18001D490 (sub_18001D490.c)
 *     sub_1800B3A70 @ 0x1800B3A70 (sub_1800B3A70.c)
 * Callees:
 *     sub_18001D41C @ 0x18001D41C (sub_18001D41C.c)
 */

__m128 *__fastcall sub_1800C66F4(__m128 *a1, __m128 *a2)
{
  sub_18001D41C(a1 + 3, a2);
  sub_18001D41C(a1 + 4, a2);
  return sub_18001D41C(a1 + 5, a2);
}

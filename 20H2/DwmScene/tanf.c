/*
 * XREFs of tanf @ 0x18011F778
 * Callers:
 *     sub_18008AA90 @ 0x18008AA90 (sub_18008AA90.c)
 *     sub_1800C1B38 @ 0x1800C1B38 (sub_1800C1B38.c)
 *     sub_1800F76B4 @ 0x1800F76B4 (sub_1800F76B4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl tanf(float X)
{
  return __imp_tanf(X);
}

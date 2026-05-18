/*
 * XREFs of sqrtf @ 0x18011F784
 * Callers:
 *     sub_1800C1B38 @ 0x1800C1B38 (sub_1800C1B38.c)
 *     sub_1800F76B4 @ 0x1800F76B4 (sub_1800F76B4.c)
 *     sub_18010CF70 @ 0x18010CF70 (sub_18010CF70.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl sqrtf(float X)
{
  return __imp_sqrtf(X);
}

/*
 * XREFs of expf @ 0x18011F76C
 * Callers:
 *     sub_18008AA90 @ 0x18008AA90 (sub_18008AA90.c)
 *     sub_18010CF70 @ 0x18010CF70 (sub_18010CF70.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl expf(float X)
{
  return __imp_expf(X);
}

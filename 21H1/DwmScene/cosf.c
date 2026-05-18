/*
 * XREFs of cosf @ 0x18011F766
 * Callers:
 *     sub_18008AA90 @ 0x18008AA90 (sub_18008AA90.c)
 *     sub_1800F8EE0 @ 0x1800F8EE0 (sub_1800F8EE0.c)
 *     sub_1800FCA48 @ 0x1800FCA48 (sub_1800FCA48.c)
 *     sub_180106600 @ 0x180106600 (sub_180106600.c)
 *     sub_18010CF40 @ 0x18010CF40 (sub_18010CF40.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl cosf(float X)
{
  return __imp_cosf(X);
}

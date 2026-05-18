/*
 * XREFs of ceilf @ 0x180125024
 * Callers:
 *     sub_18006CDF0 @ 0x18006CDF0 (sub_18006CDF0.c)
 *     sub_18008F284 @ 0x18008F284 (sub_18008F284.c)
 *     sub_1800DDB08 @ 0x1800DDB08 (sub_1800DDB08.c)
 *     sub_1800DDC68 @ 0x1800DDC68 (sub_1800DDC68.c)
 *     sub_180113810 @ 0x180113810 (sub_180113810.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl ceilf(float X)
{
  return __imp_ceilf(X);
}

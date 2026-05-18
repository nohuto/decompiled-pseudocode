/*
 * XREFs of ceilf @ 0x18011F754
 * Callers:
 *     sub_180067520 @ 0x180067520 (sub_180067520.c)
 *     sub_1800899B4 @ 0x1800899B4 (sub_1800899B4.c)
 *     sub_1800D8238 @ 0x1800D8238 (sub_1800D8238.c)
 *     sub_1800D8398 @ 0x1800D8398 (sub_1800D8398.c)
 *     sub_18010DF40 @ 0x18010DF40 (sub_18010DF40.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl ceilf(float X)
{
  return __imp_ceilf(X);
}

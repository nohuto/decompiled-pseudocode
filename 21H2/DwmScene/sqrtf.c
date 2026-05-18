/*
 * XREFs of sqrtf @ 0x180125054
 * Callers:
 *     sub_1800C7408 @ 0x1800C7408 (sub_1800C7408.c)
 *     sub_1800FCF84 @ 0x1800FCF84 (sub_1800FCF84.c)
 *     sub_180112840 @ 0x180112840 (sub_180112840.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl sqrtf(float X)
{
  return __imp_sqrtf(X);
}

/*
 * XREFs of tanf @ 0x180125048
 * Callers:
 *     sub_180090360 @ 0x180090360 (sub_180090360.c)
 *     sub_1800C7408 @ 0x1800C7408 (sub_1800C7408.c)
 *     sub_1800FCF84 @ 0x1800FCF84 (sub_1800FCF84.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl tanf(float X)
{
  return __imp_tanf(X);
}

/*
 * XREFs of cosf @ 0x180125036
 * Callers:
 *     sub_180090360 @ 0x180090360 (sub_180090360.c)
 *     sub_1800FE7B0 @ 0x1800FE7B0 (sub_1800FE7B0.c)
 *     sub_180102318 @ 0x180102318 (sub_180102318.c)
 *     sub_18010BED0 @ 0x18010BED0 (sub_18010BED0.c)
 *     sub_180112810 @ 0x180112810 (sub_180112810.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl cosf(float X)
{
  return __imp_cosf(X);
}

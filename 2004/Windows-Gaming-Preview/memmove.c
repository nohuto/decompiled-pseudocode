/*
 * XREFs of memmove @ 0x180045C8F
 * Callers:
 *     sub_1800057C8 @ 0x1800057C8 (sub_1800057C8.c)
 *     sub_18000DBF0 @ 0x18000DBF0 (sub_18000DBF0.c)
 *     sub_18000DE3C @ 0x18000DE3C (sub_18000DE3C.c)
 *     sub_180014AD0 @ 0x180014AD0 (sub_180014AD0.c)
 *     sub_180014CF4 @ 0x180014CF4 (sub_180014CF4.c)
 *     sub_1800184BC @ 0x1800184BC (sub_1800184BC.c)
 *     sub_18001986C @ 0x18001986C (sub_18001986C.c)
 *     sub_180019A90 @ 0x180019A90 (sub_180019A90.c)
 *     sub_18001A674 @ 0x18001A674 (sub_18001A674.c)
 *     sub_180030490 @ 0x180030490 (sub_180030490.c)
 *     sub_18003067C @ 0x18003067C (sub_18003067C.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  return __imp_memmove(a1, Src, Size);
}

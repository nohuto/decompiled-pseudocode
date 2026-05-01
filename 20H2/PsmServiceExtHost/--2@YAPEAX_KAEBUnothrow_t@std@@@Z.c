/*
 * XREFs of ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460F0
 * Callers:
 *     sub_180001C3C @ 0x180001C3C (sub_180001C3C.c)
 *     sub_180001E34 @ 0x180001E34 (sub_180001E34.c)
 *     sub_180002430 @ 0x180002430 (sub_180002430.c)
 *     sub_180015170 @ 0x180015170 (sub_180015170.c)
 *     sub_180016DD0 @ 0x180016DD0 (sub_180016DD0.c)
 *     sub_18002C924 @ 0x18002C924 (sub_18002C924.c)
 *     sub_18002CA14 @ 0x18002CA14 (sub_18002CA14.c)
 *     sub_180031878 @ 0x180031878 (sub_180031878.c)
 *     sub_180031B00 @ 0x180031B00 (sub_180031B00.c)
 *     sub_180033820 @ 0x180033820 (sub_180033820.c)
 *     sub_18003C89C @ 0x18003C89C (sub_18003C89C.c)
 *     sub_18003ED34 @ 0x18003ED34 (sub_18003ED34.c)
 *     sub_180067AF0 @ 0x180067AF0 (sub_180067AF0.c)
 *     sub_1800738A8 @ 0x1800738A8 (sub_1800738A8.c)
 *     sub_180077220 @ 0x180077220 (sub_180077220.c)
 * Callees:
 *     sub_180046098 @ 0x180046098 (sub_180046098.c)
 */

void *__fastcall operator new(size_t a1, const struct std::nothrow_t *a2)
{
  void *result; // rax

  try
  {
    result = sub_180046098(a1);
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}

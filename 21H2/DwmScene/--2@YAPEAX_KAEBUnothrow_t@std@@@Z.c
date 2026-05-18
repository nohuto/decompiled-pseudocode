/*
 * XREFs of ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180124018
 * Callers:
 *     sub_18000F1A0 @ 0x18000F1A0 (sub_18000F1A0.c)
 *     sub_180015298 @ 0x180015298 (sub_180015298.c)
 *     sub_180017E00 @ 0x180017E00 (sub_180017E00.c)
 *     sub_180017EF4 @ 0x180017EF4 (sub_180017EF4.c)
 *     sub_180018014 @ 0x180018014 (sub_180018014.c)
 *     sub_1800180F4 @ 0x1800180F4 (sub_1800180F4.c)
 *     sub_180018214 @ 0x180018214 (sub_180018214.c)
 *     sub_180018334 @ 0x180018334 (sub_180018334.c)
 *     sub_180022B3C @ 0x180022B3C (sub_180022B3C.c)
 *     sub_1800828B4 @ 0x1800828B4 (sub_1800828B4.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

void *__fastcall operator new(unsigned __int64 a1, const struct std::nothrow_t *a2)
{
  void *result; // rax

  try
  {
    result = operator new(a1);
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}

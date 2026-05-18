/*
 * XREFs of ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18011E748
 * Callers:
 *     sub_18000F0C0 @ 0x18000F0C0 (sub_18000F0C0.c)
 *     sub_1800151B8 @ 0x1800151B8 (sub_1800151B8.c)
 *     sub_180017958 @ 0x180017958 (sub_180017958.c)
 *     sub_180017A4C @ 0x180017A4C (sub_180017A4C.c)
 *     sub_180017B6C @ 0x180017B6C (sub_180017B6C.c)
 *     sub_180017C4C @ 0x180017C4C (sub_180017C4C.c)
 *     sub_180017D6C @ 0x180017D6C (sub_180017D6C.c)
 *     sub_180017E8C @ 0x180017E8C (sub_180017E8C.c)
 *     sub_18001D33C @ 0x18001D33C (sub_18001D33C.c)
 *     sub_18007CFE4 @ 0x18007CFE4 (sub_18007CFE4.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
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

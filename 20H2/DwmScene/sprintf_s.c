/*
 * XREFs of sprintf_s @ 0x18011F08C
 * Callers:
 *     sub_1800D3808 @ 0x1800D3808 (sub_1800D3808.c)
 *     sub_1801147FC @ 0x1801147FC (sub_1801147FC.c)
 * Callees:
 *     sub_18011DF90 @ 0x18011DF90 (sub_18011DF90.c)
 *     _o___stdio_common_vsprintf_s @ 0x18011DFED (_o___stdio_common_vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int result; // eax

  sub_18011DF90();
  result = o___stdio_common_vsprintf_s();
  if ( result < 0 )
    return -1;
  return result;
}

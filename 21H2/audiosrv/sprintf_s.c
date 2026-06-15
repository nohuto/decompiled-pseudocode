/*
 * XREFs of sprintf_s @ 0x18006ACB4
 * Callers:
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     sub_1800192D0 @ 0x1800192D0 (sub_1800192D0.c)
 *     sub_180043F70 @ 0x180043F70 (sub_180043F70.c)
 *     sub_1800EC128 @ 0x1800EC128 (sub_1800EC128.c)
 * Callees:
 *     sub_18006954C @ 0x18006954C (sub_18006954C.c)
 *     _o___stdio_common_vswprintf_s @ 0x18006AABA (_o___stdio_common_vswprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int result; // eax

  sub_18006954C();
  result = o___stdio_common_vswprintf_s();
  if ( result < 0 )
    return -1;
  return result;
}

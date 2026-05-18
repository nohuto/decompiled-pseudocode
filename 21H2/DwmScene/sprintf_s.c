/*
 * XREFs of sprintf_s @ 0x18012495C
 * Callers:
 *     sub_1800D90D8 @ 0x1800D90D8 (sub_1800D90D8.c)
 *     sub_18011A0CC @ 0x18011A0CC (sub_18011A0CC.c)
 * Callees:
 *     sub_180123860 @ 0x180123860 (sub_180123860.c)
 *     _o___stdio_common_vsprintf_s @ 0x1801238BD (_o___stdio_common_vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int result; // eax

  sub_180123860();
  result = o___stdio_common_vsprintf_s();
  if ( result < 0 )
    return -1;
  return result;
}

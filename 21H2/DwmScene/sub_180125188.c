/*
 * XREFs of sub_180125188 @ 0x180125188
 * Callers:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_1800417D8 @ 0x1800417D8 (sub_1800417D8.c)
 *     sub_18011B9C8 @ 0x18011B9C8 (sub_18011B9C8.c)
 * Callees:
 *     sub_180123860 @ 0x180123860 (sub_180123860.c)
 *     _o___stdio_common_vsnprintf_s @ 0x1801238B1 (_o___stdio_common_vsnprintf_s.c)
 */

__int64 sub_180125188()
{
  __int64 result; // rax

  sub_180123860();
  result = o___stdio_common_vsnprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

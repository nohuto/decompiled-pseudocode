/*
 * XREFs of sub_1801250D8 @ 0x1801250D8
 * Callers:
 *     sub_180122204 @ 0x180122204 (sub_180122204.c)
 * Callees:
 *     sub_180123860 @ 0x180123860 (sub_180123860.c)
 *     _o___acrt_iob_func @ 0x18012388D (_o___acrt_iob_func.c)
 *     _o___stdio_common_vfprintf @ 0x1801238AB (_o___stdio_common_vfprintf.c)
 */

__int64 sub_1801250D8(const char *a1, ...)
{
  o___acrt_iob_func();
  sub_180123860();
  return o___stdio_common_vfprintf();
}

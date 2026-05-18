/*
 * XREFs of sub_18011F808 @ 0x18011F808
 * Callers:
 *     sub_18011C934 @ 0x18011C934 (sub_18011C934.c)
 * Callees:
 *     sub_18011DF90 @ 0x18011DF90 (sub_18011DF90.c)
 *     _o___acrt_iob_func @ 0x18011DFBD (_o___acrt_iob_func.c)
 *     _o___stdio_common_vfprintf @ 0x18011DFDB (_o___stdio_common_vfprintf.c)
 */

__int64 sub_18011F808(const char *a1, ...)
{
  o___acrt_iob_func();
  sub_18011DF90();
  return o___stdio_common_vfprintf();
}

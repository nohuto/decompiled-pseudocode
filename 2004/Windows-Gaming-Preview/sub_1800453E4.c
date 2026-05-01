/*
 * XREFs of sub_1800453E4 @ 0x1800453E4
 * Callers:
 *     sub_180016384 @ 0x180016384 (sub_180016384.c)
 * Callees:
 *     sub_180043CBC @ 0x180043CBC (sub_180043CBC.c)
 *     _o___acrt_iob_func @ 0x1800452A6 (_o___acrt_iob_func.c)
 *     _o___stdio_common_vfwprintf @ 0x1800452D6 (_o___stdio_common_vfwprintf.c)
 */

__int64 sub_1800453E4()
{
  o___acrt_iob_func();
  sub_180043CBC();
  return o___stdio_common_vfwprintf();
}

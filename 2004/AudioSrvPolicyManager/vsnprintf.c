/*
 * XREFs of vsnprintf @ 0x18003A7E4
 * Callers:
 *     sub_18000210C @ 0x18000210C (sub_18000210C.c)
 *     sub_18000229C @ 0x18000229C (sub_18000229C.c)
 *     sub_18002E450 @ 0x18002E450 (sub_18002E450.c)
 *     sub_1800330EC @ 0x1800330EC (sub_1800330EC.c)
 *     sub_1800390FC @ 0x1800390FC (sub_1800390FC.c)
 * Callees:
 *     sub_1800392AC @ 0x1800392AC (sub_1800392AC.c)
 *     _o___stdio_common_vswprintf @ 0x18003A6F2 (_o___stdio_common_vswprintf.c)
 */

int __cdecl vsnprintf(char *DstBuf, size_t MaxCount, const char *Format, va_list ArgList)
{
  int result; // eax

  sub_1800392AC();
  result = o___stdio_common_vswprintf();
  if ( result < 0 )
    return -1;
  return result;
}

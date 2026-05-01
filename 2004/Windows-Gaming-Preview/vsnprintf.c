/*
 * XREFs of vsnprintf @ 0x180045438
 * Callers:
 *     sub_180001B58 @ 0x180001B58 (sub_180001B58.c)
 *     sub_180001BD8 @ 0x180001BD8 (sub_180001BD8.c)
 * Callees:
 *     sub_180043CBC @ 0x180043CBC (sub_180043CBC.c)
 *     _o___stdio_common_vswprintf @ 0x1800452EE (_o___stdio_common_vswprintf.c)
 */

int __cdecl vsnprintf(char *DstBuf, size_t MaxCount, const char *Format, va_list ArgList)
{
  int result; // eax

  sub_180043CBC();
  result = o___stdio_common_vswprintf();
  if ( result < 0 )
    return -1;
  return result;
}

/*
 * XREFs of vsnprintf_0 @ 0x18006AD0C
 * Callers:
 *     sub_18013C4A4 @ 0x18013C4A4 (sub_18013C4A4.c)
 * Callees:
 *     sub_18006954C @ 0x18006954C (sub_18006954C.c)
 *     _o___stdio_common_vsprintf @ 0x18006AAA2 (_o___stdio_common_vsprintf.c)
 */

int __cdecl vsnprintf_0(char *DstBuf, size_t MaxCount, const char *Format, va_list ArgList)
{
  int result; // eax

  sub_18006954C();
  result = o___stdio_common_vsprintf();
  if ( result < 0 )
    return -1;
  return result;
}

/*
 * XREFs of vswprintf_s @ 0x18003CBB4
 * Callers:
 *     ??$swprintf_s@$0FC@@@YAHAEAY0FC@GPEBGZZ @ 0x180031490 (--$swprintf_s@$0FC@@@YAHAEAY0FC@GPEBGZZ.c)
 *     ??$swprintf_s@$0DI@@@YAHAEAY0DI@GPEBGZZ @ 0x1800BF154 (--$swprintf_s@$0DI@@@YAHAEAY0DI@GPEBGZZ.c)
 *     ??$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ @ 0x1800C56D8 (--$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ.c)
 *     ??$swprintf_s@$0IA@@@YAHAEAY0IA@_WPEB_WZZ @ 0x1800CE0CC (--$swprintf_s@$0IA@@@YAHAEAY0IA@_WPEB_WZZ.c)
 *     ??$swprintf_s@$0CAA@@@YAHAEAY0CAA@_WPEB_WZZ @ 0x1800DE88C (--$swprintf_s@$0CAA@@@YAHAEAY0CAA@_WPEB_WZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18003294C (__local_stdio_printf_options.c)
 *     __stdio_common_vswprintf_s @ 0x18003C336 (__stdio_common_vswprintf_s.c)
 */

int __cdecl vswprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, va_list ArgList)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = _stdio_common_vswprintf_s(*v8, Buffer, BufferCount, Format, 0LL, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}

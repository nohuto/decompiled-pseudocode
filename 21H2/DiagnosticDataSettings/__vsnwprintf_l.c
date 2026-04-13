/*
 * XREFs of __vsnwprintf_l @ 0x10004BF7
 * Callers:
 *     __vsnwprintf @ 0x10004C2A (__vsnwprintf.c)
 * Callees:
 *     ___local_stdio_printf_options @ 0x10003ED1 (___local_stdio_printf_options.c)
 *     __o___stdio_common_vswprintf @ 0x10004B9C (__o___stdio_common_vswprintf.c)
 */

int __cdecl _vsnwprintf_l(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const wchar_t *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  unsigned __int64 *v5; // eax
  int result; // eax
  unsigned __int64 v7; // [esp-1Ch] [ebp-1Ch]

  v5 = __local_stdio_printf_options();
  HIDWORD(v7) = *((_DWORD *)v5 + 1);
  LODWORD(v7) = *(_DWORD *)v5 | 1;
  result = _o___stdio_common_vswprintf(v7, Buffer, BufferCount, Format, Locale, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}

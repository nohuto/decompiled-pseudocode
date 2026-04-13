/*
 * XREFs of __o___stdio_common_vswprintf @ 0x10004B9C
 * Callers:
 *     __vsnwprintf_l @ 0x10004BF7 (__vsnwprintf_l.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl _o___stdio_common_vswprintf(
        unsigned __int64 Options,
        wchar_t *Buffer,
        size_t BufferCount,
        const wchar_t *Format,
        _locale_t Locale,
        va_list ArgList)
{
  return ___stdio_common_vswprintf(Options, Buffer, BufferCount, Format, Locale, ArgList);
}

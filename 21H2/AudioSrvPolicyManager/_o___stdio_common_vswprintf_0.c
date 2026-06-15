/*
 * XREFs of _o___stdio_common_vswprintf_0 @ 0x18003A6F2
 * Callers:
 *     _vsnwprintf @ 0x18003A7E4 (_vsnwprintf.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl o___stdio_common_vswprintf_0(
        unsigned __int64 Options,
        wchar_t *Buffer,
        size_t BufferCount,
        const wchar_t *Format,
        _locale_t Locale,
        va_list ArgList)
{
  return __stdio_common_vswprintf(Options, Buffer, BufferCount, Format, Locale, ArgList);
}

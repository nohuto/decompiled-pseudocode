/*
 * XREFs of _o___stdio_common_vsprintf_0 @ 0x18006B4B2
 * Callers:
 *     _vsnprintf @ 0x18006B71C (_vsnprintf.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl o___stdio_common_vsprintf_0(
        unsigned __int64 Options,
        char *Buffer,
        size_t BufferCount,
        const char *Format,
        _locale_t Locale,
        va_list ArgList)
{
  return __stdio_common_vsprintf(Options, Buffer, BufferCount, Format, Locale, ArgList);
}

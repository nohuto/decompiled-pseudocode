/*
 * XREFs of _o___stdio_common_vsprintf_0 @ 0x1800E24BA
 * Callers:
 *     _vsnprintf @ 0x1800E26E8 (_vsnprintf.c)
 *     _scprintf @ 0x1800E2750 (_scprintf.c)
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

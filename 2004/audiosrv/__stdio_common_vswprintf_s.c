/*
 * XREFs of __stdio_common_vswprintf_s @ 0x18006B5CA
 * Callers:
 *     vswprintf_s @ 0x18006B710 (vswprintf_s.c)
 *     swprintf_s @ 0x18006B7C4 (swprintf_s.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl _stdio_common_vswprintf_s(
        unsigned __int64 Options,
        wchar_t *Buffer,
        size_t BufferCount,
        const wchar_t *Format,
        _locale_t Locale,
        va_list ArgList)
{
  return _o___stdio_common_vswprintf_s(Options, Buffer, BufferCount, Format, Locale, ArgList);
}

/*
 * XREFs of _o___stdio_common_vswscanf_0 @ 0x18003C342
 * Callers:
 *     swscanf_s @ 0x18003CC18 (swscanf_s.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl o___stdio_common_vswscanf_0(
        unsigned __int64 Options,
        const wchar_t *Buffer,
        size_t BufferCount,
        const wchar_t *Format,
        _locale_t Locale,
        va_list ArgList)
{
  return __stdio_common_vswscanf(Options, Buffer, BufferCount, Format, Locale, ArgList);
}

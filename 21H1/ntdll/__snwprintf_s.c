/*
 * XREFs of __snwprintf_s @ 0x4B2FF750
 * Callers:
 *     _RtlQueryAtomInAtomTable@24 @ 0x4B2A9E90 (_RtlQueryAtomInAtomTable@24.c)
 * Callees:
 *     __vsnwprintf_s @ 0x4B2FF780 (__vsnwprintf_s.c)
 */

int _snwprintf_s(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const wchar_t *const Format,
        ...)
{
  va_list ArgList; // [esp+18h] [ebp+18h] BYREF

  va_start(ArgList, Format);
  return _vsnwprintf_s(Buffer, BufferCount, MaxCount, Format, ArgList);
}

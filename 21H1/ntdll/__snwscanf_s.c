/*
 * XREFs of __snwscanf_s @ 0x4B2FF810
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __swinput_s @ 0x4B302D82 (__swinput_s.c)
 */

int _snwscanf_s(const wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list va; // [esp+14h] [ebp+14h] BYREF

  va_start(va, Format);
  if ( Format )
    return _swinput_s(Buffer, BufferCount, Format, va);
  _invalid_parameter();
  return -1;
}

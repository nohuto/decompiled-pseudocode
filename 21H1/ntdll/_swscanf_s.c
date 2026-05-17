/*
 * XREFs of _swscanf_s @ 0x4B3004B0
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __swinput_s @ 0x4B302D82 (__swinput_s.c)
 */

int swscanf_s(const wchar_t *const Buffer, const wchar_t *const Format, ...)
{
  va_list va; // [esp+10h] [ebp+10h] BYREF

  va_start(va, Format);
  if ( Format )
    return _swinput_s(Buffer, wcslen(Buffer), Format, va);
  _invalid_parameter();
  return -1;
}

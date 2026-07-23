/*
 * XREFs of _vswprintf_s @ 0x4B300450
 * Callers:
 *     _swprintf_s @ 0x4B300420 (_swprintf_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __swoutput_s @ 0x4B301EAA (__swoutput_s.c)
 */

int __cdecl vswprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, va_list ArgList)
{
  int result; // eax

  if ( !Buffer || !(_DWORD)BufferCount || !HIDWORD(BufferCount) )
    goto LABEL_6;
  result = _swoutput_s(Buffer, BufferCount, HIDWORD(BufferCount), Format);
  if ( result >= 0 )
    return result;
  *Buffer = 0;
  if ( result == -2 )
LABEL_6:
    _invalid_parameter();
  return -1;
}

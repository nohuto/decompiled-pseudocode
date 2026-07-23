/*
 * XREFs of _vsprintf_s @ 0x4B2FFF90
 * Callers:
 *     _sprintf_s @ 0x4B2FFF60 (_sprintf_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __soutput_s @ 0x4B3012D8 (__soutput_s.c)
 */

int __cdecl vsprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  int result; // eax

  if ( !Buffer || !(_DWORD)BufferCount || !HIDWORD(BufferCount) )
    goto LABEL_6;
  result = _soutput_s(Buffer, BufferCount, HIDWORD(BufferCount), Format);
  if ( result >= 0 )
    return result;
  *Buffer = 0;
  if ( result == -2 )
LABEL_6:
    _invalid_parameter();
  return -1;
}

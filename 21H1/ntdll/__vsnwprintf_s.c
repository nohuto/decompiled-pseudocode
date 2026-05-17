/*
 * XREFs of __vsnwprintf_s @ 0x4B2FF780
 * Callers:
 *     __snwprintf_s @ 0x4B2FF750 (__snwprintf_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __swoutput_s @ 0x4B301EAA (__swoutput_s.c)
 */

int __cdecl _vsnwprintf_s(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const wchar_t *const Format,
        va_list ArgList)
{
  int result; // eax

  if ( !Format )
    goto LABEL_12;
  if ( MaxCount )
  {
    if ( !Buffer )
    {
LABEL_12:
      _invalid_parameter();
      return -1;
    }
  }
  else if ( !Buffer )
  {
    if ( !BufferCount )
      return 0;
    goto LABEL_12;
  }
  if ( !BufferCount )
    goto LABEL_12;
  if ( BufferCount > MaxCount )
  {
    result = _swoutput_s(Buffer, MaxCount + 1, Format, ArgList);
    if ( result == -2 )
      return -1;
    goto LABEL_10;
  }
  result = _swoutput_s(Buffer, BufferCount, Format, ArgList);
  if ( result != -2 )
  {
LABEL_10:
    if ( result >= 0 )
      return result;
    goto LABEL_11;
  }
  if ( MaxCount == -1 )
    return -1;
LABEL_11:
  *Buffer = 0;
  if ( result == -2 )
    goto LABEL_12;
  return -1;
}

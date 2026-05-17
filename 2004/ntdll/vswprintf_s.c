/*
 * XREFs of vswprintf_s @ 0x180097A90
 * Callers:
 *     swprintf_s @ 0x180097A60 (swprintf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008C168 (_invalid_parameter.c)
 *     _swoutput_s @ 0x1800998AC (_swoutput_s.c)
 */

int __cdecl vswprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, va_list ArgList)
{
  int result; // eax

  if ( !Buffer || !BufferCount || !Format )
    goto LABEL_6;
  result = swoutput_s(Buffer, BufferCount, Format, ArgList);
  if ( result >= 0 )
    return result;
  *Buffer = 0;
  if ( result == -2 )
LABEL_6:
    invalid_parameter();
  return -1;
}

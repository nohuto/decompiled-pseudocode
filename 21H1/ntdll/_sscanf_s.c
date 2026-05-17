/*
 * XREFs of _sscanf_s @ 0x4B2FFFE0
 * Callers:
 *     _RtlIncrementCorrelationVector@4 @ 0x4B3622A0 (_RtlIncrementCorrelationVector@4.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __sinput_s @ 0x4B301E1A (__sinput_s.c)
 */

int sscanf_s(const char *const Buffer, const char *const Format, ...)
{
  va_list va; // [esp+10h] [ebp+10h] BYREF

  va_start(va, Format);
  if ( Format )
    return _sinput_s(Buffer, strlen(Buffer), Format, va);
  _invalid_parameter();
  return -1;
}

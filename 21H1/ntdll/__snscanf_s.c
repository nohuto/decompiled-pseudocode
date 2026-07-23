/*
 * XREFs of __snscanf_s @ 0x4B2FF710
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __sinput_s @ 0x4B301E1A (__sinput_s.c)
 */

int _snscanf_s(const char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  if ( HIDWORD(BufferCount) )
    return _sinput_s(Buffer, BufferCount, HIDWORD(BufferCount), &Format);
  _invalid_parameter();
  return -1;
}

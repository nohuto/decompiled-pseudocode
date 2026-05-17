/*
 * XREFs of _snwscanf_s @ 0x180096BD0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18008C168 (_invalid_parameter.c)
 *     _swinput_s @ 0x18009A7B8 (_swinput_s.c)
 */

int snwscanf_s(const wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return swinput_s(Buffer, BufferCount, Format, (__int64 *)va);
  invalid_parameter();
  return -1;
}

/*
 * XREFs of __snprintf @ 0x4B2F7080
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __flsbuf_s @ 0x4B2FB99A (__flsbuf_s.c)
 *     __output_l @ 0x4B2FB9B0 (__output_l.c)
 */

int _snprintf(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int v3; // edi
  char *v5; // [esp+8h] [ebp-20h] BYREF
  int v6; // [esp+Ch] [ebp-1Ch]
  char *v7; // [esp+10h] [ebp-18h]
  int v8; // [esp+14h] [ebp-14h]

  if ( HIDWORD(BufferCount) && (!(_DWORD)BufferCount || Buffer) )
  {
    v6 = 0x7FFFFFFF;
    if ( (unsigned int)BufferCount <= 0x7FFFFFFF )
      v6 = BufferCount;
    v8 = 66;
    v7 = Buffer;
    v5 = Buffer;
    v3 = _output_l(&v5, HIDWORD(BufferCount), 0, &Format);
    if ( Buffer )
    {
      if ( --v6 < 0 )
        _flsbuf_s(0, &v5);
      else
        *v5 = 0;
    }
    return v3;
  }
  else
  {
    _invalid_parameter();
    return -1;
  }
}

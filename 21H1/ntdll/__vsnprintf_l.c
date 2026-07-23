/*
 * XREFs of __vsnprintf_l @ 0x4B2F781D
 * Callers:
 *     __vsnprintf @ 0x4B2F7800 (__vsnprintf.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __flsbuf_s @ 0x4B2FB99A (__flsbuf_s.c)
 *     __output_l @ 0x4B2FB9B0 (__output_l.c)
 */

int __cdecl _vsnprintf_l(
        char *const Buffer,
        const size_t BufferCount,
        const char *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int v5; // edi
  char *v7; // [esp+4h] [ebp-20h] BYREF
  int v8; // [esp+8h] [ebp-1Ch]
  char *v9; // [esp+Ch] [ebp-18h]
  int v10; // [esp+10h] [ebp-14h]

  if ( HIDWORD(BufferCount) && (!(_DWORD)BufferCount || Buffer) )
  {
    v8 = 0x7FFFFFFF;
    if ( (unsigned int)BufferCount <= 0x7FFFFFFF )
      v8 = BufferCount;
    v10 = 66;
    v9 = Buffer;
    v7 = Buffer;
    v5 = _output_l(&v7, HIDWORD(BufferCount), Format, Locale);
    if ( Buffer )
    {
      if ( --v8 < 0 )
        _flsbuf_s(0, &v7);
      else
        *v7 = 0;
    }
    return v5;
  }
  else
  {
    _invalid_parameter();
    return -1;
  }
}

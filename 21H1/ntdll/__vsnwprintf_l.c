/*
 * XREFs of __vsnwprintf_l @ 0x4B2F78CD
 * Callers:
 *     __vsnwprintf @ 0x4B2F78B0 (__vsnwprintf.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __flsbuf_s @ 0x4B2FB99A (__flsbuf_s.c)
 *     __woutput_l @ 0x4B2FC3A0 (__woutput_l.c)
 */

int __cdecl _vsnwprintf_l(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const wchar_t *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int v5; // edi
  wchar_t *v6; // eax
  wchar_t *v8; // [esp+8h] [ebp-20h] BYREF
  int v9; // [esp+Ch] [ebp-1Ch]
  wchar_t *v10; // [esp+10h] [ebp-18h]
  int v11; // [esp+14h] [ebp-14h]

  if ( HIDWORD(BufferCount) && (!(_DWORD)BufferCount || Buffer) )
  {
    v11 = 66;
    v10 = Buffer;
    v8 = Buffer;
    if ( (unsigned int)BufferCount <= 0x3FFFFFFF )
      v9 = 2 * BufferCount;
    else
      v9 = 0x7FFFFFFF;
    v5 = _woutput_l(&v8, HIDWORD(BufferCount), Format, Locale);
    if ( Buffer )
    {
      if ( --v9 < 0 )
      {
        _flsbuf_s(0, &v8);
        v6 = v8;
      }
      else
      {
        *(_BYTE *)v8 = 0;
        v6 = (wchar_t *)((char *)v8 + 1);
        v8 = (wchar_t *)((char *)v8 + 1);
      }
      if ( --v9 < 0 )
        _flsbuf_s(0, &v8);
      else
        *(_BYTE *)v6 = 0;
    }
    return v5;
  }
  else
  {
    _invalid_parameter();
    return -1;
  }
}

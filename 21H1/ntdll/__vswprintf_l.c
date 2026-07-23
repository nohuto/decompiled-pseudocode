/*
 * XREFs of __vswprintf_l @ 0x4B2F775A
 * Callers:
 *     __vswprintf @ 0x4B2F7740 (__vswprintf.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __flsbuf_s @ 0x4B2FB99A (__flsbuf_s.c)
 *     __woutput_l @ 0x4B2FC3A0 (__woutput_l.c)
 */

int __cdecl _vswprintf_l(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const wchar_t *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int v5; // esi
  wchar_t *v6; // ecx
  wchar_t *v8; // [esp+4h] [ebp-20h] BYREF
  int v9; // [esp+8h] [ebp-1Ch]
  wchar_t *v10; // [esp+Ch] [ebp-18h]
  int v11; // [esp+10h] [ebp-14h]

  if ( (_DWORD)BufferCount && Buffer )
  {
    v10 = Buffer;
    v8 = Buffer;
    v11 = 66;
    v9 = 0x7FFFFFFF;
    v5 = _woutput_l(&v8, BufferCount, HIDWORD(BufferCount), Format);
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
    return v5;
  }
  else
  {
    _invalid_parameter();
    return -1;
  }
}

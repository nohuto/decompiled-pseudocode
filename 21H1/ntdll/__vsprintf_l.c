/*
 * XREFs of __vsprintf_l @ 0x4B2F766F
 * Callers:
 *     _vsprintf @ 0x4B2F76F0 (_vsprintf.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __flsbuf_s @ 0x4B2FB99A (__flsbuf_s.c)
 *     __output_l @ 0x4B2FB9B0 (__output_l.c)
 */

int __cdecl _vsprintf_l(char *const Buffer, const char *const Format, const _locale_t Locale, va_list ArgList)
{
  int v4; // esi
  char *v6; // [esp+0h] [ebp-20h] BYREF
  int v7; // [esp+4h] [ebp-1Ch]
  char *v8; // [esp+8h] [ebp-18h]
  int v9; // [esp+Ch] [ebp-14h]

  if ( Format && Buffer )
  {
    v8 = Buffer;
    v6 = Buffer;
    v7 = 0x7FFFFFFF;
    v9 = 66;
    v4 = _output_l(&v6, Format, Locale, ArgList);
    if ( --v7 < 0 )
      _flsbuf_s(0, &v6);
    else
      *v6 = 0;
    return v4;
  }
  else
  {
    _invalid_parameter();
    return -1;
  }
}

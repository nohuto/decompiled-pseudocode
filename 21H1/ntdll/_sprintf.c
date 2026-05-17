/*
 * XREFs of _sprintf @ 0x4B2F9900
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __flsbuf_s @ 0x4B2FB99A (__flsbuf_s.c)
 *     __output_l @ 0x4B2FB9B0 (__output_l.c)
 */

int sprintf(char *const Buffer, const char *const Format, ...)
{
  int v2; // esi
  char *v4; // [esp+4h] [ebp-20h] BYREF
  int v5; // [esp+8h] [ebp-1Ch]
  char *v6; // [esp+Ch] [ebp-18h]
  int v7; // [esp+10h] [ebp-14h]
  va_list va; // [esp+34h] [ebp+10h] BYREF

  va_start(va, Format);
  if ( Format && Buffer )
  {
    v6 = Buffer;
    v4 = Buffer;
    v5 = 0x7FFFFFFF;
    v7 = 66;
    v2 = _output_l(&v4, Format, 0, va);
    if ( --v5 < 0 )
      _flsbuf_s(0, &v4);
    else
      *v4 = 0;
    return v2;
  }
  else
  {
    _invalid_parameter();
    return -1;
  }
}

/*
 * XREFs of __safecrt_wctomb_s @ 0x4B301240
 * Callers:
 *     __output_s @ 0x4B3008FA (__output_s.c)
 * Callees:
 *     _RtlUnicodeToMultiByteN@20 @ 0x4B2E0D70 (_RtlUnicodeToMultiByteN@20.c)
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int _safecrt_wctomb_s(int *a1, _BYTE *a2, size_t Size, ...)
{
  int v4; // eax
  int v6; // [esp+Ch] [ebp-4h] BYREF
  va_list va; // [esp+24h] [ebp+14h] BYREF

  va_start(va, Size);
  if ( !a2 && Size )
  {
    if ( a1 )
      *a1 = 0;
    return 0;
  }
  if ( a1 )
    *a1 = -1;
  if ( Size > 0x7FFFFFFF )
  {
    _invalid_parameter();
    return 22;
  }
  if ( a2 )
  {
    v6 = 0;
    if ( RtlUnicodeToMultiByteN(a2, Size, (unsigned int *)&v6, (unsigned __int16 *)va, 2u) < 0 )
    {
      if ( Size )
        memset(a2, 0, Size);
      return 42;
    }
    if ( a1 )
    {
      v4 = v6;
      goto LABEL_19;
    }
  }
  else if ( a1 )
  {
    v4 = __mb_cur_max;
LABEL_19:
    *a1 = v4;
  }
  return 0;
}

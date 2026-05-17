/*
 * XREFs of __safecrt_mbtowc @ 0x4B3011FE
 * Callers:
 *     __woutput_s @ 0x4B301F94 (__woutput_s.c)
 * Callees:
 *     _RtlAnsiCharToUnicodeChar@4 @ 0x4B2E1DF0 (_RtlAnsiCharToUnicodeChar@4.c)
 */

_BYTE *__cdecl _safecrt_mbtowc(__int16 *a1, _BYTE *a2, int a3)
{
  _BYTE *v3; // esi

  v3 = a2;
  if ( !a2 || !a3 )
    return 0;
  if ( !*a2 )
  {
    if ( a1 )
      *a1 = 0;
    return 0;
  }
  *a1 = RtlAnsiCharToUnicodeChar(&a2);
  return (_BYTE *)(a2 - v3);
}

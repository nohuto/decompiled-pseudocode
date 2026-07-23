/*
 * XREFs of __safecrt_mbtowc @ 0x4B3011FE
 * Callers:
 *     __woutput_s @ 0x4B301F94 (__woutput_s.c)
 * Callees:
 *     _RtlAnsiCharToUnicodeChar@4 @ 0x4B2E1DF0 (_RtlAnsiCharToUnicodeChar@4.c)
 */

UCHAR *__cdecl _safecrt_mbtowc(WCHAR *a1, PUCHAR SourceCharacter, int a3)
{
  PUCHAR v3; // esi

  v3 = SourceCharacter;
  if ( !SourceCharacter || !a3 )
    return 0;
  if ( !*SourceCharacter )
  {
    if ( a1 )
      *a1 = 0;
    return 0;
  }
  *a1 = RtlAnsiCharToUnicodeChar(&SourceCharacter);
  return (UCHAR *)(SourceCharacter - v3);
}

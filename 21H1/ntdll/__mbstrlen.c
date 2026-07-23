/*
 * XREFs of __mbstrlen @ 0x4B2FE132
 * Callers:
 *     _mbstowcs @ 0x4B2F8720 (_mbstowcs.c)
 * Callees:
 *     _RtlAnsiCharToUnicodeChar@4 @ 0x4B2E1DF0 (_RtlAnsiCharToUnicodeChar@4.c)
 */

size_t __cdecl _mbstrlen(const char *String)
{
  size_t result; // rax
  PUCHAR SourceCharacter; // [esp+4h] [ebp-4h] BYREF

  SourceCharacter = (PUCHAR)String;
  while ( RtlAnsiCharToUnicodeChar(&SourceCharacter) )
    ;
  LODWORD(result) = SourceCharacter - (PUCHAR)String - 1;
  return result;
}

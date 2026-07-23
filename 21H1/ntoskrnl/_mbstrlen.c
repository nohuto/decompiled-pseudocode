/*
 * XREFs of _mbstrlen @ 0x1403D1908
 * Callers:
 *     mbstowcs @ 0x1403CE430 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x14061BE80 (RtlAnsiCharToUnicodeChar.c)
 */

size_t __cdecl mbstrlen(const char *Str)
{
  PUCHAR SourceCharacter; // [rsp+30h] [rbp+8h] BYREF

  SourceCharacter = (PUCHAR)Str;
  while ( RtlAnsiCharToUnicodeChar(&SourceCharacter) )
    ;
  return SourceCharacter - (PUCHAR)Str - 1;
}

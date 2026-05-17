/*
 * XREFs of __mbstrlen @ 0x4B2FE132
 * Callers:
 *     _mbstowcs @ 0x4B2F8720 (_mbstowcs.c)
 * Callees:
 *     _RtlAnsiCharToUnicodeChar@4 @ 0x4B2E1DF0 (_RtlAnsiCharToUnicodeChar@4.c)
 */

size_t __cdecl _mbstrlen(const char *String)
{
  const char *v2; // [esp+4h] [ebp-4h] BYREF

  v2 = String;
  while ( RtlAnsiCharToUnicodeChar((unsigned __int8 **)&v2) )
    ;
  return v2 - String - 1;
}

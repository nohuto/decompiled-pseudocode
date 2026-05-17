/*
 * XREFs of _mbstrlen @ 0x180095948
 * Callers:
 *     mbstowcs @ 0x1800905F0 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x1800629A0 (RtlAnsiCharToUnicodeChar.c)
 */

size_t __cdecl mbstrlen(const char *String)
{
  char *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)String;
  while ( (unsigned __int16)RtlAnsiCharToUnicodeChar(&v3) )
    ;
  return v3 - String - 1;
}

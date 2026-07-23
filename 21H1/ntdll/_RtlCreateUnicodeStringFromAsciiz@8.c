/*
 * XREFs of _RtlCreateUnicodeStringFromAsciiz@8 @ 0x4B2CD500
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAnsiStringToUnicodeString@12 @ 0x4B2CC520 (_RtlAnsiStringToUnicodeString@12.c)
 */

BOOLEAN __cdecl RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, PCSTR SourceString)
{
  unsigned int v2; // ecx
  ANSI_STRING v4; // [esp+0h] [ebp-8h] BYREF

  *(_DWORD *)&v4.Length = 0;
  v4.Buffer = (char *)SourceString;
  if ( SourceString )
  {
    v2 = strlen(SourceString);
    if ( v2 > 0xFFFE )
      return 0;
    v4.Length = v2;
    v4.MaximumLength = v2 + 1;
  }
  return RtlAnsiStringToUnicodeString(DestinationString, &v4, 1u) >= 0;
}

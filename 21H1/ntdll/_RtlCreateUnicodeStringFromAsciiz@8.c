/*
 * XREFs of _RtlCreateUnicodeStringFromAsciiz@8 @ 0x4B2CD500
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAnsiStringToUnicodeString@12 @ 0x4B2CC520 (_RtlAnsiStringToUnicodeString@12.c)
 */

bool __stdcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, char *a2)
{
  unsigned int v2; // ecx
  STRING SourceString; // [esp+0h] [ebp-8h] BYREF

  *(_DWORD *)&SourceString.Length = 0;
  SourceString.Buffer = a2;
  if ( a2 )
  {
    v2 = strlen(a2);
    if ( v2 > 0xFFFE )
      return 0;
    SourceString.Length = v2;
    SourceString.MaximumLength = v2 + 1;
  }
  return RtlAnsiStringToUnicodeString(DestinationString, &SourceString, 1u) >= 0;
}

/*
 * XREFs of toupper @ 0x1403CF8F0
 * Callers:
 *     AslStringPatternMatchA @ 0x1407423DC (AslStringPatternMatchA.c)
 * Callees:
 *     RtlUpcaseUnicodeToMultiByteN @ 0x14061B9D0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x14061BE80 (RtlAnsiCharToUnicodeChar.c)
 */

int __cdecl toupper(int C)
{
  int result; // eax
  PUCHAR SourceCharacter; // [rsp+30h] [rbp-10h] BYREF
  int v3; // [rsp+50h] [rbp+10h] BYREF
  CHAR MultiByteString; // [rsp+58h] [rbp+18h] BYREF
  unsigned __int8 v5; // [rsp+59h] [rbp+19h]
  WCHAR UnicodeString; // [rsp+60h] [rbp+20h] BYREF
  ULONG BytesInMultiByteString; // [rsp+68h] [rbp+28h] BYREF

  v3 = C;
  BytesInMultiByteString = 0;
  SourceCharacter = (PUCHAR)&v3;
  UnicodeString = RtlAnsiCharToUnicodeChar(&SourceCharacter);
  if ( RtlUpcaseUnicodeToMultiByteN(&MultiByteString, 2u, &BytesInMultiByteString, &UnicodeString, 2u) < 0 )
    return v3;
  result = (unsigned __int8)MultiByteString;
  if ( BytesInMultiByteString != 1 )
    return v5 | ((unsigned __int8)MultiByteString << 8);
  return result;
}

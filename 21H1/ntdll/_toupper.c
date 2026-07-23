/*
 * XREFs of _toupper @ 0x4B2FA560
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUpcaseUnicodeToMultiByteN@20 @ 0x4B2E0B90 (_RtlUpcaseUnicodeToMultiByteN@20.c)
 *     _RtlAnsiCharToUnicodeChar@4 @ 0x4B2E1DF0 (_RtlAnsiCharToUnicodeChar@4.c)
 */

int __cdecl toupper(int C)
{
  ULONG BytesInMultiByteString; // [esp+0h] [ebp-10h] BYREF
  PUCHAR SourceCharacter; // [esp+4h] [ebp-Ch] BYREF
  WCHAR UnicodeString; // [esp+8h] [ebp-8h] BYREF
  CHAR MultiByteString[4]; // [esp+Ch] [ebp-4h] BYREF

  SourceCharacter = (PUCHAR)&C;
  UnicodeString = RtlAnsiCharToUnicodeChar(&SourceCharacter);
  if ( RtlUpcaseUnicodeToMultiByteN(MultiByteString, 2u, &BytesInMultiByteString, &UnicodeString, 2u) < 0 )
    return C;
  if ( BytesInMultiByteString == 1 )
    return (unsigned __int8)MultiByteString[0];
  return (unsigned __int8)MultiByteString[1] | ((unsigned __int8)MultiByteString[0] << 8);
}

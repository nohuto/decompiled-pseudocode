/*
 * XREFs of _RtlPrefixUnicodeString@12 @ 0x4B2E40C0
 * Callers:
 *     _RtlpProcessIFEOKeyFilter@12 @ 0x4B2AA107 (_RtlpProcessIFEOKeyFilter@12.c)
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _RtlpDetermineDosPathNameType4@16 @ 0x4B2E400E (_RtlpDetermineDosPathNameType4@16.c)
 *     _RtlNtPathNameToDosPathName@16 @ 0x4B32D370 (_RtlNtPathNameToDosPathName@16.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 */

BOOLEAN __cdecl RtlPrefixUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  unsigned int Length; // edx
  unsigned __int16 *Buffer; // edi
  unsigned __int16 *v5; // edx
  char *v6; // ebx
  unsigned __int16 v7; // cx
  unsigned __int16 v9; // si
  char *v10; // ecx
  unsigned __int16 *v11; // [esp+Ch] [ebp-4h]

  Length = String1->Length;
  Buffer = String1->Buffer;
  if ( String2->Length >= Length )
  {
    v5 = (unsigned __int16 *)((char *)Buffer + Length);
    v11 = v5;
    if ( Buffer >= v5 )
      return 1;
    if ( CaseInSensitive )
    {
      v6 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( 1 )
      {
        v7 = *(unsigned __int16 *)((char *)Buffer + (_DWORD)v6);
        if ( *Buffer != v7 )
        {
          v9 = NLS_UPCASE(v7);
          if ( NLS_UPCASE(*Buffer) != v9 )
            return 0;
          v5 = v11;
        }
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
    v10 = (char *)((char *)String2->Buffer - (char *)Buffer);
    while ( *Buffer == *(unsigned __int16 *)((char *)Buffer + (_DWORD)v10) )
    {
      if ( ++Buffer >= v5 )
        return 1;
    }
  }
  return 0;
}

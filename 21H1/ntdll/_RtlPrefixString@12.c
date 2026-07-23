/*
 * XREFs of _RtlPrefixString@12 @ 0x4B2E0A70
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUpperChar@4 @ 0x4B2E0B70 (_RtlUpperChar@4.c)
 */

BOOLEAN __cdecl RtlPrefixString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  unsigned int Length; // edx
  char *Buffer; // esi
  char *v5; // edx
  char *v6; // edi
  CHAR v8; // bl
  char *v9; // ecx
  char *v10; // [esp+Ch] [ebp-Ch]
  CHAR v11; // [esp+10h] [ebp-8h]
  CHAR Character; // [esp+14h] [ebp-4h]

  Length = String1->Length;
  Buffer = String1->Buffer;
  if ( String2->Length >= Length )
  {
    v5 = &Buffer[Length];
    v10 = v5;
    if ( Buffer >= v5 )
      return 1;
    if ( CaseInSensitive )
    {
      v6 = (char *)(String2->Buffer - Buffer);
      while ( 1 )
      {
        v11 = *Buffer;
        Character = Buffer[(_DWORD)v6];
        if ( *Buffer != Character )
        {
          v8 = RtlUpperChar(Character);
          if ( RtlUpperChar(v11) != v8 )
            return 0;
          v5 = v10;
        }
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
    v9 = (char *)(String2->Buffer - Buffer);
    while ( *Buffer == Buffer[(_DWORD)v9] )
    {
      if ( ++Buffer >= v5 )
        return 1;
    }
  }
  return 0;
}

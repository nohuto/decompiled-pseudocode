/*
 * XREFs of _RtlEqualString@12 @ 0x4B2A93F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUpperChar@4 @ 0x4B2E0B70 (_RtlUpperChar@4.c)
 */

BOOLEAN __cdecl RtlEqualString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  int Length; // edx
  char *Buffer; // esi
  char *v6; // edx
  char *v7; // edi
  CHAR v8; // bl
  char *v9; // ecx
  char *v10; // [esp+Ch] [ebp-Ch]
  CHAR v11; // [esp+10h] [ebp-8h]
  CHAR Character; // [esp+14h] [ebp-4h]

  Length = String1->Length;
  if ( Length != String2->Length )
    return 0;
  Buffer = String1->Buffer;
  v6 = &Buffer[Length];
  v10 = v6;
  if ( Buffer < v6 )
  {
    if ( CaseInSensitive )
    {
      v7 = (char *)(String2->Buffer - Buffer);
      while ( 1 )
      {
        v11 = *Buffer;
        Character = Buffer[(_DWORD)v7];
        if ( *Buffer != Character )
        {
          v8 = RtlUpperChar(Character);
          if ( RtlUpperChar(v11) != v8 )
            return 0;
          v6 = v10;
        }
        if ( ++Buffer >= v6 )
          return 1;
      }
    }
    v9 = (char *)(String2->Buffer - Buffer);
    while ( *Buffer == Buffer[(_DWORD)v9] )
    {
      if ( ++Buffer >= v6 )
        return 1;
    }
    return 0;
  }
  return 1;
}

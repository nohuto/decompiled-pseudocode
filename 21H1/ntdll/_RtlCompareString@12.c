/*
 * XREFs of _RtlCompareString@12 @ 0x4B34E130
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUpperChar@4 @ 0x4B2E0B70 (_RtlUpperChar@4.c)
 */

LONG __cdecl RtlCompareString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  char *Buffer; // esi
  unsigned int Length; // edi
  unsigned int v5; // ecx
  char *v6; // ebx
  char *v7; // ebx
  int v8; // eax
  unsigned __int8 v9; // cl
  char *v11; // eax
  unsigned __int8 v12; // dl
  unsigned int v13; // [esp+Ch] [ebp-14h]
  char *v14; // [esp+10h] [ebp-10h]
  CHAR v15; // [esp+17h] [ebp-9h]
  CHAR v16; // [esp+1Fh] [ebp-1h]

  Buffer = String1->Buffer;
  Length = String1->Length;
  v5 = String2->Length;
  v13 = v5;
  if ( Length <= v5 )
    v5 = String1->Length;
  v6 = &Buffer[v5];
  v14 = &Buffer[v5];
  if ( Buffer >= &Buffer[v5] )
    return Length - v13;
  if ( CaseInSensitive )
  {
    v7 = (char *)(String2->Buffer - Buffer);
    while ( 1 )
    {
      v15 = Buffer[(_DWORD)v7];
      if ( *Buffer != v15 )
      {
        v16 = RtlUpperChar(*Buffer);
        LOBYTE(v8) = RtlUpperChar(v15);
        v9 = v16;
        if ( v16 != (_BYTE)v8 )
          break;
      }
      if ( ++Buffer >= v14 )
        return Length - v13;
    }
    v8 = (unsigned __int8)v8;
  }
  else
  {
    v11 = (char *)(String2->Buffer - Buffer);
    while ( 1 )
    {
      v9 = *Buffer;
      v12 = Buffer[(_DWORD)v11];
      if ( *Buffer != v12 )
        break;
      if ( ++Buffer >= v6 )
        return Length - v13;
    }
    v8 = v12;
  }
  return v9 - v8;
}

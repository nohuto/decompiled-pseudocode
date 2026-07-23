/*
 * XREFs of RtlCompareString @ 0x18008B190
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180060D70 (RtlUpperChar.c)
 */

LONG __cdecl RtlCompareString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  unsigned int Length; // edi
  unsigned int v4; // r12d
  __int64 v5; // rbp
  char *Buffer; // rbx
  char *v7; // rbp
  char *v8; // rsi
  CHAR v9; // r14
  int v11; // r15d
  unsigned __int8 v12; // al
  char *v14; // rax
  int v15; // ecx
  int v16; // edx

  Length = String1->Length;
  v4 = String2->Length;
  v5 = String1->Length;
  Buffer = String1->Buffer;
  if ( Length > v4 )
    v5 = String2->Length;
  v7 = &Buffer[v5];
  if ( Buffer >= v7 )
    return Length - v4;
  if ( CaseInSensitive )
  {
    v8 = (char *)(String2->Buffer - Buffer);
    while ( 1 )
    {
      v9 = Buffer[(_QWORD)v8];
      if ( *Buffer != v9 )
      {
        v11 = (unsigned __int8)RtlUpperChar(*Buffer);
        v12 = RtlUpperChar(v9);
        if ( (_BYTE)v11 != v12 )
          break;
      }
      if ( ++Buffer >= v7 )
        return Length - v4;
    }
    return v11 - v12;
  }
  else
  {
    v14 = (char *)(String2->Buffer - Buffer);
    while ( 1 )
    {
      v15 = (unsigned __int8)*Buffer;
      v16 = (unsigned __int8)Buffer[(_QWORD)v14];
      if ( (_BYTE)v15 != (_BYTE)v16 )
        break;
      if ( ++Buffer >= v7 )
        return Length - v4;
    }
    return v15 - v16;
  }
}

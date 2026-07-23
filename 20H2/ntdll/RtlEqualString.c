/*
 * XREFs of RtlEqualString @ 0x180060A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180060D70 (RtlUpperChar.c)
 */

BOOLEAN __cdecl RtlEqualString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  char *Buffer; // rdi
  char *v6; // rsi
  char *v7; // rdx
  char *v8; // r14
  CHAR v9; // cl
  CHAR v10; // bl

  Length = String1->Length;
  if ( (_WORD)Length != String2->Length )
    return 0;
  Buffer = String1->Buffer;
  v6 = &Buffer[Length];
  if ( Buffer < &Buffer[Length] )
  {
    if ( CaseInSensitive )
    {
      v8 = (char *)(String2->Buffer - Buffer);
      while ( 1 )
      {
        v9 = Buffer[(_QWORD)v8];
        if ( *Buffer != v9 )
        {
          v10 = RtlUpperChar(v9);
          if ( RtlUpperChar(*Buffer) != v10 )
            break;
        }
        if ( ++Buffer >= v6 )
          return 1;
      }
    }
    else
    {
      v7 = (char *)(String2->Buffer - Buffer);
      while ( *Buffer == Buffer[(_QWORD)v7] )
      {
        if ( ++Buffer >= v6 )
          return 1;
      }
    }
    return 0;
  }
  return 1;
}

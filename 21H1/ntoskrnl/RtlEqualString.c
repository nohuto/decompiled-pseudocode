/*
 * XREFs of RtlEqualString @ 0x14025BBE0
 * Callers:
 *     HalMatchAcpiOemId @ 0x1403BC170 (HalMatchAcpiOemId.c)
 *     IopInitializeBuiltinDriver @ 0x140A576AC (IopInitializeBuiltinDriver.c)
 *     IopGetBootDiskInformation @ 0x140A8D88C (IopGetBootDiskInformation.c)
 * Callees:
 *     RtlUpperChar @ 0x14061B100 (RtlUpperChar.c)
 */

BOOLEAN __stdcall RtlEqualString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  char *Buffer; // rdi
  char *v5; // rsi
  char *v6; // rbp
  signed __int64 v7; // rsi
  CHAR v9; // r14
  CHAR v10; // bl

  Length = String1->Length;
  if ( (_WORD)Length == String2->Length )
  {
    Buffer = String1->Buffer;
    v5 = String2->Buffer;
    v6 = &Buffer[Length];
    if ( Buffer >= &Buffer[Length] )
      return 1;
    if ( CaseInSensitive )
    {
      while ( 1 )
      {
        v9 = *v5;
        if ( *Buffer != *v5 )
        {
          v10 = RtlUpperChar(*Buffer);
          if ( v10 != RtlUpperChar(v9) )
            break;
        }
        ++Buffer;
        ++v5;
        if ( Buffer >= v6 )
          return 1;
      }
    }
    else
    {
      v7 = v5 - Buffer;
      while ( *Buffer == Buffer[v7] )
      {
        if ( ++Buffer >= v6 )
          return 1;
      }
    }
  }
  return 0;
}

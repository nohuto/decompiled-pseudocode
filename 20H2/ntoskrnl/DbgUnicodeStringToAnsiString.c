/*
 * XREFs of DbgUnicodeStringToAnsiString @ 0x140371964
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x1403718B4 (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1403725E0 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiLoadUserSymbols @ 0x1407CCB5C (MiLoadUserSymbols.c)
 * Callees:
 *     RtlUnicodeStringToAnsiString @ 0x140671490 (RtlUnicodeStringToAnsiString.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x140756CD0 (RtlxUnicodeStringToAnsiSize.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgUnicodeStringToAnsiString(PANSI_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  ULONG v4; // eax
  char *PoolWithTag; // rax

  v4 = RtlxUnicodeStringToAnsiSize(SourceString);
  if ( v4 <= 0xFFFF )
  {
    DestinationString->MaximumLength = v4;
    DestinationString->Length = v4 - 1;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x644C6D4Du);
    DestinationString->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( RtlUnicodeStringToAnsiString(DestinationString, SourceString, 0) >= 0 )
        return 1LL;
      ExFreePoolWithTag(DestinationString->Buffer, 0);
    }
  }
  return 0LL;
}

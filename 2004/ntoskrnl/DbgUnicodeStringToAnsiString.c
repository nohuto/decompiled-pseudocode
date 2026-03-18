/*
 * XREFs of DbgUnicodeStringToAnsiString @ 0x14036FA14
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x14036F964 (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140370690 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiLoadUserSymbols @ 0x1407BE2CC (MiLoadUserSymbols.c)
 * Callees:
 *     RtlUnicodeStringToAnsiString @ 0x1405E5FD0 (RtlUnicodeStringToAnsiString.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x1407480F0 (RtlxUnicodeStringToAnsiSize.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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

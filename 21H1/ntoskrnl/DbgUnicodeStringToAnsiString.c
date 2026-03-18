/*
 * XREFs of DbgUnicodeStringToAnsiString @ 0x14036EDE4
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x14036ED34 (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14036FA60 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiLoadUserSymbols @ 0x1407BB15C (MiLoadUserSymbols.c)
 * Callees:
 *     RtlUnicodeStringToAnsiString @ 0x14061B5F0 (RtlUnicodeStringToAnsiString.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x140746570 (RtlxUnicodeStringToAnsiSize.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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

/*
 * XREFs of RtlIdnToNameprepUnicode @ 0x1800FEF50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x18000D0E4 (RtlpNameprepAsciiWorker.c)
 */

NTSTATUS __cdecl RtlIdnToNameprepUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  return RtlpNameprepAsciiWorker(
           Flags,
           (__int64)SourceString,
           SourceStringLength,
           (__int64)DestinationString,
           (__int64)DestinationStringLength,
           0);
}

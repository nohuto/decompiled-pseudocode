/*
 * XREFs of _RtlIdnToNameprepUnicode@20 @ 0x4B3652D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpNameprepAsciiWorker@24 @ 0x4B2E58F1 (_RtlpNameprepAsciiWorker@24.c)
 */

NTSTATUS __cdecl RtlIdnToNameprepUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  return RtlpNameprepAsciiWorker(SourceStringLength, DestinationString, (int)DestinationStringLength, 0);
}

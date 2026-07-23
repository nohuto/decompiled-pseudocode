/*
 * XREFs of _RtlIdnToAscii@20 @ 0x4B2E58D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpNameprepAsciiWorker@24 @ 0x4B2E58F1 (_RtlpNameprepAsciiWorker@24.c)
 */

NTSTATUS __cdecl RtlIdnToAscii(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  return RtlpNameprepAsciiWorker(SourceStringLength, DestinationString, (int)DestinationStringLength, 1);
}

/*
 * XREFs of RtlIdnToNameprepUnicode @ 0x140918E10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x140918ED0 (RtlpNameprepAsciiWorker.c)
 */

NTSTATUS __stdcall RtlIdnToNameprepUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  return RtlpNameprepAsciiWorker(
           Flags,
           (_DWORD)SourceString,
           SourceStringLength,
           (_DWORD)DestinationString,
           (__int64)DestinationStringLength,
           0);
}

/*
 * XREFs of _LdrQueryImageFileExecutionOptions@24 @ 0x4B2E96C0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlQueryImageFileExecutionOptions@28 @ 0x4B2E9700 (_RtlQueryImageFileExecutionOptions@28.c)
 */

NTSTATUS __cdecl LdrQueryImageFileExecutionOptions(
        PUNICODE_STRING SubKey,
        PCWSTR ValueName,
        ULONG ValueSize,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnedLength)
{
  if ( LdrpIsSecureProcess )
    return -1073741772;
  else
    return RtlQueryImageFileExecutionOptions(
             (int)SubKey,
             ValueName,
             ValueSize,
             (PULONG)Buffer,
             BufferSize,
             (int)ReturnedLength,
             0);
}

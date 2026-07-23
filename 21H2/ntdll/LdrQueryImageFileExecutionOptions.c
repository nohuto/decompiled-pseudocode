/*
 * XREFs of LdrQueryImageFileExecutionOptions @ 0x18007B3F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryImageFileExecutionOptions @ 0x18007B430 (RtlQueryImageFileExecutionOptions.c)
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
             (_DWORD)SubKey,
             (_DWORD)ValueName,
             ValueSize,
             (_DWORD)Buffer,
             BufferSize,
             (__int64)ReturnedLength);
}

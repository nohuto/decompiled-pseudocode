/*
 * XREFs of ZwFlushBuffersFileEx @ 0x1403F5280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushBuffersFileEx(
        HANDLE FileHandle,
        ULONG Flags,
        PVOID Parameters,
        ULONG ParametersSize,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}

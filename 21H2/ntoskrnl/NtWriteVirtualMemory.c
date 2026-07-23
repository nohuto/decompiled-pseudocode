/*
 * XREFs of NtWriteVirtualMemory @ 0x140611AA0
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x1406E58F0 (MiReadWriteVirtualMemory.c)
 */

NTSTATUS __cdecl NtWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesWritten)
{
  return MiReadWriteVirtualMemory(ProcessHandle, (__int64)NumberOfBytesWritten, 0x20u);
}

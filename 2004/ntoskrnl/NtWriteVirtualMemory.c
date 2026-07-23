/*
 * XREFs of NtWriteVirtualMemory @ 0x140701830
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x1405EA680 (MiReadWriteVirtualMemory.c)
 */

NTSTATUS __cdecl NtWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesWritten)
{
  return MiReadWriteVirtualMemory(
           ProcessHandle,
           (size_t)BaseAddress,
           (size_t)Buffer,
           BufferSize,
           (unsigned __int64)NumberOfBytesWritten,
           0x20u);
}

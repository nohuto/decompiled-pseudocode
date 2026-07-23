/*
 * XREFs of NtWriteVirtualMemory @ 0x1406DE950
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x14061FCA0 (MiReadWriteVirtualMemory.c)
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

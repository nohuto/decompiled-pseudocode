/*
 * XREFs of NtWriteVirtualMemory @ 0x1406D4F20
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x140678EE0 (MiReadWriteVirtualMemory.c)
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

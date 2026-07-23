/*
 * XREFs of NtReadVirtualMemory @ 0x1406E58C0
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x1406E58F0 (MiReadWriteVirtualMemory.c)
 */

NTSTATUS __cdecl NtReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  return MiReadWriteVirtualMemory(ProcessHandle, (__int64)NumberOfBytesRead, 0x10u);
}

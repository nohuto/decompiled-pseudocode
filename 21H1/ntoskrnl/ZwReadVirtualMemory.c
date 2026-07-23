/*
 * XREFs of ZwReadVirtualMemory @ 0x1403F2B10
 * Callers:
 *     MmCopyMemory @ 0x1403028D0 (MmCopyMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

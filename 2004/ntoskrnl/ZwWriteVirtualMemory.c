/*
 * XREFs of ZwWriteVirtualMemory @ 0x1403F3D00
 * Callers:
 *     SepAdtCopyToLsaSharedMemory @ 0x140922004 (SepAdtCopyToLsaSharedMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesWritten)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

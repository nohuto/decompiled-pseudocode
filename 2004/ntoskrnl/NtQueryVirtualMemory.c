/*
 * XREFs of NtQueryVirtualMemory @ 0x1405FF990
 * Callers:
 *     NtPssCaptureVaSpaceBulk @ 0x140958900 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 */

NTSTATUS __stdcall NtQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  return MmQueryVirtualMemory(ProcessHandle, MemoryInformationLength, (__int64)ReturnLength, 2);
}

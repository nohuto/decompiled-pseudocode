/*
 * XREFs of NtQueryVirtualMemory @ 0x140621F20
 * Callers:
 *     NtPssCaptureVaSpaceBulk @ 0x14095E6C0 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
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

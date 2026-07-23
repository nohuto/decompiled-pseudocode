/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1403F56F0
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x1402E0A40 (CmSiPrefetchVirtualMemoryRange.c)
 *     PspMapSystemDll @ 0x14064D080 (PspMapSystemDll.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1403FB550
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x14020430C (CmSiPrefetchVirtualMemoryRange.c)
 *     PspMapSystemDll @ 0x1406EF9E8 (PspMapSystemDll.c)
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

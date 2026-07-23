/*
 * XREFs of ZwLockVirtualMemory @ 0x1403F44D0
 * Callers:
 *     CmSiLockViewOfSection @ 0x1402E08C8 (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140598CA0 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

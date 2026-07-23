/*
 * XREFs of ZwLockVirtualMemory @ 0x1403FA330
 * Callers:
 *     CmSiLockViewOfSection @ 0x140203CB4 (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14059CE30 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

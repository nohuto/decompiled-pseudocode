/*
 * XREFs of ZwProtectVirtualMemory @ 0x1403F8B70
 * Callers:
 *     CmSiProtectViewOfSection @ 0x140341D98 (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x140522C54 (KiOpPatchCode.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D4A78 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCheckForUserStackOverflow @ 0x1406BBEC4 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

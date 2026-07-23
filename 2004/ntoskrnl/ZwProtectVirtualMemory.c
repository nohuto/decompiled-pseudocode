/*
 * XREFs of ZwProtectVirtualMemory @ 0x1403F3FC0
 * Callers:
 *     CmSiProtectViewOfSection @ 0x1402D5750 (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x14051F284 (KiOpPatchCode.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405CE5D4 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCheckForUserStackOverflow @ 0x1406E5004 (MiCheckForUserStackOverflow.c)
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

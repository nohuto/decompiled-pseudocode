/*
 * XREFs of ZwProtectVirtualMemory @ 0x1403F2D30
 * Callers:
 *     CmSiProtectViewOfSection @ 0x1402E2494 (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x14051EC34 (KiOpPatchCode.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405CD204 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCheckForUserStackOverflow @ 0x1406C55F4 (MiCheckForUserStackOverflow.c)
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

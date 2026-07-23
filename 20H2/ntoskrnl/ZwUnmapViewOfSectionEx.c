/*
 * XREFs of ZwUnmapViewOfSectionEx @ 0x1403FBB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnmapViewOfSectionEx(HANDLE ProcessHandle, PVOID BaseAddress, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

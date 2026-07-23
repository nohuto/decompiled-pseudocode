/*
 * XREFs of _ZwUnmapViewOfSectionEx@12 @ 0x4B2F4640
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwUnmapViewOfSectionEx(HANDLE ProcessHandle, PVOID BaseAddress, ULONG Flags)
{
  return Wow64SystemServiceCall();
}

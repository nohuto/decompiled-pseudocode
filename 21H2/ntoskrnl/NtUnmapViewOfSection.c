/*
 * XREFs of NtUnmapViewOfSection @ 0x1406845C0
 * Callers:
 *     <none>
 * Callees:
 *     NtUnmapViewOfSectionEx @ 0x140687C90 (NtUnmapViewOfSectionEx.c)
 */

NTSTATUS __cdecl NtUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  return NtUnmapViewOfSectionEx(ProcessHandle, BaseAddress, 0);
}

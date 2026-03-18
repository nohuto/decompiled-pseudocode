/*
 * XREFs of NtOpenProcessToken @ 0x14067E850
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenProcessTokenEx @ 0x14067E870 (NtOpenProcessTokenEx.c)
 */

NTSTATUS __stdcall NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  return NtOpenProcessTokenEx(ProcessHandle, DesiredAccess, 0, TokenHandle);
}

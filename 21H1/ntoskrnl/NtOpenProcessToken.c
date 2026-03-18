/*
 * XREFs of NtOpenProcessToken @ 0x1405E0D40
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenProcessTokenEx @ 0x1405E0D60 (NtOpenProcessTokenEx.c)
 */

NTSTATUS __stdcall NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  return NtOpenProcessTokenEx(ProcessHandle, DesiredAccess, 0, TokenHandle);
}

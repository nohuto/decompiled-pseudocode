/*
 * XREFs of NtOpenProcessToken @ 0x140667040
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenProcessTokenEx @ 0x140667060 (NtOpenProcessTokenEx.c)
 */

NTSTATUS __stdcall NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  return NtOpenProcessTokenEx(ProcessHandle, DesiredAccess, 0, TokenHandle);
}

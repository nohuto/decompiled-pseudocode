/*
 * XREFs of NtOpenProcessToken @ 0x14071DA80
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenProcessTokenEx @ 0x14071DAA0 (NtOpenProcessTokenEx.c)
 */

NTSTATUS __stdcall NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  return NtOpenProcessTokenEx(ProcessHandle, DesiredAccess, 0, TokenHandle);
}

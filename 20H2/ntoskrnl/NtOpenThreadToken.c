/*
 * XREFs of NtOpenThreadToken @ 0x14067E090
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenThreadTokenEx @ 0x14067E0B0 (NtOpenThreadTokenEx.c)
 */

NTSTATUS __stdcall NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  return NtOpenThreadTokenEx(ThreadHandle, DesiredAccess, OpenAsSelf, 0, TokenHandle);
}

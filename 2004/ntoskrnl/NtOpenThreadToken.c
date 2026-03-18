/*
 * XREFs of NtOpenThreadToken @ 0x140666880
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenThreadTokenEx @ 0x1406668A0 (NtOpenThreadTokenEx.c)
 */

NTSTATUS __stdcall NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  return NtOpenThreadTokenEx(ThreadHandle, DesiredAccess, OpenAsSelf, 0, TokenHandle);
}

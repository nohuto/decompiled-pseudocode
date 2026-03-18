/*
 * XREFs of NtOpenThreadToken @ 0x1405E0580
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenThreadTokenEx @ 0x1405E05A0 (NtOpenThreadTokenEx.c)
 */

NTSTATUS __stdcall NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  return NtOpenThreadTokenEx(ThreadHandle, DesiredAccess, OpenAsSelf, 0, TokenHandle);
}

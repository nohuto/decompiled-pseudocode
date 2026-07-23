/*
 * XREFs of NtOpenKeyEx @ 0x14064A130
 * Callers:
 *     <none>
 * Callees:
 *     CmOpenKey @ 0x14064A150 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  return CmOpenKey((_DWORD)KeyHandle, DesiredAccess, (_DWORD)ObjectAttributes, OpenOptions, 0LL);
}

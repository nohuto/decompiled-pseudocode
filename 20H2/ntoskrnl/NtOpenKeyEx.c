/*
 * XREFs of NtOpenKeyEx @ 0x14060C300
 * Callers:
 *     <none>
 * Callees:
 *     CmOpenKey @ 0x14060C320 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  return CmOpenKey((_DWORD)KeyHandle, DesiredAccess, (_DWORD)ObjectAttributes, OpenOptions, 0LL);
}

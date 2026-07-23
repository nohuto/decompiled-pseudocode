/*
 * XREFs of NtCreateKey @ 0x140651F70
 * Callers:
 *     <none>
 * Callees:
 *     CmCreateKey @ 0x140651FB0 (CmCreateKey.c)
 */

NTSTATUS __cdecl NtCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  return CmCreateKey(KeyHandle, DesiredAccess, ObjectAttributes, TitleIndex, Class, CreateOptions, Disposition, 0LL);
}

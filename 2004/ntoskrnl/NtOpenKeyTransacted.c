/*
 * XREFs of NtOpenKeyTransacted @ 0x140864F20
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenKeyTransactedEx @ 0x140653510 (NtOpenKeyTransactedEx.c)
 */

NTSTATUS __cdecl NtOpenKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE TransactionHandle)
{
  return NtOpenKeyTransactedEx(KeyHandle, DesiredAccess, ObjectAttributes, 0, TransactionHandle);
}

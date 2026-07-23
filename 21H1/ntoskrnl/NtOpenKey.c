/*
 * XREFs of NtOpenKey @ 0x1406C2C30
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140A3E1A4 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140A6E9C4 (IopProtectSystemPartition.c)
 * Callees:
 *     CmOpenKey @ 0x1405EA950 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return CmOpenKey(KeyHandle, DesiredAccess, (__int64)ObjectAttributes, 0, 0LL);
}

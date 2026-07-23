/*
 * XREFs of NtOpenKey @ 0x1406E31B0
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140A43A08 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140A6F4C4 (IopProtectSystemPartition.c)
 * Callees:
 *     CmOpenKey @ 0x140693E90 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return CmOpenKey(KeyHandle, DesiredAccess, (__int64)ObjectAttributes, 0, 0LL);
}

/*
 * XREFs of NtOpenKey @ 0x1406BA300
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140A49CA8 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140A759C8 (IopProtectSystemPartition.c)
 * Callees:
 *     CmOpenKey @ 0x14060C320 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return CmOpenKey(KeyHandle, DesiredAccess, (__int64)ObjectAttributes, 0, 0LL);
}

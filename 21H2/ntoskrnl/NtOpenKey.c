/*
 * XREFs of NtOpenKey @ 0x1405F29F0
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140A42C04 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140A73948 (IopProtectSystemPartition.c)
 * Callees:
 *     CmOpenKey @ 0x14064A150 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return CmOpenKey((_DWORD)KeyHandle, DesiredAccess, (_DWORD)ObjectAttributes, 0, 0LL);
}

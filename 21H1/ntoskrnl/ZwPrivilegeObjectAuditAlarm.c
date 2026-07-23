/*
 * XREFs of ZwPrivilegeObjectAuditAlarm @ 0x1403F4A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPrivilegeObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SubsystemName);
}

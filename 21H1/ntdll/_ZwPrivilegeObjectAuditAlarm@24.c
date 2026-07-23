/*
 * XREFs of _ZwPrivilegeObjectAuditAlarm@24 @ 0x4B2F3D00
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwPrivilegeObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  return Wow64SystemServiceCall();
}

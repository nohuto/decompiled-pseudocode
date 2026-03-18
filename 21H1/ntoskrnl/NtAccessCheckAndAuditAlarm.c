/*
 * XREFs of NtAccessCheckAndAuditAlarm @ 0x1406CE7C0
 * Callers:
 *     <none>
 * Callees:
 *     SepAccessCheckAndAuditAlarm @ 0x1405E18A0 (SepAccessCheckAndAuditAlarm.c)
 */

NTSTATUS __stdcall NtAccessCheckAndAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        PUNICODE_STRING ObjectTypeName,
        PUNICODE_STRING ObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ACCESS_MASK DesiredAccess,
        PGENERIC_MAPPING GenericMapping,
        BOOLEAN ObjectCreation,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus,
        PBOOLEAN GenerateOnClose)
{
  return SepAccessCheckAndAuditAlarm(
           (int)SubsystemName,
           (int)HandleId,
           0,
           (int)ObjectTypeName,
           (__int64)ObjectName,
           (__int64)SecurityDescriptor,
           0LL,
           DesiredAccess,
           0,
           0,
           0LL,
           0,
           (__int64)GenericMapping,
           (__int64)GrantedAccess,
           (__int64)AccessStatus,
           (__int64)GenerateOnClose,
           0);
}

/*
 * XREFs of SeOpenObjectAuditAlarm @ 0x1406DCF70
 * Callers:
 *     IopCreateSecurityCheck @ 0x140333A14 (IopCreateSecurityCheck.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     CmpCheckKeyBodyAccess @ 0x1406DCBB4 (CmpCheckKeyBodyAccess.c)
 *     ObCheckObjectAccess @ 0x1406DCDF0 (ObCheckObjectAccess.c)
 * Callees:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405ECB20 (SeOpenObjectAuditAlarmWithTransaction.c)
 */

void __stdcall SeOpenObjectAuditAlarm(
        PUNICODE_STRING ObjectTypeName,
        PVOID Object,
        PUNICODE_STRING AbsoluteObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PACCESS_STATE AccessState,
        BOOLEAN ObjectCreated,
        BOOLEAN AccessGranted,
        KPROCESSOR_MODE AccessMode,
        PBOOLEAN GenerateOnClose)
{
  if ( AccessMode )
    SeOpenObjectAuditAlarmWithTransaction(
      ObjectTypeName,
      Object,
      AbsoluteObjectName,
      SecurityDescriptor,
      AccessState,
      ObjectCreated,
      AccessGranted,
      AccessMode,
      0LL,
      GenerateOnClose);
}

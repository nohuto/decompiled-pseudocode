/*
 * XREFs of SeOpenObjectAuditAlarm @ 0x1405F74E0
 * Callers:
 *     IopCreateSecurityCheck @ 0x140323A1C (IopCreateSecurityCheck.c)
 *     ObCheckObjectAccess @ 0x1405E0970 (ObCheckObjectAccess.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     CmpCheckKeyBodyAccess @ 0x1406C3268 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405F44C0 (SeOpenObjectAuditAlarmWithTransaction.c)
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

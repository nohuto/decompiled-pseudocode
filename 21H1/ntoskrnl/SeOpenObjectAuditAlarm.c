/*
 * XREFs of SeOpenObjectAuditAlarm @ 0x1406BBD30
 * Callers:
 *     IopCreateSecurityCheck @ 0x1402F6C58 (IopCreateSecurityCheck.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     CmpCheckKeyBodyAccess @ 0x1406BB974 (CmpCheckKeyBodyAccess.c)
 *     ObCheckObjectAccess @ 0x1406BBBB0 (ObCheckObjectAccess.c)
 * Callees:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140622140 (SeOpenObjectAuditAlarmWithTransaction.c)
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

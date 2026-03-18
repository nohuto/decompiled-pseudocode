/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x14091CCB0
 * Callers:
 *     NtDeleteKey @ 0x140692140 (NtDeleteKey.c)
 *     NtMakeTemporaryObject @ 0x1407043B0 (NtMakeTemporaryObject.c)
 *     SeDeleteObjectAuditAlarm @ 0x14091CC90 (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091A634 (SepAdtDeleteObjectAuditAlarm.c)
 */

void __stdcall SeDeleteObjectAuditAlarmWithTransaction(PVOID Object, HANDLE Handle, GUID *TransactionId)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SepAdtDeleteObjectAuditAlarm(
    (const UNICODE_STRING *)&SeSubsystemName,
    (unsigned __int64)Handle,
    (__int64 *)&SubjectContext,
    (__int64)Object,
    (__int128 *)TransactionId,
    1);
  SeReleaseSubjectContext(&SubjectContext);
}

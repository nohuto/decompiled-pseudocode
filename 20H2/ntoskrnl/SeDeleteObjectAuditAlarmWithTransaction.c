/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x140923BE0
 * Callers:
 *     NtMakeTemporaryObject @ 0x1405D6D30 (NtMakeTemporaryObject.c)
 *     NtDeleteKey @ 0x140701FA0 (NtDeleteKey.c)
 *     SeDeleteObjectAuditAlarm @ 0x140923BC0 (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x140921564 (SepAdtDeleteObjectAuditAlarm.c)
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

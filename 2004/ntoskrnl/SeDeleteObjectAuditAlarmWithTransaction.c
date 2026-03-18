/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x14091DF60
 * Callers:
 *     NtDeleteKey @ 0x140643C50 (NtDeleteKey.c)
 *     NtMakeTemporaryObject @ 0x14070AF50 (NtMakeTemporaryObject.c)
 *     SeDeleteObjectAuditAlarm @ 0x14091DF40 (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091B8E4 (SepAdtDeleteObjectAuditAlarm.c)
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

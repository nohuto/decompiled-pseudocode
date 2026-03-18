/*
 * XREFs of SeCheckPrivilegedObject @ 0x14077BA84
 * Callers:
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     PspSetProcessPriorityClass @ 0x140702AB4 (PspSetProcessPriorityClass.c)
 *     PspAssignPrimaryToken @ 0x1407A5D14 (PspAssignPrimaryToken.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     SePrivilegeObjectAuditAlarm @ 0x14068D520 (SePrivilegeObjectAuditAlarm.c)
 *     SePrivilegeCheck @ 0x140693160 (SePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 */

BOOLEAN __fastcall SeCheckPrivilegedObject(LUID a1, int a2, int a3, KPROCESSOR_MODE a4)
{
  BOOLEAN v7; // al
  BOOLEAN v8; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-40h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+50h] [rbp-20h] BYREF

  RequiredPrivileges.Privilege[0].Attributes = 0;
  RequiredPrivileges.Privilege[0].Luid = a1;
  RequiredPrivileges.PrivilegeCount = 1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  RequiredPrivileges.Control = 1;
  SeCaptureSubjectContext(&SubjectContext);
  v7 = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, a4);
  v8 = v7;
  if ( a4 )
    SePrivilegeObjectAuditAlarm(a2, (__int64 *)&SubjectContext, a3, (__int64)&RequiredPrivileges, v7, a4);
  SeReleaseSubjectContext(&SubjectContext);
  return v8;
}

/*
 * XREFs of SeCheckPrivilegedObject @ 0x14078A084
 * Callers:
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     PspSetProcessPriorityClass @ 0x1406D5AB4 (PspSetProcessPriorityClass.c)
 *     PspAssignPrimaryToken @ 0x1407B6DE0 (PspAssignPrimaryToken.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     SePrivilegeObjectAuditAlarm @ 0x1405E4F60 (SePrivilegeObjectAuditAlarm.c)
 *     SePrivilegeCheck @ 0x14060BF30 (SePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
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

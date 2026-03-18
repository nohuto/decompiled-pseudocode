/*
 * XREFs of NtCloseObjectAuditAlarm @ 0x1406C4600
 * Callers:
 *     <none>
 * Callees:
 *     SepProbeAndCaptureString_U @ 0x1405E4CE8 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x1405E5248 (SeCheckAuditPrivilege.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140921338 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x140928130 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtCloseObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  int v3; // edi
  char PreviousMode; // si
  NTSTATUS v7; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v3 = (int)HandleId;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !GenerateOnClose )
    return 0;
  SeCaptureSubjectContext(&SubjectContext);
  if ( SeCheckAuditPrivilege((__int64)&SubjectContext, PreviousMode) )
  {
    v7 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P);
    if ( v7 >= 0 )
      SepAdtCloseObjectAuditAlarm((_DWORD)P, v3, (unsigned int)&SubjectContext, 0, 0);
  }
  else
  {
    v7 = -1073741727;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v7 == -1073741670 )
    SepAuditFailed(3221225626LL);
  return v7;
}

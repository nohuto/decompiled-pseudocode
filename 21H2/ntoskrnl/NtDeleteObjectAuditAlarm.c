/*
 * XREFs of NtDeleteObjectAuditAlarm @ 0x140734D80
 * Callers:
 *     <none>
 * Callees:
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SepProbeAndCaptureString_U @ 0x1406934F8 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x1406936AC (SeCheckAuditPrivilege.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091EE84 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x140925A60 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtDeleteObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  int v3; // edi
  char PreviousMode; // bl
  NTSTATUS v7; // ebx
  __int64 v8; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v3 = (int)HandleId;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !GenerateOnClose )
    return 0;
  SeCaptureSubjectContext(&SubjectContext);
  if ( SubjectContext.PrimaryToken )
  {
    if ( SeCheckAuditPrivilege((__int64)&SubjectContext, PreviousMode) )
    {
      v7 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P);
      if ( v7 >= 0 )
        SepAdtDeleteObjectAuditAlarm(
          (_DWORD)P,
          v3,
          (unsigned int)&SubjectContext,
          0,
          0LL,
          0,
          v7,
          SubjectContext.ClientToken,
          *(_QWORD *)&SubjectContext.ImpersonationLevel);
    }
    else
    {
      v7 = -1073741727;
    }
    SeReleaseSubjectContext(&SubjectContext);
    if ( P )
      ExFreePoolWithTag(P, 0);
    v8 = 3221225626LL;
    if ( v7 != -1073741670 )
      return v7;
  }
  else
  {
    v7 = -1073741700;
    v8 = 3221225596LL;
  }
  SepAuditFailed(v8);
  return v7;
}

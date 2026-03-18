/*
 * XREFs of EtwpAccessCheck @ 0x14066BB48
 * Callers:
 *     NtTraceEvent @ 0x14026C620 (NtTraceEvent.c)
 *     EtwpNotifyGuid @ 0x1406329B8 (EtwpNotifyGuid.c)
 *     EtwpCheckGuidAccess @ 0x1406365C4 (EtwpCheckGuidAccess.c)
 *     EtwpAddRegEntryToGroup @ 0x14066BC00 (EtwpAddRegEntryToGroup.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406C6E08 (EtwpCheckLoggerControlAccess.c)
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x14093DF48 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x14029AA90 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall EtwpAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ACCESS_MASK DesiredAccess,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  PSECURITY_SUBJECT_CONTEXT p_SubjectContext; // rdx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+90h] [rbp+18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+20h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !SubjectSecurityContext )
    SeCaptureSubjectContext(&SubjectContext);
  p_SubjectContext = &SubjectContext;
  if ( SubjectSecurityContext )
    p_SubjectContext = SubjectSecurityContext;
  SeAccessCheck(
    SecurityDescriptor,
    p_SubjectContext,
    0,
    DesiredAccess,
    0,
    0LL,
    (PGENERIC_MAPPING)&EtwpGenericMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  if ( !SubjectSecurityContext )
    SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)AccessStatus;
}

/*
 * XREFs of ExpWnfCheckCallerAccess @ 0x1405F75F4
 * Callers:
 *     ExpWnfCheckCrossScopeAccess @ 0x1405E218C (ExpWnfCheckCrossScopeAccess.c)
 *     NtDeleteWnfStateName @ 0x140651E30 (NtDeleteWnfStateName.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140653E94 (ExpWnfSubscribeWnfStateChange.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x140654DC0 (ExpWnfValidatePubSubPreconditions.c)
 *     NtQueryWnfStateNameInformation @ 0x1406C9820 (NtQueryWnfStateNameInformation.c)
 *     ExpNtDeleteWnfStateData @ 0x1407C954C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     SeAccessCheck @ 0x140209C20 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ExpWnfCheckCallerAccess(PSECURITY_DESCRIPTOR SecurityDescriptor, ACCESS_MASK DesiredAccess)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  GrantedAccess = 0;
  AccessStatus = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  if ( !DesiredAccess )
    return 0LL;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  SeAccessCheck(
    SecurityDescriptor,
    &SubjectSecurityContext,
    0,
    DesiredAccess,
    0,
    0LL,
    (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  SeReleaseSubjectContext(&SubjectSecurityContext);
  return (unsigned int)AccessStatus;
}

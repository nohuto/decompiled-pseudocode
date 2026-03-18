/*
 * XREFs of ExpWnfCheckCallerAccess @ 0x140623C90
 * Callers:
 *     NtDeleteWnfStateName @ 0x1406211F0 (NtDeleteWnfStateName.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140622CE4 (ExpWnfSubscribeWnfStateChange.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x140623C10 (ExpWnfValidatePubSubPreconditions.c)
 *     NtQueryWnfStateNameInformation @ 0x1406F6990 (NtQueryWnfStateNameInformation.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140707BF4 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpNtDeleteWnfStateData @ 0x1407BACBC (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     SeAccessCheck @ 0x14029AA90 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
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

/*
 * XREFs of ExpWnfCheckCallerAccess @ 0x140794654
 * Callers:
 *     ExpWnfCheckCrossScopeAccess @ 0x14075ADF8 (ExpWnfCheckCrossScopeAccess.c)
 *     NtQueryWnfStateNameInformation @ 0x140791110 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateName @ 0x1407920F0 (NtDeleteWnfStateName.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1407945D4 (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x14079982C (ExpWnfSubscribeWnfStateChange.c)
 *     ExpNtDeleteWnfStateData @ 0x14085EB0C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
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

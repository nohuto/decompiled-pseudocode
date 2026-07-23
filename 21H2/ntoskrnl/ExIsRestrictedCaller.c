/*
 * XREFs of ExIsRestrictedCaller @ 0x1406017E4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     ExpGetProcessInformation @ 0x140708640 (ExpGetProcessInformation.c)
 *     PspQueryWorkingSetWatch @ 0x1409083B0 (PspQueryWorkingSetWatch.c)
 *     ExpProfileCreate @ 0x14095A72C (ExpProfileCreate.c)
 * Callees:
 *     SeAccessCheck @ 0x1402AB090 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 */

_BOOL8 __fastcall ExIsRestrictedCaller(char a1)
{
  BOOLEAN v1; // bl
  _BOOL8 result; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  result = 0;
  if ( a1 )
  {
    SeCaptureSubjectContext(&SubjectSecurityContext);
    v1 = SeAccessCheck(
           SeMediumDaclSd,
           &SubjectSecurityContext,
           0,
           0x20000u,
           0,
           0LL,
           (PGENERIC_MAPPING)&ExpRestrictedGenericMapping,
           1,
           &GrantedAccess,
           &AccessStatus);
    SeReleaseSubjectContext(&SubjectSecurityContext);
    if ( !v1 || AccessStatus < 0 )
      return 1;
  }
  return result;
}

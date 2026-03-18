/*
 * XREFs of ExIsRestrictedCaller @ 0x1406F252C
 * Callers:
 *     ExpGetProcessInformation @ 0x1405F43A0 (ExpGetProcessInformation.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     PspQueryWorkingSetWatch @ 0x140904E80 (PspQueryWorkingSetWatch.c)
 *     ExpProfileCreate @ 0x140956F1C (ExpProfileCreate.c)
 * Callees:
 *     SeAccessCheck @ 0x14029AA90 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
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

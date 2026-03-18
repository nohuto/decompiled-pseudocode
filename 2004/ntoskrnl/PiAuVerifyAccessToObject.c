/*
 * XREFs of PiAuVerifyAccessToObject @ 0x1406F7FE0
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x1405D7C84 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x1405D7EC0 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     PiUEventApplyAdditionalFilters @ 0x140648158 (PiUEventApplyAdditionalFilters.c)
 *     PiAuDoesClientHaveAccess @ 0x1406F7F9C (PiAuDoesClientHaveAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x14029AA90 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall PiAuVerifyAccessToObject(
        ACCESS_MASK DesiredAccess,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PGENERIC_MAPPING GenericMapping,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        BOOLEAN *a5)
{
  unsigned int v5; // ebx
  KPROCESSOR_MODE AccessMode; // al
  BOOLEAN *v11; // rdi
  PSECURITY_SUBJECT_CONTEXT p_SubjectContext; // rdx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-40h] BYREF
  NTSTATUS AccessStatus; // [rsp+A8h] [rbp+10h] BYREF

  v5 = 0;
  GrantedAccess = 0;
  AccessStatus = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  AccessMode = 1;
  if ( SecurityDescriptor && (v11 = a5) != 0LL )
  {
    *a5 = 0;
    if ( !SubjectSecurityContext )
    {
      SeCaptureSubjectContext(&SubjectContext);
      AccessMode = KeGetCurrentThread()->PreviousMode;
    }
    p_SubjectContext = &SubjectContext;
    if ( SubjectSecurityContext )
      p_SubjectContext = SubjectSecurityContext;
    *v11 = SeAccessCheck(
             SecurityDescriptor,
             p_SubjectContext,
             0,
             DesiredAccess,
             0,
             0LL,
             GenericMapping,
             AccessMode,
             &GrantedAccess,
             &AccessStatus);
    if ( !SubjectSecurityContext )
      SeReleaseSubjectContext(&SubjectContext);
    if ( AccessStatus < 0 )
      *v11 = 0;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}

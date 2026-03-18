/*
 * XREFs of PiAuVerifyAccessToObject @ 0x1406B2B64
 * Callers:
 *     PiUEventApplyAdditionalFilters @ 0x140684E24 (PiUEventApplyAdditionalFilters.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1406A62B8 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x1406A64F0 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     PiAuDoesClientHaveAccess @ 0x1406B2B20 (PiAuDoesClientHaveAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x140207F80 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
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

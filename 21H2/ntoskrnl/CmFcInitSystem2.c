/*
 * XREFs of CmFcInitSystem2 @ 0x140A38398
 * Callers:
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 * Callees:
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x14039E610 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x140655B30 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 *     SeAssignSecurity @ 0x14066A500 (SeAssignSecurity.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A38784 (CmFcManagerStartRuntimePhase.c)
 */

__int64 CmFcInitSystem2()
{
  int started; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-28h] BYREF
  PSECURITY_DESCRIPTOR ExplicitDescriptor; // [rsp+70h] [rbp+8h] BYREF

  ExplicitDescriptor = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  started = SeConvertStringSecurityDescriptorToSecurityDescriptor(
              (__int64)L"O:SYG:SYD:(A;;GA;;;SY)(A;;GA;;;BA)",
              1,
              (__int64)&ExplicitDescriptor,
              0LL);
  if ( started >= 0 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    started = SeAssignSecurity(
                0LL,
                ExplicitDescriptor,
                &CmFcFeatureConfigSecurityDescriptor,
                0,
                &SubjectContext,
                &CmFcFeatureConfigMapping,
                PagedPool);
    SeReleaseSubjectContext(&SubjectContext);
    if ( started >= 0 )
    {
      started = CmFcManagerStartRuntimePhase();
      if ( started >= 0 )
        started = 0;
    }
  }
  if ( ExplicitDescriptor )
    ExFreePoolWithTag(ExplicitDescriptor, 0);
  return (unsigned int)started;
}

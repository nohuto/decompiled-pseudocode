/*
 * XREFs of CmFcInitSystem2 @ 0x140B152D4
 * Callers:
 *     CmInitSystem1 @ 0x140B15F88 (CmInitSystem1.c)
 * Callees:
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1402D0E30 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     SeAssignSecurity @ 0x140719100 (SeAssignSecurity.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B156F8 (CmFcManagerStartRuntimePhase.c)
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

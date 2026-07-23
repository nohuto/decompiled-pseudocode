/*
 * XREFs of CmFcInitSystem2 @ 0x140A39398
 * Callers:
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 * Callees:
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x14039E760 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SeAssignSecurity @ 0x14065F320 (SeAssignSecurity.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A39784 (CmFcManagerStartRuntimePhase.c)
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

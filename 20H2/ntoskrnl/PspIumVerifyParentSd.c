/*
 * XREFs of PspIumVerifyParentSd @ 0x14090F504
 * Callers:
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
 * Callees:
 *     SeAccessCheck @ 0x140209C20 (SeAccessCheck.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x14039E9D0 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspIumVerifyParentSd(int a1, NTSTATUS a2, __int64 a3)
{
  __int64 result; // rax
  _BYTE v4[8]; // [rsp+50h] [rbp-30h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-28h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-20h] BYREF
  NTSTATUS AccessStatus; // [rsp+98h] [rbp+18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+A8h] [rbp+28h] BYREF

  AccessStatus = a2;
  SecurityDescriptor = 0LL;
  GrantedAccess = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  result = SeConvertStringSecurityDescriptorToSecurityDescriptor(a3, a1, (__int64)&SecurityDescriptor, (__int64)v4);
  AccessStatus = result;
  if ( (int)result >= 0 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    SeAccessCheck(
      SecurityDescriptor,
      &SubjectContext,
      0,
      0x80u,
      0,
      0LL,
      &PsTrustletGenericMapping,
      1,
      &GrantedAccess,
      &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
    ExFreePoolWithTag(SecurityDescriptor, 0);
    return (unsigned int)AccessStatus;
  }
  return result;
}

/*
 * XREFs of ExCpuSetResourceManagerAccessCheck @ 0x14031B374
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 *     NtAcquireProcessActivityReference @ 0x14072D060 (NtAcquireProcessActivityReference.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140223DC0 (SeAccessCheckWithHint.c)
 *     SeCaptureSubjectContextEx @ 0x140602A50 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall ExCpuSetResourceManagerAccessCheck(KPROCESSOR_MODE a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+90h] [rbp+8h] BYREF
  int v6; // [rsp+98h] [rbp+10h] BYREF

  v6 = 0;
  v5 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a1 || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a1) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
  SeAccessCheckWithHint(
    (__int64)ExpCpuSetSecurityDescriptor,
    7LL,
    (__int64)&SubjectContext,
    0LL,
    1,
    0,
    0LL,
    (__int64)&ExpRestrictedGenericMapping,
    a1,
    (__int64)&v6,
    (__int64)&v5);
  SeReleaseSubjectContext(&SubjectContext);
  return v5;
}

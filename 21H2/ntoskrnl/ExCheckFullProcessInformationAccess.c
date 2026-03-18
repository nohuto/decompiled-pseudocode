/*
 * XREFs of ExCheckFullProcessInformationAccess @ 0x1406D75F4
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     ExpGetProcessInformation @ 0x1407B6CA0 (ExpGetProcessInformation.c)
 *     NtSetDefaultLocale @ 0x1407F42D0 (NtSetDefaultLocale.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x1409F3D68 (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F3EC0 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     RtlRunOnceExecuteOnce @ 0x14075BD80 (RtlRunOnceExecuteOnce.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

NTSTATUS __fastcall ExCheckFullProcessInformationAccess(char a1)
{
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-20h] BYREF
  __int64 v4; // [rsp+90h] [rbp+10h] BYREF
  __int64 v5; // [rsp+98h] [rbp+18h] BYREF
  PVOID Context; // [rsp+A0h] [rbp+20h] BYREF

  LODWORD(v5) = 0;
  Context = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( a1 != 1 )
    return -1073741790;
  result = RtlRunOnceExecuteOnce(&ExpFullProcessInfoInit, ExpInitFullProcessSecurityInfo, 0LL, &Context);
  LODWORD(v4) = result;
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
    SeAccessCheckWithHint(
      (__int64)Context,
      7,
      &SubjectContext,
      0,
      1u,
      0,
      0LL,
      (__int64)&ExpRestrictedGenericMapping,
      1,
      (unsigned int *)&v5,
      (int *)&v4);
    SeReleaseSubjectContext(&SubjectContext);
    return v4;
  }
  return result;
}

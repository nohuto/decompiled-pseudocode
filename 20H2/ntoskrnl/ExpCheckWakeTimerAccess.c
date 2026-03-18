/*
 * XREFs of ExpCheckWakeTimerAccess @ 0x14078A808
 * Callers:
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 *     ExpCheckIRTimerAccess @ 0x14076E778 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140223DC0 (SeAccessCheckWithHint.c)
 *     SeCaptureSubjectContextEx @ 0x140602A50 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ExpCheckWakeTimerAccess(char a1)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v3; // [rsp+90h] [rbp+8h] BYREF
  int v4; // [rsp+98h] [rbp+10h] BYREF

  v4 = 0;
  v3 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a1 )
    return 3221225506LL;
  SeCaptureSubjectContextEx(0LL, KeGetCurrentThread()->ApcState.Process, &SubjectContext);
  SeAccessCheckWithHint(
    (__int64)ExpWakeTimerSecurityDescriptor,
    7LL,
    (__int64)&SubjectContext,
    0LL,
    1,
    0,
    0LL,
    (__int64)&ExTimerObjectType->TypeInfo.GenericMapping,
    1,
    (__int64)&v4,
    (__int64)&v3);
  SeReleaseSubjectContext(&SubjectContext);
  return v3;
}

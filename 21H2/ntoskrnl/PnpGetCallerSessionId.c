/*
 * XREFs of PnpGetCallerSessionId @ 0x140946F98
 * Callers:
 *     PiCMQueryRemove @ 0x14065F7D4 (PiCMQueryRemove.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeQuerySessionIdToken @ 0x14079FB80 (SeQuerySessionIdToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall PnpGetCallerSessionId(PULONG SessionId)
{
  PACCESS_TOKEN PrimaryToken; // rcx
  unsigned int SessionIdToken; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  SessionIdToken = SeQuerySessionIdToken(PrimaryToken, SessionId);
  SeReleaseSubjectContext(&SubjectContext);
  return SessionIdToken;
}

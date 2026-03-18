/*
 * XREFs of PnpGetCallerSessionId @ 0x14089DA0C
 * Callers:
 *     PiCMQueryRemove @ 0x14071AEE8 (PiCMQueryRemove.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     SeQuerySessionIdToken @ 0x1406C21D0 (SeQuerySessionIdToken.c)
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

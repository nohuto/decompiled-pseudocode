/*
 * XREFs of EtwpCoverageUserIsAdmin @ 0x140937F88
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x14076D9E4 (EtwSetProcessTelemetryCoverage.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x14093757C (EtwQueryProcessTelemetryCoverage.c)
 * Callees:
 *     SeTokenIsAdmin @ 0x1405E34A0 (SeTokenIsAdmin.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406168B0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140616910 (SeUnlockSubjectContext.c)
 */

BOOLEAN EtwpCoverageUserIsAdmin()
{
  PACCESS_TOKEN PrimaryToken; // rcx
  BOOLEAN IsAdmin; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  IsAdmin = SeTokenIsAdmin(PrimaryToken);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return IsAdmin;
}

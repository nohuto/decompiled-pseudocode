/*
 * XREFs of EtwpCoverageUserIsAdmin @ 0x140932158
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x14075F374 (EtwSetProcessTelemetryCoverage.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x14093174C (EtwQueryProcessTelemetryCoverage.c)
 * Callees:
 *     SeLockSubjectContext @ 0x1405F3C80 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405F3CE0 (SeUnlockSubjectContext.c)
 *     SeTokenIsAdmin @ 0x140626CB0 (SeTokenIsAdmin.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
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

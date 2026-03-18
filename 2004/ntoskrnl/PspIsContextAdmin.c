/*
 * XREFs of PspIsContextAdmin @ 0x140704A58
 * Callers:
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1407049B8 (PspSetEnergyTrackingStateJobTree.c)
 * Callees:
 *     SeLockSubjectContext @ 0x1405F3C80 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405F3CE0 (SeUnlockSubjectContext.c)
 *     SeTokenIsAdmin @ 0x140626CB0 (SeTokenIsAdmin.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 */

BOOLEAN PspIsContextAdmin()
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

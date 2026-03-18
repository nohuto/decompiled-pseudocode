/*
 * XREFs of PspIsContextAdmin @ 0x1405E249C
 * Callers:
 *     PspSetEnergyTrackingStateJobTree @ 0x1405E23FC (PspSetEnergyTrackingStateJobTree.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 * Callees:
 *     SeTokenIsAdmin @ 0x1405E34A0 (SeTokenIsAdmin.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406168B0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140616910 (SeUnlockSubjectContext.c)
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

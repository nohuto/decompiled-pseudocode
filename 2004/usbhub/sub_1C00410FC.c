/*
 * XREFs of sub_1C00410FC @ 0x1C00410FC
 * Callers:
 *     sub_1C003DF14 @ 0x1C003DF14 (sub_1C003DF14.c)
 *     sub_1C0040864 @ 0x1C0040864 (sub_1C0040864.c)
 * Callees:
 *     <none>
 */

BOOLEAN sub_1C00410FC()
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

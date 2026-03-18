/*
 * XREFs of HUBMISC_VerifyCallerIsAdmin @ 0x1C007DFD8
 * Callers:
 *     HUBFDO_IoctlCyclePort @ 0x1C00780D8 (HUBFDO_IoctlCyclePort.c)
 *     HUBFDO_IoctlResetHub @ 0x1C00785A4 (HUBFDO_IoctlResetHub.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBMISC_VerifyCallerIsAdmin(__int64 a1)
{
  void *PrimaryToken; // rbx
  BOOLEAN IsAdmin; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  if ( !PrimaryToken && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1, 2u, 3u, 0x63u, (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids);
  IsAdmin = SeTokenIsAdmin(PrimaryToken);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return IsAdmin == 0 ? 0xC0000001 : 0;
}

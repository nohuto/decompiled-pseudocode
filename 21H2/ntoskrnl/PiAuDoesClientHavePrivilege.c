/*
 * XREFs of PiAuDoesClientHavePrivilege @ 0x14065FC74
 * Callers:
 *     PiCMDeviceAction @ 0x14065F3BC (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x14065F7D4 (PiCMQueryRemove.c)
 *     PiCMSetDeviceProblem @ 0x14095618C (PiCMSetDeviceProblem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SePrivilegeCheck @ 0x14072B5E0 (SePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

BOOLEAN __fastcall PiAuDoesClientHavePrivilege(unsigned int a1)
{
  KPROCESSOR_MODE PreviousMode; // bl
  BOOLEAN v2; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-50h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+48h] [rbp-30h] BYREF

  RequiredPrivileges.Privilege[0].Attributes = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  RequiredPrivileges.Privilege[0].Luid = (LUID)a1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  v2 = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, PreviousMode);
  SeReleaseSubjectContext(&SubjectContext);
  return v2;
}

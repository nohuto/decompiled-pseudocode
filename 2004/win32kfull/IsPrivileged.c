/*
 * XREFs of IsPrivileged @ 0x1C0039594
 * Callers:
 *     xxxWrapSendMessageBSM @ 0x1C0039480 (xxxWrapSendMessageBSM.c)
 *     NtUserPostThreadMessage @ 0x1C00BE7A0 (NtUserPostThreadMessage.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C00BF210 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     _RegisterDManipHook @ 0x1C011C264 (_RegisterDManipHook.c)
 *     _RegisterUserApiHook @ 0x1C0126348 (_RegisterUserApiHook.c)
 *     NtUserRegisterBSDRWindow @ 0x1C0128820 (NtUserRegisterBSDRWindow.c)
 *     NtUserRegisterServicesProcess @ 0x1C0201890 (NtUserRegisterServicesProcess.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall IsPrivileged(PPRIVILEGE_SET RequiredPrivileges)
{
  BOOLEAN v2; // al
  unsigned int v3; // edi
  _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  v2 = SePrivilegeCheck(RequiredPrivileges, &SubjectContext, 1);
  v3 = v2;
  SePrivilegeObjectAuditAlarm(0LL, &SubjectContext, 0LL, RequiredPrivileges, v2, 1);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !(_BYTE)v3 )
    UserSetLastError(1314LL);
  return v3;
}

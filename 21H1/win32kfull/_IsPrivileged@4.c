/*
 * XREFs of _IsPrivileged@4 @ 0xCB7DA
 * Callers:
 *     _xxxWrapSendMessageBSM@20 @ 0x7D9B6 (_xxxWrapSendMessageBSM@20.c)
 *     _NtUserPostThreadMessage@16 @ 0x82578 (_NtUserPostThreadMessage@16.c)
 *     _NtUserRegisterBSDRWindow@8 @ 0xAECA2 (_NtUserRegisterBSDRWindow@8.c)
 *     ?InitiateShutdownW@@YGJPAU_ETHREAD@@PAK@Z @ 0xD3602 (-InitiateShutdownW@@YGJPAU_ETHREAD@@PAK@Z.c)
 *     __RegisterDManipHook@0 @ 0xE43A6 (__RegisterDManipHook@0.c)
 *     __RegisterUserApiHook@16 @ 0xEABF4 (__RegisterUserApiHook@16.c)
 *     _NtUserRegisterServicesProcess@4 @ 0x1681AA (_NtUserRegisterServicesProcess@4.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __thiscall IsPrivileged(PPRIVILEGE_SET RequiredPrivileges)
{
  BOOLEAN v2; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [esp+Ch] [ebp-14h] BYREF
  int v5; // [esp+1Ch] [ebp-4h]

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  v2 = SePrivilegeCheck(RequiredPrivileges, &SubjectContext, 1);
  LOBYTE(v5) = v2;
  SePrivilegeObjectAuditAlarm(0, &SubjectContext, 0, RequiredPrivileges, v5, 1);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !v2 )
    UserSetLastError((struct _NT_TIB *)0x522);
  return v2;
}

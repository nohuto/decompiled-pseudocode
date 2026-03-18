/*
 * XREFs of ObpAdjustCreatorAccessState @ 0x1406BD90C
 * Callers:
 *     ObpGrantAccess @ 0x1405E08CC (ObpGrantAccess.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 * Callees:
 *     SeComputeCreatorDeniedRights @ 0x140225DE0 (SeComputeCreatorDeniedRights.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405F5900 (ObDereferenceSecurityDescriptor.c)
 *     ObpReferenceSecurityDescriptor @ 0x1405F5C30 (ObpReferenceSecurityDescriptor.c)
 *     RtlMapGenericMask @ 0x1406002F0 (RtlMapGenericMask.c)
 *     SePrivilegedServiceAuditAlarm @ 0x140606DA0 (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x14060BF30 (SePrivilegeCheck.c)
 *     SeAppendPrivileges @ 0x1406B71B0 (SeAppendPrivileges.c)
 */

__int64 __fastcall ObpAdjustCreatorAccessState(PACCESS_STATE AccessState, KPROCESSOR_MODE a2, __int64 a3, __int64 a4)
{
  ACCESS_MASK *p_RemainingDesiredAccess; // rdi
  ACCESS_MASK RemainingDesiredAccess; // eax
  unsigned __int64 v10; // rdi
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+20h] [rbp-48h] BYREF

  p_RemainingDesiredAccess = &AccessState->RemainingDesiredAccess;
  RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  if ( (RemainingDesiredAccess & 0x2000000) != 0 )
  {
    RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
    *p_RemainingDesiredAccess = RemainingDesiredAccess;
  }
  if ( (RemainingDesiredAccess & 0xF0000000) != 0 )
  {
    RtlMapGenericMask(&AccessState->RemainingDesiredAccess, (PGENERIC_MAPPING)(a3 + 76));
    RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  }
  if ( (RemainingDesiredAccess & 0x1000000) != 0 )
  {
    RequiredPrivileges.Privilege[0].Attributes = 0;
    RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    if ( !SePrivilegeCheck(&RequiredPrivileges, &AccessState->SubjectSecurityContext, a2) )
    {
      SePrivilegedServiceAuditAlarm(0LL, (__int64 *)&AccessState->SubjectSecurityContext, (int *)&RequiredPrivileges, 0);
      return 3221225569LL;
    }
    *p_RemainingDesiredAccess &= ~0x1000000u;
    AccessState->PreviouslyGrantedAccess |= 0x1000000u;
    SeAppendPrivileges(AccessState, &RequiredPrivileges);
    RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  }
  AccessState->PreviouslyGrantedAccess |= RemainingDesiredAccess;
  *p_RemainingDesiredAccess = 0;
  AccessState->PreviouslyGrantedAccess &= *(_DWORD *)(a3 + 92) | 0x1000000;
  v10 = ObpReferenceSecurityDescriptor(a4 - 48);
  AccessState->PreviouslyGrantedAccess &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                                           &AccessState->SubjectSecurityContext,
                                                           (__int64)AccessState,
                                                           AccessState->PreviouslyGrantedAccess,
                                                           v10);
  if ( v10 )
    ObDereferenceSecurityDescriptor(v10, 1u);
  return 0LL;
}

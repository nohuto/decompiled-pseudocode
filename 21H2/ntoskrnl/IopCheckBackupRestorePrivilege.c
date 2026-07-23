/*
 * XREFs of IopCheckBackupRestorePrivilege @ 0x14071A2D0
 * Callers:
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x14026A3F0 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     SeAppendPrivileges @ 0x1405EA7C0 (SeAppendPrivileges.c)
 *     SePrivilegeCheck @ 0x140649D60 (SePrivilegeCheck.c)
 */

void __fastcall IopCheckBackupRestorePrivilege(PACCESS_STATE AccessState, _DWORD *a2, char a3, int a4)
{
  char v5; // r14
  ULONG Flags; // ecx
  char v7; // r12
  ACCESS_MASK RemainingDesiredAccess; // esi
  PACCESS_TOKEN ClientToken; // rcx
  int v12; // esi
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+30h] [rbp-58h] BYREF

  v5 = 0;
  Flags = AccessState->Flags;
  v7 = 0;
  if ( (Flags & 0x100) != 0 || (*a2 & 0x4000) == 0 )
    return;
  RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  AccessState->Flags = Flags | 0x100;
  if ( (RemainingDesiredAccess & 0x2000000) != 0 )
    RemainingDesiredAccess |= 0x11F01BFu;
  if ( ((a4 - 1) & 0xFFFFFFF9) != 0 || a4 == 7 )
  {
    v7 = 1;
  }
  else
  {
    if ( (RemainingDesiredAccess & 0x11200A9) == 0 )
      goto LABEL_12;
    RequiredPrivileges.Privilege[0].Luid = SeBackupPrivilege;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    if ( !a3 )
    {
LABEL_19:
      v5 = 1;
      SeAppendPrivileges(AccessState, &RequiredPrivileges);
      AccessState->PreviouslyGrantedAccess |= RemainingDesiredAccess & 0x11200A9;
      RemainingDesiredAccess &= 0xFEEDFF56;
      AccessState->RemainingDesiredAccess &= 0xFEEDFF56;
      AccessState->Flags |= 2u;
      goto LABEL_12;
    }
    ClientToken = AccessState->SubjectSecurityContext.ClientToken;
    if ( !ClientToken )
    {
      ClientToken = AccessState->SubjectSecurityContext.PrimaryToken;
      goto LABEL_11;
    }
    if ( AccessState->SubjectSecurityContext.ImpersonationLevel >= SecurityImpersonation )
    {
LABEL_11:
      if ( !SepPrivilegeCheck((__int64)ClientToken, (__int64)RequiredPrivileges.Privilege, 1u, 1, a3) )
        goto LABEL_12;
      goto LABEL_19;
    }
  }
LABEL_12:
  v12 = RemainingDesiredAccess & 0x11F0116;
  if ( (v12 || v7)
    && (RequiredPrivileges.Privilege[0].Luid = SeRestorePrivilege,
        RequiredPrivileges.PrivilegeCount = 1,
        RequiredPrivileges.Control = 1,
        RequiredPrivileges.Privilege[0].Attributes = 0,
        SePrivilegeCheck(&RequiredPrivileges, &AccessState->SubjectSecurityContext, a3)) )
  {
    SeAppendPrivileges(AccessState, &RequiredPrivileges);
    AccessState->PreviouslyGrantedAccess |= v12;
    AccessState->RemainingDesiredAccess &= 0xFEE0FEE9;
    AccessState->Flags |= 4u;
  }
  else if ( !v5 )
  {
    *a2 &= ~0x4000u;
  }
}

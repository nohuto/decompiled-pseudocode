/*
 * XREFs of CMFCheckAccess @ 0x140958444
 * Callers:
 *     NtMapCMFModule @ 0x140959CF0 (NtMapCMFModule.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     SepDeleteAccessState @ 0x14026A600 (SepDeleteAccessState.c)
 *     SeAccessCheck @ 0x1402AB090 (SeAccessCheck.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     SeAppendPrivileges @ 0x1405EA7C0 (SeAppendPrivileges.c)
 *     SePrivilegeCheck @ 0x140649D60 (SePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SeCreateAccessState @ 0x1406566A0 (SeCreateAccessState.c)
 *     SeLockSubjectContext @ 0x14070D210 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14070D270 (SeUnlockSubjectContext.c)
 *     RtlMapGenericMask @ 0x14071A280 (RtlMapGenericMask.c)
 *     CMFCreateSecurityDescriptor @ 0x140958694 (CMFCreateSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CMFCheckAccess(__int64 a1, ACCESS_MASK a2, KPROCESSOR_MODE a3)
{
  unsigned int v5; // ebx
  GENERIC_MAPPING *GenericMapping; // rsi
  ACCESS_MASK v7; // edi
  BOOLEAN v8; // al
  BOOLEAN v9; // r14
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  ACCESS_MASK AccessMask; // [rsp+60h] [rbp-A0h] BYREF
  NTSTATUS AccessStatus; // [rsp+68h] [rbp-98h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-90h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+80h] [rbp-80h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v18[224]; // [rsp+140h] [rbp+40h] BYREF

  AccessMask = a2;
  memset(&AccessState, 0, sizeof(AccessState));
  memset(v18, 0, sizeof(v18));
  Privileges = 0LL;
  if ( a1 )
  {
    GenericMapping = (GENERIC_MAPPING *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)]
                                       + 76);
    RtlMapGenericMask(&AccessMask, GenericMapping);
    if ( !CMFSecurityDescriptor )
    {
      P = 0LL;
      v5 = CMFCreateSecurityDescriptor(&P, GenericMapping);
      if ( (v5 & 0xC0000000) == 0xC0000000 )
        return v5;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CMFSecurityDescriptor, (signed __int64)P, 0LL) )
        ExFreePoolWithTag(P, 0);
    }
    v7 = AccessMask;
    v5 = SeCreateAccessState((int)&AccessState, (int)v18, AccessMask, (__int64)GenericMapping);
    if ( (v5 & 0xC0000000) != 0xC0000000 )
    {
      SeLockSubjectContext(&AccessState.SubjectSecurityContext);
      RequiredPrivileges.Control = 0;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      P = (PVOID)18;
      RequiredPrivileges.Privilege[0].Luid = (LUID)18LL;
      RequiredPrivileges.PrivilegeCount = 1;
      v8 = SePrivilegeCheck(&RequiredPrivileges, &AccessState.SubjectSecurityContext, a3);
      AccessStatus = 0;
      v9 = v8;
      GrantedAccess = 0;
      if ( v8 )
      {
        GrantedAccess = v7;
      }
      else
      {
        v9 = SeAccessCheck(
               CMFSecurityDescriptor,
               &AccessState.SubjectSecurityContext,
               1u,
               v7,
               0,
               &Privileges,
               GenericMapping,
               a3,
               &GrantedAccess,
               &AccessStatus);
        if ( Privileges )
        {
          SeAppendPrivileges(&AccessState, Privileges);
          CmSiFreeMemory(Privileges);
        }
      }
      SeUnlockSubjectContext(&AccessState.SubjectSecurityContext);
      v5 = AccessStatus;
      if ( (AccessStatus & 0xC0000000) != 0xC0000000 )
      {
        if ( !v9 || (~GrantedAccess & v7) != 0 )
          v5 = -1073741790;
        else
          v5 = 0;
      }
      SepDeleteAccessState((__int64)&AccessState);
      SeReleaseSubjectContext(&AccessState.SubjectSecurityContext);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}

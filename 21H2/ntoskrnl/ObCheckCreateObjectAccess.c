/*
 * XREFs of ObCheckCreateObjectAccess @ 0x1406B6C50
 * Callers:
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     SeAppendPrivileges @ 0x1406A8AD0 (SeAppendPrivileges.c)
 *     ObReleaseObjectSecurityEx @ 0x140722890 (ObReleaseObjectSecurityEx.c)
 *     SeLockSubjectContext @ 0x140722AE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140723F40 (SeUnlockSubjectContext.c)
 *     ObpGetObjectSecurity @ 0x1407248C0 (ObpGetObjectSecurity.c)
 */

BOOLEAN __fastcall ObCheckCreateObjectAccess(
        __int64 a1,
        ACCESS_MASK a2,
        struct _ACCESS_STATE *a3,
        __int64 a4,
        __int64 a5,
        KPROCESSOR_MODE a6,
        PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // si
  unsigned __int64 v9; // r10
  __int64 v12; // r13
  NTSTATUS ObjectSecurity; // eax
  BOOLEAN v14; // si
  __int64 v15; // rdx
  __int64 v16; // r9
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-18h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-10h] BYREF
  char v21; // [rsp+A0h] [rbp+30h] BYREF

  AccessMode = a6;
  v9 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  GrantedAccess = 0;
  v21 = 0;
  Privileges = 0LL;
  LOBYTE(a4) = a6;
  SecurityDescriptor = 0LL;
  v12 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v9];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &v21, a4);
  if ( ObjectSecurity < 0 )
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
  else
  {
    SeLockSubjectContext(&a3->SubjectSecurityContext);
    if ( SecurityDescriptor )
    {
      v14 = SeAccessCheck(
              SecurityDescriptor,
              &a3->SubjectSecurityContext,
              1u,
              a2,
              0,
              &Privileges,
              (PGENERIC_MAPPING)(v12 + 76),
              AccessMode,
              &GrantedAccess,
              AccessStatus);
      if ( Privileges )
      {
        SeAppendPrivileges(a3, Privileges);
        CmSiFreeMemory(Privileges);
      }
    }
    else
    {
      v14 = 1;
    }
    SeUnlockSubjectContext(&a3->SubjectSecurityContext);
    LOBYTE(v15) = v21;
    ObReleaseObjectSecurityEx(SecurityDescriptor, v15, a1, v16);
    return v14;
  }
}

/*
 * XREFs of ObpCheckTraverseAccess @ 0x1408D87C0
 * Callers:
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 * Callees:
 *     SeAccessCheck @ 0x140207F80 (SeAccessCheck.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     SeFastTraverseCheck @ 0x1405901D0 (SeFastTraverseCheck.c)
 *     ObReleaseObjectSecurity @ 0x140613A90 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x140613E80 (ObpGetObjectSecurity.c)
 *     SeLockSubjectContext @ 0x1406291F0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140629250 (SeUnlockSubjectContext.c)
 *     SeAppendPrivileges @ 0x1406BBD90 (SeAppendPrivileges.c)
 */

BOOLEAN __fastcall ObpCheckTraverseAccess(
        __int64 a1,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        BOOLEAN a4,
        KPROCESSOR_MODE a5,
        PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // bl
  unsigned __int64 v8; // r9
  __int64 v9; // r15
  NTSTATUS ObjectSecurity; // eax
  BOOLEAN v12; // bl
  PPRIVILEGE_SET Privileges; // [rsp+50h] [rbp-10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+90h] [rbp+30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+38h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+A8h] [rbp+48h] BYREF

  MemoryAllocated = a4;
  AccessMode = a5;
  GrantedAccess = 0;
  Privileges = 0LL;
  SecurityDescriptor = 0LL;
  v8 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  MemoryAllocated = 0;
  v9 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v8];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &MemoryAllocated, a5);
  if ( ObjectSecurity >= 0 )
  {
    if ( SeFastTraverseCheck((__int64)SecurityDescriptor, (__int64)a3, 2) )
    {
      v12 = 1;
    }
    else
    {
      SeLockSubjectContext(&a3->SubjectSecurityContext);
      v12 = SeAccessCheck(
              SecurityDescriptor,
              &a3->SubjectSecurityContext,
              1u,
              2u,
              0,
              &Privileges,
              (PGENERIC_MAPPING)(v9 + 76),
              AccessMode,
              &GrantedAccess,
              AccessStatus);
      if ( Privileges )
      {
        SeAppendPrivileges(a3, Privileges);
        CmSiFreeMemory(Privileges);
      }
      SeUnlockSubjectContext(&a3->SubjectSecurityContext);
    }
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
    return v12;
  }
  else
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
}

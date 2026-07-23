/*
 * XREFs of ObCheckCreateObjectAccess @ 0x140657CB0
 * Callers:
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x1402AB090 (SeAccessCheck.c)
 *     SeAppendPrivileges @ 0x1405EA7C0 (SeAppendPrivileges.c)
 *     ObReleaseObjectSecurity @ 0x140654230 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x140654620 (ObpGetObjectSecurity.c)
 *     SeLockSubjectContext @ 0x14070D210 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14070D270 (SeUnlockSubjectContext.c)
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
  unsigned __int64 v10; // r10
  __int64 v11; // r13
  NTSTATUS ObjectSecurity; // eax
  BOOLEAN v13; // si
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-18h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-10h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+90h] [rbp+20h] BYREF

  AccessMode = a6;
  GrantedAccess = 0;
  Privileges = 0LL;
  SecurityDescriptor = 0LL;
  v10 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  MemoryAllocated = 0;
  v11 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v10];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &MemoryAllocated, a6);
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
      v13 = SeAccessCheck(
              SecurityDescriptor,
              &a3->SubjectSecurityContext,
              1u,
              a2,
              0,
              &Privileges,
              (PGENERIC_MAPPING)(v11 + 76),
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
      v13 = 1;
    }
    SeUnlockSubjectContext(&a3->SubjectSecurityContext);
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
    return v13;
  }
}

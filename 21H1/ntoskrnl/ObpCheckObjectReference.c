/*
 * XREFs of ObpCheckObjectReference @ 0x1406137F0
 * Callers:
 *     ObReferenceObjectByName @ 0x140613480 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x14064B8F0 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     SeAccessCheck @ 0x140207F80 (SeAccessCheck.c)
 *     ObReleaseObjectSecurity @ 0x140613A90 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x140613E80 (ObpGetObjectSecurity.c)
 *     SeObjectReferenceAuditAlarm @ 0x14061587C (SeObjectReferenceAuditAlarm.c)
 *     SeLockSubjectContext @ 0x1406291F0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140629250 (SeUnlockSubjectContext.c)
 */

BOOLEAN __fastcall ObpCheckObjectReference(
        __int64 a1,
        __int64 a2,
        BOOLEAN a3,
        KPROCESSOR_MODE a4,
        PNTSTATUS AccessStatus)
{
  unsigned __int64 v7; // r10
  int v8; // r15d
  __int64 v9; // rdi
  int ObjectSecurity; // eax
  GENERIC_MAPPING *GenericMapping; // rcx
  PSECURITY_DESCRIPTOR v12; // rdi
  int v13; // ecx
  BOOLEAN v14; // bp
  ACCESS_MASK v15; // ecx
  BOOLEAN Privileges; // [rsp+28h] [rbp-60h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-38h] BYREF
  PPRIVILEGE_SET v19; // [rsp+58h] [rbp-30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+8h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+A0h] [rbp+18h] BYREF

  MemoryAllocated = a3;
  GrantedAccess = 0;
  v19 = 0LL;
  SecurityDescriptor = 0LL;
  v7 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  MemoryAllocated = 0;
  v8 = a1;
  v9 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v7];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &MemoryAllocated);
  if ( ObjectSecurity < 0 )
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
  else
  {
    SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a2 + 32));
    GenericMapping = (GENERIC_MAPPING *)(v9 + 76);
    v12 = SecurityDescriptor;
    v14 = SeAccessCheck(
            SecurityDescriptor,
            (PSECURITY_SUBJECT_CONTEXT)(a2 + 32),
            1u,
            *(_DWORD *)(a2 + 16),
            *(_DWORD *)(a2 + 20),
            &v19,
            GenericMapping,
            a4,
            &GrantedAccess,
            AccessStatus);
    if ( v14 )
    {
      v15 = GrantedAccess;
      *(_DWORD *)(a2 + 20) |= GrantedAccess;
      v13 = ~v15;
      *(_DWORD *)(a2 + 16) &= v13;
    }
    if ( v12 )
      SeObjectReferenceAuditAlarm(
        v13,
        v8,
        (int)v12,
        a2 + 32,
        *(_DWORD *)(a2 + 16) | *(_DWORD *)(a2 + 20),
        Privileges,
        v14,
        a4);
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a2 + 32));
    ObReleaseObjectSecurity(v12, MemoryAllocated);
    return v14;
  }
}

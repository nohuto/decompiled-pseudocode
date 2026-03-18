/*
 * XREFs of ObpCheckObjectReference @ 0x1405F53C4
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x1405E566C (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x1405FDA80 (ObReferenceObjectByName.c)
 * Callees:
 *     SeAccessCheck @ 0x140209C20 (SeAccessCheck.c)
 *     ObReleaseObjectSecurity @ 0x1405F5670 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405F5A60 (ObpGetObjectSecurity.c)
 *     SeObjectReferenceAuditAlarm @ 0x1405F745C (SeObjectReferenceAuditAlarm.c)
 *     SeLockSubjectContext @ 0x1406168B0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140616910 (SeUnlockSubjectContext.c)
 */

BOOLEAN __fastcall ObpCheckObjectReference(__int64 a1, __int64 a2, BOOLEAN a3, __int64 a4, PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // r14
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
  AccessMode = a4;
  v7 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  MemoryAllocated = 0;
  v8 = a1;
  v9 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v7];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &MemoryAllocated, a4);
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
            AccessMode,
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
        AccessMode);
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a2 + 32));
    ObReleaseObjectSecurity(v12, MemoryAllocated);
    return v14;
  }
}

/*
 * XREFs of CmpCheckKeyBodyAccess @ 0x1406C3268
 * Callers:
 *     CmpVEPerformOpenAccessCheck @ 0x1406C3144 (CmpVEPerformOpenAccessCheck.c)
 *     CmpDoAccessCheckOnKCB @ 0x1408725DC (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     SeAccessCheck @ 0x140209C20 (SeAccessCheck.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405F3B08 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405F44C0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeOpenObjectAuditAlarm @ 0x1405F74E0 (SeOpenObjectAuditAlarm.c)
 *     SeLockSubjectContext @ 0x1406168B0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140616910 (SeUnlockSubjectContext.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140678E00 (CmpIsKeyDeletedForKeyBody.c)
 *     SeAppendPrivileges @ 0x1406B71B0 (SeAppendPrivileges.c)
 */

BOOLEAN __fastcall CmpCheckKeyBodyAccess(
        _QWORD *Object,
        __int64 ObjectCreated,
        PACCESS_STATE AccessState,
        KPROCESSOR_MODE AccessMode,
        NTSTATUS *a5)
{
  __int64 v9; // r8
  struct _LOOKASIDE_LIST_EX *v10; // r9
  NTSTATUS v11; // ecx
  void *v12; // r12
  BOOLEAN v13; // si
  ACCESS_MASK v14; // eax
  UNICODE_STRING *v15; // rcx
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-2Ch] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-28h] BYREF
  __int128 v20; // [rsp+60h] [rbp-20h] BYREF
  PPRIVILEGE_SET v21[2]; // [rsp+70h] [rbp-10h]

  GrantedAccess = 0;
  Privileges = 0LL;
  v20 = 0LL;
  WORD1(v20) = -1;
  *(_OWORD *)v21 = 0LL;
  if ( CmpIsKeyDeletedForKeyBody((__int64)Object, ObjectCreated) )
  {
    v11 = -1073741444;
    AccessStatus = -1073741444;
    goto LABEL_13;
  }
  AccessStatus = CmpStartKcbStackForTopLayerKcb((__int64)&v20, Object[1], v9, v10);
  v11 = AccessStatus;
  if ( AccessStatus < 0 )
  {
LABEL_13:
    v13 = 0;
    goto LABEL_10;
  }
  v12 = (void *)(CmpGetSecurityCacheEntryForKcbStack((__int64)&v20, ObjectCreated) + 32);
  SeLockSubjectContext(&AccessState->SubjectSecurityContext);
  v13 = SeAccessCheck(
          v12,
          &AccessState->SubjectSecurityContext,
          1u,
          AccessState->RemainingDesiredAccess,
          AccessState->PreviouslyGrantedAccess,
          &Privileges,
          (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
          AccessMode,
          &GrantedAccess,
          &AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(AccessState, Privileges);
    CmSiFreeMemory(Privileges);
  }
  if ( v13 )
  {
    v14 = GrantedAccess;
    AccessState->PreviouslyGrantedAccess |= GrantedAccess;
    AccessState->RemainingDesiredAccess &= ~(v14 | 0x2000000);
  }
  *((_WORD *)Object + 24) |= 2u;
  v15 = (UNICODE_STRING *)(CmKeyObjectType + 2);
  if ( ObjectCreated )
    SeOpenObjectAuditAlarmWithTransaction(
      v15,
      Object,
      0LL,
      v12,
      AccessState,
      0,
      v13,
      AccessMode,
      (GUID *)(ObjectCreated + 88),
      &AccessState->GenerateOnClose);
  else
    SeOpenObjectAuditAlarm(v15, Object, 0LL, v12, AccessState, 0, v13, AccessMode, &AccessState->GenerateOnClose);
  *((_WORD *)Object + 24) &= ~2u;
  SeUnlockSubjectContext(&AccessState->SubjectSecurityContext);
  v11 = AccessStatus;
LABEL_10:
  if ( v21[1] )
  {
    CmSiFreeMemory(v21[1]);
    v11 = AccessStatus;
  }
  *a5 = v11;
  return v13;
}

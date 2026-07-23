/*
 * XREFs of CmpCheckKeyBodyAccess @ 0x1405EA3A4
 * Callers:
 *     CmpVEPerformOpenAccessCheck @ 0x1405EA280 (CmpVEPerformOpenAccessCheck.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086FF6C (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x1402AB090 (SeAccessCheck.c)
 *     SeOpenObjectAuditAlarm @ 0x1405EA760 (SeOpenObjectAuditAlarm.c)
 *     SeAppendPrivileges @ 0x1405EA7C0 (SeAppendPrivileges.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14065AB50 (CmpStartKcbStackForTopLayerKcb.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406DC580 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406DEBC0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     SeLockSubjectContext @ 0x14070D210 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14070D270 (SeUnlockSubjectContext.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 */

BOOLEAN __fastcall CmpCheckKeyBodyAccess(
        _QWORD *Object,
        __int64 ObjectCreated,
        PACCESS_STATE AccessState,
        KPROCESSOR_MODE AccessMode,
        NTSTATUS *a5)
{
  NTSTATUS v9; // ecx
  void *v10; // r12
  BOOLEAN v11; // si
  ACCESS_MASK v12; // eax
  UNICODE_STRING *v13; // rcx
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-2Ch] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-28h] BYREF
  __int128 v18; // [rsp+60h] [rbp-20h] BYREF
  PPRIVILEGE_SET v19[2]; // [rsp+70h] [rbp-10h]

  GrantedAccess = 0;
  Privileges = 0LL;
  v18 = 0LL;
  WORD1(v18) = -1;
  *(_OWORD *)v19 = 0LL;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(Object, ObjectCreated) )
  {
    v9 = -1073741444;
    AccessStatus = -1073741444;
    goto LABEL_13;
  }
  AccessStatus = CmpStartKcbStackForTopLayerKcb(&v18, Object[1]);
  v9 = AccessStatus;
  if ( AccessStatus < 0 )
  {
LABEL_13:
    v11 = 0;
    goto LABEL_10;
  }
  v10 = (void *)(CmpGetSecurityCacheEntryForKcbStack(&v18, ObjectCreated, 0LL) + 32);
  SeLockSubjectContext(&AccessState->SubjectSecurityContext);
  v11 = SeAccessCheck(
          v10,
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
  if ( v11 )
  {
    v12 = GrantedAccess;
    AccessState->PreviouslyGrantedAccess |= GrantedAccess;
    AccessState->RemainingDesiredAccess &= ~(v12 | 0x2000000);
  }
  *((_WORD *)Object + 24) |= 2u;
  v13 = (UNICODE_STRING *)(CmKeyObjectType + 2);
  if ( ObjectCreated )
    SeOpenObjectAuditAlarmWithTransaction(
      v13,
      Object,
      0LL,
      v10,
      AccessState,
      0,
      v11,
      AccessMode,
      (GUID *)(ObjectCreated + 88),
      &AccessState->GenerateOnClose);
  else
    SeOpenObjectAuditAlarm(v13, Object, 0LL, v10, AccessState, 0, v11, AccessMode, &AccessState->GenerateOnClose);
  *((_WORD *)Object + 24) &= ~2u;
  SeUnlockSubjectContext(&AccessState->SubjectSecurityContext);
  v9 = AccessStatus;
LABEL_10:
  if ( v19[1] )
  {
    CmSiFreeMemory(v19[1]);
    v9 = AccessStatus;
  }
  *a5 = v9;
  return v11;
}

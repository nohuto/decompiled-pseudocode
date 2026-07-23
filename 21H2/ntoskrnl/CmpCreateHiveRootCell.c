/*
 * XREFs of CmpCreateHiveRootCell @ 0x14078DDB0
 * Callers:
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpRecordParseFailure @ 0x1405E99A0 (CmpRecordParseFailure.c)
 *     CmpNameSize @ 0x1405F26FC (CmpNameSize.c)
 *     SeDeassignSecurity @ 0x1405FED30 (SeDeassignSecurity.c)
 *     HvMarkBaseBlockDirty @ 0x14061C16C (HvMarkBaseBlockDirty.c)
 *     HvUnlockHiveFlusherShared @ 0x14065B0AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14065B0E4 (HvLockHiveFlusherShared.c)
 *     CmUnlockHiveSecurity @ 0x14065F004 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x14065F024 (CmLockHiveSecurityExclusive.c)
 *     SeAssignSecurity @ 0x14065F320 (SeAssignSecurity.c)
 *     HvUnlockHiveWriter @ 0x1406F7EE0 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x1406F7F10 (HvLockHiveWriter.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1406F8838 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvAllocateCell @ 0x1407207E4 (HvAllocateCell.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     CmpCopyName @ 0x1407214C0 (CmpCopyName.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140779148 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpAssignSecurityDescriptor @ 0x140871810 (CmpAssignSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCreateHiveRootCell(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  size_t v11; // r8
  _WORD *v12; // rbx
  _DWORD *v13; // r15
  unsigned __int16 v14; // ax
  NTSTATUS v15; // eax
  int v16; // ebx
  PSECURITY_DESCRIPTOR v17; // r12
  __int64 v19; // rsi
  void *v20; // rcx
  int v21; // r8d
  int v22; // edx
  void *v23; // [rsp+40h] [rbp-10h] BYREF
  __int64 v24; // [rsp+48h] [rbp-8h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+80h] [rbp+30h] BYREF

  v23 = 0LL;
  NewDescriptor = 0LL;
  v24 = 0xFFFFFFFFLL;
  HvLockHiveFlusherShared(BugCheckParameter2);
  v9 = (unsigned __int16)CmpNameSize(a3) + 76;
  v10 = HvAllocateCell(BugCheckParameter2, v9, 0, &v23, &v24);
  if ( v10 == -1 )
  {
    v16 = -1073741670;
    CmpRecordParseFailure(a4, 196864, -1073741670);
    v13 = v23;
    goto LABEL_9;
  }
  v11 = v9;
  v12 = v23;
  memset(v23, 0, v11);
  *(_DWORD *)v12 = 813934;
  v13 = v23;
  *(_QWORD *)((char *)v23 + 4) = MEMORY[0xFFFFF78000000014];
  v13[4] = -1;
  v13[7] = -1;
  v13[8] = -1;
  v13[10] = -1;
  v13[11] = -1;
  v13[12] = -1;
  v14 = CmpCopyName((_BYTE *)v13 + 76, a3);
  *((_WORD *)v13 + 36) = v14;
  if ( v14 < *a3 )
    v12[1] |= 0x20u;
  if ( (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x20) != 0 )
  {
    NewDescriptor = CmpGenerateAppHiveSecurityDescriptor(a2 + 32);
    if ( NewDescriptor )
    {
LABEL_6:
      CmLockHiveSecurityExclusive(BugCheckParameter2);
      v16 = CmpAssignSecurityDescriptor(BugCheckParameter2, v10, v13, NewDescriptor);
      CmUnlockHiveSecurity(BugCheckParameter2);
      if ( v16 < 0 )
      {
        v21 = v16;
        v22 = 197632;
      }
      else
      {
        HvLockHiveWriter(*(_QWORD *)(a4 + 48));
        HvMarkBaseBlockDirty(*(_QWORD *)(a4 + 48));
        v16 = HvCheckAndUpdateHiveBackupTimeStamp(*(_QWORD *)(a4 + 48));
        HvUnlockHiveWriter(*(_QWORD *)(a4 + 48));
        if ( v16 >= 0 )
        {
          *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL) = v10;
          *a5 = v10;
          v10 = -1;
          v16 = 0;
          goto LABEL_9;
        }
        v21 = v16;
        v22 = 197888;
      }
      goto LABEL_26;
    }
    v21 = -1073741670;
    v22 = 197120;
    v16 = -1073741670;
  }
  else
  {
    v15 = SeAssignSecurity(
            0LL,
            *(PSECURITY_DESCRIPTOR *)(a2 + 64),
            &NewDescriptor,
            1u,
            (PSECURITY_SUBJECT_CONTEXT)(a2 + 32),
            (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
            *((POOL_TYPE *)CmKeyObjectType + 25));
    v16 = v15;
    if ( v15 >= 0 )
      goto LABEL_6;
    v21 = v15;
    v22 = 197376;
  }
LABEL_26:
  CmpRecordParseFailure(a4, v22, v21);
LABEL_9:
  v17 = NewDescriptor;
  if ( NewDescriptor )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x20) != 0 )
    {
      ExFreePoolWithTag(NewDescriptor, 0);
    }
    else if ( (*(_DWORD *)a4 & 1) != 0 && (*(_DWORD *)(a4 + 24) & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v19 = *(_QWORD *)(a2 + 72);
      v20 = *(void **)(v19 + 48);
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      *(_QWORD *)(v19 + 48) = v17;
    }
  }
  if ( v13 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
  if ( v10 != -1 )
    HvFreeCell(BugCheckParameter2, v10);
  HvUnlockHiveFlusherShared(BugCheckParameter2);
  return (unsigned int)v16;
}

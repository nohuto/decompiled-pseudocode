/*
 * XREFs of CmpLoadKeyCommon @ 0x14036195C
 * Callers:
 *     CmLoadAppKey @ 0x14066FEEC (CmLoadAppKey.c)
 *     CmLoadKey @ 0x1406BA714 (CmLoadKey.c)
 * Callees:
 *     SetFailureLocation @ 0x1402C4808 (SetFailureLocation.c)
 *     CmpJoinClassOfTrust @ 0x1402D3974 (CmpJoinClassOfTrust.c)
 *     CmpRecheckHiveVolumePolicy @ 0x140362080 (CmpRecheckHiveVolumePolicy.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405EF620 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpFlushHive @ 0x14062A0D8 (CmpFlushHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406725C0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1406726F0 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x140672754 (LOCK_HIVE_LOAD.c)
 *     CmpAddToHiveFileList @ 0x1406BF09C (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1406BF8BC (CmRmFinalizeRecovery.c)
 *     CmpVEAddHiveToSIDMappingTable @ 0x1406C2414 (CmpVEAddHiveToSIDMappingTable.c)
 *     CmpSetGlobalQuotaAllowed @ 0x1406C3FA8 (CmpSetGlobalQuotaAllowed.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406FC600 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpInitCmRM @ 0x140716078 (CmpInitCmRM.c)
 *     LockShutdownShared @ 0x14071D274 (LockShutdownShared.c)
 *     CmpLockHiveListExclusive @ 0x14071D2A4 (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x14071D2C4 (CmpUnlockHiveList.c)
 *     UnlockShutdown @ 0x14071D2E4 (UnlockShutdown.c)
 *     CmpTrimHive @ 0x14071D310 (CmpTrimHive.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14071D94C (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLinkHiveToMaster @ 0x14071E230 (CmpLinkHiveToMaster.c)
 *     CmpDestroyHive @ 0x140728F38 (CmpDestroyHive.c)
 */

__int64 __fastcall CmpLoadKeyCommon(
        char *P,
        _QWORD *a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        ULONG_PTR *a8,
        char a9,
        char a10,
        __int64 a11)
{
  __int64 v11; // r13
  int v15; // r14d
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edi
  int v19; // r9d
  int v20; // eax
  int v21; // r9d
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  ULONG_PTR v25; // rdi
  ULONG_PTR *v26; // rsi
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v32; // [rsp+20h] [rbp-99h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-51h] BYREF
  ULONG_PTR *v35; // [rsp+70h] [rbp-49h]
  __int64 v36; // [rsp+78h] [rbp-41h]
  _OWORD v37[3]; // [rsp+80h] [rbp-39h] BYREF

  *((_DWORD *)P + 40) |= 0x20u;
  v11 = 0LL;
  BugCheckParameter2 = 0LL;
  v36 = a6;
  v35 = a8;
  memset(v37, 0, sizeof(v37));
  *((_QWORD *)P + 526) = KeGetCurrentThread();
  v15 = a3 & 0x10;
  if ( (a3 & 0x10) != 0 )
  {
    v16 = *((_DWORD *)P + 1038) | 0x20;
    *((_DWORD *)P + 1038) = v16;
    if ( (a3 & 0x20) != 0 )
      *((_DWORD *)P + 1038) = v16 | 0x40;
  }
  *((_DWORD *)P + 1038) |= 1u;
  LockShutdownShared();
  LOCK_HIVE_LOAD();
  LOBYTE(v17) = 1;
  CmpLockRegistryFreezeAware(v17);
  if ( a4 && !v15 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a4, 0LL) )
    {
      v18 = -1073741444;
      v32 = 16;
LABEL_8:
      v19 = v18;
LABEL_9:
      SetFailureLocation(a11, 0, 29, v19, v32);
LABEL_22:
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      CmpAttachToRegistryProcess(v37);
      CmpDestroyHive(P);
      CmpDetachFromRegistryProcess(v37);
      goto LABEL_39;
    }
    v20 = CmpJoinClassOfTrust((__int64)P, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL), a7);
    v18 = v20;
    if ( v20 < 0 )
    {
      v32 = 32;
LABEL_12:
      v19 = v20;
      goto LABEL_9;
    }
    v20 = CmpVEAddHiveToSIDMappingTable(P, a2);
    v18 = v20;
    if ( v20 < 0 )
    {
      v32 = 48;
      goto LABEL_12;
    }
  }
  if ( a5 )
  {
    v20 = CmpPerformKeyBodyDeletionCheck(a5, 0LL);
    v18 = v20;
    if ( v20 < 0 )
    {
      v32 = 64;
      goto LABEL_12;
    }
    v11 = *(_QWORD *)(a5 + 8);
    if ( (*(_DWORD *)(v11 + 184) & 0x40000) == 0 )
    {
      v18 = -1073741811;
      v32 = 80;
      goto LABEL_8;
    }
  }
  CmpUnlockRegistry();
  LOBYTE(v21) = a9;
  v22 = CmpLinkHiveToMaster(
          a2[2],
          a2[1],
          (_DWORD)P,
          v21,
          512,
          v15 != 0,
          v36,
          a2[4],
          v11,
          (__int64)&BugCheckParameter2,
          0,
          a11);
  v18 = v22;
  if ( v22 < 0 )
  {
    SetFailureLocation(a11, 0, 29, v22, 96);
    LOBYTE(v24) = 1;
    CmpLockRegistryFreezeAware(v24);
    goto LABEL_22;
  }
  v25 = BugCheckParameter2;
  if ( (a3 & 0x800) != 0 )
  {
    CmpReferenceKeyControlBlockUnsafe(BugCheckParameter2);
    v26 = v35;
    *v35 = v25;
  }
  else
  {
    v26 = v35;
  }
  LOBYTE(v23) = 1;
  CmpLockRegistryFreezeAware(v23);
  if ( v15 )
  {
    CmpReferenceKeyControlBlockUnsafe(*((_QWORD *)P + 366));
    *v26 = *((_QWORD *)P + 366);
  }
  CmpLockHiveListExclusive();
  v27 = (_QWORD *)qword_140D2E918;
  v28 = P + 1600;
  if ( *(__int64 **)qword_140D2E918 != &CmpHiveListHead )
    __fastfail(3u);
  *v28 = &CmpHiveListHead;
  *((_QWORD *)P + 201) = v27;
  *v27 = v28;
  qword_140D2E918 = (__int64)(P + 1600);
  CmpUnlockHiveList();
  CmpUnlockRegistry();
  CmpAttachToRegistryProcess(v37);
  CmpRecheckHiveVolumePolicy(P);
  CmpDetachFromRegistryProcess(v37);
  CmpDereferenceKeyControlBlockUnsafe(v25);
  UNLOCK_HIVE_LOAD();
  if ( (a3 & 0x110) == 0 )
  {
    LOBYTE(v29) = a10;
    CmpInitCmRM(P, v29);
    *((_DWORD *)P + 1038) |= 8u;
  }
  if ( a9 )
  {
    CmpAttachToRegistryProcess(v37);
    CmpFlushHive((ULONG_PTR)P);
    CmpDetachFromRegistryProcess(v37);
  }
  if ( !v15 )
    CmpAddToHiveFileList(P);
  v30 = *((_QWORD *)P + 524);
  if ( v30 )
  {
    TmEnableCallbacks(*(PKRESOURCEMANAGER *)(v30 + 56), CmKtmNotification, *((PVOID *)P + 524));
    CmRmFinalizeRecovery(*((_QWORD *)P + 524));
  }
  CmpTrimHive(P);
  LOCK_HIVE_LOAD();
  *((_DWORD *)P + 40) &= ~0x20u;
  *((_QWORD *)P + 526) = 0LL;
  UNLOCK_HIVE_LOAD();
  v18 = 0;
LABEL_39:
  UnlockShutdown();
  if ( !CmpProfileLoaded && !CmpWasSetupBoot )
  {
    CmpProfileLoaded = 1;
    CmpSetGlobalQuotaAllowed();
  }
  return v18;
}

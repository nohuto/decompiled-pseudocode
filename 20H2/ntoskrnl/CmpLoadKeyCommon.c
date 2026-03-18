/*
 * XREFs of CmpLoadKeyCommon @ 0x140203EFC
 * Callers:
 *     CmLoadKey @ 0x1406DAE70 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x1406FFDC0 (CmLoadAppKey.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x140204810 (CmpRecheckHiveVolumePolicy.c)
 *     SetFailureLocation @ 0x1403238E8 (SetFailureLocation.c)
 *     CmpJoinClassOfTrust @ 0x140331630 (CmpJoinClassOfTrust.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     LockShutdownShared @ 0x1405DA85C (LockShutdownShared.c)
 *     CmpLinkHiveToMaster @ 0x1405DA88C (CmpLinkHiveToMaster.c)
 *     CmpLockHiveListExclusive @ 0x1405DAD8C (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x1405DADAC (CmpUnlockHiveList.c)
 *     UnlockShutdown @ 0x1405DADCC (UnlockShutdown.c)
 *     CmpTrimHive @ 0x1405DADF8 (CmpTrimHive.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14061CAE0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14061D4F4 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140678E00 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpAddToHiveFileList @ 0x1406DF078 (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1406DF7BC (CmRmFinalizeRecovery.c)
 *     CmpVEAddHiveToSIDMappingTable @ 0x1406E2204 (CmpVEAddHiveToSIDMappingTable.c)
 *     CmpSetGlobalQuotaAllowed @ 0x1406E42C8 (CmpSetGlobalQuotaAllowed.c)
 *     UNLOCK_HIVE_LOAD @ 0x1407011E0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140701310 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x140701374 (LOCK_HIVE_LOAD.c)
 *     CmpInitCmRM @ 0x14071037C (CmpInitCmRM.c)
 *     CmpDestroyHive @ 0x1407254A8 (CmpDestroyHive.c)
 */

__int64 __fastcall CmpLoadKeyCommon(
        ULONG_PTR BugCheckParameter2,
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
  __int64 v18; // r8
  unsigned int v19; // edi
  unsigned int v20; // r9d
  int v21; // eax
  int v22; // r9d
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  ULONG_PTR v26; // rdi
  ULONG_PTR *v27; // rsi
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v33; // [rsp+20h] [rbp-99h]
  ULONG_PTR BugCheckParameter2a; // [rsp+68h] [rbp-51h] BYREF
  ULONG_PTR *v36; // [rsp+70h] [rbp-49h]
  __int64 v37; // [rsp+78h] [rbp-41h]
  _OWORD v38[3]; // [rsp+80h] [rbp-39h] BYREF

  *(_DWORD *)(BugCheckParameter2 + 160) |= 0x20u;
  v11 = 0LL;
  BugCheckParameter2a = 0LL;
  v37 = a6;
  v36 = a8;
  memset(v38, 0, sizeof(v38));
  *(_QWORD *)(BugCheckParameter2 + 4208) = KeGetCurrentThread();
  v15 = a3 & 0x10;
  if ( (a3 & 0x10) != 0 )
  {
    v16 = *(_DWORD *)(BugCheckParameter2 + 4152) | 0x20;
    *(_DWORD *)(BugCheckParameter2 + 4152) = v16;
    if ( (a3 & 0x20) != 0 )
      *(_DWORD *)(BugCheckParameter2 + 4152) = v16 | 0x40;
  }
  *(_DWORD *)(BugCheckParameter2 + 4152) |= 1u;
  LockShutdownShared();
  LOCK_HIVE_LOAD();
  LOBYTE(v17) = 1;
  CmpLockRegistryFreezeAware(v17);
  if ( a4 && !v15 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a4, 0LL) )
    {
      v19 = -1073741444;
      v33 = 16;
LABEL_8:
      v20 = v19;
LABEL_9:
      SetFailureLocation(a11, 0, 29, v20, v33);
LABEL_22:
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      CmpAttachToRegistryProcess(v38);
      CmpDestroyHive((PVOID)BugCheckParameter2);
      CmpDetachFromRegistryProcess(v38);
      goto LABEL_39;
    }
    LOBYTE(v18) = a7;
    v21 = CmpJoinClassOfTrust(BugCheckParameter2, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL), v18);
    v19 = v21;
    if ( v21 < 0 )
    {
      v33 = 32;
LABEL_12:
      v20 = v21;
      goto LABEL_9;
    }
    v21 = CmpVEAddHiveToSIDMappingTable(BugCheckParameter2, a2);
    v19 = v21;
    if ( v21 < 0 )
    {
      v33 = 48;
      goto LABEL_12;
    }
  }
  if ( a5 )
  {
    v21 = CmpPerformKeyBodyDeletionCheck(a5, 0LL);
    v19 = v21;
    if ( v21 < 0 )
    {
      v33 = 64;
      goto LABEL_12;
    }
    v11 = *(_QWORD *)(a5 + 8);
    if ( (*(_DWORD *)(v11 + 184) & 0x40000) == 0 )
    {
      v19 = -1073741811;
      v33 = 80;
      goto LABEL_8;
    }
  }
  CmpUnlockRegistry();
  LOBYTE(v22) = a9;
  v23 = CmpLinkHiveToMaster(
          a2[2],
          a2[1],
          BugCheckParameter2,
          v22,
          512,
          v15 != 0,
          v37,
          a2[4],
          v11,
          (__int64)&BugCheckParameter2a,
          0,
          a11);
  v19 = v23;
  if ( v23 < 0 )
  {
    SetFailureLocation(a11, 0, 29, v23, 96);
    LOBYTE(v25) = 1;
    CmpLockRegistryFreezeAware(v25);
    goto LABEL_22;
  }
  v26 = BugCheckParameter2a;
  if ( (a3 & 0x800) != 0 )
  {
    CmpReferenceKeyControlBlockUnsafe(BugCheckParameter2a);
    v27 = v36;
    *v36 = v26;
  }
  else
  {
    v27 = v36;
  }
  LOBYTE(v24) = 1;
  CmpLockRegistryFreezeAware(v24);
  if ( v15 )
  {
    CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(BugCheckParameter2 + 2928));
    *v27 = *(_QWORD *)(BugCheckParameter2 + 2928);
  }
  CmpLockHiveListExclusive();
  v28 = (_QWORD *)qword_140D2E918;
  v29 = (_QWORD *)(BugCheckParameter2 + 1600);
  if ( *(__int64 **)qword_140D2E918 != &CmpHiveListHead )
    __fastfail(3u);
  *v29 = &CmpHiveListHead;
  *(_QWORD *)(BugCheckParameter2 + 1608) = v28;
  *v28 = v29;
  qword_140D2E918 = BugCheckParameter2 + 1600;
  CmpUnlockHiveList();
  CmpUnlockRegistry();
  CmpAttachToRegistryProcess(v38);
  CmpRecheckHiveVolumePolicy(BugCheckParameter2);
  CmpDetachFromRegistryProcess(v38);
  CmpDereferenceKeyControlBlockUnsafe(v26);
  UNLOCK_HIVE_LOAD();
  if ( (a3 & 0x110) == 0 )
  {
    LOBYTE(v30) = a10;
    CmpInitCmRM(BugCheckParameter2, v30);
    *(_DWORD *)(BugCheckParameter2 + 4152) |= 8u;
  }
  if ( a9 )
  {
    CmpAttachToRegistryProcess(v38);
    CmpFlushHive(BugCheckParameter2);
    CmpDetachFromRegistryProcess(v38);
  }
  if ( !v15 )
    CmpAddToHiveFileList(BugCheckParameter2);
  v31 = *(_QWORD *)(BugCheckParameter2 + 4192);
  if ( v31 )
  {
    TmEnableCallbacks(*(PKRESOURCEMANAGER *)(v31 + 56), CmKtmNotification, *(PVOID *)(BugCheckParameter2 + 4192));
    CmRmFinalizeRecovery(*(_QWORD *)(BugCheckParameter2 + 4192));
  }
  CmpTrimHive(BugCheckParameter2);
  LOCK_HIVE_LOAD();
  *(_DWORD *)(BugCheckParameter2 + 160) &= ~0x20u;
  *(_QWORD *)(BugCheckParameter2 + 4208) = 0LL;
  UNLOCK_HIVE_LOAD();
  v19 = 0;
LABEL_39:
  UnlockShutdown();
  if ( !CmpProfileLoaded && !CmpWasSetupBoot )
  {
    CmpProfileLoaded = 1;
    CmpSetGlobalQuotaAllowed();
  }
  return v19;
}

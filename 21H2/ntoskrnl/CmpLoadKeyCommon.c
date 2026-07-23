/*
 * XREFs of CmpLoadKeyCommon @ 0x14026D10C
 * Callers:
 *     CmLoadKey @ 0x140619944 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 * Callees:
 *     CmpJoinClassOfTrust @ 0x140214140 (CmpJoinClassOfTrust.c)
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1402F73C0 (CmpRecheckHiveVolumePolicy.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpUnlockHiveList @ 0x1405E2A98 (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1405E2AB8 (CmpLockHiveListExclusive.c)
 *     CmpTrimHive @ 0x14061A5B8 (CmpTrimHive.c)
 *     LockShutdownShared @ 0x14061B8A0 (LockShutdownShared.c)
 *     UnlockShutdown @ 0x14061B8D0 (UnlockShutdown.c)
 *     CmpAddToHiveFileList @ 0x14061E11C (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x14061E72C (CmRmFinalizeRecovery.c)
 *     CmpVEAddHiveToSIDMappingTable @ 0x1406210D4 (CmpVEAddHiveToSIDMappingTable.c)
 *     CmpSetGlobalQuotaAllowed @ 0x140622B68 (CmpSetGlobalQuotaAllowed.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1406643E8 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406677F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140667920 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x140667984 (LOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     CmpInitCmRM @ 0x1406C46C8 (CmpInitCmRM.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406DED80 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpLinkHiveToMaster @ 0x1406F8338 (CmpLinkHiveToMaster.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDestroyHive @ 0x1407293E8 (CmpDestroyHive.c)
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
  unsigned int v18; // edi
  unsigned int v19; // r9d
  int v20; // eax
  int v21; // r9d
  signed int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  ULONG_PTR v25; // rdi
  ULONG_PTR *v26; // rsi
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v32; // [rsp+20h] [rbp-99h]
  ULONG_PTR BugCheckParameter2a; // [rsp+68h] [rbp-51h] BYREF
  ULONG_PTR *v35; // [rsp+70h] [rbp-49h]
  __int64 v36; // [rsp+78h] [rbp-41h]
  _OWORD v37[3]; // [rsp+80h] [rbp-39h] BYREF

  *(_DWORD *)(BugCheckParameter2 + 160) |= 0x20u;
  v11 = 0LL;
  BugCheckParameter2a = 0LL;
  v36 = a6;
  v35 = a8;
  memset(v37, 0, sizeof(v37));
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
      CmpDestroyHive((PVOID)BugCheckParameter2);
      CmpDetachFromRegistryProcess(v37);
      goto LABEL_39;
    }
    v20 = CmpJoinClassOfTrust(BugCheckParameter2, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL), a7);
    v18 = v20;
    if ( v20 < 0 )
    {
      v32 = 32;
LABEL_12:
      v19 = v20;
      goto LABEL_9;
    }
    v20 = CmpVEAddHiveToSIDMappingTable(BugCheckParameter2, a2);
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
          BugCheckParameter2,
          v21,
          512,
          v15 != 0,
          v36,
          a2[4],
          v11,
          (__int64)&BugCheckParameter2a,
          0,
          a11);
  v18 = v22;
  if ( v22 < 0 )
  {
    SetFailureLocation(a11, 0, 29, v22, 0x60u);
    LOBYTE(v24) = 1;
    CmpLockRegistryFreezeAware(v24);
    goto LABEL_22;
  }
  v25 = BugCheckParameter2a;
  if ( (a3 & 0x800) != 0 )
  {
    CmpReferenceKeyControlBlockUnsafe(BugCheckParameter2a);
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
    CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(BugCheckParameter2 + 2928));
    *v26 = *(_QWORD *)(BugCheckParameter2 + 2928);
  }
  CmpLockHiveListExclusive();
  v27 = (_QWORD *)qword_140D2E918;
  v28 = (_QWORD *)(BugCheckParameter2 + 1600);
  if ( *(__int64 **)qword_140D2E918 != &CmpHiveListHead )
    __fastfail(3u);
  *v28 = &CmpHiveListHead;
  *(_QWORD *)(BugCheckParameter2 + 1608) = v27;
  *v27 = v28;
  qword_140D2E918 = BugCheckParameter2 + 1600;
  CmpUnlockHiveList();
  CmpUnlockRegistry();
  CmpAttachToRegistryProcess(v37);
  CmpRecheckHiveVolumePolicy(BugCheckParameter2);
  CmpDetachFromRegistryProcess(v37);
  CmpDereferenceKeyControlBlockUnsafe(v25);
  UNLOCK_HIVE_LOAD();
  if ( (a3 & 0x110) == 0 )
  {
    LOBYTE(v29) = a10;
    CmpInitCmRM(BugCheckParameter2, v29);
    *(_DWORD *)(BugCheckParameter2 + 4152) |= 8u;
  }
  if ( a9 )
  {
    CmpAttachToRegistryProcess(v37);
    CmpFlushHive(BugCheckParameter2);
    CmpDetachFromRegistryProcess(v37);
  }
  if ( !v15 )
    CmpAddToHiveFileList(BugCheckParameter2);
  v30 = *(_QWORD *)(BugCheckParameter2 + 4192);
  if ( v30 )
  {
    TmEnableCallbacks(*(PKRESOURCEMANAGER *)(v30 + 56), CmKtmNotification, *(PVOID *)(BugCheckParameter2 + 4192));
    CmRmFinalizeRecovery(*(_QWORD *)(BugCheckParameter2 + 4192));
  }
  CmpTrimHive(BugCheckParameter2);
  LOCK_HIVE_LOAD();
  *(_DWORD *)(BugCheckParameter2 + 160) &= ~0x20u;
  *(_QWORD *)(BugCheckParameter2 + 4208) = 0LL;
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

/*
 * XREFs of CmpLoadKeyCommon @ 0x140271C20
 * Callers:
 *     CmLoadAppKey @ 0x1405DE288 (CmLoadAppKey.c)
 *     CmLoadKey @ 0x1406525D0 (CmLoadKey.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x1402718B0 (CmpRecheckHiveVolumePolicy.c)
 *     SetFailureLocation @ 0x140352EE8 (SetFailureLocation.c)
 *     CmpJoinClassOfTrust @ 0x14035DA98 (CmpJoinClassOfTrust.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405E77E0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405EDBB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x14063FF30 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140640060 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406400C4 (LOCK_HIVE_LOAD.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14064326C (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLinkHiveToMaster @ 0x140650940 (CmpLinkHiveToMaster.c)
 *     CmpInitCmRM @ 0x140655B64 (CmpInitCmRM.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406725F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpTrimHive @ 0x140709208 (CmpTrimHive.c)
 *     LockShutdownShared @ 0x14070A4DC (LockShutdownShared.c)
 *     UnlockShutdown @ 0x14070A50C (UnlockShutdown.c)
 *     CmpUnlockHiveList @ 0x14070BD9C (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x14070BDBC (CmpLockHiveListExclusive.c)
 *     CmpAddToHiveFileList @ 0x14070CBDC (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x14070D38C (CmRmFinalizeRecovery.c)
 *     CmpVEAddHiveToSIDMappingTable @ 0x14070F9C4 (CmpVEAddHiveToSIDMappingTable.c)
 *     CmpSetGlobalQuotaAllowed @ 0x140711780 (CmpSetGlobalQuotaAllowed.c)
 *     CmpDestroyHive @ 0x1407174E8 (CmpDestroyHive.c)
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
  int v15; // r15d
  int v16; // eax
  __int64 v17; // rcx
  int v18; // r9d
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // edi
  ULONG_PTR v22; // rdi
  ULONG_PTR *v23; // rsi
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v29; // r8
  int v30; // eax
  unsigned int v31; // r9d
  __int64 v32; // rcx
  int v33; // [rsp+20h] [rbp-99h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-51h] BYREF
  ULONG_PTR *v36; // [rsp+70h] [rbp-49h]
  __int64 v37; // [rsp+78h] [rbp-41h]
  _OWORD v38[3]; // [rsp+80h] [rbp-39h] BYREF

  *((_DWORD *)P + 40) |= 0x20u;
  v11 = 0LL;
  BugCheckParameter2 = 0LL;
  v37 = a6;
  v36 = a8;
  memset(v38, 0, sizeof(v38));
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
  if ( a4 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a4, 0LL) )
    {
      v21 = -1073741444;
      v33 = 16;
      goto LABEL_34;
    }
    LOBYTE(v29) = a7;
    v30 = CmpJoinClassOfTrust(P, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL), v29);
    v21 = v30;
    if ( v30 < 0 )
    {
      v33 = 32;
    }
    else
    {
      v30 = CmpVEAddHiveToSIDMappingTable(P, a2);
      v21 = v30;
      if ( v30 >= 0 )
        goto LABEL_5;
      v33 = 48;
    }
LABEL_36:
    v31 = v30;
    goto LABEL_37;
  }
LABEL_5:
  if ( !a5 )
    goto LABEL_6;
  v30 = CmpPerformKeyBodyDeletionCheck(a5, 0LL);
  v21 = v30;
  if ( v30 < 0 )
  {
    v33 = 64;
    goto LABEL_36;
  }
  v11 = *(_QWORD *)(a5 + 8);
  if ( (*(_DWORD *)(v11 + 184) & 0x40000) == 0 )
  {
    v21 = -1073741811;
    v33 = 80;
LABEL_34:
    v31 = v21;
LABEL_37:
    SetFailureLocation(a11, 0, 29, v31, v33);
LABEL_40:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    CmpAttachToRegistryProcess(v38);
    CmpDestroyHive(P);
    CmpDetachFromRegistryProcess(v38);
    goto LABEL_21;
  }
LABEL_6:
  CmpUnlockRegistry();
  LOBYTE(v18) = a9;
  v19 = CmpLinkHiveToMaster(
          a2[2],
          a2[1],
          (_DWORD)P,
          v18,
          512,
          v15 != 0,
          v37,
          a2[4],
          v11,
          (__int64)&BugCheckParameter2,
          0,
          a11);
  v21 = v19;
  if ( v19 < 0 )
  {
    SetFailureLocation(a11, 0, 29, v19, 96);
    LOBYTE(v32) = 1;
    CmpLockRegistryFreezeAware(v32);
    goto LABEL_40;
  }
  v22 = BugCheckParameter2;
  if ( (a3 & 0x800) != 0 )
  {
    CmpReferenceKeyControlBlockUnsafe(BugCheckParameter2);
    v23 = v36;
    *v36 = v22;
  }
  else
  {
    v23 = v36;
  }
  LOBYTE(v20) = 1;
  CmpLockRegistryFreezeAware(v20);
  if ( v15 )
  {
    CmpReferenceKeyControlBlockUnsafe(*((_QWORD *)P + 366));
    *v23 = *((_QWORD *)P + 366);
  }
  CmpLockHiveListExclusive();
  v24 = (_QWORD *)qword_140D2E918;
  v25 = P + 1600;
  if ( *(__int64 **)qword_140D2E918 != &CmpHiveListHead )
    __fastfail(3u);
  *v25 = &CmpHiveListHead;
  *((_QWORD *)P + 201) = v24;
  *v24 = v25;
  qword_140D2E918 = (__int64)(P + 1600);
  CmpUnlockHiveList();
  CmpUnlockRegistry();
  CmpAttachToRegistryProcess(v38);
  CmpRecheckHiveVolumePolicy((__int64)P);
  CmpDetachFromRegistryProcess(v38);
  CmpDereferenceKeyControlBlockUnsafe(v22);
  UNLOCK_HIVE_LOAD();
  if ( (a3 & 0x110) == 0 )
  {
    LOBYTE(v26) = a10;
    CmpInitCmRM(P, v26);
    *((_DWORD *)P + 1038) |= 8u;
  }
  if ( a9 )
  {
    CmpAttachToRegistryProcess(v38);
    CmpFlushHive((ULONG_PTR)P);
    CmpDetachFromRegistryProcess(v38);
  }
  if ( !v15 )
    CmpAddToHiveFileList(P);
  v27 = *((_QWORD *)P + 524);
  if ( v27 )
  {
    TmEnableCallbacks(*(PKRESOURCEMANAGER *)(v27 + 56), CmKtmNotification, *((PVOID *)P + 524));
    CmRmFinalizeRecovery(*((_QWORD *)P + 524));
  }
  CmpTrimHive(P);
  LOCK_HIVE_LOAD();
  *((_DWORD *)P + 40) &= ~0x20u;
  *((_QWORD *)P + 526) = 0LL;
  UNLOCK_HIVE_LOAD();
  v21 = 0;
LABEL_21:
  UnlockShutdown();
  if ( !CmpProfileLoaded && !CmpWasSetupBoot )
  {
    CmpProfileLoaded = 1;
    CmpSetGlobalQuotaAllowed();
  }
  return v21;
}

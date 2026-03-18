/*
 * XREFs of CmpPerformUnloadKey @ 0x14065A0C0
 * Callers:
 *     CmUnloadKey @ 0x140659A98 (CmUnloadKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14025EE84 (CmpInitializeDelayDerefContext.c)
 *     ExRundownCompleted @ 0x1402D44C0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1403F1A30 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14061ABF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x14061ADEC (CmpReportNotifyForKcbStack.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpSignalDeferredPosts @ 0x140622DA0 (CmpSignalDeferredPosts.c)
 *     CmpCleanupKcbStack @ 0x140626070 (CmpCleanupKcbStack.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmSnapshotRMTxArray @ 0x140658994 (CmSnapshotRMTxArray.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x140658FF0 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmCloseRmHandle @ 0x140659014 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x14065903C (CmCloseTmHandle.c)
 *     CmShutdownCmRM @ 0x140659064 (CmShutdownCmRM.c)
 *     CmpFreezeHive @ 0x140659420 (CmpFreezeHive.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x140659678 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpFlushNotify @ 0x140659FD8 (CmpFlushNotify.c)
 *     CmpCompleteUnloadKey @ 0x14065AE8C (CmpCompleteUnloadKey.c)
 *     CmpCleanupRollbackPacket @ 0x14065B6DC (CmpCleanupRollbackPacket.c)
 *     UNLOCK_HIVE_LOAD @ 0x140691040 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140691170 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406911D4 (LOCK_HIVE_LOAD.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140691D6C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpUnfreezeHive @ 0x14071CE04 (CmpUnfreezeHive.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1407599F0 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14075DFD4 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x14075E1E0 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x140765F2C (CmpAbortRollbackPacket.c)
 *     CmpLogUnsupportedOperation @ 0x140871B98 (CmpLogUnsupportedOperation.c)
 */

__int64 __fastcall CmpPerformUnloadKey(__int64 a1, char a2, char a3, void *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  __int64 v10; // rsi
  int v11; // edi
  __int64 v12; // r14
  int v13; // ebx
  __int64 v14; // r8
  struct _LOOKASIDE_LIST_EX *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  char v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  _DWORD *v33; // r9
  __int64 v34; // rcx
  void *v35; // rdi
  char v36; // dl
  void *v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  signed __int32 v41[8]; // [rsp+0h] [rbp-99h] BYREF
  char v42; // [rsp+20h] [rbp-79h]
  int v43; // [rsp+24h] [rbp-75h] BYREF
  __int128 v44; // [rsp+28h] [rbp-71h] BYREF
  __int128 v45; // [rsp+38h] [rbp-61h] BYREF
  __int128 v46; // [rsp+48h] [rbp-51h] BYREF
  void *v47; // [rsp+58h] [rbp-41h]
  _OWORD v48[2]; // [rsp+60h] [rbp-39h] BYREF
  _OWORD v49[3]; // [rsp+80h] [rbp-19h] BYREF

  v47 = a4;
  v42 = 0;
  *((_QWORD *)&v45 + 1) = &v45;
  *(_QWORD *)&v45 = &v45;
  memset(v48, 0, sizeof(v48));
  WORD1(v48[0]) = -1;
  memset(v49, 0, sizeof(v49));
  v46 = 0LL;
  v44 = 0LL;
  CmpInitializeDelayDerefContext(&v46);
  LOCK_HIVE_LOAD(v7);
  LOBYTE(v8) = 1;
  CmpLockRegistryFreezeAware(v8);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = 6;
  v43 = 6;
  v12 = *(_QWORD *)(v10 + 32);
  if ( (*(_DWORD *)(v10 + 8) & 0x80u) != 0 )
    goto LABEL_56;
  v13 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v13 < 0 )
    goto LABEL_48;
  if ( (*(_DWORD *)(v10 + 8) & 0x40000) != 0 )
  {
    v13 = -1073740763;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v12 + 2936) && ((a2 & 1) == 0 || (*(_DWORD *)(v12 + 4152) & 0x20) == 0) )
  {
    v13 = -1073741431;
    goto LABEL_48;
  }
  if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)v48, v10, v14, v15) < 0 )
  {
    v13 = -1073741670;
    goto LABEL_48;
  }
  CmpReportNotifyForKcbStack((__int64)v48, 0, 4, (__int64)&v45);
  LOBYTE(v16) = 1;
  CmpFlushNotify(a1, v16, &v45);
  v9 = *(_DWORD **)(v10 + 32);
  if ( v9 == CmpMasterHive || (*(_DWORD *)(v10 + 184) & 0x40000) == 0 )
  {
    v13 = -1073741811;
    goto LABEL_48;
  }
  if ( (v9[1038] & 4) != 0 )
  {
LABEL_56:
    v13 = -1073741790;
    goto LABEL_48;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( CmpDoesKeyHaveOpenSubkeys(v10) || *(_QWORD *)v10 != 2LL )
    {
      if ( a3 )
      {
        v13 = CmpFreezeHive(v10, v47);
        if ( v13 >= 0 )
        {
          v13 = 259;
          goto LABEL_14;
        }
        goto LABEL_48;
      }
      goto LABEL_47;
    }
    goto LABEL_27;
  }
  v20 = *(_QWORD *)(v10 + 192);
  if ( v20 && *(_QWORD *)(v20 + 32) != v20 + 32 )
  {
    CmpLogUnsupportedOperation(3LL);
LABEL_47:
    v13 = -1073741535;
    goto LABEL_48;
  }
  LOBYTE(v17) = 1;
  v21 = CmpTryAcquireKcbIXLocks(v10, v17, v18, &v44);
  v13 = v21;
  if ( v21 == -1073741267 )
  {
LABEL_63:
    CmpLogTransactionAbortedForRollbackPacket(v10, 0xAu);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v11 = 0;
    v43 = 0;
    v13 = CmpAbortRollbackPacket(&v44);
    if ( v13 >= 0 )
      v13 = -1073741267;
    v23 = 0;
    goto LABEL_49;
  }
  if ( v21 < 0 )
  {
LABEL_48:
    v23 = v42;
    goto LABEL_49;
  }
  v22 = CmpPrepareForSubtreeInvalidation(v10, &v44);
  v13 = v22;
  if ( v22 == -1073741267 )
    goto LABEL_63;
  if ( v22 < 0 )
    goto LABEL_48;
  CmpInvalidateSubtree(v10, 1LL, &v46);
  CmpFlushNotifiesOnKeyBodyList(v10, 1LL, &v46);
LABEL_27:
  *(_DWORD *)(v10 + 8) |= 0x40000u;
  v23 = 1;
  if ( *(_BYTE *)(v12 + 2936) == 1 )
  {
    CmpUnfreezeHive((PVOID)v12);
    ++CmpActiveAppHiveUnloadCount;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v46);
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  _InterlockedIncrement(&CmpActiveHiveRundownCount);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v12 + 1632));
  ExRundownCompleted((PEX_RUNDOWN_REF)(v12 + 1632));
  LOCK_HIVE_LOAD(v24);
  LOBYTE(v25) = 1;
  CmpLockRegistryFreezeAware(v25);
  v29 = *(_QWORD *)(v12 + 4192);
  if ( !v29 )
    goto LABEL_30;
  v13 = CmSnapshotRMTxArray(v29, &v44);
  if ( v13 >= 0 )
  {
    CmpLogTransactionAbortedForRollbackPacket(v10, 9u);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v11 = 0;
    v43 = 0;
    v13 = CmpAbortRollbackPacket(&v44);
    if ( v13 < 0 )
      goto LABEL_49;
    CmpCleanupRollbackPacket(&v44);
    v44 = 0LL;
    LOCK_HIVE_LOAD(v34);
    v35 = (void *)CmCloseRmHandle(*(_QWORD *)(v12 + 4192), 0);
    v37 = (void *)CmCloseTmHandle(*(_QWORD *)(v12 + 4192), v36);
    UNLOCK_HIVE_LOAD();
    if ( v35 )
      ZwClose(v35);
    if ( v37 )
      ZwClose(v37);
    LOCK_HIVE_LOAD(v38);
    LOBYTE(v39) = 1;
    CmShutdownCmRM(*(_QWORD *)(v12 + 4192), v39);
    LOBYTE(v40) = 1;
    CmpLockRegistryFreezeAware(v40);
    v43 = 6;
LABEL_30:
    CmpAttachToRegistryProcess((__int64)v49, v26, v27, v28);
    CmpCompleteUnloadKey(v10, v30, &v43);
    CmpDetachFromRegistryProcess((__int64)v49, v31, v32, v33);
    v13 = 0;
    goto LABEL_31;
  }
  v11 = v43;
LABEL_49:
  if ( (v11 & 4) == 0 )
  {
    LOCK_HIVE_LOAD(v9);
    v11 |= 4u;
    v43 = v11;
  }
  if ( (v11 & 2) == 0 )
  {
    LOBYTE(v9) = 1;
    CmpLockRegistryFreezeAware(v9);
    v11 |= 2u;
    v43 = v11;
  }
  if ( v23 )
  {
    _InterlockedExchange64((volatile __int64 *)(v12 + 1632), 0LL);
    *(_DWORD *)(v10 + 8) &= ~0x40000u;
LABEL_31:
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v41, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
    LOBYTE(v11) = v43;
  }
LABEL_14:
  if ( (v11 & 2) != 0 )
    CmpUnlockRegistry();
  if ( (v11 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( (__int128 *)v45 != &v45 )
    CmpSignalDeferredPosts((_QWORD **)&v45);
  CmpCleanupKcbStack((__int64)v48);
  CmpCleanupRollbackPacket(&v44);
  return (unsigned int)v13;
}

/*
 * XREFs of CmpPerformUnloadKey @ 0x14071A1B8
 * Callers:
 *     CmUnloadKey @ 0x140719C78 (CmUnloadKey.c)
 * Callees:
 *     ExRundownCompleted @ 0x140251F40 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402797E0 (ExWaitForRundownProtectionRelease.c)
 *     CmpInitializeDelayDerefContext @ 0x1403510E8 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140351100 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1403F9560 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     CmpReportNotifyForKcbStack @ 0x1405ED300 (CmpReportNotifyForKcbStack.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140665D30 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpSignalDeferredPosts @ 0x140667890 (CmpSignalDeferredPosts.c)
 *     CmpFlushNotify @ 0x14066AE8C (CmpFlushNotify.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14066CC00 (CmpFlushNotifiesOnKeyBodyList.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406725C0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1406726F0 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x140672754 (LOCK_HIVE_LOAD.c)
 *     CmSnapshotRMTxArray @ 0x1406A3B98 (CmSnapshotRMTxArray.c)
 *     CmShutdownCmRM @ 0x1406BB458 (CmShutdownCmRM.c)
 *     CmpFreezeHive @ 0x1406BF2E8 (CmpFreezeHive.c)
 *     CmCloseRmHandle @ 0x1406C2CB0 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1406C2CD8 (CmCloseTmHandle.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406C3144 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpCleanupKcbStack @ 0x1406FB360 (CmpCleanupKcbStack.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x14071984C (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpCleanupRollbackPacket @ 0x14071C518 (CmpCleanupRollbackPacket.c)
 *     CmpCompleteUnloadKey @ 0x14071CB34 (CmpCompleteUnloadKey.c)
 *     CmpUnfreezeHive @ 0x140730C38 (CmpUnfreezeHive.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076E1A4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140772AC4 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x140772CE0 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x14077A8CC (CmpAbortRollbackPacket.c)
 *     CmObliterateRMTxArray @ 0x140872A14 (CmObliterateRMTxArray.c)
 *     CmpLogUnsupportedOperation @ 0x14087634C (CmpLogUnsupportedOperation.c)
 */

__int64 __fastcall CmpPerformUnloadKey(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v7; // rsi
  int v8; // edi
  __int64 v9; // r14
  int v10; // ebx
  __int64 v11; // r8
  struct _LOOKASIDE_LIST_EX *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r9
  int v21; // eax
  char v22; // r15
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r9
  void *v29; // rdi
  char v30; // dl
  void *v31; // rbx
  __int64 v32; // rdx
  signed __int32 v33[8]; // [rsp+0h] [rbp-A9h] BYREF
  char v34; // [rsp+30h] [rbp-79h]
  _BYTE v35[3]; // [rsp+31h] [rbp-78h] BYREF
  int v36; // [rsp+34h] [rbp-75h] BYREF
  __int128 v37; // [rsp+38h] [rbp-71h] BYREF
  __int128 v38; // [rsp+48h] [rbp-61h] BYREF
  __int128 v39; // [rsp+58h] [rbp-51h] BYREF
  __int64 v40; // [rsp+68h] [rbp-41h]
  _OWORD v41[2]; // [rsp+70h] [rbp-39h] BYREF
  _OWORD v42[3]; // [rsp+90h] [rbp-19h] BYREF

  v40 = a4;
  v35[0] = 0;
  *((_QWORD *)&v38 + 1) = &v38;
  v34 = 0;
  *(_QWORD *)&v38 = &v38;
  memset(v41, 0, sizeof(v41));
  WORD1(v41[0]) = -1;
  memset(v42, 0, sizeof(v42));
  v39 = 0LL;
  v37 = 0LL;
  CmpInitializeDelayDerefContext(&v39);
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 6;
  v36 = 6;
  v9 = *(_QWORD *)(v7 + 32);
  if ( (*(_DWORD *)(v7 + 8) & 0x80u) != 0 )
    goto LABEL_58;
  v10 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v10 < 0 )
    goto LABEL_50;
  if ( (*(_DWORD *)(v7 + 8) & 0x40000) != 0 )
  {
    v10 = -1073740763;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(v9 + 2936) && ((a2 & 1) == 0 || (*(_DWORD *)(v9 + 4152) & 0x20) == 0) )
  {
    v10 = -1073741431;
    goto LABEL_50;
  }
  if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)v41, v7, v11, v12) < 0 )
  {
    v10 = -1073741670;
    goto LABEL_50;
  }
  CmpReportNotifyForKcbStack((__int64)v41, 0, 4, (__int64)&v38);
  LOBYTE(v13) = 1;
  CmpFlushNotify(a1, v13, &v38);
  v16 = *(_QWORD *)(v7 + 32);
  if ( v16 == CmpMasterHive || (*(_DWORD *)(v7 + 184) & 0x40000) == 0 )
  {
    v10 = -1073741811;
    goto LABEL_50;
  }
  if ( (*(_DWORD *)(v16 + 4152) & 4) != 0 )
  {
LABEL_58:
    v10 = -1073741790;
    goto LABEL_50;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( CmpDoesKeyHaveOpenSubkeys(v7) || *(_QWORD *)v7 != 2LL )
    {
      if ( a3 )
      {
        v10 = CmpFreezeHive(v7, v40);
        if ( v10 >= 0 )
        {
          v10 = 259;
          goto LABEL_14;
        }
        goto LABEL_50;
      }
      goto LABEL_49;
    }
    goto LABEL_27;
  }
  v18 = *(_QWORD *)(v7 + 192);
  if ( v18 && *(_QWORD *)(v18 + 32) != v18 + 32 )
  {
    CmpLogUnsupportedOperation(3LL);
LABEL_49:
    v10 = -1073741535;
    goto LABEL_50;
  }
  LOBYTE(v14) = 1;
  v19 = CmpTryAcquireKcbIXLocks(v7, v14, v15, &v37);
  v10 = v19;
  if ( v19 == -1073741267 )
  {
LABEL_65:
    CmpLogTransactionAbortedForRollbackPacket(v7, 0xAu, (unsigned int *)&v37, v20);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v8 = 0;
    v36 = 0;
    v10 = CmpAbortRollbackPacket(&v37, 0LL);
    if ( v10 >= 0 )
      v10 = -1073741267;
    v22 = 0;
    goto LABEL_51;
  }
  if ( v19 < 0 )
  {
LABEL_50:
    v22 = v34;
    goto LABEL_51;
  }
  v21 = CmpPrepareForSubtreeInvalidation(v7, 0LL, &v37);
  v10 = v21;
  if ( v21 == -1073741267 )
    goto LABEL_65;
  if ( v21 < 0 )
    goto LABEL_50;
  CmpInvalidateSubtree(v7, 1, 1, (unsigned int)&v39, 0LL);
  CmpFlushNotifiesOnKeyBodyList(v7, 1LL, (__int64)&v39, 1);
LABEL_27:
  *(_DWORD *)(v7 + 8) |= 0x40000u;
  v22 = 1;
  if ( *(_BYTE *)(v9 + 2936) == 1 )
  {
    CmpUnfreezeHive((PVOID)v9);
    ++CmpActiveAppHiveUnloadCount;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v39);
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  _InterlockedIncrement(&CmpActiveHiveRundownCount);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v9 + 1632));
  ExRundownCompleted((PEX_RUNDOWN_REF)(v9 + 1632));
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  v26 = *(_QWORD *)(v9 + 4192);
  if ( !v26 )
    goto LABEL_30;
  v10 = CmSnapshotRMTxArray(v26, &v37);
  if ( v10 >= 0 )
  {
    CmpLogTransactionAbortedForRollbackPacket(v7, 9u, (unsigned int *)&v37, v28);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v8 = 0;
    v36 = 0;
    v10 = CmpAbortRollbackPacket(&v37, v35);
    if ( v10 < 0 )
      goto LABEL_51;
    CmpCleanupRollbackPacket(&v37);
    v37 = 0LL;
    if ( v35[0] )
      CmObliterateRMTxArray(*(_QWORD *)(v9 + 4192));
    LOCK_HIVE_LOAD();
    v29 = (void *)CmCloseRmHandle(*(_QWORD *)(v9 + 4192), 0);
    v31 = (void *)CmCloseTmHandle(*(_QWORD *)(v9 + 4192), v30);
    UNLOCK_HIVE_LOAD();
    if ( v29 )
      ZwClose(v29);
    if ( v31 )
      ZwClose(v31);
    LOCK_HIVE_LOAD();
    LOBYTE(v32) = 1;
    CmShutdownCmRM(*(_QWORD *)(v9 + 4192), v32);
    CmpLockRegistryFreezeAware(1);
    v36 = 6;
LABEL_30:
    CmpAttachToRegistryProcess((__int64)v42, v23, v24, v25);
    CmpCompleteUnloadKey(v7, v27, &v36);
    CmpDetachFromRegistryProcess((__int64)v42);
    v10 = 0;
    goto LABEL_31;
  }
  v8 = v36;
LABEL_51:
  if ( (v8 & 4) == 0 )
  {
    LOCK_HIVE_LOAD();
    v8 |= 4u;
    v36 = v8;
  }
  if ( (v8 & 2) == 0 )
  {
    CmpLockRegistryFreezeAware(1);
    v8 |= 2u;
    v36 = v8;
  }
  if ( v22 )
  {
    _InterlockedExchange64((volatile __int64 *)(v9 + 1632), 0LL);
    *(_DWORD *)(v7 + 8) &= ~0x40000u;
LABEL_31:
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v33, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
    LOBYTE(v8) = v36;
  }
LABEL_14:
  if ( (v8 & 2) != 0 )
    CmpUnlockRegistry();
  if ( (v8 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( (__int128 *)v38 != &v38 )
    CmpSignalDeferredPosts((_QWORD **)&v38);
  CmpCleanupKcbStack((__int64)v41);
  CmpCleanupRollbackPacket(&v37);
  return (unsigned int)v10;
}

/*
 * XREFs of CmpPerformUnloadKey @ 0x1405DFA8C
 * Callers:
 *     CmUnloadKey @ 0x1405DF54C (CmUnloadKey.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1402F6750 (ExRundownCompleted.c)
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     CmpFreezeHive @ 0x1405DF460 (CmpFreezeHive.c)
 *     CmpCompleteUnloadKey @ 0x1405E0268 (CmpCompleteUnloadKey.c)
 *     CmpCleanupRollbackPacket @ 0x1405E094C (CmpCleanupRollbackPacket.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x1405E0998 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmShutdownCmRM @ 0x1405E0E38 (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x1405E114C (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x1405E1174 (CmCloseRmHandle.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1405E119C (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmSnapshotRMTxArray @ 0x1405E1668 (CmSnapshotRMTxArray.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14065AB50 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpSignalDeferredPosts @ 0x14065C6B0 (CmpSignalDeferredPosts.c)
 *     CmpFlushNotify @ 0x14065FCAC (CmpFlushNotify.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140661A20 (CmpFlushNotifiesOnKeyBodyList.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406677F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140667920 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x140667984 (LOCK_HIVE_LOAD.c)
 *     CmpReportNotifyForKcbStack @ 0x1406DCA60 (CmpReportNotifyForKcbStack.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140712740 (CmpCleanupKcbStack.c)
 *     CmpUnfreezeHive @ 0x140730E04 (CmpUnfreezeHive.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076E364 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140772C84 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x140772EA0 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x14077AA8C (CmpAbortRollbackPacket.c)
 *     CmObliterateRMTxArray @ 0x140872B74 (CmObliterateRMTxArray.c)
 *     CmpLogUnsupportedOperation @ 0x1408764AC (CmpLogUnsupportedOperation.c)
 */

__int64 __fastcall CmpPerformUnloadKey(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  ULONG_PTR v10; // rsi
  int v11; // edi
  __int64 v12; // r14
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  char v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  void *v28; // rdi
  void *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  signed __int32 v34[8]; // [rsp+0h] [rbp-A9h] BYREF
  char v35; // [rsp+30h] [rbp-79h]
  _BYTE v36[3]; // [rsp+31h] [rbp-78h] BYREF
  int v37; // [rsp+34h] [rbp-75h] BYREF
  __int128 v38; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v39[2]; // [rsp+48h] [rbp-61h] BYREF
  __int128 v40; // [rsp+58h] [rbp-51h] BYREF
  __int64 v41; // [rsp+68h] [rbp-41h]
  _OWORD v42[2]; // [rsp+70h] [rbp-39h] BYREF
  _OWORD v43[3]; // [rsp+90h] [rbp-19h] BYREF

  v41 = a4;
  v36[0] = 0;
  v39[1] = v39;
  v35 = 0;
  v39[0] = v39;
  memset(v42, 0, sizeof(v42));
  WORD1(v42[0]) = -1;
  memset(v43, 0, sizeof(v43));
  v40 = 0LL;
  v38 = 0LL;
  CmpInitializeDelayDerefContext(&v40);
  LOCK_HIVE_LOAD();
  LOBYTE(v7) = 1;
  CmpLockRegistryFreezeAware(v7);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = 6;
  v37 = 6;
  v12 = *(_QWORD *)(v10 + 32);
  if ( (*(_DWORD *)(v10 + 8) & 0x80u) != 0 )
    goto LABEL_58;
  v13 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v13 < 0 )
    goto LABEL_50;
  if ( (*(_DWORD *)(v10 + 8) & 0x40000) != 0 )
  {
    v13 = -1073740763;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(v12 + 2936) && ((a2 & 1) == 0 || (*(_DWORD *)(v12 + 4152) & 0x20) == 0) )
  {
    v13 = -1073741431;
    goto LABEL_50;
  }
  if ( (int)CmpStartKcbStackForTopLayerKcb(v42, v10) < 0 )
  {
    v13 = -1073741670;
    goto LABEL_50;
  }
  CmpReportNotifyForKcbStack(v42, 0LL, 4LL, v39);
  LOBYTE(v14) = 1;
  CmpFlushNotify(a1, v14, v39);
  v9 = *(_DWORD **)(v10 + 32);
  if ( v9 == CmpMasterHive || (*(_DWORD *)(v10 + 184) & 0x40000) == 0 )
  {
    v13 = -1073741811;
    goto LABEL_50;
  }
  if ( (v9[1038] & 4) != 0 )
  {
LABEL_58:
    v13 = -1073741790;
    goto LABEL_50;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( (unsigned __int8)CmpDoesKeyHaveOpenSubkeys(v10) || *(_QWORD *)v10 != 2LL )
    {
      if ( a3 )
      {
        v13 = CmpFreezeHive(v10, v41);
        if ( v13 >= 0 )
        {
          v13 = 259;
          goto LABEL_14;
        }
        goto LABEL_50;
      }
      goto LABEL_49;
    }
    goto LABEL_27;
  }
  v17 = *(_QWORD *)(v10 + 192);
  if ( v17 && *(_QWORD *)(v17 + 32) != v17 + 32 )
  {
    CmpLogUnsupportedOperation(3LL);
LABEL_49:
    v13 = -1073741535;
    goto LABEL_50;
  }
  LOBYTE(v8) = 1;
  v18 = CmpTryAcquireKcbIXLocks(v10, v8, v15, &v38);
  v13 = v18;
  if ( v18 == -1073741267 )
  {
LABEL_65:
    CmpLogTransactionAbortedForRollbackPacket(v10, 10LL, &v38);
    CmpUnlockRegistry(v33, v32);
    UNLOCK_HIVE_LOAD();
    v11 = 0;
    v37 = 0;
    v13 = CmpAbortRollbackPacket(&v38, 0LL);
    if ( v13 >= 0 )
      v13 = -1073741267;
    v20 = 0;
    goto LABEL_51;
  }
  if ( v18 < 0 )
  {
LABEL_50:
    v20 = v35;
    goto LABEL_51;
  }
  v19 = CmpPrepareForSubtreeInvalidation(v10, 0LL, &v38);
  v13 = v19;
  if ( v19 == -1073741267 )
    goto LABEL_65;
  if ( v19 < 0 )
    goto LABEL_50;
  CmpInvalidateSubtree(v10, 1, 1, (unsigned int)&v40, 0LL);
  CmpFlushNotifiesOnKeyBodyList(v10, 1LL, &v40);
LABEL_27:
  *(_DWORD *)(v10 + 8) |= 0x40000u;
  v20 = 1;
  if ( *(_BYTE *)(v12 + 2936) == 1 )
  {
    CmpUnfreezeHive((PVOID)v12);
    ++CmpActiveAppHiveUnloadCount;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v40);
  CmpUnlockRegistry(v22, v21);
  UNLOCK_HIVE_LOAD();
  _InterlockedIncrement(&CmpActiveHiveRundownCount);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v12 + 1632));
  ExRundownCompleted((PEX_RUNDOWN_REF)(v12 + 1632));
  LOCK_HIVE_LOAD();
  LOBYTE(v23) = 1;
  CmpLockRegistryFreezeAware(v23);
  v24 = *(_QWORD *)(v12 + 4192);
  if ( !v24 )
    goto LABEL_30;
  v13 = CmSnapshotRMTxArray(v24, &v38);
  if ( v13 >= 0 )
  {
    CmpLogTransactionAbortedForRollbackPacket(v10, 9LL, &v38);
    CmpUnlockRegistry(v27, v26);
    UNLOCK_HIVE_LOAD();
    v11 = 0;
    v37 = 0;
    v13 = CmpAbortRollbackPacket(&v38, v36);
    if ( v13 < 0 )
      goto LABEL_51;
    CmpCleanupRollbackPacket(&v38);
    v38 = 0LL;
    if ( v36[0] )
      CmObliterateRMTxArray(*(_QWORD *)(v12 + 4192));
    LOCK_HIVE_LOAD();
    v28 = (void *)CmCloseRmHandle(*(_QWORD *)(v12 + 4192), 0LL);
    v29 = (void *)CmCloseTmHandle(*(_QWORD *)(v12 + 4192));
    UNLOCK_HIVE_LOAD();
    if ( v28 )
      ZwClose(v28);
    if ( v29 )
      ZwClose(v29);
    LOCK_HIVE_LOAD();
    LOBYTE(v30) = 1;
    CmShutdownCmRM(*(_QWORD *)(v12 + 4192), v30);
    LOBYTE(v31) = 1;
    CmpLockRegistryFreezeAware(v31);
    v37 = 6;
LABEL_30:
    CmpAttachToRegistryProcess(v43);
    CmpCompleteUnloadKey(v10, v25, &v37);
    CmpDetachFromRegistryProcess(v43);
    v13 = 0;
    goto LABEL_31;
  }
  v11 = v37;
LABEL_51:
  if ( (v11 & 4) == 0 )
  {
    LOCK_HIVE_LOAD();
    v11 |= 4u;
    v37 = v11;
  }
  if ( (v11 & 2) == 0 )
  {
    LOBYTE(v9) = 1;
    CmpLockRegistryFreezeAware(v9);
    v11 |= 2u;
    v37 = v11;
  }
  if ( v20 )
  {
    _InterlockedExchange64((volatile __int64 *)(v12 + 1632), 0LL);
    *(_DWORD *)(v10 + 8) &= ~0x40000u;
LABEL_31:
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v34, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
    LOBYTE(v11) = v37;
  }
LABEL_14:
  if ( (v11 & 2) != 0 )
    CmpUnlockRegistry(v9, v8);
  if ( (v11 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( (_QWORD *)v39[0] != v39 )
    CmpSignalDeferredPosts(v39);
  CmpCleanupKcbStack(v42);
  CmpCleanupRollbackPacket(&v38);
  return (unsigned int)v13;
}

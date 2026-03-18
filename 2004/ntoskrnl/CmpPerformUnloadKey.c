/*
 * XREFs of CmpPerformUnloadKey @ 0x1406503FC
 * Callers:
 *     CmUnloadKey @ 0x14064FEBC (CmUnloadKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140205F64 (CmpInitializeDelayDerefContext.c)
 *     ExRundownCompleted @ 0x14027BE20 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1403F2CC0 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405E55D0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x1405E57CC (CmpReportNotifyForKcbStack.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpSignalDeferredPosts @ 0x1405ED780 (CmpSignalDeferredPosts.c)
 *     CmpCleanupKcbStack @ 0x1405F0A50 (CmpCleanupKcbStack.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     UNLOCK_HIVE_LOAD @ 0x14063FF30 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140640060 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406400C4 (LOCK_HIVE_LOAD.c)
 *     CmpCleanupRollbackPacket @ 0x14064349C (CmpCleanupRollbackPacket.c)
 *     CmpCompleteUnloadKey @ 0x14064364C (CmpCompleteUnloadKey.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406449E0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreezeHive @ 0x14064FDD0 (CmpFreezeHive.c)
 *     CmpFlushNotify @ 0x140650858 (CmpFlushNotify.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x140652A00 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmShutdownCmRM @ 0x140652EA8 (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x1406531BC (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x1406531E4 (CmCloseRmHandle.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x14065320C (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmSnapshotRMTxArray @ 0x140654034 (CmSnapshotRMTxArray.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406725F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnfreezeHive @ 0x14071EA78 (CmpUnfreezeHive.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14075B7F0 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140760338 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x140760550 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x140768310 (CmpAbortRollbackPacket.c)
 *     CmpLogUnsupportedOperation @ 0x140872E88 (CmpLogUnsupportedOperation.c)
 */

__int64 __fastcall CmpPerformUnloadKey(__int64 a1, char a2, char a3, __int64 a4)
{
  ULONG_PTR v7; // rsi
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
  int v20; // eax
  char v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rdx
  void *v24; // rdi
  void *v25; // rbx
  __int64 v26; // rdx
  signed __int32 v27[8]; // [rsp+0h] [rbp-99h] BYREF
  char v28; // [rsp+20h] [rbp-79h]
  int v29; // [rsp+24h] [rbp-75h] BYREF
  __int128 v30; // [rsp+28h] [rbp-71h] BYREF
  _QWORD *v31[2]; // [rsp+38h] [rbp-61h] BYREF
  __int128 v32; // [rsp+48h] [rbp-51h] BYREF
  __int64 v33; // [rsp+58h] [rbp-41h]
  _OWORD v34[2]; // [rsp+60h] [rbp-39h] BYREF
  _OWORD v35[3]; // [rsp+80h] [rbp-19h] BYREF

  v33 = a4;
  v28 = 0;
  v31[1] = v31;
  v31[0] = v31;
  memset(v34, 0, sizeof(v34));
  WORD1(v34[0]) = -1;
  memset(v35, 0, sizeof(v35));
  v32 = 0LL;
  v30 = 0LL;
  CmpInitializeDelayDerefContext(&v32);
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 6;
  v29 = 6;
  v9 = *(_QWORD *)(v7 + 32);
  if ( (*(_DWORD *)(v7 + 8) & 0x80u) != 0 )
    goto LABEL_56;
  v10 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v10 < 0 )
    goto LABEL_48;
  if ( (*(_DWORD *)(v7 + 8) & 0x40000) != 0 )
  {
    v10 = -1073740763;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v9 + 2936) && ((a2 & 1) == 0 || (*(_DWORD *)(v9 + 4152) & 0x20) == 0) )
  {
    v10 = -1073741431;
    goto LABEL_48;
  }
  if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)v34, v7, v11, v12) < 0 )
  {
    v10 = -1073741670;
    goto LABEL_48;
  }
  CmpReportNotifyForKcbStack((__int64)v34, 0, 4, (__int64)v31);
  LOBYTE(v13) = 1;
  CmpFlushNotify(a1, v13, v31);
  v16 = *(_QWORD *)(v7 + 32);
  if ( v16 == CmpMasterHive || (*(_DWORD *)(v7 + 184) & 0x40000) == 0 )
  {
    v10 = -1073741811;
    goto LABEL_48;
  }
  if ( (*(_DWORD *)(v16 + 4152) & 4) != 0 )
  {
LABEL_56:
    v10 = -1073741790;
    goto LABEL_48;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( (unsigned __int8)CmpDoesKeyHaveOpenSubkeys(v7) || *(_QWORD *)v7 != 2LL )
    {
      if ( a3 )
      {
        v10 = CmpFreezeHive(v7, v33);
        if ( v10 >= 0 )
        {
          v10 = 259;
          goto LABEL_14;
        }
        goto LABEL_48;
      }
      goto LABEL_47;
    }
    goto LABEL_27;
  }
  v18 = *(_QWORD *)(v7 + 192);
  if ( v18 && *(_QWORD *)(v18 + 32) != v18 + 32 )
  {
    CmpLogUnsupportedOperation(3LL);
LABEL_47:
    v10 = -1073741535;
    goto LABEL_48;
  }
  LOBYTE(v14) = 1;
  v19 = CmpTryAcquireKcbIXLocks(v7, v14, v15, &v30);
  v10 = v19;
  if ( v19 == -1073741267 )
  {
LABEL_63:
    CmpLogTransactionAbortedForRollbackPacket(v7, 10LL, &v30);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v8 = 0;
    v29 = 0;
    v10 = CmpAbortRollbackPacket(&v30);
    if ( v10 >= 0 )
      v10 = -1073741267;
    v21 = 0;
    goto LABEL_49;
  }
  if ( v19 < 0 )
  {
LABEL_48:
    v21 = v28;
    goto LABEL_49;
  }
  v20 = CmpPrepareForSubtreeInvalidation(v7, &v30);
  v10 = v20;
  if ( v20 == -1073741267 )
    goto LABEL_63;
  if ( v20 < 0 )
    goto LABEL_48;
  CmpInvalidateSubtree(v7, 1LL, &v32);
  CmpFlushNotifiesOnKeyBodyList(v7, 1LL, (__int64)&v32, 1);
LABEL_27:
  *(_DWORD *)(v7 + 8) |= 0x40000u;
  v21 = 1;
  if ( *(_BYTE *)(v9 + 2936) == 1 )
  {
    CmpUnfreezeHive((PVOID)v9);
    ++CmpActiveAppHiveUnloadCount;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v32);
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  _InterlockedIncrement(&CmpActiveHiveRundownCount);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v9 + 1632));
  ExRundownCompleted((PEX_RUNDOWN_REF)(v9 + 1632));
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  v22 = *(_QWORD *)(v9 + 4192);
  if ( !v22 )
    goto LABEL_30;
  v10 = CmSnapshotRMTxArray(v22, &v30);
  if ( v10 >= 0 )
  {
    CmpLogTransactionAbortedForRollbackPacket(v7, 9LL, &v30);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v8 = 0;
    v29 = 0;
    v10 = CmpAbortRollbackPacket(&v30);
    if ( v10 < 0 )
      goto LABEL_49;
    CmpCleanupRollbackPacket((__int64)&v30);
    v30 = 0LL;
    LOCK_HIVE_LOAD();
    v24 = (void *)CmCloseRmHandle(*(_QWORD *)(v9 + 4192), 0LL);
    v25 = (void *)CmCloseTmHandle(*(_QWORD *)(v9 + 4192));
    UNLOCK_HIVE_LOAD();
    if ( v24 )
      ZwClose(v24);
    if ( v25 )
      ZwClose(v25);
    LOCK_HIVE_LOAD();
    LOBYTE(v26) = 1;
    CmShutdownCmRM(*(_QWORD *)(v9 + 4192), v26);
    CmpLockRegistryFreezeAware(1);
    v29 = 6;
LABEL_30:
    CmpAttachToRegistryProcess((__int64)v35);
    CmpCompleteUnloadKey(v7, v23, &v29);
    CmpDetachFromRegistryProcess((__int64)v35);
    v10 = 0;
    goto LABEL_31;
  }
  v8 = v29;
LABEL_49:
  if ( (v8 & 4) == 0 )
  {
    LOCK_HIVE_LOAD();
    v8 |= 4u;
    v29 = v8;
  }
  if ( (v8 & 2) == 0 )
  {
    CmpLockRegistryFreezeAware(1);
    v8 |= 2u;
    v29 = v8;
  }
  if ( v21 )
  {
    _InterlockedExchange64((volatile __int64 *)(v9 + 1632), 0LL);
    *(_DWORD *)(v7 + 8) &= ~0x40000u;
LABEL_31:
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v27, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
    LOBYTE(v8) = v29;
  }
LABEL_14:
  if ( (v8 & 2) != 0 )
    CmpUnlockRegistry();
  if ( (v8 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( v31[0] != v31 )
    CmpSignalDeferredPosts(v31);
  CmpCleanupKcbStack((__int64)v34);
  CmpCleanupRollbackPacket((__int64)&v30);
  return (unsigned int)v10;
}

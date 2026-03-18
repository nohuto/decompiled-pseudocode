/*
 * XREFs of CmpPerformUnloadKey @ 0x1406A26DC
 * Callers:
 *     CmUnloadKey @ 0x1406A219C (CmUnloadKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140227238 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140227250 (CmpDrainDelayDerefContext.c)
 *     ExRundownCompleted @ 0x14023D900 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1403F7730 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     CmpReportNotifyForKcbStack @ 0x1405F3830 (CmpReportNotifyForKcbStack.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpCleanupKcbStack @ 0x14061B470 (CmpCleanupKcbStack.c)
 *     CmpSignalDeferredPosts @ 0x14061C8F0 (CmpSignalDeferredPosts.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpFreezeHive @ 0x1406A20B0 (CmpFreezeHive.c)
 *     CmpCompleteUnloadKey @ 0x1406A2C9C (CmpCompleteUnloadKey.c)
 *     CmpCleanupRollbackPacket @ 0x1406A34DC (CmpCleanupRollbackPacket.c)
 *     CmpFlushNotify @ 0x1406A3528 (CmpFlushNotify.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x1406A3610 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmShutdownCmRM @ 0x1406A3AB8 (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x1406A3DCC (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x1406A3DF4 (CmCloseRmHandle.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406A3E1C (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmSnapshotRMTxArray @ 0x1406A4154 (CmSnapshotRMTxArray.c)
 *     UNLOCK_HIVE_LOAD @ 0x1407011E0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140701310 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x140701374 (LOCK_HIVE_LOAD.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1407017C0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpUnfreezeHive @ 0x14072C914 (CmpUnfreezeHive.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076A0E0 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14076E954 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x14076EB60 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x14077691C (CmpAbortRollbackPacket.c)
 *     CmpLogUnsupportedOperation @ 0x1408789D8 (CmpLogUnsupportedOperation.c)
 */

__int64 __fastcall CmpPerformUnloadKey(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // rsi
  int v10; // edi
  __int64 v11; // r14
  int v12; // ebx
  __int64 v13; // r8
  struct _LOOKASIDE_LIST_EX *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  char v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  void *v26; // rdi
  void *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  signed __int32 v30[8]; // [rsp+0h] [rbp-99h] BYREF
  char v31; // [rsp+20h] [rbp-79h]
  int v32; // [rsp+24h] [rbp-75h] BYREF
  __int128 v33; // [rsp+28h] [rbp-71h] BYREF
  _QWORD *v34[2]; // [rsp+38h] [rbp-61h] BYREF
  __int128 v35; // [rsp+48h] [rbp-51h] BYREF
  __int64 v36; // [rsp+58h] [rbp-41h]
  _OWORD v37[2]; // [rsp+60h] [rbp-39h] BYREF
  _OWORD v38[3]; // [rsp+80h] [rbp-19h] BYREF

  v36 = a4;
  v31 = 0;
  v34[1] = v34;
  v34[0] = v34;
  memset(v37, 0, sizeof(v37));
  WORD1(v37[0]) = -1;
  memset(v38, 0, sizeof(v38));
  v35 = 0LL;
  v33 = 0LL;
  CmpInitializeDelayDerefContext(&v35);
  LOCK_HIVE_LOAD();
  LOBYTE(v7) = 1;
  CmpLockRegistryFreezeAware(v7);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = 6;
  v32 = 6;
  v11 = *(_QWORD *)(v9 + 32);
  if ( (*(_DWORD *)(v9 + 8) & 0x80u) != 0 )
    goto LABEL_56;
  v12 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v12 < 0 )
    goto LABEL_48;
  if ( (*(_DWORD *)(v9 + 8) & 0x40000) != 0 )
  {
    v12 = -1073740763;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v11 + 2936) && ((a2 & 1) == 0 || (*(_DWORD *)(v11 + 4152) & 0x20) == 0) )
  {
    v12 = -1073741431;
    goto LABEL_48;
  }
  if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)v37, v9, v13, v14) < 0 )
  {
    v12 = -1073741670;
    goto LABEL_48;
  }
  CmpReportNotifyForKcbStack((__int64)v37, 0, 4, (__int64)v34);
  LOBYTE(v15) = 1;
  CmpFlushNotify(a1, v15, v34);
  v8 = *(_DWORD **)(v9 + 32);
  if ( v8 == CmpMasterHive || (*(_DWORD *)(v9 + 184) & 0x40000) == 0 )
  {
    v12 = -1073741811;
    goto LABEL_48;
  }
  if ( (v8[1038] & 4) != 0 )
  {
LABEL_56:
    v12 = -1073741790;
    goto LABEL_48;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( (unsigned __int8)CmpDoesKeyHaveOpenSubkeys(v9) || *(_QWORD *)v9 != 2LL )
    {
      if ( a3 )
      {
        v12 = CmpFreezeHive(v9, v36);
        if ( v12 >= 0 )
        {
          v12 = 259;
          goto LABEL_14;
        }
        goto LABEL_48;
      }
      goto LABEL_47;
    }
    goto LABEL_27;
  }
  v19 = *(_QWORD *)(v9 + 192);
  if ( v19 && *(_QWORD *)(v19 + 32) != v19 + 32 )
  {
    CmpLogUnsupportedOperation(3LL);
LABEL_47:
    v12 = -1073741535;
    goto LABEL_48;
  }
  LOBYTE(v16) = 1;
  v20 = CmpTryAcquireKcbIXLocks(v9, v16, v17, &v33);
  v12 = v20;
  if ( v20 == -1073741267 )
  {
LABEL_63:
    CmpLogTransactionAbortedForRollbackPacket(v9, 10LL, &v33);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v10 = 0;
    v32 = 0;
    v12 = CmpAbortRollbackPacket(&v33);
    if ( v12 >= 0 )
      v12 = -1073741267;
    v22 = 0;
    goto LABEL_49;
  }
  if ( v20 < 0 )
  {
LABEL_48:
    v22 = v31;
    goto LABEL_49;
  }
  v21 = CmpPrepareForSubtreeInvalidation(v9, &v33);
  v12 = v21;
  if ( v21 == -1073741267 )
    goto LABEL_63;
  if ( v21 < 0 )
    goto LABEL_48;
  CmpInvalidateSubtree(v9, 1LL, &v35);
  CmpFlushNotifiesOnKeyBodyList(v9, 1LL, &v35);
LABEL_27:
  *(_DWORD *)(v9 + 8) |= 0x40000u;
  v22 = 1;
  if ( *(_BYTE *)(v11 + 2936) == 1 )
  {
    CmpUnfreezeHive((PVOID)v11);
    ++CmpActiveAppHiveUnloadCount;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v35);
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  _InterlockedIncrement(&CmpActiveHiveRundownCount);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v11 + 1632));
  ExRundownCompleted((PEX_RUNDOWN_REF)(v11 + 1632));
  LOCK_HIVE_LOAD();
  LOBYTE(v23) = 1;
  CmpLockRegistryFreezeAware(v23);
  v24 = *(_QWORD *)(v11 + 4192);
  if ( !v24 )
    goto LABEL_30;
  v12 = CmSnapshotRMTxArray(v24, &v33);
  if ( v12 >= 0 )
  {
    CmpLogTransactionAbortedForRollbackPacket(v9, 9LL, &v33);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v10 = 0;
    v32 = 0;
    v12 = CmpAbortRollbackPacket(&v33);
    if ( v12 < 0 )
      goto LABEL_49;
    CmpCleanupRollbackPacket(&v33);
    v33 = 0LL;
    LOCK_HIVE_LOAD();
    v26 = (void *)CmCloseRmHandle(*(_QWORD *)(v11 + 4192), 0LL);
    v27 = (void *)CmCloseTmHandle(*(_QWORD *)(v11 + 4192));
    UNLOCK_HIVE_LOAD();
    if ( v26 )
      ZwClose(v26);
    if ( v27 )
      ZwClose(v27);
    LOCK_HIVE_LOAD();
    LOBYTE(v28) = 1;
    CmShutdownCmRM(*(_QWORD *)(v11 + 4192), v28);
    LOBYTE(v29) = 1;
    CmpLockRegistryFreezeAware(v29);
    v32 = 6;
LABEL_30:
    CmpAttachToRegistryProcess((__int64)v38);
    CmpCompleteUnloadKey(v9, v25, &v32);
    CmpDetachFromRegistryProcess((__int64)v38);
    v12 = 0;
    goto LABEL_31;
  }
  v10 = v32;
LABEL_49:
  if ( (v10 & 4) == 0 )
  {
    LOCK_HIVE_LOAD();
    v10 |= 4u;
    v32 = v10;
  }
  if ( (v10 & 2) == 0 )
  {
    LOBYTE(v8) = 1;
    CmpLockRegistryFreezeAware(v8);
    v10 |= 2u;
    v32 = v10;
  }
  if ( v22 )
  {
    _InterlockedExchange64((volatile __int64 *)(v11 + 1632), 0LL);
    *(_DWORD *)(v9 + 8) &= ~0x40000u;
LABEL_31:
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v30, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
    LOBYTE(v10) = v32;
  }
LABEL_14:
  if ( (v10 & 2) != 0 )
    CmpUnlockRegistry();
  if ( (v10 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( v34[0] != v34 )
    CmpSignalDeferredPosts(v34);
  CmpCleanupKcbStack((__int64)v37);
  CmpCleanupRollbackPacket(&v33);
  return (unsigned int)v12;
}

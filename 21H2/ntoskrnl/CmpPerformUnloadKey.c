/*
 * XREFs of CmpPerformUnloadKey @ 0x14069E98C
 * Callers:
 *     CmUnloadKey @ 0x14069E454 (CmUnloadKey.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     CmpCompleteUnloadKey @ 0x14067BE48 (CmpCompleteUnloadKey.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14067EE40 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanupRollbackPacket @ 0x140681834 (CmpCleanupRollbackPacket.c)
 *     UNLOCK_HIVE_LOAD @ 0x14068934C (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140689388 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406893EC (LOCK_HIVE_LOAD.c)
 *     CmpInvalidateSubtree @ 0x14069E21C (CmpInvalidateSubtree.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14069E26C (CmpPrepareForSubtreeInvalidation.c)
 *     CmpFreezeHive @ 0x14069E368 (CmpFreezeHive.c)
 *     CmpCleanupKcbStack @ 0x14069F004 (CmpCleanupKcbStack.c)
 *     CmpFlushNotify @ 0x14069F668 (CmpFlushNotify.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x14069F770 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14069FC64 (CmpTryAcquireKcbIXLocks.c)
 *     CmShutdownCmRM @ 0x14069FD1C (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x14069FFC0 (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x14069FFE8 (CmCloseRmHandle.c)
 *     CmpAbortRollbackPacket @ 0x1406A0010 (CmpAbortRollbackPacket.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406A0070 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmSnapshotRMTxArray @ 0x1406A0094 (CmSnapshotRMTxArray.c)
 *     CmpSignalDeferredPosts @ 0x140719010 (CmpSignalDeferredPosts.c)
 *     CmpReportNotifyForKcbStack @ 0x140721878 (CmpReportNotifyForKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnfreezeHive @ 0x140914CA4 (CmpUnfreezeHive.c)
 *     CmObliterateRMTxArray @ 0x1409193DC (CmObliterateRMTxArray.c)
 *     CmpLogUnsupportedOperation @ 0x14091CEA0 (CmpLogUnsupportedOperation.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpPerformUnloadKey(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG_PTR v11; // rsi
  int v12; // edi
  __int64 v13; // r14
  int v14; // ebx
  __int64 v15; // rdx
  char v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  void *v31; // rdi
  void *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  signed __int32 v38[8]; // [rsp+0h] [rbp-A9h] BYREF
  __int64 v39; // [rsp+20h] [rbp-89h]
  __int64 v40; // [rsp+28h] [rbp-81h]
  __int64 v41; // [rsp+30h] [rbp-79h] BYREF
  __int128 v42; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v43[2]; // [rsp+48h] [rbp-61h] BYREF
  __int128 v44; // [rsp+58h] [rbp-51h] BYREF
  __int64 v45; // [rsp+68h] [rbp-41h]
  _OWORD v46[2]; // [rsp+70h] [rbp-39h] BYREF
  _OWORD v47[3]; // [rsp+90h] [rbp-19h] BYREF

  v45 = a4;
  v43[1] = v43;
  LOWORD(v41) = 0;
  v43[0] = v43;
  memset(v46, 0, sizeof(v46));
  WORD1(v46[0]) = -1;
  memset(v47, 0, sizeof(v47));
  v44 = 0LL;
  v42 = 0LL;
  CmpInitializeDelayDerefContext(&v44);
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 6;
  HIDWORD(v41) = 6;
  v13 = *(_QWORD *)(v11 + 32);
  if ( (*(_DWORD *)(v11 + 8) & 0x80u) != 0 )
    goto LABEL_53;
  v14 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v14 < 0 )
    goto LABEL_37;
  if ( (*(_DWORD *)(v11 + 8) & 0x40000) != 0 )
  {
    v14 = -1073740763;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v13 + 2944) && ((a2 & 1) == 0 || (*(_DWORD *)(v13 + 4112) & 0x20) == 0) )
  {
    v14 = -1073741431;
    goto LABEL_37;
  }
  if ( (int)CmpStartKcbStackForTopLayerKcb(v46, v11) < 0 )
  {
    v14 = -1073741670;
    goto LABEL_37;
  }
  CmpReportNotifyForKcbStack(v46, 0LL, 4LL, v43, v39, v40, v41, v42, *((_QWORD *)&v42 + 1));
  LOBYTE(v15) = 1;
  CmpFlushNotify(a1, v15, v43);
  v8 = *(_QWORD *)(v11 + 32);
  if ( v8 == CmpMasterHive || (*(_DWORD *)(v11 + 184) & 0x40000) == 0 )
  {
    v14 = -1073741811;
    goto LABEL_37;
  }
  if ( (*(_DWORD *)(v8 + 4112) & 4) != 0 )
  {
LABEL_53:
    v14 = -1073741790;
    goto LABEL_37;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( !(unsigned __int8)CmpDoesKeyHaveOpenSubkeys(v11) && *(_QWORD *)v11 == 2LL )
      goto LABEL_22;
    if ( a3 )
    {
      v14 = CmpFreezeHive(v11, v45);
      if ( v14 >= 0 )
      {
        v14 = 259;
        goto LABEL_14;
      }
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  v24 = *(_QWORD *)(v11 + 192);
  if ( v24 && *(_QWORD *)(v24 + 32) != v24 + 32 )
  {
    CmpLogUnsupportedOperation(3LL);
LABEL_36:
    v14 = -1073741535;
    goto LABEL_37;
  }
  LOBYTE(v7) = 1;
  v25 = CmpTryAcquireKcbIXLocks(v11, v7, v9, &v42);
  v14 = v25;
  if ( v25 == -1073741267 )
  {
LABEL_62:
    CmpLogTransactionAbortedForRollbackPacket(v11, 10LL, &v42);
    CmpUnlockRegistry(v35, v34, v36, v37);
    UNLOCK_HIVE_LOAD();
    v12 = 0;
    HIDWORD(v41) = 0;
    v14 = CmpAbortRollbackPacket(&v42, 0LL);
    if ( v14 >= 0 )
      v14 = -1073741267;
    v17 = 0;
    goto LABEL_38;
  }
  if ( v25 < 0 )
  {
LABEL_37:
    v17 = v41;
    goto LABEL_38;
  }
  v26 = CmpPrepareForSubtreeInvalidation(v11, 0, (__int64)&v42);
  v14 = v26;
  if ( v26 == -1073741267 )
    goto LABEL_62;
  if ( v26 < 0 )
    goto LABEL_37;
  CmpInvalidateSubtree(v11, 1LL, 1, (__int64)&v44, 0LL);
  CmpFlushNotifiesOnKeyBodyList(v11, 1LL, (__int64)&v44, 1);
LABEL_22:
  *(_DWORD *)(v11 + 8) |= 0x40000u;
  v17 = 1;
  if ( *(_BYTE *)(v13 + 2944) == 1 )
  {
    CmpUnfreezeHive(v13);
    ++CmpActiveAppHiveUnloadCount;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v44);
  CmpUnlockRegistry(v19, v18, v20, v21);
  UNLOCK_HIVE_LOAD();
  _InterlockedIncrement(&CmpActiveHiveRundownCount);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v13 + 1640));
  ExRundownCompleted((PEX_RUNDOWN_REF)(v13 + 1640));
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  v22 = *(_QWORD *)(v13 + 4152);
  if ( !v22 )
    goto LABEL_25;
  v14 = CmSnapshotRMTxArray(v22, &v42);
  if ( v14 < 0 )
  {
    v12 = HIDWORD(v41);
  }
  else
  {
    CmpLogTransactionAbortedForRollbackPacket(v11, 9LL, &v42);
    CmpUnlockRegistry(v28, v27, v29, v30);
    UNLOCK_HIVE_LOAD();
    v12 = 0;
    HIDWORD(v41) = 0;
    v14 = CmpAbortRollbackPacket(&v42, (char *)&v41 + 1);
    if ( v14 >= 0 )
    {
      CmpCleanupRollbackPacket((__int64)&v42);
      v42 = 0LL;
      if ( BYTE1(v41) )
        CmObliterateRMTxArray(*(_QWORD *)(v13 + 4152));
      LOCK_HIVE_LOAD();
      v31 = (void *)CmCloseRmHandle(*(_QWORD *)(v13 + 4152), 0LL);
      v32 = (void *)CmCloseTmHandle(*(_QWORD *)(v13 + 4152));
      UNLOCK_HIVE_LOAD();
      if ( v31 )
        ZwClose(v31);
      if ( v32 )
        ZwClose(v32);
      LOCK_HIVE_LOAD();
      LOBYTE(v33) = 1;
      CmShutdownCmRM(*(_QWORD *)(v13 + 4152), v33);
      CmpLockRegistryFreezeAware(1);
      HIDWORD(v41) = 6;
LABEL_25:
      CmpAttachToRegistryProcess(v47);
      CmpCompleteUnloadKey(v11, v23, (_DWORD *)&v41 + 1);
      CmpDetachFromRegistryProcess(v47);
      v14 = 0;
      goto LABEL_26;
    }
  }
LABEL_38:
  if ( (v12 & 4) == 0 )
  {
    LOCK_HIVE_LOAD();
    v12 |= 4u;
    HIDWORD(v41) = v12;
  }
  if ( (v12 & 2) == 0 )
  {
    CmpLockRegistryFreezeAware(1);
    v12 |= 2u;
    HIDWORD(v41) = v12;
  }
  if ( v17 )
  {
    _InterlockedExchange64((volatile __int64 *)(v13 + 1640), 0LL);
    *(_DWORD *)(v11 + 8) &= ~0x40000u;
LABEL_26:
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v38, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
    LOBYTE(v12) = BYTE4(v41);
  }
LABEL_14:
  if ( (v12 & 2) != 0 )
    CmpUnlockRegistry(v8, v7, v9, v10);
  if ( (v12 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( (_QWORD *)v43[0] != v43 )
    CmpSignalDeferredPosts(v43);
  CmpCleanupKcbStack(v46);
  CmpCleanupRollbackPacket((__int64)&v42);
  return (unsigned int)v14;
}

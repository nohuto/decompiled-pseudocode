/*
 * XREFs of CmpTryToRundownHive @ 0x1402D2F68
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x14065AD30 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402D44C0 (ExRundownCompleted.c)
 *     ExpUnblockPushLock @ 0x1402EBE18 (ExpUnblockPushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     CmpReleaseShutdownRundown @ 0x1405EACA0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405EBEF0 (CmpAcquireShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmSnapshotRMTxArray @ 0x140658994 (CmSnapshotRMTxArray.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x140658FF0 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmCloseRmHandle @ 0x140659014 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x14065903C (CmCloseTmHandle.c)
 *     CmShutdownCmRM @ 0x140659064 (CmShutdownCmRM.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x140659678 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpInitializeRollbackPacket @ 0x14065B6CC (CmpInitializeRollbackPacket.c)
 *     CmpCleanupRollbackPacket @ 0x14065B6DC (CmpCleanupRollbackPacket.c)
 *     UNLOCK_HIVE_LOAD @ 0x140691040 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140691170 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406911D4 (LOCK_HIVE_LOAD.c)
 *     CmpAbortRollbackPacket @ 0x140765F2C (CmpAbortRollbackPacket.c)
 */

char __fastcall CmpTryToRundownHive(struct _EX_RUNDOWN_REF *a1, __int64 a2, _BYTE *a3)
{
  char v4; // r15
  char v5; // r14
  char *v8; // r8
  char v9; // r12
  bool v10; // zf
  unsigned __int64 Count; // rcx
  __int64 v13; // rcx
  void *v14; // r14
  void *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v20[2]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = 0;
  v20[0] = 0LL;
  CmpInitializeRollbackPacket(v20);
  v9 = *v8;
  while ( 1 )
  {
    if ( *a3 )
      CmpReleaseShutdownRundown();
    *a3 = 0;
    if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
      goto LABEL_26;
    v10 = *(_QWORD *)a2 == 2LL;
    *a3 = 1;
    if ( !v10 && ((unsigned __int8)CmpDoesKeyHaveOpenSubkeys(a2) || *(_QWORD *)a2 != 2LL) )
      goto LABEL_26;
    if ( !v4 )
    {
      *(_DWORD *)(a2 + 8) |= 0x40000u;
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      _InterlockedIncrement(&CmpActiveHiveRundownCount);
      ExWaitForRundownProtectionRelease(a1 + 204);
      ExRundownCompleted(a1 + 204);
      v4 = 1;
      LOCK_HIVE_LOAD();
      LOBYTE(v13) = 1;
      goto LABEL_15;
    }
    Count = a1[524].Count;
    if ( !Count || v5 )
      break;
    if ( (int)CmSnapshotRMTxArray(Count, v20) < 0 )
      goto LABEL_26;
    CmpLogTransactionAbortedForRollbackPacket(a2, 11LL, v20);
    CmpUnlockRegistry();
    if ( LODWORD(v20[0]) )
    {
      UNLOCK_HIVE_LOAD();
      if ( (int)CmpAbortRollbackPacket(v20) < 0 )
      {
        LOCK_HIVE_LOAD();
        LOBYTE(v18) = 1;
        CmpLockRegistryFreezeAware(v18);
LABEL_26:
        if ( v4 )
        {
          *(_DWORD *)(a2 + 8) &= ~0x40000u;
          _InterlockedExchange64((volatile __int64 *)&a1[204], 0LL);
          if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
          {
            _InterlockedOr(v19, 0);
            if ( CmpActiveHiveRundownEvent )
              ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
          }
        }
        CmpCleanupRollbackPacket(v20);
        if ( *a3 )
        {
          CmpReleaseShutdownRundown();
          *a3 = 0;
        }
        return 0;
      }
      LOCK_HIVE_LOAD();
      LOBYTE(v13) = 1;
LABEL_15:
      CmpLockRegistryFreezeAware(v13);
    }
    else
    {
      v14 = (void *)CmCloseRmHandle(a1[524].Count, 0LL);
      v15 = (void *)CmCloseTmHandle(a1[524].Count);
      UNLOCK_HIVE_LOAD();
      if ( v14 )
        ZwClose(v14);
      if ( v15 )
        ZwClose(v15);
      LOCK_HIVE_LOAD();
      LOBYTE(v16) = 1;
      CmShutdownCmRM(a1[524].Count, v16);
      LOBYTE(v17) = 1;
      CmpLockRegistryFreezeAware(v17);
      v5 = 1;
    }
  }
  if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
  {
    _InterlockedOr(v19, 0);
    if ( CmpActiveHiveRundownEvent )
      ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
  }
  CmpCleanupRollbackPacket(v20);
  if ( !v9 )
  {
    CmpReleaseShutdownRundown();
    *a3 = 0;
  }
  return 1;
}

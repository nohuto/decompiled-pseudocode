/*
 * XREFs of CmSetLastWriteTimeKey @ 0x140870938
 * Callers:
 *     NtSetInformationKey @ 0x1406766B0 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x1402F2D0C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1402F30C0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x14061B470 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x14061B550 (CmpUnlockKcbStack.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14066DDF8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14067010C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140670144 (HvLockHiveFlusherShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A1494 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x1406A183C (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1406A189C (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1406A1B5C (CmpRundownUnitOfWork.c)
 *     CmpCleanupRollbackPacket @ 0x1406A34DC (CmpCleanupRollbackPacket.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406A3E1C (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmAddLogForAction @ 0x1406D1718 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406D9BBC (CmpAllocateUnitOfWork.c)
 *     CmpGetKeyNodeForKcb @ 0x1407028D4 (CmpGetKeyNodeForKcb.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076A0E0 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x14077691C (CmpAbortRollbackPacket.c)
 *     CmpRetryBackOff @ 0x140877758 (CmpRetryBackOff.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x140881584 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x140882D40 (CmpPromoteKey.c)
 */

__int64 __fastcall CmSetLastWriteTimeKey(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rsi
  __int64 v5; // r8
  struct _LOOKASIDE_LIST_EX *v6; // r9
  ULONG_PTR v7; // rdi
  char v8; // r12
  int started; // ebx
  __int64 v10; // r8
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *UnitOfWork; // rax
  __int64 v17; // [rsp+28h] [rbp-49h] BYREF
  __int128 v18; // [rsp+30h] [rbp-41h] BYREF
  __int128 v19; // [rsp+40h] [rbp-31h]
  int v20; // [rsp+50h] [rbp-21h] BYREF
  __int128 v21; // [rsp+58h] [rbp-19h] BYREF
  __int64 v22; // [rsp+68h] [rbp-9h] BYREF
  _OWORD v23[3]; // [rsp+70h] [rbp-1h] BYREF

  v22 = 0LL;
  v20 = 0;
  v2 = 0LL;
  v17 = 0xFFFFFFFFLL;
  v18 = 0LL;
  memset(v23, 0, sizeof(v23));
  WORD1(v18) = -1;
  v19 = 0LL;
  v21 = 0LL;
  CmpAttachToRegistryProcess((__int64)v23);
  while ( (CmpShutdownRundown & 1) == 0 )
  {
    CmpLockRegistry();
    v7 = a1[1];
    v8 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_39;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v18, a1[1], v5, v6);
    if ( started < 0 )
      goto LABEL_39;
    CmpLockKcbStackTopExclusiveRestShared((__int64)&v18);
    started = CmpPerformKeyBodyDeletionCheck((__int64)a1, 0LL);
    if ( started < 0 )
      goto LABEL_36;
    if ( *(_BYTE *)(v7 + 65) == 1 )
    {
      started = -1073741790;
      goto LABEL_36;
    }
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v22);
      if ( started < 0 )
        goto LABEL_36;
      v11 = v22;
      started = CmpPerformKeyBodyDeletionCheck((__int64)a1, v22);
      if ( started < 0 )
        goto LABEL_36;
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_36;
      }
      if ( v11 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v2 = (__int64)UnitOfWork;
        if ( !UnitOfWork )
        {
          started = -1073741670;
LABEL_36:
          CmpUnlockKcbStack((__int64)&v18);
          goto LABEL_39;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v7);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v2, v11);
        if ( started >= 0 )
        {
          if ( CmpLockIXLockIntent((unsigned int *)(v7 + 248), v2) && CmpLockIXLockExclusive(v7 + 264, (_QWORD *)v2, 1) )
          {
            *(_DWORD *)(v2 + 68) = 8;
            *(_QWORD *)(v2 + 88) = *a2;
            started = CmAddLogForAction(v2, 1u);
            if ( started >= 0 )
            {
              started = 0;
              goto LABEL_36;
            }
          }
          else
          {
            started = -1072103423;
          }
        }
LABEL_32:
        if ( v2 )
        {
          CmpRundownUnitOfWork((_QWORD *)v2);
          CmpFreeUnitOfWork(v2);
        }
        goto LABEL_36;
      }
    }
    v12 = CmpTryAcquireKcbIXLocks(v7, 0LL, v10, (__int64)&v21);
    started = v12;
    if ( v12 == -1073741267 )
    {
      CmpLogTransactionAbortedForRollbackPacket(v7, 2u);
      CmpUnlockKcbStack((__int64)&v18);
      CmpCleanupKcbStack((__int64)&v18);
      v18 = 0LL;
      WORD1(v18) = -1;
      v19 = 0LL;
      CmpUnlockRegistry();
      v8 = 0;
      started = CmpAbortRollbackPacket((__int64)&v21);
      if ( started < 0 )
        goto LABEL_39;
      CmpRetryBackOff(&v20);
      CmpCleanupRollbackPacket((__int64)&v21);
      v21 = 0LL;
    }
    else
    {
      if ( v12 < 0 )
        goto LABEL_36;
      if ( *(_DWORD *)(v7 + 40) != -1 )
      {
        HvLockHiveFlusherShared(*(_QWORD *)(v7 + 32));
        if ( (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40), 0LL) )
        {
          *(_QWORD *)(CmpGetKeyNodeForKcb(v7, (__int64)&v17, 1) + 4) = *a2;
          v13 = *a2;
          v14 = *(_QWORD *)(v7 + 32);
          ++*(_QWORD *)(v7 + 304);
          *(_QWORD *)(v7 + 168) = v13;
          (*(void (__fastcall **)(__int64, __int64 *))(v14 + 16))(v14, &v17);
          started = 0;
        }
        else
        {
          started = -1073741443;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(v7 + 32));
        goto LABEL_32;
      }
      CmpUnlockKcbStack((__int64)&v18);
      started = CmpPromoteKey(&v18, 0LL, 0LL);
      if ( started < 0 )
        goto LABEL_39;
      CmpUnlockRegistry();
      CmpCleanupKcbStack((__int64)&v18);
      v18 = 0LL;
      WORD1(v18) = -1;
      v19 = 0LL;
    }
  }
  started = -1073741431;
  v8 = 0;
LABEL_39:
  CmpCleanupKcbStack((__int64)&v18);
  CmpCleanupRollbackPacket((__int64)&v21);
  if ( v8 )
    CmpUnlockRegistry();
  CmpDetachFromRegistryProcess((__int64)v23);
  return (unsigned int)started;
}

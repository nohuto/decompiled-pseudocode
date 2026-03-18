/*
 * XREFs of CmSetLastWriteTimeKey @ 0x140869B94
 * Callers:
 *     NtSetInformationKey @ 0x1405FA5C0 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x1402D2D14 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402E1B1C (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     HvLockHiveFlusherShared @ 0x140618340 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x14061835C (HvUnlockHiveFlusherShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14061ABF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpCleanupKcbStack @ 0x140626070 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140626150 (CmpUnlockKcbStack.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406569A4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x140658FF0 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpCleanupRollbackPacket @ 0x14065B6DC (CmpCleanupRollbackPacket.c)
 *     CmpLockIXLockExclusive @ 0x14068E09C (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14068E2C0 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14068E618 (CmpRundownUnitOfWork.c)
 *     CmpGetKeyNodeForKcb @ 0x140692A30 (CmpGetKeyNodeForKcb.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406958E8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmAddLogForAction @ 0x1406DBB4C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406E3928 (CmpAllocateUnitOfWork.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1407599F0 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x140765F2C (CmpAbortRollbackPacket.c)
 *     CmpRetryBackOff @ 0x140870928 (CmpRetryBackOff.c)
 *     HvMarkCellDirty @ 0x140877500 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087A724 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x14087BEA0 (CmpPromoteKey.c)
 */

__int64 __fastcall CmSetLastWriteTimeKey(_QWORD *a1, _QWORD *a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rsi
  __int64 v7; // r8
  struct _LOOKASIDE_LIST_EX *v8; // r9
  ULONG_PTR v9; // rdi
  char v10; // r12
  int started; // ebx
  __int64 v12; // r8
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *UnitOfWork; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  __int64 v22; // [rsp+28h] [rbp-49h] BYREF
  __int128 v23; // [rsp+30h] [rbp-41h] BYREF
  __int128 v24; // [rsp+40h] [rbp-31h]
  int v25; // [rsp+50h] [rbp-21h] BYREF
  __int128 v26; // [rsp+58h] [rbp-19h] BYREF
  __int64 v27; // [rsp+68h] [rbp-9h] BYREF
  _OWORD v28[3]; // [rsp+70h] [rbp-1h] BYREF

  v27 = 0LL;
  v25 = 0;
  v4 = 0LL;
  v22 = 0xFFFFFFFFLL;
  v23 = 0LL;
  memset(v28, 0, sizeof(v28));
  WORD1(v23) = -1;
  v24 = 0LL;
  v26 = 0LL;
  CmpAttachToRegistryProcess((__int64)v28, (__int64)a2, a3, a4);
  while ( (CmpShutdownRundown & 1) == 0 )
  {
    CmpLockRegistry();
    v9 = a1[1];
    v10 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_39;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v23, a1[1], v7, v8);
    if ( started < 0 )
      goto LABEL_39;
    CmpLockKcbStackTopExclusiveRestShared((__int64)&v23);
    started = CmpPerformKeyBodyDeletionCheck((__int64)a1, 0LL);
    if ( started < 0 )
      goto LABEL_36;
    if ( *(_BYTE *)(v9 + 65) == 1 )
    {
      started = -1073741790;
      goto LABEL_36;
    }
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v27);
      if ( started < 0 )
        goto LABEL_36;
      v13 = v27;
      started = CmpPerformKeyBodyDeletionCheck((__int64)a1, v27);
      if ( started < 0 )
        goto LABEL_36;
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_36;
      }
      if ( v13 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v4 = (__int64)UnitOfWork;
        if ( !UnitOfWork )
        {
          started = -1073741670;
LABEL_36:
          CmpUnlockKcbStack((__int64)&v23);
          goto LABEL_39;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v9);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v4, v13);
        if ( started >= 0 )
        {
          if ( CmpLockIXLockIntent((unsigned int *)(v9 + 248), v4) && CmpLockIXLockExclusive(v9 + 264, (_QWORD *)v4, 1) )
          {
            *(_DWORD *)(v4 + 68) = 8;
            *(_QWORD *)(v4 + 88) = *a2;
            started = CmAddLogForAction(v4, 1u);
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
        if ( v4 )
        {
          CmpRundownUnitOfWork((_QWORD *)v4);
          CmpFreeUnitOfWork(v4);
        }
        goto LABEL_36;
      }
    }
    v14 = CmpTryAcquireKcbIXLocks(v9, 0LL, v12, (__int64)&v26);
    started = v14;
    if ( v14 == -1073741267 )
    {
      CmpLogTransactionAbortedForRollbackPacket(v9, 2u);
      CmpUnlockKcbStack((__int64)&v23);
      CmpCleanupKcbStack((__int64)&v23);
      v23 = 0LL;
      WORD1(v23) = -1;
      v24 = 0LL;
      CmpUnlockRegistry();
      v10 = 0;
      started = CmpAbortRollbackPacket((__int64)&v26);
      if ( started < 0 )
        goto LABEL_39;
      CmpRetryBackOff(&v25);
      CmpCleanupRollbackPacket((__int64)&v26);
      v26 = 0LL;
    }
    else
    {
      if ( v14 < 0 )
        goto LABEL_36;
      if ( *(_DWORD *)(v9 + 40) != -1 )
      {
        HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        if ( (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 40), 0LL) )
        {
          *(_QWORD *)(CmpGetKeyNodeForKcb(v9, (__int64)&v22, 1) + 4) = *a2;
          v15 = *a2;
          v16 = *(_QWORD *)(v9 + 32);
          ++*(_QWORD *)(v9 + 304);
          *(_QWORD *)(v9 + 168) = v15;
          (*(void (__fastcall **)(__int64, __int64 *))(v16 + 16))(v16, &v22);
          started = 0;
        }
        else
        {
          started = -1073741443;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        goto LABEL_32;
      }
      CmpUnlockKcbStack((__int64)&v23);
      started = CmpPromoteKey(&v23, 0LL, 0LL);
      if ( started < 0 )
        goto LABEL_39;
      CmpUnlockRegistry();
      CmpCleanupKcbStack((__int64)&v23);
      v23 = 0LL;
      WORD1(v23) = -1;
      v24 = 0LL;
    }
  }
  started = -1073741431;
  v10 = 0;
LABEL_39:
  CmpCleanupKcbStack((__int64)&v23);
  CmpCleanupRollbackPacket((__int64)&v26);
  if ( v10 )
    CmpUnlockRegistry();
  CmpDetachFromRegistryProcess((__int64)v28, v18, v19, v20);
  return (unsigned int)started;
}

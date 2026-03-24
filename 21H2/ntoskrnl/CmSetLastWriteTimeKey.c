/*
 * XREFs of CmSetLastWriteTimeKey @ 0x14086E13C
 * Callers:
 *     NtSetInformationKey @ 0x1405F3A00 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x140360610 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x140361D2C (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140665D30 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14066628C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406662C4 (HvLockHiveFlusherShared.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140669070 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKeyNodeForKcb @ 0x14066BFD4 (CmpGetKeyNodeForKcb.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A3094 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmAddLogForAction @ 0x1406AFE4C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406B8780 (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406C3144 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x1406FB360 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1406FB440 (CmpUnlockKcbStack.c)
 *     CmpCleanupRollbackPacket @ 0x14071C518 (CmpCleanupRollbackPacket.c)
 *     CmpLockIXLockExclusive @ 0x14071D3E0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14071D440 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14071D7DC (CmpRundownUnitOfWork.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076E1A4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x14077A8CC (CmpAbortRollbackPacket.c)
 *     CmpRetryBackOff @ 0x140875040 (CmpRetryBackOff.c)
 *     HvMarkCellDirty @ 0x14087BCE8 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087EAA8 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x1408802C8 (CmpPromoteKey.c)
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
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *UnitOfWork; // rax
  __int64 v20; // [rsp+28h] [rbp-49h] BYREF
  __int128 v21; // [rsp+30h] [rbp-41h] BYREF
  __int128 v22; // [rsp+40h] [rbp-31h]
  int v23; // [rsp+50h] [rbp-21h] BYREF
  __int128 v24; // [rsp+58h] [rbp-19h] BYREF
  __int64 v25; // [rsp+68h] [rbp-9h] BYREF
  _OWORD v26[3]; // [rsp+70h] [rbp-1h] BYREF

  v25 = 0LL;
  v23 = 0;
  v4 = 0LL;
  v20 = 0xFFFFFFFFLL;
  v21 = 0LL;
  memset(v26, 0, sizeof(v26));
  WORD1(v21) = -1;
  v22 = 0LL;
  v24 = 0LL;
  CmpAttachToRegistryProcess((__int64)v26, (__int64)a2, a3, a4);
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
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v21, a1[1], v7, v8);
    if ( started < 0 )
      goto LABEL_39;
    CmpLockKcbStackTopExclusiveRestShared((__int64)&v21);
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
      started = CmpTransSearchAddTransFromKeyBody(a1, &v25);
      if ( started < 0 )
        goto LABEL_36;
      v13 = v25;
      started = CmpPerformKeyBodyDeletionCheck((__int64)a1, v25);
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
          CmpUnlockKcbStack((__int64)&v21);
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
            started = CmAddLogForAction(v4, 1);
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
    v14 = CmpTryAcquireKcbIXLocks(v9, 0LL, v12, (__int64)&v24);
    started = v14;
    if ( v14 == -1073741267 )
    {
      CmpLogTransactionAbortedForRollbackPacket(v9, 2u, (unsigned int *)&v24, v15);
      CmpUnlockKcbStack((__int64)&v21);
      CmpCleanupKcbStack((__int64)&v21);
      v21 = 0LL;
      WORD1(v21) = -1;
      v22 = 0LL;
      CmpUnlockRegistry();
      v10 = 0;
      started = CmpAbortRollbackPacket((__int64)&v24, 0LL);
      if ( started < 0 )
        goto LABEL_39;
      CmpRetryBackOff(&v23);
      CmpCleanupRollbackPacket((__int64)&v24);
      v24 = 0LL;
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
          *(_QWORD *)(CmpGetKeyNodeForKcb(v9, (__int64)&v20, 1) + 4) = *a2;
          v16 = *a2;
          v17 = *(_QWORD *)(v9 + 32);
          ++*(_QWORD *)(v9 + 304);
          *(_QWORD *)(v9 + 168) = v16;
          (*(void (__fastcall **)(__int64, __int64 *))(v17 + 16))(v17, &v20);
          started = 0;
        }
        else
        {
          started = -1073741443;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        goto LABEL_32;
      }
      CmpUnlockKcbStack((__int64)&v21);
      started = CmpPromoteKey(&v21, 0LL, 0LL);
      if ( started < 0 )
        goto LABEL_39;
      CmpUnlockRegistry();
      CmpCleanupKcbStack((__int64)&v21);
      v21 = 0LL;
      WORD1(v21) = -1;
      v22 = 0LL;
    }
  }
  started = -1073741431;
  v10 = 0;
LABEL_39:
  CmpCleanupKcbStack((__int64)&v21);
  CmpCleanupRollbackPacket((__int64)&v24);
  if ( v10 )
    CmpUnlockRegistry();
  CmpDetachFromRegistryProcess((__int64)v26);
  return (unsigned int)started;
}

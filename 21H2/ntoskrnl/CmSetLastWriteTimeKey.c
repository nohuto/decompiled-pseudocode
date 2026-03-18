/*
 * XREFs of CmSetLastWriteTimeKey @ 0x140913E28
 * Callers:
 *     NtSetInformationKey @ 0x1407C0160 (NtSetInformationKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInKcb @ 0x1402A21B0 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402A2204 (CmpTransEnlistUowInCmTrans.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpGetKeyNodeForKcb @ 0x14067E828 (CmpGetKeyNodeForKcb.c)
 *     CmpLockIXLockExclusive @ 0x14067E9B8 (CmpLockIXLockExclusive.c)
 *     CmpAllocateUnitOfWork @ 0x14067EA18 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x14067EF3C (CmpLockIXLockIntent.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14067F480 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpCleanupRollbackPacket @ 0x140681834 (CmpCleanupRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14069FC64 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x1406A0010 (CmpAbortRollbackPacket.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406E9124 (CmpLogTransactionAbortedWithChildName.c)
 *     CmAddLogForAction @ 0x14071784C (CmAddLogForAction.c)
 *     CmpRundownUnitOfWork @ 0x14071C120 (CmpRundownUnitOfWork.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14071F6D0 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     CmpRetryBackOff @ 0x14091BC2C (CmpRetryBackOff.c)
 *     CmpPromoteKey @ 0x1409226E0 (CmpPromoteKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpIsShutdownRundownActive @ 0x140AB4248 (CmpIsShutdownRundownActive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmSetLastWriteTimeKey(_QWORD *a1, _QWORD *a2)
{
  ULONG_PTR v4; // rdi
  char v5; // r15
  int started; // ebx
  __int64 v7; // r8
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  PPRIVILEGE_SET v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdi
  _QWORD *UnitOfWork; // rax
  __int64 v31; // rsi
  __int64 v32; // r8
  __int64 v33; // [rsp+38h] [rbp-49h] BYREF
  __int128 v34; // [rsp+40h] [rbp-41h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+50h] [rbp-31h]
  int v36; // [rsp+60h] [rbp-21h] BYREF
  __int64 v37; // [rsp+68h] [rbp-19h] BYREF
  __int128 v38; // [rsp+70h] [rbp-11h] BYREF
  _OWORD v39[3]; // [rsp+80h] [rbp-1h] BYREF

  v33 = 0LL;
  v37 = 0LL;
  memset(v39, 0, sizeof(v39));
  v36 = 0;
  HvpGetCellContextReinitialize(&v33);
  v34 = 0LL;
  WORD1(v34) = -1;
  *(_OWORD *)Privileges = 0LL;
  v38 = 0LL;
  CmpAttachToRegistryProcess(v39);
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsShutdownRundownActive() )
    {
      started = -1073741431;
      v5 = 0;
      goto LABEL_25;
    }
    CmpLockRegistry(v20, v19, v21);
    v4 = a1[1];
    v5 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 32) + 160LL) & 0x100000) != 0 )
      break;
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v34, a1[1]);
    if ( started < 0 )
      goto LABEL_25;
    CmpLockKcbStackTopExclusiveRestShared((__int64)&v34);
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_49;
    if ( *(_BYTE *)(v4 + 65) == 1 )
    {
      started = -1073741790;
      goto LABEL_49;
    }
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v37);
      if ( started < 0 )
        goto LABEL_49;
      v8 = v37;
      started = CmpPerformKeyBodyDeletionCheck(a1, v37);
      if ( started < 0 )
        goto LABEL_49;
      if ( (*(_DWORD *)(*(_QWORD *)(v4 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_49;
      }
      if ( v8 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v31 = (__int64)UnitOfWork;
        if ( !UnitOfWork )
        {
          started = -1073741670;
LABEL_49:
          CmpUnlockKcbStack((__int64)&v34);
          goto LABEL_25;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v4);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v31, v8);
        if ( started >= 0 )
        {
          if ( CmpLockIXLockIntent((unsigned int *)(v4 + 248), v31, v32)
            && CmpLockIXLockExclusive(v4 + 264, (_QWORD *)v31, 1LL) )
          {
            *(_DWORD *)(v31 + 68) = 8;
            *(_QWORD *)(v31 + 88) = *a2;
            started = CmAddLogForAction(v31, 1u);
            if ( started >= 0 )
            {
              started = 0;
              goto LABEL_49;
            }
          }
          else
          {
            started = -1072103423;
          }
        }
        CmpRundownUnitOfWork((_QWORD *)v31);
        ExFreePoolWithTag((PVOID)v31, 0x77554D43u);
        goto LABEL_49;
      }
    }
    v9 = CmpTryAcquireKcbIXLocks(v4, 0LL, v7, (__int64)&v38);
    started = v9;
    if ( v9 == -1073741267 )
    {
      CmpLogTransactionAbortedWithChildName(v4, 0LL, 2u, v10, v38);
      CmpUnlockKcbStack((__int64)&v34);
      v14 = Privileges[1];
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v34 = 0LL;
      WORD1(v34) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v14, v11, v12, v13);
      v5 = 0;
      started = CmpAbortRollbackPacket((__int64)&v38, 0LL);
      if ( started < 0 )
        goto LABEL_25;
      CmpRetryBackOff(&v36);
      CmpCleanupRollbackPacket((__int64)&v38);
      v38 = 0LL;
    }
    else
    {
      if ( v9 < 0 )
        goto LABEL_49;
      if ( *(_DWORD *)(v4 + 40) != -1 )
      {
        ExAcquirePushLockSharedEx(*(_QWORD *)(v4 + 32) + 72LL, 0LL);
        started = HvpMarkCellDirty(*(_QWORD *)(v4 + 32), *(unsigned int *)(v4 + 40), 0);
        if ( started >= 0 )
        {
          *(_QWORD *)(CmpGetKeyNodeForKcb(v4, (__int64)&v33, 1) + 4) = *a2;
          v27 = *a2;
          v28 = *(_QWORD *)(v4 + 32);
          ++*(_QWORD *)(v4 + 304);
          *(_QWORD *)(v4 + 168) = v27;
          if ( (*(_BYTE *)(v28 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v28, &v33);
          else
            HvpReleaseCellPaged(v28, (unsigned int *)&v33);
          started = 0;
        }
        v29 = *(_QWORD *)(v4 + 32);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v29 + 72));
        KeAbPostRelease(v29 + 72);
        goto LABEL_49;
      }
      CmpUnlockKcbStack((__int64)&v34);
      started = CmpPromoteKey(&v34, 0LL, 0LL);
      if ( started < 0 )
        goto LABEL_25;
      CmpUnlockRegistry(v16, v15, v17, v18);
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v34 = 0LL;
      WORD1(v34) = -1;
      *(_OWORD *)Privileges = 0LL;
    }
  }
  started = -1073741790;
LABEL_25:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket((__int64)&v38);
  if ( v5 )
    CmpUnlockRegistry(v23, v22, v24, v25);
  CmpDetachFromRegistryProcess(v39);
  return (unsigned int)started;
}

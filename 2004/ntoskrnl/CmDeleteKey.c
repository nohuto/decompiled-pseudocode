/*
 * XREFs of CmDeleteKey @ 0x140643F58
 * Callers:
 *     NtDeleteKey @ 0x140643C50 (NtDeleteKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140205F64 (CmpInitializeDelayDerefContext.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402723B4 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1402787F0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmDeleteLayeredKey @ 0x1404E7EF8 (CmDeleteLayeredKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405DF248 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1405DF2CC (CmpLockHashEntryExclusiveByKcb.c)
 *     HvLockHiveFlusherShared @ 0x1405E2D14 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1405E2D30 (HvUnlockHiveFlusherShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405E55D0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x1405E57CC (CmpReportNotifyForKcbStack.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockHashEntryByKcb @ 0x1405ECD50 (CmpUnlockHashEntryByKcb.c)
 *     CmpSignalDeferredPosts @ 0x1405ED780 (CmpSignalDeferredPosts.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405EDBB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCleanupKcbStack @ 0x1405F0A50 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1405F0B30 (CmpUnlockKcbStack.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpRundownUnitOfWork @ 0x1406430FC (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x140643290 (CmEqualTrans.c)
 *     CmpLockIXLockIntent @ 0x140643354 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x14064343C (CmpLockIXLockExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x140644540 (CmpGetKeyNodeForKcb.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1406445B4 (CmpCleanupDiscardReplaceContext.c)
 *     CmGetVisibleSubkeyCount @ 0x1406445EC (CmGetVisibleSubkeyCount.c)
 *     CmpLockKcbStackExclusive @ 0x140644680 (CmpLockKcbStackExclusive.c)
 *     CmpDiscardKcb @ 0x1406447A4 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140644960 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406449E0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406536B4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpFreeKeyByCell @ 0x14069CB70 (CmpFreeKeyByCell.c)
 *     CmpCleanUpSubKeyInfo @ 0x14069CE70 (CmpCleanUpSubKeyInfo.c)
 *     CmAddLogForAction @ 0x1406FEAE8 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x140707318 (CmpAllocateUnitOfWork.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140721778 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpReleaseKeyNodeForKcb @ 0x1408607E8 (CmpReleaseKeyNodeForKcb.c)
 *     CmpRollbackTransactionArray @ 0x140871C40 (CmpRollbackTransactionArray.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140872B24 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140872F34 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpSnapshotTxOwnerArray @ 0x140874D7C (CmpSnapshotTxOwnerArray.c)
 *     CmpFreeUnitOfWork @ 0x14087BA14 (CmpFreeUnitOfWork.c)
 */

__int64 __fastcall CmDeleteKey(__int64 a1)
{
  _QWORD *v1; // r15
  char v2; // di
  char v3; // r14
  __int64 UnitOfWork; // r12
  __int64 v5; // rbx
  __int64 v6; // r13
  ULONG_PTR v7; // rsi
  __int64 v8; // r8
  struct _LOOKASIDE_LIST_EX *v9; // r9
  int started; // edi
  __int64 v11; // r8
  struct _LOOKASIDE_LIST_EX *v12; // r9
  char v13; // di
  char IsKeyDeletedForKeyBody; // al
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdx
  int *v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  char v29; // bl
  char v30; // r15
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  char v36; // al
  char v37; // al
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  char v45; // [rsp+28h] [rbp-E0h]
  __int16 v46; // [rsp+2Ah] [rbp-DEh]
  unsigned int v47; // [rsp+2Ch] [rbp-DCh] BYREF
  _QWORD v48[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v49; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v51; // [rsp+58h] [rbp-B0h]
  __int64 v52; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v53[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v54; // [rsp+78h] [rbp-90h] BYREF
  __int128 v55; // [rsp+88h] [rbp-80h]
  __int64 v56; // [rsp+98h] [rbp-70h] BYREF
  __int64 KeyNodeForKcb; // [rsp+A0h] [rbp-68h]
  __int128 v58; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v59; // [rsp+B8h] [rbp-50h]
  __int64 v60; // [rsp+C8h] [rbp-40h] BYREF
  int v61; // [rsp+D0h] [rbp-38h]
  int v62; // [rsp+D4h] [rbp-34h]
  _QWORD v63[2]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v64[3]; // [rsp+E8h] [rbp-20h] BYREF

  v51 = (_QWORD *)a1;
  v49 = 0LL;
  v47 = 0;
  v53[1] = v53;
  v1 = (_QWORD *)a1;
  v53[0] = v53;
  v45 = 0;
  memset(v64, 0, sizeof(v64));
  v2 = 0;
  v3 = 0;
  v46 = 0;
  v56 = 0LL;
  UnitOfWork = 0LL;
  *(_OWORD *)&v48[1] = 0LL;
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = 0LL;
  v7 = 0LL;
  v52 = 0xFFFFFFFFLL;
  v50 = 0xFFFFFFFFLL;
  v54 = 0LL;
  WORD1(v54) = -1;
  v58 = 0LL;
  WORD1(v58) = -1;
  v63[1] = v63;
  v63[0] = v63;
  v55 = 0LL;
  LODWORD(v48[0]) = 0;
  v59 = 0LL;
  KeyNodeForKcb = 0LL;
  v60 = 0LL;
  v62 = 0;
  v61 = -1073741823;
  CmpInitializeDelayDerefContext(&v48[1]);
  CmpAttachToRegistryProcess((__int64)v64);
  while ( (CmpShutdownRundown & 1) == 0 )
  {
    if ( v2 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
    v7 = v1[1];
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_91;
    }
    if ( !*(_QWORD *)(v7 + 72) )
    {
      started = -1073741535;
LABEL_94:
      v29 = 0;
LABEL_32:
      v30 = 1;
      goto LABEL_33;
    }
    if ( *(_WORD *)(v7 + 66) )
    {
      started = CmDeleteLayeredKey((__int64)v1, (__int64)v53, (__int64)&v48[1]);
      goto LABEL_91;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v58, v7, v8, v9);
    if ( started < 0 )
      goto LABEL_91;
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v54, *(_QWORD *)(v7 + 72), v11, v12);
    if ( started < 0 )
      goto LABEL_94;
    v13 = HIBYTE(v46);
    if ( !HIBYTE(v46) )
    {
      CmpLockHashEntryExclusiveByKcb(v7);
      v3 = 1;
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v54);
      CmpLockKcbStackExclusive(&v58);
      LOBYTE(v46) = 1;
    }
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody((__int64)v1, 0LL);
    v17 = 0LL;
    if ( IsKeyDeletedForKeyBody )
    {
LABEL_88:
      started = 0;
      v29 = 0;
      goto LABEL_32;
    }
    if ( v1[7] || v1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(v1, &v56);
      if ( started < 0 )
        goto LABEL_91;
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
LABEL_91:
        v29 = 0;
        goto LABEL_32;
      }
      v18 = v56;
      v32 = CmpIsKeyDeletedForKeyBody((__int64)v51, v56);
      v17 = 0LL;
      if ( v32 )
        goto LABEL_88;
      if ( !v18 )
      {
        v13 = HIBYTE(v46);
        goto LABEL_16;
      }
LABEL_17:
      v20 = *(_QWORD *)(v7 + 240);
      if ( v20 )
      {
        v37 = CmEqualTrans(v18, v20);
        v17 = 0LL;
        if ( !v37 )
        {
          started = -1073741535;
          goto LABEL_79;
        }
      }
      if ( v18 )
      {
        UnitOfWork = CmpAllocateUnitOfWork(v15, v20, 0LL);
        if ( !UnitOfWork )
        {
          started = -1073741670;
          v29 = 0;
          goto LABEL_32;
        }
        v6 = CmpAllocateUnitOfWork(v34, v33, v35);
        if ( v6 )
        {
          CmpTransEnlistUowInKcb((_QWORD *)UnitOfWork, *(_QWORD *)(v7 + 72));
          started = CmpTransEnlistUowInCmTrans((_QWORD *)UnitOfWork, v18);
          if ( started >= 0 )
          {
            CmpTransEnlistUowInKcb((_QWORD *)v6, v7);
            started = CmpTransEnlistUowInCmTrans((_QWORD *)v6, v18);
            if ( started >= 0 )
            {
              if ( CmpLockIXLockIntent((unsigned int *)(*(_QWORD *)(v7 + 72) + 248LL), UnitOfWork)
                && CmpLockIXLockExclusive(v7 + 248, (_QWORD *)v6, 0) )
              {
                v36 = CmpLockIXLockExclusive(v7 + 264, (_QWORD *)v6, 1);
                v17 = 0LL;
                if ( !v36 )
                {
                  started = -1072103423;
LABEL_79:
                  v29 = 0;
                  goto LABEL_32;
                }
LABEL_22:
                if ( !HIBYTE(v46) )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v7 + 32));
                  v45 = 1;
                }
                LOBYTE(v17) = 1;
                KeyNodeForKcb = CmpGetKeyNodeForKcb(v7, &v52, v17, v16);
                v22 = KeyNodeForKcb;
                if ( (unsigned int)CmGetVisibleSubkeyCount(v7, KeyNodeForKcb, v18) || (*(_BYTE *)(v22 + 2) & 8) != 0 )
                {
                  started = -1073741535;
                }
                else
                {
                  CmpReleaseKeyNodeForKcb(v7, &v52);
                  KeyNodeForKcb = 0LL;
                  if ( v18 )
                  {
                    *(_DWORD *)(UnitOfWork + 68) = 3;
                    *(_QWORD *)(UnitOfWork + 88) = v7;
                    *(_DWORD *)(v6 + 68) = 2;
                    *(_QWORD *)(v6 + 80) = UnitOfWork;
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v7 + 32));
                    v29 = 0;
                    started = CmAddLogForAction(v6, 1LL);
                    if ( started >= 0 )
                    {
                      v6 = 0LL;
                      UnitOfWork = 0LL;
                      CmpReportNotifyForKcbStack((__int64)&v54, v18, 1, (__int64)v53);
                      started = 0;
                    }
                    goto LABEL_32;
                  }
                  v24 = *(_QWORD *)(v7 + 192);
                  if ( !v24 || *(_QWORD *)(v24 + 32) == v24 + 32 )
                  {
                    CmpReportNotifyForKcbStack((__int64)&v54, 0, 1, (__int64)v53);
                    started = CmpFreeKeyByCell(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40));
                    if ( started >= 0 )
                    {
                      CmpFlushNotifiesOnKeyBodyList(v7, 8LL, &v48[1]);
                      LOBYTE(v25) = 1;
                      CmpCleanUpSubKeyInfo(*(_QWORD *)(v7 + 72), v25);
                      LOBYTE(v26) = 1;
                      v28 = CmpGetKeyNodeForKcb(*(_QWORD *)(v7 + 72), &v50, v26, v27);
                      *(_WORD *)(*(_QWORD *)(v7 + 72) + 176LL) = *(_WORD *)(v28 + 52);
                      ++*(_QWORD *)(*(_QWORD *)(v7 + 72) + 304LL);
                      *(_QWORD *)(v28 + 4) = v5;
                      *(_QWORD *)(*(_QWORD *)(v7 + 72) + 168LL) = v5;
                      CmpReleaseKeyNodeForKcb(*(_QWORD *)(v7 + 72), &v50);
                      CmpMarkKeyUnbacked(v7, &v48[1]);
                      CmpDiscardKcb(v7);
                      goto LABEL_30;
                    }
                  }
                  else
                  {
                    started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v7, &v60, v23);
                    if ( started >= 0 )
                    {
                      CmpReportNotifyForKcbStack((__int64)&v54, 0, 1, (__int64)v53);
                      started = CmpFreeKeyByCell(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40));
                      if ( started >= 0 )
                      {
                        LOBYTE(v40) = 1;
                        CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v7, v39, &v48[1], v40);
                        CmpFlushNotifiesOnKeyBodyList(v7, 8LL, &v48[1]);
                        LOBYTE(v41) = 1;
                        CmpCleanUpSubKeyInfo(*(_QWORD *)(v7 + 72), v41);
                        LOBYTE(v42) = 1;
                        v44 = CmpGetKeyNodeForKcb(*(_QWORD *)(v7 + 72), &v50, v42, v43);
                        *(_WORD *)(*(_QWORD *)(v7 + 72) + 176LL) = *(_WORD *)(v44 + 52);
                        ++*(_QWORD *)(*(_QWORD *)(v7 + 72) + 304LL);
                        *(_QWORD *)(v44 + 4) = v5;
                        *(_QWORD *)(*(_QWORD *)(v7 + 72) + 168LL) = v5;
                        CmpReleaseKeyNodeForKcb(*(_QWORD *)(v7 + 72), &v50);
                        CmpMarkKeyUnbacked(v7, &v48[1]);
                        CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v7);
LABEL_30:
                        started = 0;
                      }
                    }
                  }
                }
              }
              else
              {
                started = -1072103423;
              }
            }
          }
        }
        else
        {
          started = -1073741670;
        }
        v29 = v45;
        goto LABEL_32;
      }
      v21 = (int *)(*(_QWORD *)(v7 + 72) + 248LL);
      if ( *v21 >= 0 )
      {
        v21 = (int *)(v7 + 248);
        if ( !*(_DWORD *)(v7 + 248) )
        {
          v21 = (int *)(v7 + 264);
          if ( !*(_DWORD *)(v7 + 264) )
            goto LABEL_22;
        }
      }
      v30 = 0;
      started = CmpSnapshotTxOwnerArray(v21, &v47, &v49);
      if ( started < 0 )
        goto LABEL_91;
      if ( (_BYTE)v46 )
      {
        CmpUnlockKcbStack((__int64)&v58);
        CmpUnlockKcbStack((__int64)&v54);
        LOBYTE(v46) = 0;
      }
      if ( v3 )
        CmpUnlockHashEntryByKcb(v7);
      v3 = 0;
      CmpDrainDelayDerefContext((_QWORD **)&v48[1]);
      CmpUnlockRegistry();
      started = CmpRollbackTransactionArray(v47, v49, v38, v48);
      if ( started < 0 )
      {
        v29 = 0;
        goto LABEL_33;
      }
      v1 = v51;
      v2 = HIBYTE(v46);
    }
    else
    {
      v18 = v56;
LABEL_16:
      v19 = *(_QWORD *)(v7 + 192);
      if ( !v19 || *(_QWORD *)(v19 + 32) == v19 + 32 || v13 )
        goto LABEL_17;
      v2 = 1;
      CmpUnlockKcbStack((__int64)&v58);
      CmpUnlockKcbStack((__int64)&v54);
      v46 = 256;
      CmpUnlockHashEntryByKcb(v7);
      v3 = 0;
      CmpCleanupKcbStack((__int64)&v58);
      v58 = 0LL;
      WORD1(v58) = -1;
      v59 = 0LL;
      CmpCleanupKcbStack((__int64)&v54);
      v54 = 0LL;
      WORD1(v54) = -1;
      v55 = 0LL;
      CmpUnlockRegistry();
      v1 = v51;
    }
  }
  started = -1073741431;
  v30 = 0;
  v29 = 0;
LABEL_33:
  CmpCleanupDiscardReplaceContext(&v60, &v48[1]);
  if ( KeyNodeForKcb )
    CmpReleaseKeyNodeForKcb(v7, &v52);
  if ( v29 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v7 + 32));
  if ( v6 )
  {
    CmpRundownUnitOfWork((_QWORD *)v6);
    CmpFreeUnitOfWork(v6);
  }
  if ( UnitOfWork )
  {
    CmpRundownUnitOfWork((_QWORD *)UnitOfWork);
    CmpFreeUnitOfWork(UnitOfWork);
  }
  if ( (_BYTE)v46 )
  {
    CmpUnlockKcbStack((__int64)&v58);
    CmpUnlockKcbStack((__int64)&v54);
  }
  if ( v3 )
    CmpUnlockHashEntryByKcb(v7);
  CmpCleanupKcbStack((__int64)&v58);
  CmpCleanupKcbStack((__int64)&v54);
  CmpDrainDelayDerefContext((_QWORD **)&v48[1]);
  if ( v30 )
    CmpUnlockRegistry();
  CmpDetachFromRegistryProcess((__int64)v64);
  if ( v53[0] != v53 )
    CmpSignalDeferredPosts(v53);
  return (unsigned int)started;
}

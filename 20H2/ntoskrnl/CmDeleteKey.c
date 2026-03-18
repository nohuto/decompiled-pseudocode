/*
 * XREFs of CmDeleteKey @ 0x1407022EC
 * Callers:
 *     NtDeleteKey @ 0x140701FA0 (NtDeleteKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140227238 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140227250 (CmpDrainDelayDerefContext.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402F2D0C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1402F30C0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     CmDeleteLayeredKey @ 0x1404EB788 (CmDeleteLayeredKey.c)
 *     CmpReportNotifyForKcbStack @ 0x1405F3830 (CmpReportNotifyForKcbStack.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x14061B470 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x14061B550 (CmpUnlockKcbStack.c)
 *     CmpSignalDeferredPosts @ 0x14061C8F0 (CmpSignalDeferredPosts.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14066DDF8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14067010C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140670144 (HvLockHiveFlusherShared.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1406701B0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140678E00 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A1494 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x1406A183C (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1406A189C (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1406A1B5C (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x1406A1CCC (CmEqualTrans.c)
 *     CmAddLogForAction @ 0x1406D1718 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406D9BBC (CmpAllocateUnitOfWork.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1407017C0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x1407018BC (CmpMarkKeyUnbacked.c)
 *     CmpDiscardKcb @ 0x140701A1C (CmpDiscardKcb.c)
 *     CmpLockKcbStackExclusive @ 0x1407022A8 (CmpLockKcbStackExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x1407028D4 (CmpGetKeyNodeForKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x140702950 (CmpUnlockHashEntryByKcb.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140702A00 (CmpCleanupDiscardReplaceContext.c)
 *     CmGetVisibleSubkeyCount @ 0x140703FE4 (CmGetVisibleSubkeyCount.c)
 *     CmpFreeKeyByCell @ 0x140704760 (CmpFreeKeyByCell.c)
 *     CmpCleanUpSubKeyInfo @ 0x140704A60 (CmpCleanUpSubKeyInfo.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x14072F768 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140866204 (CmpReleaseKeyNodeForKcb.c)
 *     CmpRollbackTransactionArray @ 0x140877790 (CmpRollbackTransactionArray.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140878674 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140878A84 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpSnapshotTxOwnerArray @ 0x14087A8CC (CmpSnapshotTxOwnerArray.c)
 *     CmpFreeUnitOfWork @ 0x140881584 (CmpFreeUnitOfWork.c)
 */

__int64 __fastcall CmDeleteKey(__int64 a1)
{
  _QWORD *v1; // r15
  char v2; // di
  char v3; // r14
  _QWORD *UnitOfWork; // r12
  __int64 v5; // rbx
  _QWORD *v6; // r13
  ULONG_PTR v7; // rsi
  __int64 v8; // r8
  struct _LOOKASIDE_LIST_EX *v9; // r9
  int started; // edi
  __int64 v11; // r8
  struct _LOOKASIDE_LIST_EX *v12; // r9
  char v13; // di
  char IsKeyDeletedForKeyBody; // al
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  int *v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  char v28; // bl
  char v29; // r15
  char v31; // al
  char v32; // al
  char v33; // al
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  char v41; // [rsp+28h] [rbp-E0h]
  __int16 v42; // [rsp+2Ah] [rbp-DEh]
  unsigned int v43; // [rsp+2Ch] [rbp-DCh] BYREF
  _QWORD v44[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v47; // [rsp+58h] [rbp-B0h]
  __int64 v48; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v49[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v50; // [rsp+78h] [rbp-90h] BYREF
  __int128 v51; // [rsp+88h] [rbp-80h]
  __int64 v52; // [rsp+98h] [rbp-70h] BYREF
  __int64 KeyNodeForKcb; // [rsp+A0h] [rbp-68h]
  __int128 v54; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v55; // [rsp+B8h] [rbp-50h]
  __int64 v56; // [rsp+C8h] [rbp-40h] BYREF
  int v57; // [rsp+D0h] [rbp-38h]
  int v58; // [rsp+D4h] [rbp-34h]
  _QWORD v59[2]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v60[3]; // [rsp+E8h] [rbp-20h] BYREF

  v47 = (_QWORD *)a1;
  v45 = 0LL;
  v43 = 0;
  v49[1] = v49;
  v1 = (_QWORD *)a1;
  v49[0] = v49;
  v41 = 0;
  memset(v60, 0, sizeof(v60));
  v2 = 0;
  v3 = 0;
  v42 = 0;
  v52 = 0LL;
  UnitOfWork = 0LL;
  *(_OWORD *)&v44[1] = 0LL;
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = 0LL;
  v7 = 0LL;
  v48 = 0xFFFFFFFFLL;
  v46 = 0xFFFFFFFFLL;
  v50 = 0LL;
  WORD1(v50) = -1;
  v54 = 0LL;
  WORD1(v54) = -1;
  v59[1] = v59;
  v59[0] = v59;
  v51 = 0LL;
  LODWORD(v44[0]) = 0;
  v55 = 0LL;
  KeyNodeForKcb = 0LL;
  v56 = 0LL;
  v58 = 0;
  v57 = -1073741823;
  CmpInitializeDelayDerefContext(&v44[1]);
  CmpAttachToRegistryProcess((__int64)v60);
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
      v28 = 0;
LABEL_32:
      v29 = 1;
      goto LABEL_33;
    }
    if ( *(_WORD *)(v7 + 66) )
    {
      started = CmDeleteLayeredKey((__int64)v1, (__int64)v49, (__int64)&v44[1]);
      goto LABEL_91;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v54, v7, v8, v9);
    if ( started < 0 )
      goto LABEL_91;
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v50, *(_QWORD *)(v7 + 72), v11, v12);
    if ( started < 0 )
      goto LABEL_94;
    v13 = HIBYTE(v42);
    if ( !HIBYTE(v42) )
    {
      CmpLockHashEntryExclusiveByKcb(v7);
      v3 = 1;
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v50);
      CmpLockKcbStackExclusive((__int64)&v54);
      LOBYTE(v42) = 1;
    }
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody((__int64)v1, 0LL);
    v16 = 0LL;
    if ( IsKeyDeletedForKeyBody )
    {
LABEL_88:
      started = 0;
      v28 = 0;
      goto LABEL_32;
    }
    if ( v1[7] || v1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(v1, &v52);
      if ( started < 0 )
        goto LABEL_91;
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
LABEL_91:
        v28 = 0;
        goto LABEL_32;
      }
      v17 = v52;
      v31 = CmpIsKeyDeletedForKeyBody((__int64)v47, v52);
      v16 = 0LL;
      if ( v31 )
        goto LABEL_88;
      if ( !v17 )
      {
        v13 = HIBYTE(v42);
        goto LABEL_16;
      }
LABEL_17:
      v19 = *(_QWORD *)(v7 + 240);
      if ( v19 )
      {
        v33 = CmEqualTrans(v17, v19);
        v16 = 0LL;
        if ( !v33 )
        {
          started = -1073741535;
          goto LABEL_79;
        }
      }
      if ( v17 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        if ( !UnitOfWork )
        {
          started = -1073741670;
          v28 = 0;
          goto LABEL_32;
        }
        v6 = CmpAllocateUnitOfWork();
        if ( v6 )
        {
          CmpTransEnlistUowInKcb(UnitOfWork, *(_QWORD *)(v7 + 72));
          started = CmpTransEnlistUowInCmTrans(UnitOfWork, v17);
          if ( started >= 0 )
          {
            CmpTransEnlistUowInKcb(v6, v7);
            started = CmpTransEnlistUowInCmTrans(v6, v17);
            if ( started >= 0 )
            {
              if ( CmpLockIXLockIntent((unsigned int *)(*(_QWORD *)(v7 + 72) + 248LL), (__int64)UnitOfWork)
                && CmpLockIXLockExclusive(v7 + 248, v6, 0) )
              {
                v32 = CmpLockIXLockExclusive(v7 + 264, v6, 1);
                v16 = 0LL;
                if ( !v32 )
                {
                  started = -1072103423;
LABEL_79:
                  v28 = 0;
                  goto LABEL_32;
                }
LABEL_22:
                if ( !HIBYTE(v42) )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v7 + 32));
                  v41 = 1;
                }
                LOBYTE(v16) = 1;
                KeyNodeForKcb = CmpGetKeyNodeForKcb(v7, &v48, v16, v15);
                v21 = KeyNodeForKcb;
                if ( (unsigned int)CmGetVisibleSubkeyCount(v7, KeyNodeForKcb, v17) || (*(_BYTE *)(v21 + 2) & 8) != 0 )
                {
                  started = -1073741535;
                }
                else
                {
                  CmpReleaseKeyNodeForKcb(v7, &v48);
                  KeyNodeForKcb = 0LL;
                  if ( v17 )
                  {
                    *((_DWORD *)UnitOfWork + 17) = 3;
                    UnitOfWork[11] = v7;
                    *((_DWORD *)v6 + 17) = 2;
                    v6[10] = UnitOfWork;
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v7 + 32));
                    v28 = 0;
                    started = CmAddLogForAction((__int64)v6, 1u);
                    if ( started >= 0 )
                    {
                      v6 = 0LL;
                      UnitOfWork = 0LL;
                      CmpReportNotifyForKcbStack((__int64)&v50, v17, 1, (__int64)v49);
                      started = 0;
                    }
                    goto LABEL_32;
                  }
                  v23 = *(_QWORD *)(v7 + 192);
                  if ( !v23 || *(_QWORD *)(v23 + 32) == v23 + 32 )
                  {
                    CmpReportNotifyForKcbStack((__int64)&v50, 0, 1, (__int64)v49);
                    started = CmpFreeKeyByCell(*(_QWORD *)(v7 + 32));
                    if ( started >= 0 )
                    {
                      CmpFlushNotifiesOnKeyBodyList(v7, 8LL, (__int64)&v44[1], 0);
                      LOBYTE(v24) = 1;
                      CmpCleanUpSubKeyInfo(*(_QWORD *)(v7 + 72), v24);
                      LOBYTE(v25) = 1;
                      v27 = CmpGetKeyNodeForKcb(*(_QWORD *)(v7 + 72), &v46, v25, v26);
                      *(_WORD *)(*(_QWORD *)(v7 + 72) + 176LL) = *(_WORD *)(v27 + 52);
                      ++*(_QWORD *)(*(_QWORD *)(v7 + 72) + 304LL);
                      *(_QWORD *)(v27 + 4) = v5;
                      *(_QWORD *)(*(_QWORD *)(v7 + 72) + 168LL) = v5;
                      CmpReleaseKeyNodeForKcb(*(_QWORD *)(v7 + 72), &v46);
                      CmpMarkKeyUnbacked(v7);
                      CmpDiscardKcb(v7, (__int64)&v44[1]);
                      goto LABEL_30;
                    }
                  }
                  else
                  {
                    started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v7, &v56, v22);
                    if ( started >= 0 )
                    {
                      CmpReportNotifyForKcbStack((__int64)&v50, 0, 1, (__int64)v49);
                      started = CmpFreeKeyByCell(*(_QWORD *)(v7 + 32));
                      if ( started >= 0 )
                      {
                        LOBYTE(v36) = 1;
                        CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v7, v35, &v44[1], v36);
                        CmpFlushNotifiesOnKeyBodyList(v7, 8LL, (__int64)&v44[1], 0);
                        LOBYTE(v37) = 1;
                        CmpCleanUpSubKeyInfo(*(_QWORD *)(v7 + 72), v37);
                        LOBYTE(v38) = 1;
                        v40 = CmpGetKeyNodeForKcb(*(_QWORD *)(v7 + 72), &v46, v38, v39);
                        *(_WORD *)(*(_QWORD *)(v7 + 72) + 176LL) = *(_WORD *)(v40 + 52);
                        ++*(_QWORD *)(*(_QWORD *)(v7 + 72) + 304LL);
                        *(_QWORD *)(v40 + 4) = v5;
                        *(_QWORD *)(*(_QWORD *)(v7 + 72) + 168LL) = v5;
                        CmpReleaseKeyNodeForKcb(*(_QWORD *)(v7 + 72), &v46);
                        CmpMarkKeyUnbacked(v7);
                        CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v7, &v56, &v44[1]);
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
        v28 = v41;
        goto LABEL_32;
      }
      v20 = (int *)(*(_QWORD *)(v7 + 72) + 248LL);
      if ( *v20 >= 0 )
      {
        v20 = (int *)(v7 + 248);
        if ( !*(_DWORD *)(v7 + 248) )
        {
          v20 = (int *)(v7 + 264);
          if ( !*(_DWORD *)(v7 + 264) )
            goto LABEL_22;
        }
      }
      v29 = 0;
      started = CmpSnapshotTxOwnerArray(v20, &v43, &v45);
      if ( started < 0 )
        goto LABEL_91;
      if ( (_BYTE)v42 )
      {
        CmpUnlockKcbStack((__int64)&v54);
        CmpUnlockKcbStack((__int64)&v50);
        LOBYTE(v42) = 0;
      }
      if ( v3 )
        CmpUnlockHashEntryByKcb(v7);
      v3 = 0;
      CmpDrainDelayDerefContext((_QWORD **)&v44[1]);
      CmpUnlockRegistry();
      started = CmpRollbackTransactionArray(v43, v45, v34, v44);
      if ( started < 0 )
      {
        v28 = 0;
        goto LABEL_33;
      }
      v1 = v47;
      v2 = HIBYTE(v42);
    }
    else
    {
      v17 = v52;
LABEL_16:
      v18 = *(_QWORD *)(v7 + 192);
      if ( !v18 || *(_QWORD *)(v18 + 32) == v18 + 32 || v13 )
        goto LABEL_17;
      v2 = 1;
      CmpUnlockKcbStack((__int64)&v54);
      CmpUnlockKcbStack((__int64)&v50);
      v42 = 256;
      CmpUnlockHashEntryByKcb(v7);
      v3 = 0;
      CmpCleanupKcbStack((__int64)&v54);
      v54 = 0LL;
      WORD1(v54) = -1;
      v55 = 0LL;
      CmpCleanupKcbStack((__int64)&v50);
      v50 = 0LL;
      WORD1(v50) = -1;
      v51 = 0LL;
      CmpUnlockRegistry();
      v1 = v47;
    }
  }
  started = -1073741431;
  v29 = 0;
  v28 = 0;
LABEL_33:
  CmpCleanupDiscardReplaceContext(&v56, &v44[1]);
  if ( KeyNodeForKcb )
    CmpReleaseKeyNodeForKcb(v7, &v48);
  if ( v28 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v7 + 32));
  if ( v6 )
  {
    CmpRundownUnitOfWork(v6);
    CmpFreeUnitOfWork(v6);
  }
  if ( UnitOfWork )
  {
    CmpRundownUnitOfWork(UnitOfWork);
    CmpFreeUnitOfWork(UnitOfWork);
  }
  if ( (_BYTE)v42 )
  {
    CmpUnlockKcbStack((__int64)&v54);
    CmpUnlockKcbStack((__int64)&v50);
  }
  if ( v3 )
    CmpUnlockHashEntryByKcb(v7);
  CmpCleanupKcbStack((__int64)&v54);
  CmpCleanupKcbStack((__int64)&v50);
  CmpDrainDelayDerefContext((_QWORD **)&v44[1]);
  if ( v29 )
    CmpUnlockRegistry();
  CmpDetachFromRegistryProcess((__int64)v60);
  if ( v49[0] != v49 )
    CmpSignalDeferredPosts(v49);
  return (unsigned int)started;
}

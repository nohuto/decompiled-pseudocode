/*
 * XREFs of CmDeleteKey @ 0x140692448
 * Callers:
 *     NtDeleteKey @ 0x140692140 (NtDeleteKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14025EE84 (CmpInitializeDelayDerefContext.c)
 *     CmpTransEnlistUowInKcb @ 0x1402D2D14 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402E1B1C (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmDeleteLayeredKey @ 0x1404E78C8 (CmDeleteLayeredKey.c)
 *     HvLockHiveFlusherShared @ 0x140618340 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x14061835C (HvUnlockHiveFlusherShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14061ABF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x14061ADEC (CmpReportNotifyForKcbStack.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockHashEntryByKcb @ 0x140622370 (CmpUnlockHashEntryByKcb.c)
 *     CmpSignalDeferredPosts @ 0x140622DA0 (CmpSignalDeferredPosts.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406231D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCleanupKcbStack @ 0x140626070 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140626150 (CmpUnlockKcbStack.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406569A4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x14068E09C (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14068E2C0 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14068E618 (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x14068E7AC (CmEqualTrans.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140691D6C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x140691E68 (CmpMarkKeyUnbacked.c)
 *     CmpGetKeyNodeForKcb @ 0x140692A30 (CmpGetKeyNodeForKcb.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140692AA4 (CmpCleanupDiscardReplaceContext.c)
 *     CmGetVisibleSubkeyCount @ 0x140692ADC (CmGetVisibleSubkeyCount.c)
 *     CmpLockKcbStackExclusive @ 0x140692B70 (CmpLockKcbStackExclusive.c)
 *     CmpDiscardKcb @ 0x1406939DC (CmpDiscardKcb.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406958E8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14069596C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpFreeKeyByCell @ 0x1406963D0 (CmpFreeKeyByCell.c)
 *     CmpCleanUpSubKeyInfo @ 0x140696930 (CmpCleanUpSubKeyInfo.c)
 *     CmAddLogForAction @ 0x1406DBB4C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406E3928 (CmpAllocateUnitOfWork.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x14071F8B8 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpReleaseKeyNodeForKcb @ 0x14085F494 (CmpReleaseKeyNodeForKcb.c)
 *     CmpRollbackTransactionArray @ 0x140870960 (CmpRollbackTransactionArray.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140871834 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140871C44 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpSnapshotTxOwnerArray @ 0x140873A8C (CmpSnapshotTxOwnerArray.c)
 *     CmpFreeUnitOfWork @ 0x14087A724 (CmpFreeUnitOfWork.c)
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
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  __int64 v11; // r8
  struct _LOOKASIDE_LIST_EX *v12; // r9
  int started; // edi
  __int64 v14; // r8
  struct _LOOKASIDE_LIST_EX *v15; // r9
  char v16; // di
  char IsKeyDeletedForKeyBody; // al
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdx
  int *v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  char v32; // bl
  char v33; // r15
  __int64 v34; // rdx
  __int64 v35; // r8
  _DWORD *v36; // r9
  char v38; // al
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  char v42; // al
  char v43; // al
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  char v51; // [rsp+28h] [rbp-E0h]
  __int16 v52; // [rsp+2Ah] [rbp-DEh]
  unsigned int v53; // [rsp+2Ch] [rbp-DCh] BYREF
  _QWORD v54[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v55; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v56; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v57; // [rsp+58h] [rbp-B0h]
  __int64 v58; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v59[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v60; // [rsp+78h] [rbp-90h] BYREF
  __int128 v61; // [rsp+88h] [rbp-80h]
  __int64 v62; // [rsp+98h] [rbp-70h] BYREF
  __int64 KeyNodeForKcb; // [rsp+A0h] [rbp-68h]
  __int128 v64; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v65; // [rsp+B8h] [rbp-50h]
  __int64 v66; // [rsp+C8h] [rbp-40h] BYREF
  int v67; // [rsp+D0h] [rbp-38h]
  int v68; // [rsp+D4h] [rbp-34h]
  _QWORD v69[2]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v70[3]; // [rsp+E8h] [rbp-20h] BYREF

  v57 = (_QWORD *)a1;
  v55 = 0LL;
  v53 = 0;
  v59[1] = v59;
  v1 = (_QWORD *)a1;
  v59[0] = v59;
  v51 = 0;
  memset(v70, 0, sizeof(v70));
  v2 = 0;
  v3 = 0;
  v52 = 0;
  v62 = 0LL;
  UnitOfWork = 0LL;
  *(_OWORD *)&v54[1] = 0LL;
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = 0LL;
  v7 = 0LL;
  v58 = 0xFFFFFFFFLL;
  v56 = 0xFFFFFFFFLL;
  v60 = 0LL;
  WORD1(v60) = -1;
  v64 = 0LL;
  WORD1(v64) = -1;
  v69[1] = v69;
  v69[0] = v69;
  v61 = 0LL;
  LODWORD(v54[0]) = 0;
  v65 = 0LL;
  KeyNodeForKcb = 0LL;
  v66 = 0LL;
  v68 = 0;
  v67 = -1073741823;
  CmpInitializeDelayDerefContext(&v54[1]);
  CmpAttachToRegistryProcess((__int64)v70, v8, v9, v10);
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
      v32 = 0;
LABEL_32:
      v33 = 1;
      goto LABEL_33;
    }
    if ( *(_WORD *)(v7 + 66) )
    {
      started = CmDeleteLayeredKey((__int64)v1, (__int64)v59, (__int64)&v54[1]);
      goto LABEL_91;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v64, v7, v11, v12);
    if ( started < 0 )
      goto LABEL_91;
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v60, *(_QWORD *)(v7 + 72), v14, v15);
    if ( started < 0 )
      goto LABEL_94;
    v16 = HIBYTE(v52);
    if ( !HIBYTE(v52) )
    {
      CmpLockHashEntryExclusiveByKcb(v7);
      v3 = 1;
      CmpLockKcbStackTopExclusiveRestShared(&v60);
      CmpLockKcbStackExclusive(&v64);
      LOBYTE(v52) = 1;
    }
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody((__int64)v1, 0LL);
    v20 = 0LL;
    if ( IsKeyDeletedForKeyBody )
    {
LABEL_88:
      started = 0;
      v32 = 0;
      goto LABEL_32;
    }
    if ( v1[7] || v1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(v1, &v62);
      if ( started < 0 )
        goto LABEL_91;
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
LABEL_91:
        v32 = 0;
        goto LABEL_32;
      }
      v21 = v62;
      v38 = CmpIsKeyDeletedForKeyBody((__int64)v57, v62);
      v20 = 0LL;
      if ( v38 )
        goto LABEL_88;
      if ( !v21 )
      {
        v16 = HIBYTE(v52);
        goto LABEL_16;
      }
LABEL_17:
      v23 = *(_QWORD *)(v7 + 240);
      if ( v23 )
      {
        v43 = CmEqualTrans(v21, v23);
        v20 = 0LL;
        if ( !v43 )
        {
          started = -1073741535;
          goto LABEL_79;
        }
      }
      if ( v21 )
      {
        UnitOfWork = CmpAllocateUnitOfWork(v18, v23, 0LL);
        if ( !UnitOfWork )
        {
          started = -1073741670;
          v32 = 0;
          goto LABEL_32;
        }
        v6 = CmpAllocateUnitOfWork(v40, v39, v41);
        if ( v6 )
        {
          CmpTransEnlistUowInKcb((_QWORD *)UnitOfWork, *(_QWORD *)(v7 + 72));
          started = CmpTransEnlistUowInCmTrans((_QWORD *)UnitOfWork, v21);
          if ( started >= 0 )
          {
            CmpTransEnlistUowInKcb((_QWORD *)v6, v7);
            started = CmpTransEnlistUowInCmTrans((_QWORD *)v6, v21);
            if ( started >= 0 )
            {
              if ( CmpLockIXLockIntent((unsigned int *)(*(_QWORD *)(v7 + 72) + 248LL), UnitOfWork)
                && CmpLockIXLockExclusive(v7 + 248, (_QWORD *)v6, 0) )
              {
                v42 = CmpLockIXLockExclusive(v7 + 264, (_QWORD *)v6, 1);
                v20 = 0LL;
                if ( !v42 )
                {
                  started = -1072103423;
LABEL_79:
                  v32 = 0;
                  goto LABEL_32;
                }
LABEL_22:
                if ( !HIBYTE(v52) )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v7 + 32));
                  v51 = 1;
                }
                LOBYTE(v20) = 1;
                KeyNodeForKcb = CmpGetKeyNodeForKcb(v7, &v58, v20, v19);
                v25 = KeyNodeForKcb;
                if ( (unsigned int)CmGetVisibleSubkeyCount(v7, KeyNodeForKcb, v21) || (*(_BYTE *)(v25 + 2) & 8) != 0 )
                {
                  started = -1073741535;
                }
                else
                {
                  CmpReleaseKeyNodeForKcb(v7, &v58);
                  KeyNodeForKcb = 0LL;
                  if ( v21 )
                  {
                    *(_DWORD *)(UnitOfWork + 68) = 3;
                    *(_QWORD *)(UnitOfWork + 88) = v7;
                    *(_DWORD *)(v6 + 68) = 2;
                    *(_QWORD *)(v6 + 80) = UnitOfWork;
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v7 + 32));
                    v32 = 0;
                    started = CmAddLogForAction(v6, 1LL);
                    if ( started >= 0 )
                    {
                      v6 = 0LL;
                      UnitOfWork = 0LL;
                      CmpReportNotifyForKcbStack((__int64)&v60, v21, 1, (__int64)v59);
                      started = 0;
                    }
                    goto LABEL_32;
                  }
                  v27 = *(_QWORD *)(v7 + 192);
                  if ( !v27 || *(_QWORD *)(v27 + 32) == v27 + 32 )
                  {
                    CmpReportNotifyForKcbStack((__int64)&v60, 0, 1, (__int64)v59);
                    started = CmpFreeKeyByCell(*(_QWORD *)(v7 + 32));
                    if ( started >= 0 )
                    {
                      CmpFlushNotifiesOnKeyBodyList(v7, 8LL, (__int64)&v54[1], 0);
                      LOBYTE(v28) = 1;
                      CmpCleanUpSubKeyInfo(*(_QWORD *)(v7 + 72), v28);
                      LOBYTE(v29) = 1;
                      v31 = CmpGetKeyNodeForKcb(*(_QWORD *)(v7 + 72), &v56, v29, v30);
                      *(_WORD *)(*(_QWORD *)(v7 + 72) + 176LL) = *(_WORD *)(v31 + 52);
                      ++*(_QWORD *)(*(_QWORD *)(v7 + 72) + 304LL);
                      *(_QWORD *)(v31 + 4) = v5;
                      *(_QWORD *)(*(_QWORD *)(v7 + 72) + 168LL) = v5;
                      CmpReleaseKeyNodeForKcb(*(_QWORD *)(v7 + 72), &v56);
                      CmpMarkKeyUnbacked(v7);
                      CmpDiscardKcb(v7);
                      goto LABEL_30;
                    }
                  }
                  else
                  {
                    started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v7, &v66, v26);
                    if ( started >= 0 )
                    {
                      CmpReportNotifyForKcbStack((__int64)&v60, 0, 1, (__int64)v59);
                      started = CmpFreeKeyByCell(*(_QWORD *)(v7 + 32));
                      if ( started >= 0 )
                      {
                        LOBYTE(v46) = 1;
                        CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v7, v45, &v54[1], v46);
                        CmpFlushNotifiesOnKeyBodyList(v7, 8LL, (__int64)&v54[1], 0);
                        LOBYTE(v47) = 1;
                        CmpCleanUpSubKeyInfo(*(_QWORD *)(v7 + 72), v47);
                        LOBYTE(v48) = 1;
                        v50 = CmpGetKeyNodeForKcb(*(_QWORD *)(v7 + 72), &v56, v48, v49);
                        *(_WORD *)(*(_QWORD *)(v7 + 72) + 176LL) = *(_WORD *)(v50 + 52);
                        ++*(_QWORD *)(*(_QWORD *)(v7 + 72) + 304LL);
                        *(_QWORD *)(v50 + 4) = v5;
                        *(_QWORD *)(*(_QWORD *)(v7 + 72) + 168LL) = v5;
                        CmpReleaseKeyNodeForKcb(*(_QWORD *)(v7 + 72), &v56);
                        CmpMarkKeyUnbacked(v7);
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
        v32 = v51;
        goto LABEL_32;
      }
      v24 = (int *)(*(_QWORD *)(v7 + 72) + 248LL);
      if ( *v24 >= 0 )
      {
        v24 = (int *)(v7 + 248);
        if ( !*(_DWORD *)(v7 + 248) )
        {
          v24 = (int *)(v7 + 264);
          if ( !*(_DWORD *)(v7 + 264) )
            goto LABEL_22;
        }
      }
      v33 = 0;
      started = CmpSnapshotTxOwnerArray(v24, &v53, &v55);
      if ( started < 0 )
        goto LABEL_91;
      if ( (_BYTE)v52 )
      {
        CmpUnlockKcbStack((__int64)&v64);
        CmpUnlockKcbStack((__int64)&v60);
        LOBYTE(v52) = 0;
      }
      if ( v3 )
        CmpUnlockHashEntryByKcb(v7);
      v3 = 0;
      CmpDrainDelayDerefContext((_QWORD **)&v54[1]);
      CmpUnlockRegistry();
      started = CmpRollbackTransactionArray(v53, v55, v44, v54);
      if ( started < 0 )
      {
        v32 = 0;
        goto LABEL_33;
      }
      v1 = v57;
      v2 = HIBYTE(v52);
    }
    else
    {
      v21 = v62;
LABEL_16:
      v22 = *(_QWORD *)(v7 + 192);
      if ( !v22 || *(_QWORD *)(v22 + 32) == v22 + 32 || v16 )
        goto LABEL_17;
      v2 = 1;
      CmpUnlockKcbStack((__int64)&v64);
      CmpUnlockKcbStack((__int64)&v60);
      v52 = 256;
      CmpUnlockHashEntryByKcb(v7);
      v3 = 0;
      CmpCleanupKcbStack((__int64)&v64);
      v64 = 0LL;
      WORD1(v64) = -1;
      v65 = 0LL;
      CmpCleanupKcbStack((__int64)&v60);
      v60 = 0LL;
      WORD1(v60) = -1;
      v61 = 0LL;
      CmpUnlockRegistry();
      v1 = v57;
    }
  }
  started = -1073741431;
  v33 = 0;
  v32 = 0;
LABEL_33:
  CmpCleanupDiscardReplaceContext(&v66, &v54[1]);
  if ( KeyNodeForKcb )
    CmpReleaseKeyNodeForKcb(v7, &v58);
  if ( v32 )
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
  if ( (_BYTE)v52 )
  {
    CmpUnlockKcbStack((__int64)&v64);
    CmpUnlockKcbStack((__int64)&v60);
  }
  if ( v3 )
    CmpUnlockHashEntryByKcb(v7);
  CmpCleanupKcbStack((__int64)&v64);
  CmpCleanupKcbStack((__int64)&v60);
  CmpDrainDelayDerefContext((_QWORD **)&v54[1]);
  if ( v33 )
    CmpUnlockRegistry();
  CmpDetachFromRegistryProcess((__int64)v70, v34, v35, v36);
  if ( v59[0] != v59 )
    CmpSignalDeferredPosts(v59);
  return (unsigned int)started;
}

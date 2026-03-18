/*
 * XREFs of CmDeleteKey @ 0x14067E1BC
 * Callers:
 *     NtDeleteKey @ 0x14067DE90 (NtDeleteKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInKcb @ 0x1402A21B0 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402A2204 (CmpTransEnlistUowInCmTrans.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmDeleteLayeredKey @ 0x14053F5E8 (CmDeleteLayeredKey.c)
 *     CmpGetKeyNodeForKcb @ 0x14067E828 (CmpGetKeyNodeForKcb.c)
 *     CmpCleanupDiscardReplaceContext @ 0x14067E8A8 (CmpCleanupDiscardReplaceContext.c)
 *     CmGetVisibleSubkeyCount @ 0x14067E8E0 (CmGetVisibleSubkeyCount.c)
 *     CmpLockKcbStackExclusive @ 0x14067E974 (CmpLockKcbStackExclusive.c)
 *     CmpLockIXLockExclusive @ 0x14067E9B8 (CmpLockIXLockExclusive.c)
 *     CmpAllocateUnitOfWork @ 0x14067EA18 (CmpAllocateUnitOfWork.c)
 *     CmpDiscardKcb @ 0x14067EB68 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14067EDC0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14067EE40 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockIXLockIntent @ 0x14067EF3C (CmpLockIXLockIntent.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14067F480 (CmpTransSearchAddTransFromKeyBody.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406E93C0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpFreeKeyByCell @ 0x1407164DC (CmpFreeKeyByCell.c)
 *     CmAddLogForAction @ 0x14071784C (CmAddLogForAction.c)
 *     CmpSignalDeferredPosts @ 0x140719010 (CmpSignalDeferredPosts.c)
 *     CmpCleanUpSubKeyInfo @ 0x14071B5A0 (CmpCleanUpSubKeyInfo.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14071BB4C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x14071C050 (CmpUnlockHashEntryByKcb.c)
 *     CmpRundownUnitOfWork @ 0x14071C120 (CmpRundownUnitOfWork.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14071F6D0 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpReportNotifyForKcbStack @ 0x140721878 (CmpReportNotifyForKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     CmpRollbackTransactionArray @ 0x14091BC64 (CmpRollbackTransactionArray.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14091CB44 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14091CF4C (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpSnapshotTxOwnerArray @ 0x14091ECE0 (CmpSnapshotTxOwnerArray.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpIsShutdownRundownActive @ 0x140AB4248 (CmpIsShutdownRundownActive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AB45A0 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmDeleteKey(_QWORD *a1)
{
  char v1; // r12
  char v3; // di
  ULONG_PTR UnitOfWork; // r15
  __int64 v5; // rbx
  ULONG_PTR v6; // r14
  ULONG_PTR v7; // rsi
  __int64 v8; // r12
  int started; // edi
  char v10; // di
  char IsKeyDeletedForKeyBody; // al
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  int *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  char v24; // bl
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  PPRIVILEGE_SET v40; // rcx
  char v41; // al
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // [rsp+28h] [rbp-E0h]
  __int64 v52; // [rsp+30h] [rbp-D8h]
  __int64 v53; // [rsp+38h] [rbp-D0h]
  __int64 v54; // [rsp+40h] [rbp-C8h]
  __int64 v55; // [rsp+48h] [rbp-C0h]
  __int64 v56; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v59[3]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v60[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v61; // [rsp+90h] [rbp-78h] BYREF
  __int64 v62; // [rsp+98h] [rbp-70h] BYREF
  __int128 v63; // [rsp+A0h] [rbp-68h] BYREF
  PPRIVILEGE_SET v64[2]; // [rsp+B0h] [rbp-58h]
  __int64 KeyNodeForKcb; // [rsp+C0h] [rbp-48h]
  __int128 v66; // [rsp+C8h] [rbp-40h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+D8h] [rbp-30h]
  __int64 v68; // [rsp+E8h] [rbp-20h] BYREF
  int v69; // [rsp+F0h] [rbp-18h]
  int v70; // [rsp+F4h] [rbp-14h]
  _QWORD v71[3]; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD v72[3]; // [rsp+110h] [rbp+8h] BYREF

  v1 = 0;
  v60[1] = v60;
  memset(v59, 0, sizeof(v59));
  v60[0] = v60;
  v57 = 0LL;
  v70 = 0;
  memset(v72, 0, sizeof(v72));
  v58 = 0LL;
  v56 = 0LL;
  v3 = 0;
  BYTE4(v55) = 0;
  UnitOfWork = 0LL;
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = 0LL;
  v63 = 0LL;
  WORD1(v63) = -1;
  v7 = 0LL;
  v66 = 0LL;
  WORD1(v66) = -1;
  BYTE1(v55) = 0;
  *(_OWORD *)v64 = 0LL;
  WORD1(v55) = 0;
  *(_OWORD *)Privileges = 0LL;
  v61 = 0LL;
  KeyNodeForKcb = 0LL;
  HvpGetCellContextReinitialize(v59);
  HvpGetCellContextReinitialize(&v57);
  v68 = 0LL;
  v71[1] = v71;
  v70 = 0;
  v71[0] = v71;
  v69 = -1073741823;
  CmpInitializeDelayDerefContext(&v59[1]);
  CmpAttachToRegistryProcess(v72);
  if ( (unsigned __int8)CmpIsShutdownRundownActive() )
    goto LABEL_97;
  v8 = v61;
  while ( 1 )
  {
    if ( v3 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
    v7 = a1[1];
    LOBYTE(v55) = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_114;
    }
    if ( !*(_QWORD *)(v7 + 72) )
    {
      started = -1073741535;
LABEL_117:
      v24 = 0;
      goto LABEL_35;
    }
    if ( *(_WORD *)(v7 + 66) )
    {
      started = CmDeleteLayeredKey((__int64)a1, (__int64)v60, &v59[1]);
      goto LABEL_114;
    }
    started = CmpStartKcbStackForTopLayerKcb(&v66, v7);
    if ( started < 0 )
      goto LABEL_98;
    started = CmpStartKcbStackForTopLayerKcb(&v63, *(_QWORD *)(v7 + 72));
    if ( started < 0 )
      goto LABEL_117;
    v10 = BYTE4(v55);
    if ( !BYTE4(v55) )
    {
      CmpLockHashEntryExclusiveByKcb(v7);
      BYTE3(v55) = 1;
      CmpLockKcbStackTopExclusiveRestShared(&v63);
      CmpLockKcbStackExclusive(&v66);
      BYTE2(v55) = 1;
    }
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, 0LL);
    v13 = 0LL;
    if ( IsKeyDeletedForKeyBody )
    {
LABEL_111:
      started = 0;
      goto LABEL_100;
    }
    if ( !a1[7] && !a1[8] )
      goto LABEL_15;
    started = CmpTransSearchAddTransFromKeyBody(a1, &v61);
    if ( started < 0 )
      goto LABEL_98;
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 2) != 0 )
    {
      started = -1072103423;
LABEL_114:
      v24 = 0;
      goto LABEL_35;
    }
    v8 = v61;
    v31 = CmpIsKeyDeletedForKeyBody(a1, v61);
    v13 = 0LL;
    if ( v31 )
      goto LABEL_111;
    if ( v8 )
      goto LABEL_16;
    v10 = BYTE4(v55);
LABEL_15:
    v14 = *(_QWORD *)(v7 + 192);
    if ( v14 && *(_QWORD *)(v14 + 32) != v14 + 32 && !v10 )
    {
      v3 = 1;
      BYTE4(v55) = 1;
      CmpUnlockKcbStack(&v66);
      CmpUnlockKcbStack(&v63);
      BYTE2(v55) = 0;
      CmpUnlockHashEntryByKcb(v7);
      BYTE3(v55) = 0;
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v66 = 0LL;
      WORD1(v66) = -1;
      v40 = v64[1];
      *(_OWORD *)Privileges = 0LL;
      if ( v64[1] )
        CmSiFreeMemory(v64[1]);
      v63 = 0LL;
      WORD1(v63) = -1;
      *(_OWORD *)v64 = 0LL;
      CmpUnlockRegistry(v40, v37, v38, v39, v51, v52);
      goto LABEL_95;
    }
LABEL_16:
    v15 = *(_QWORD *)(v7 + 240);
    if ( v15 )
    {
      v41 = CmEqualTrans(v8, v15, 0LL);
      v13 = 0LL;
      if ( !v41 )
      {
        started = -1073741535;
        v24 = 0;
        goto LABEL_35;
      }
    }
    if ( v8 )
    {
      UnitOfWork = CmpAllocateUnitOfWork(v12, v15, 0LL);
      if ( !UnitOfWork || (v6 = CmpAllocateUnitOfWork(v33, v32, v34)) == 0 )
      {
        started = -1073741670;
        goto LABEL_100;
      }
      CmpTransEnlistUowInKcb((_QWORD *)UnitOfWork, *(_QWORD *)(v7 + 72));
      started = CmpTransEnlistUowInCmTrans((_QWORD *)UnitOfWork, v8);
      if ( started < 0
        || (CmpTransEnlistUowInKcb((_QWORD *)v6, v7), started = CmpTransEnlistUowInCmTrans((_QWORD *)v6, v8),
                                                      started < 0) )
      {
LABEL_100:
        v24 = 0;
        goto LABEL_35;
      }
      if ( !(unsigned __int8)CmpLockIXLockIntent(*(_QWORD *)(v7 + 72) + 248LL, UnitOfWork)
        || !(unsigned __int8)CmpLockIXLockExclusive(v7 + 248, v6, 0LL)
        || !(unsigned __int8)CmpLockIXLockExclusive(v7 + 264, v6, 1LL) )
      {
        started = -1072103423;
        goto LABEL_100;
      }
LABEL_21:
      if ( !BYTE4(v55) )
      {
        ExAcquirePushLockSharedEx(*(_QWORD *)(v7 + 32) + 72LL, 0LL);
        BYTE1(v55) = 1;
      }
      LOBYTE(v13) = 1;
      KeyNodeForKcb = CmpGetKeyNodeForKcb(v7, v59, v13);
      v17 = KeyNodeForKcb;
      if ( (unsigned int)CmGetVisibleSubkeyCount(v7, KeyNodeForKcb, v8) || (*(_BYTE *)(v17 + 2) & 8) != 0 )
      {
        started = -1073741535;
      }
      else
      {
        v18 = *(_QWORD *)(v7 + 32);
        if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v18, v59);
        else
          HvpReleaseCellPaged(v18, v59);
        KeyNodeForKcb = 0LL;
        if ( v8 )
        {
          *(_DWORD *)(UnitOfWork + 68) = 3;
          *(_QWORD *)(UnitOfWork + 88) = v7;
          *(_DWORD *)(v6 + 68) = 2;
          *(_QWORD *)(v6 + 80) = UnitOfWork;
          v35 = *(_QWORD *)(v7 + 32);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v35 + 72));
          KeAbPostRelease(v35 + 72);
          v24 = 0;
          started = CmAddLogForAction(v6, 1LL);
          if ( started >= 0 )
          {
            v6 = 0LL;
            UnitOfWork = 0LL;
            CmpReportNotifyForKcbStack(&v63, v61, 1LL, v60, v51, v52, v53, v54, v55);
            started = 0;
          }
          goto LABEL_35;
        }
        v19 = *(_QWORD *)(v7 + 192);
        if ( !v19 || *(_QWORD *)(v19 + 32) == v19 + 32 )
        {
          CmpReportNotifyForKcbStack(&v63, 0LL, 1LL, v60, v51, v52, v53, v54, v55);
          started = CmpFreeKeyByCell(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40));
          if ( started >= 0 )
          {
            CmpFlushNotifiesOnKeyBodyList(v7, 8LL, &v59[1]);
            LOBYTE(v20) = 1;
            CmpCleanUpSubKeyInfo(*(_QWORD *)(v7 + 72), v20);
            LOBYTE(v21) = 1;
            v22 = CmpGetKeyNodeForKcb(*(_QWORD *)(v7 + 72), &v57, v21);
            *(_WORD *)(*(_QWORD *)(v7 + 72) + 176LL) = *(_WORD *)(v22 + 52);
            ++*(_QWORD *)(*(_QWORD *)(v7 + 72) + 304LL);
            *(_QWORD *)(v22 + 4) = v5;
            *(_QWORD *)(*(_QWORD *)(v7 + 72) + 168LL) = v5;
            v23 = *(_QWORD *)(*(_QWORD *)(v7 + 72) + 32LL);
            if ( (*(_BYTE *)(v23 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v23, &v57);
            else
              HvpReleaseCellPaged(v23, &v57);
            CmpMarkKeyUnbacked(v7, &v59[1]);
            CmpDiscardKcb(v7);
LABEL_33:
            started = 0;
          }
        }
        else
        {
          started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v7, &v68);
          if ( started >= 0 )
          {
            CmpReportNotifyForKcbStack(&v63, 0LL, 1LL, v60, v51, v52, v53, v54, v55);
            started = CmpFreeKeyByCell(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40));
            if ( started >= 0 )
            {
              v62 = 0x10100000008LL;
              CmpEnumerateAllHigherLayerKcbs(
                v7,
                (unsigned int)CmpFlushNotifiesPreCallback,
                (unsigned int)CmpFlushNotifiesPostCallback,
                (unsigned int)&v59[1],
                (__int64)&v62,
                1,
                1);
              CmpFlushNotifiesOnKeyBodyList(v7, 8LL, &v59[1]);
              LOBYTE(v47) = 1;
              CmpCleanUpSubKeyInfo(*(_QWORD *)(v7 + 72), v47);
              LOBYTE(v48) = 1;
              v49 = CmpGetKeyNodeForKcb(*(_QWORD *)(v7 + 72), &v57, v48);
              *(_WORD *)(*(_QWORD *)(v7 + 72) + 176LL) = *(_WORD *)(v49 + 52);
              ++*(_QWORD *)(*(_QWORD *)(v7 + 72) + 304LL);
              *(_QWORD *)(v49 + 4) = v5;
              *(_QWORD *)(*(_QWORD *)(v7 + 72) + 168LL) = v5;
              v50 = *(_QWORD *)(*(_QWORD *)(v7 + 72) + 32LL);
              if ( (*(_BYTE *)(v50 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v50, &v57);
              else
                HvpReleaseCellPaged(v50, &v57);
              CmpMarkKeyUnbacked(v7, &v59[1]);
              CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v7);
              goto LABEL_33;
            }
          }
        }
      }
      v24 = BYTE1(v55);
LABEL_35:
      v1 = v55;
      goto LABEL_36;
    }
    v16 = (int *)(*(_QWORD *)(v7 + 72) + 248LL);
    if ( *v16 >= 0 )
    {
      v16 = (int *)(v7 + 248);
      if ( !*(_DWORD *)(v7 + 248) )
      {
        v16 = (int *)(v7 + 264);
        if ( !*(_DWORD *)(v7 + 264) )
          goto LABEL_21;
      }
    }
    started = CmpSnapshotTxOwnerArray(v16, &v56, &v58);
    if ( started < 0 )
    {
LABEL_98:
      v24 = 0;
      goto LABEL_35;
    }
    if ( BYTE2(v55) )
    {
      CmpUnlockKcbStack(&v66);
      CmpUnlockKcbStack(&v63);
      BYTE2(v55) = 0;
    }
    if ( BYTE3(v55) )
    {
      CmpUnlockHashEntryByKcb(v7);
      BYTE3(v55) = 0;
    }
    CmpDrainDelayDerefContext(&v59[1]);
    CmpUnlockRegistry(v43, v42, v44, v45, v51, v52);
    started = CmpRollbackTransactionArray((unsigned int)v56, v58, v46, (char *)&v56 + 4);
    if ( started < 0 )
      break;
    v3 = BYTE4(v55);
LABEL_95:
    if ( (unsigned __int8)CmpIsShutdownRundownActive() )
    {
      v1 = 0;
LABEL_97:
      started = -1073741431;
      v24 = 0;
      goto LABEL_36;
    }
  }
  v1 = 0;
  v24 = 0;
LABEL_36:
  CmpCleanupDiscardReplaceContext(&v68, &v59[1]);
  if ( KeyNodeForKcb )
  {
    v36 = *(_QWORD *)(v7 + 32);
    if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v36, v59);
    else
      HvpReleaseCellPaged(v36, v59);
  }
  if ( v24 )
  {
    v25 = *(_QWORD *)(v7 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v25 + 72));
    KeAbPostRelease(v25 + 72);
  }
  if ( v6 )
  {
    CmpRundownUnitOfWork(v6);
    ExFreePoolWithTag((PVOID)v6, 0x77554D43u);
  }
  if ( UnitOfWork )
  {
    CmpRundownUnitOfWork(UnitOfWork);
    ExFreePoolWithTag((PVOID)UnitOfWork, 0x77554D43u);
  }
  if ( BYTE2(v55) )
  {
    CmpUnlockKcbStack(&v66);
    CmpUnlockKcbStack(&v63);
  }
  if ( BYTE3(v55) )
    CmpUnlockHashEntryByKcb(v7);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v64[1] )
    CmSiFreeMemory(v64[1]);
  CmpDrainDelayDerefContext(&v59[1]);
  if ( v1 )
    CmpUnlockRegistry(v27, v26, v28, v29, v51, v52);
  CmpDetachFromRegistryProcess(v72);
  if ( (_QWORD *)v60[0] != v60 )
    CmpSignalDeferredPosts(v60);
  return (unsigned int)started;
}

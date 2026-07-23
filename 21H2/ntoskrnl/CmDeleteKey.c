/*
 * XREFs of CmDeleteKey @ 0x140660814
 * Callers:
 *     NtDeleteKey @ 0x140661030 (NtDeleteKey.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x140213DB0 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14026D0B0 (CmpTransEnlistUowInCmTrans.c)
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmDeleteLayeredKey @ 0x1404ED2B8 (CmDeleteLayeredKey.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1405DED94 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmAddLogForAction @ 0x14060E74C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x140617BA0 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140619820 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140619E60 (CmpLockIXLockExclusive.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14065AB50 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14065B0AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14065B0E4 (HvLockHiveFlusherShared.c)
 *     CmpSignalDeferredPosts @ 0x14065C6B0 (CmpSignalDeferredPosts.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14065DE90 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpCleanUpSubKeyInfo @ 0x14065EECC (CmpCleanUpSubKeyInfo.c)
 *     CmGetVisibleSubkeyCount @ 0x14066000C (CmGetVisibleSubkeyCount.c)
 *     CmpFreeKeyByCell @ 0x1406600A0 (CmpFreeKeyByCell.c)
 *     CmpGetKeyNodeForKcb @ 0x140660DF4 (CmpGetKeyNodeForKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x140660E70 (CmpUnlockHashEntryByKcb.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140660F20 (CmpCleanupDiscardReplaceContext.c)
 *     CmpLockKcbStackExclusive @ 0x140660F58 (CmpLockKcbStackExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140660F9C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDiscardKcb @ 0x140661748 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1406619A0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140661A20 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpRundownUnitOfWork @ 0x140664278 (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x14066440C (CmEqualTrans.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpReportNotifyForKcbStack @ 0x1406DCA60 (CmpReportNotifyForKcbStack.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140712740 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140712820 (CmpUnlockKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140734C14 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140863F5C (CmpReleaseKeyNodeForKcb.c)
 *     CmpRollbackTransactionArray @ 0x1408751D8 (CmpRollbackTransactionArray.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140876114 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140876558 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpSnapshotTxOwnerArray @ 0x1408783AC (CmpSnapshotTxOwnerArray.c)
 *     CmpFreeUnitOfWork @ 0x14087EC08 (CmpFreeUnitOfWork.c)
 */

__int64 __fastcall CmDeleteKey(_QWORD *a1)
{
  _QWORD *v1; // r15
  char v2; // di
  char v3; // r14
  _QWORD *UnitOfWork; // r12
  __int64 v5; // rbx
  _QWORD *v6; // r13
  ULONG_PTR v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _LOOKASIDE_LIST_EX *v10; // r9
  int started; // edi
  __int64 v12; // r8
  struct _LOOKASIDE_LIST_EX *v13; // r9
  char v14; // di
  char IsKeyDeletedForKeyBody; // al
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdx
  int *v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  char v28; // bl
  char v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rcx
  char v33; // al
  char v34; // al
  __int64 v35; // rdx
  __int64 v36; // rcx
  char v37; // al
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r9
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  char v46; // [rsp+28h] [rbp-E0h]
  __int16 v47; // [rsp+2Ah] [rbp-DEh]
  unsigned int v48; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v49; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v50; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v51[3]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *v52; // [rsp+58h] [rbp-B0h]
  __int64 v53; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v54[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v55; // [rsp+78h] [rbp-90h] BYREF
  __int128 v56; // [rsp+88h] [rbp-80h]
  __int64 v57; // [rsp+98h] [rbp-70h] BYREF
  __int64 KeyNodeForKcb; // [rsp+A0h] [rbp-68h]
  __int128 v59; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v60; // [rsp+B8h] [rbp-50h]
  __int64 v61; // [rsp+C8h] [rbp-40h] BYREF
  int v62; // [rsp+D0h] [rbp-38h]
  int v63; // [rsp+D4h] [rbp-34h]
  _QWORD v64[2]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v65[3]; // [rsp+E8h] [rbp-20h] BYREF

  v52 = a1;
  v50 = 0LL;
  v48 = 0;
  v54[1] = v54;
  v1 = a1;
  v54[0] = v54;
  v46 = 0;
  memset(v65, 0, sizeof(v65));
  v2 = 0;
  v3 = 0;
  v47 = 0;
  v57 = 0LL;
  UnitOfWork = 0LL;
  *(_OWORD *)&v51[1] = 0LL;
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = 0LL;
  v7 = 0LL;
  v53 = 0xFFFFFFFFLL;
  v51[0] = 0xFFFFFFFFLL;
  v55 = 0LL;
  WORD1(v55) = -1;
  v59 = 0LL;
  WORD1(v59) = -1;
  v64[1] = v64;
  v64[0] = v64;
  v56 = 0LL;
  LODWORD(v49) = 0;
  v60 = 0LL;
  KeyNodeForKcb = 0LL;
  v61 = 0LL;
  v63 = 0;
  v62 = -1073741823;
  CmpInitializeDelayDerefContext(&v51[1]);
  CmpAttachToRegistryProcess(v65);
  while ( (CmpShutdownRundown & 1) == 0 )
  {
    if ( v2 )
      CmpLockRegistryExclusive(0LL, v8);
    else
      CmpLockRegistry(0LL);
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
      started = CmDeleteLayeredKey((__int64)v1, (__int64)v54, (__int64)&v51[1]);
      goto LABEL_91;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v59, v7, v9, v10);
    if ( started < 0 )
      goto LABEL_91;
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v55, *(_QWORD *)(v7 + 72), v12, v13);
    if ( started < 0 )
      goto LABEL_94;
    v14 = HIBYTE(v47);
    if ( !HIBYTE(v47) )
    {
      CmpLockHashEntryExclusiveByKcb(v7);
      v3 = 1;
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v55);
      CmpLockKcbStackExclusive(&v59);
      LOBYTE(v47) = 1;
    }
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(v1, 0LL);
    v17 = 0LL;
    if ( IsKeyDeletedForKeyBody )
    {
LABEL_88:
      started = 0;
      v28 = 0;
      goto LABEL_32;
    }
    if ( v1[7] || v1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(v1, &v57);
      if ( started < 0 )
        goto LABEL_91;
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
LABEL_91:
        v28 = 0;
        goto LABEL_32;
      }
      v18 = v57;
      v33 = CmpIsKeyDeletedForKeyBody(v52, v57);
      v17 = 0LL;
      if ( v33 )
        goto LABEL_88;
      if ( !v18 )
      {
        v14 = HIBYTE(v47);
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
          started = CmpTransEnlistUowInCmTrans(UnitOfWork, v18);
          if ( started >= 0 )
          {
            CmpTransEnlistUowInKcb(v6, v7);
            started = CmpTransEnlistUowInCmTrans(v6, v18);
            if ( started >= 0 )
            {
              if ( CmpLockIXLockIntent((unsigned int *)(*(_QWORD *)(v7 + 72) + 248LL), (__int64)UnitOfWork)
                && CmpLockIXLockExclusive(v7 + 248, v6, 0) )
              {
                v34 = CmpLockIXLockExclusive(v7 + 264, v6, 1);
                v17 = 0LL;
                if ( !v34 )
                {
                  started = -1072103423;
LABEL_79:
                  v28 = 0;
                  goto LABEL_32;
                }
LABEL_22:
                if ( !HIBYTE(v47) )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v7 + 32));
                  v46 = 1;
                }
                LOBYTE(v17) = 1;
                KeyNodeForKcb = CmpGetKeyNodeForKcb(v7, &v53, v17, v16);
                v22 = KeyNodeForKcb;
                if ( (unsigned int)CmGetVisibleSubkeyCount(v7, KeyNodeForKcb, v18) || (*(_BYTE *)(v22 + 2) & 8) != 0 )
                {
                  started = -1073741535;
                }
                else
                {
                  CmpReleaseKeyNodeForKcb(v7, &v53);
                  KeyNodeForKcb = 0LL;
                  if ( v18 )
                  {
                    *((_DWORD *)UnitOfWork + 17) = 3;
                    UnitOfWork[11] = v7;
                    *((_DWORD *)v6 + 17) = 2;
                    v6[10] = UnitOfWork;
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v7 + 32));
                    v28 = 0;
                    started = CmAddLogForAction((__int64)v6, 1);
                    if ( started >= 0 )
                    {
                      v6 = 0LL;
                      UnitOfWork = 0LL;
                      CmpReportNotifyForKcbStack(&v55, v18, 1LL, v54);
                      started = 0;
                    }
                    goto LABEL_32;
                  }
                  v24 = *(_QWORD *)(v7 + 192);
                  if ( !v24 || *(_QWORD *)(v24 + 32) == v24 + 32 )
                  {
                    CmpReportNotifyForKcbStack(&v55, 0LL, 1LL, v54);
                    started = CmpFreeKeyByCell(*(_QWORD *)(v7 + 32), *(_DWORD *)(v7 + 40), 1);
                    if ( started >= 0 )
                    {
                      CmpFlushNotifiesOnKeyBodyList(v7, 8LL, &v51[1]);
                      CmpCleanUpSubKeyInfo(*(_QWORD *)(v7 + 72), 1);
                      LOBYTE(v25) = 1;
                      v27 = CmpGetKeyNodeForKcb(*(_QWORD *)(v7 + 72), v51, v25, v26);
                      *(_WORD *)(*(_QWORD *)(v7 + 72) + 176LL) = *(_WORD *)(v27 + 52);
                      ++*(_QWORD *)(*(_QWORD *)(v7 + 72) + 304LL);
                      *(_QWORD *)(v27 + 4) = v5;
                      *(_QWORD *)(*(_QWORD *)(v7 + 72) + 168LL) = v5;
                      CmpReleaseKeyNodeForKcb(*(_QWORD *)(v7 + 72), v51);
                      CmpMarkKeyUnbacked(v7, &v51[1]);
                      CmpDiscardKcb(v7);
                      goto LABEL_30;
                    }
                  }
                  else
                  {
                    started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v7, &v61, v23);
                    if ( started >= 0 )
                    {
                      CmpReportNotifyForKcbStack(&v55, 0LL, 1LL, v54);
                      started = CmpFreeKeyByCell(*(_QWORD *)(v7 + 32), *(_DWORD *)(v7 + 40), 1);
                      if ( started >= 0 )
                      {
                        LOBYTE(v42) = 1;
                        CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v7, v41, &v51[1], v42);
                        CmpFlushNotifiesOnKeyBodyList(v7, 8LL, &v51[1]);
                        CmpCleanUpSubKeyInfo(*(_QWORD *)(v7 + 72), 1);
                        LOBYTE(v43) = 1;
                        v45 = CmpGetKeyNodeForKcb(*(_QWORD *)(v7 + 72), v51, v43, v44);
                        *(_WORD *)(*(_QWORD *)(v7 + 72) + 176LL) = *(_WORD *)(v45 + 52);
                        ++*(_QWORD *)(*(_QWORD *)(v7 + 72) + 304LL);
                        *(_QWORD *)(v45 + 4) = v5;
                        *(_QWORD *)(*(_QWORD *)(v7 + 72) + 168LL) = v5;
                        CmpReleaseKeyNodeForKcb(*(_QWORD *)(v7 + 72), v51);
                        CmpMarkKeyUnbacked(v7, &v51[1]);
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
        v28 = v46;
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
      v29 = 0;
      started = CmpSnapshotTxOwnerArray(v21, &v48, &v50);
      if ( started < 0 )
        goto LABEL_91;
      if ( (_BYTE)v47 )
      {
        CmpUnlockKcbStack(&v59);
        CmpUnlockKcbStack(&v55);
        LOBYTE(v47) = 0;
      }
      if ( v3 )
        CmpUnlockHashEntryByKcb(v7);
      v3 = 0;
      CmpDrainDelayDerefContext((_QWORD **)&v51[1]);
      CmpUnlockRegistry(v39, v38);
      started = CmpRollbackTransactionArray(v48, v50, v40, &v49);
      if ( started < 0 )
      {
        v28 = 0;
        goto LABEL_33;
      }
      v1 = v52;
      v2 = HIBYTE(v47);
    }
    else
    {
      v18 = v57;
LABEL_16:
      v19 = *(_QWORD *)(v7 + 192);
      if ( !v19 || *(_QWORD *)(v19 + 32) == v19 + 32 || v14 )
        goto LABEL_17;
      v2 = 1;
      CmpUnlockKcbStack(&v59);
      CmpUnlockKcbStack(&v55);
      v47 = 256;
      CmpUnlockHashEntryByKcb(v7);
      v3 = 0;
      CmpCleanupKcbStack(&v59);
      v59 = 0LL;
      WORD1(v59) = -1;
      v60 = 0LL;
      CmpCleanupKcbStack(&v55);
      v55 = 0LL;
      WORD1(v55) = -1;
      v56 = 0LL;
      CmpUnlockRegistry(v36, v35);
      v1 = v52;
    }
  }
  started = -1073741431;
  v29 = 0;
  v28 = 0;
LABEL_33:
  CmpCleanupDiscardReplaceContext(&v61, &v51[1]);
  if ( KeyNodeForKcb )
    CmpReleaseKeyNodeForKcb(v7, &v53);
  if ( v28 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v7 + 32));
  if ( v6 )
  {
    CmpRundownUnitOfWork((ULONG_PTR)v6);
    CmpFreeUnitOfWork(v6);
  }
  if ( UnitOfWork )
  {
    CmpRundownUnitOfWork((ULONG_PTR)UnitOfWork);
    CmpFreeUnitOfWork(UnitOfWork);
  }
  if ( (_BYTE)v47 )
  {
    CmpUnlockKcbStack(&v59);
    CmpUnlockKcbStack(&v55);
  }
  if ( v3 )
    CmpUnlockHashEntryByKcb(v7);
  CmpCleanupKcbStack(&v59);
  CmpCleanupKcbStack(&v55);
  CmpDrainDelayDerefContext((_QWORD **)&v51[1]);
  if ( v29 )
    CmpUnlockRegistry(v31, v30);
  CmpDetachFromRegistryProcess(v65);
  if ( v54[0] != v54 )
    CmpSignalDeferredPosts(v54);
  return (unsigned int)started;
}

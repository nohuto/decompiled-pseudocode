/*
 * XREFs of CmDeleteKey @ 0x14066B9F4
 * Callers:
 *     NtDeleteKey @ 0x14066C210 (NtDeleteKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1403510E8 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140351100 (CmpDrainDelayDerefContext.c)
 *     CmpTransEnlistUowInKcb @ 0x140360610 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x140361D2C (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     CmDeleteLayeredKey @ 0x1404ED078 (CmDeleteLayeredKey.c)
 *     CmpReportNotifyForKcbStack @ 0x1405ED300 (CmpReportNotifyForKcbStack.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140665D30 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14066628C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406662C4 (HvLockHiveFlusherShared.c)
 *     CmpSignalDeferredPosts @ 0x140667890 (CmpSignalDeferredPosts.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140669070 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpCleanUpSubKeyInfo @ 0x14066A0AC (CmpCleanUpSubKeyInfo.c)
 *     CmGetVisibleSubkeyCount @ 0x14066B1EC (CmGetVisibleSubkeyCount.c)
 *     CmpFreeKeyByCell @ 0x14066B280 (CmpFreeKeyByCell.c)
 *     CmpGetKeyNodeForKcb @ 0x14066BFD4 (CmpGetKeyNodeForKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x14066C050 (CmpUnlockHashEntryByKcb.c)
 *     CmpCleanupDiscardReplaceContext @ 0x14066C100 (CmpCleanupDiscardReplaceContext.c)
 *     CmpLockKcbStackExclusive @ 0x14066C138 (CmpLockKcbStackExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14066C17C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDiscardKcb @ 0x14066C928 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14066CB80 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14066CC00 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockRegistryExclusive @ 0x14067278C (CmpLockRegistryExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A3094 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmAddLogForAction @ 0x1406AFE4C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406B8780 (CmpAllocateUnitOfWork.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x1406FB360 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1406FB440 (CmpUnlockKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406FC600 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x14071D3E0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14071D440 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14071D7DC (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x14071D970 (CmEqualTrans.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140734A54 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140863E04 (CmpReleaseKeyNodeForKcb.c)
 *     CmpRollbackTransactionArray @ 0x140875078 (CmpRollbackTransactionArray.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140875FB4 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1408763F8 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpSnapshotTxOwnerArray @ 0x14087824C (CmpSnapshotTxOwnerArray.c)
 *     CmpFreeUnitOfWork @ 0x14087EAA8 (CmpFreeUnitOfWork.c)
 */

__int64 __fastcall CmDeleteKey(_QWORD *a1)
{
  _QWORD *v1; // r15
  char v2; // di
  char v3; // r14
  ULONG_PTR UnitOfWork; // r12
  __int64 v5; // rbx
  ULONG_PTR v6; // r13
  ULONG_PTR v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _LOOKASIDE_LIST_EX *v13; // r9
  int started; // edi
  __int64 v15; // r8
  struct _LOOKASIDE_LIST_EX *v16; // r9
  char v17; // di
  char IsKeyDeletedForKeyBody; // al
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdx
  int *v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  char v32; // bl
  char v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rcx
  char v37; // al
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  char v41; // al
  __int64 v42; // rdx
  __int64 v43; // rcx
  char v44; // al
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  char v53; // [rsp+28h] [rbp-E0h]
  __int16 v54; // [rsp+2Ah] [rbp-DEh]
  unsigned int v55; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v56; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v57; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v58[3]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *v59; // [rsp+58h] [rbp-B0h]
  __int64 v60; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v61[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v62; // [rsp+78h] [rbp-90h] BYREF
  __int128 v63; // [rsp+88h] [rbp-80h]
  __int64 v64; // [rsp+98h] [rbp-70h] BYREF
  __int64 KeyNodeForKcb; // [rsp+A0h] [rbp-68h]
  __int128 v66; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v67; // [rsp+B8h] [rbp-50h]
  __int64 v68; // [rsp+C8h] [rbp-40h] BYREF
  int v69; // [rsp+D0h] [rbp-38h]
  int v70; // [rsp+D4h] [rbp-34h]
  _QWORD v71[2]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v72[3]; // [rsp+E8h] [rbp-20h] BYREF

  v59 = a1;
  v57 = 0LL;
  v55 = 0;
  v61[1] = v61;
  v1 = a1;
  v61[0] = v61;
  v53 = 0;
  memset(v72, 0, sizeof(v72));
  v2 = 0;
  v3 = 0;
  v54 = 0;
  v64 = 0LL;
  UnitOfWork = 0LL;
  *(_OWORD *)&v58[1] = 0LL;
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = 0LL;
  v7 = 0LL;
  v60 = 0xFFFFFFFFLL;
  v58[0] = 0xFFFFFFFFLL;
  v62 = 0LL;
  WORD1(v62) = -1;
  v66 = 0LL;
  WORD1(v66) = -1;
  v71[1] = v71;
  v71[0] = v71;
  v63 = 0LL;
  LODWORD(v56) = 0;
  v67 = 0LL;
  KeyNodeForKcb = 0LL;
  v68 = 0LL;
  v70 = 0;
  v69 = -1073741823;
  CmpInitializeDelayDerefContext(&v58[1]);
  CmpAttachToRegistryProcess((__int64)v72, v8, v9, v10);
  while ( (CmpShutdownRundown & 1) == 0 )
  {
    if ( v2 )
      CmpLockRegistryExclusive(0LL, v11);
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
      v32 = 0;
LABEL_32:
      v33 = 1;
      goto LABEL_33;
    }
    if ( *(_WORD *)(v7 + 66) )
    {
      started = CmDeleteLayeredKey((__int64)v1, (__int64)v61, (__int64)&v58[1]);
      goto LABEL_91;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v66, v7, v12, v13);
    if ( started < 0 )
      goto LABEL_91;
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v62, *(_QWORD *)(v7 + 72), v15, v16);
    if ( started < 0 )
      goto LABEL_94;
    v17 = HIBYTE(v54);
    if ( !HIBYTE(v54) )
    {
      CmpLockHashEntryExclusiveByKcb(v7);
      v3 = 1;
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v62);
      CmpLockKcbStackExclusive(&v66);
      LOBYTE(v54) = 1;
    }
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(v1, 0LL);
    v21 = 0LL;
    if ( IsKeyDeletedForKeyBody )
    {
LABEL_88:
      started = 0;
      v32 = 0;
      goto LABEL_32;
    }
    if ( v1[7] || v1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(v1, &v64);
      if ( started < 0 )
        goto LABEL_91;
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
LABEL_91:
        v32 = 0;
        goto LABEL_32;
      }
      v22 = v64;
      v37 = CmpIsKeyDeletedForKeyBody(v59, v64);
      v21 = 0LL;
      if ( v37 )
        goto LABEL_88;
      if ( !v22 )
      {
        v17 = HIBYTE(v54);
        goto LABEL_16;
      }
LABEL_17:
      v24 = *(_QWORD *)(v7 + 240);
      if ( v24 )
      {
        v44 = CmEqualTrans(v22, v24);
        v21 = 0LL;
        if ( !v44 )
        {
          started = -1073741535;
          goto LABEL_79;
        }
      }
      if ( v22 )
      {
        UnitOfWork = CmpAllocateUnitOfWork(v19, v24, 0LL);
        if ( !UnitOfWork )
        {
          started = -1073741670;
          v32 = 0;
          goto LABEL_32;
        }
        v6 = CmpAllocateUnitOfWork(v39, v38, v40);
        if ( v6 )
        {
          CmpTransEnlistUowInKcb((_QWORD *)UnitOfWork, *(_QWORD *)(v7 + 72));
          started = CmpTransEnlistUowInCmTrans((_QWORD *)UnitOfWork, v22);
          if ( started >= 0 )
          {
            CmpTransEnlistUowInKcb((_QWORD *)v6, v7);
            started = CmpTransEnlistUowInCmTrans((_QWORD *)v6, v22);
            if ( started >= 0 )
            {
              if ( (unsigned __int8)CmpLockIXLockIntent(*(_QWORD *)(v7 + 72) + 248LL, UnitOfWork)
                && (unsigned __int8)CmpLockIXLockExclusive(v7 + 248, v6, 0LL) )
              {
                v41 = CmpLockIXLockExclusive(v7 + 264, v6, 1LL);
                v21 = 0LL;
                if ( !v41 )
                {
                  started = -1072103423;
LABEL_79:
                  v32 = 0;
                  goto LABEL_32;
                }
LABEL_22:
                if ( !HIBYTE(v54) )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v7 + 32));
                  v53 = 1;
                }
                LOBYTE(v21) = 1;
                KeyNodeForKcb = CmpGetKeyNodeForKcb(v7, &v60, v21, v20);
                v26 = KeyNodeForKcb;
                if ( (unsigned int)CmGetVisibleSubkeyCount(v7, KeyNodeForKcb, v22) || (*(_BYTE *)(v26 + 2) & 8) != 0 )
                {
                  started = -1073741535;
                }
                else
                {
                  CmpReleaseKeyNodeForKcb(v7, &v60);
                  KeyNodeForKcb = 0LL;
                  if ( v22 )
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
                      CmpReportNotifyForKcbStack((__int64)&v62, v22, 1, (__int64)v61);
                      started = 0;
                    }
                    goto LABEL_32;
                  }
                  v28 = *(_QWORD *)(v7 + 192);
                  if ( !v28 || *(_QWORD *)(v28 + 32) == v28 + 32 )
                  {
                    CmpReportNotifyForKcbStack((__int64)&v62, 0, 1, (__int64)v61);
                    started = CmpFreeKeyByCell(*(_QWORD *)(v7 + 32), *(_DWORD *)(v7 + 40), 1);
                    if ( started >= 0 )
                    {
                      CmpFlushNotifiesOnKeyBodyList(v7, 8LL, &v58[1]);
                      CmpCleanUpSubKeyInfo(*(_QWORD *)(v7 + 72), 1);
                      LOBYTE(v29) = 1;
                      v31 = CmpGetKeyNodeForKcb(*(_QWORD *)(v7 + 72), v58, v29, v30);
                      *(_WORD *)(*(_QWORD *)(v7 + 72) + 176LL) = *(_WORD *)(v31 + 52);
                      ++*(_QWORD *)(*(_QWORD *)(v7 + 72) + 304LL);
                      *(_QWORD *)(v31 + 4) = v5;
                      *(_QWORD *)(*(_QWORD *)(v7 + 72) + 168LL) = v5;
                      CmpReleaseKeyNodeForKcb(*(_QWORD *)(v7 + 72), v58);
                      CmpMarkKeyUnbacked(v7, &v58[1]);
                      CmpDiscardKcb(v7);
                      goto LABEL_30;
                    }
                  }
                  else
                  {
                    started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v7, &v68, v27);
                    if ( started >= 0 )
                    {
                      CmpReportNotifyForKcbStack((__int64)&v62, 0, 1, (__int64)v61);
                      started = CmpFreeKeyByCell(*(_QWORD *)(v7 + 32), *(_DWORD *)(v7 + 40), 1);
                      if ( started >= 0 )
                      {
                        LOBYTE(v49) = 1;
                        CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v7, v48, &v58[1], v49);
                        CmpFlushNotifiesOnKeyBodyList(v7, 8LL, &v58[1]);
                        CmpCleanUpSubKeyInfo(*(_QWORD *)(v7 + 72), 1);
                        LOBYTE(v50) = 1;
                        v52 = CmpGetKeyNodeForKcb(*(_QWORD *)(v7 + 72), v58, v50, v51);
                        *(_WORD *)(*(_QWORD *)(v7 + 72) + 176LL) = *(_WORD *)(v52 + 52);
                        ++*(_QWORD *)(*(_QWORD *)(v7 + 72) + 304LL);
                        *(_QWORD *)(v52 + 4) = v5;
                        *(_QWORD *)(*(_QWORD *)(v7 + 72) + 168LL) = v5;
                        CmpReleaseKeyNodeForKcb(*(_QWORD *)(v7 + 72), v58);
                        CmpMarkKeyUnbacked(v7, &v58[1]);
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
        v32 = v53;
        goto LABEL_32;
      }
      v25 = (int *)(*(_QWORD *)(v7 + 72) + 248LL);
      if ( *v25 >= 0 )
      {
        v25 = (int *)(v7 + 248);
        if ( !*(_DWORD *)(v7 + 248) )
        {
          v25 = (int *)(v7 + 264);
          if ( !*(_DWORD *)(v7 + 264) )
            goto LABEL_22;
        }
      }
      v33 = 0;
      started = CmpSnapshotTxOwnerArray(v25, &v55, &v57);
      if ( started < 0 )
        goto LABEL_91;
      if ( (_BYTE)v54 )
      {
        CmpUnlockKcbStack(&v66);
        CmpUnlockKcbStack(&v62);
        LOBYTE(v54) = 0;
      }
      if ( v3 )
        CmpUnlockHashEntryByKcb(v7);
      v3 = 0;
      CmpDrainDelayDerefContext((_QWORD **)&v58[1]);
      CmpUnlockRegistry(v46, v45);
      started = CmpRollbackTransactionArray(v55, v57, v47, &v56);
      if ( started < 0 )
      {
        v32 = 0;
        goto LABEL_33;
      }
      v1 = v59;
      v2 = HIBYTE(v54);
    }
    else
    {
      v22 = v64;
LABEL_16:
      v23 = *(_QWORD *)(v7 + 192);
      if ( !v23 || *(_QWORD *)(v23 + 32) == v23 + 32 || v17 )
        goto LABEL_17;
      v2 = 1;
      CmpUnlockKcbStack(&v66);
      CmpUnlockKcbStack(&v62);
      v54 = 256;
      CmpUnlockHashEntryByKcb(v7);
      v3 = 0;
      CmpCleanupKcbStack(&v66);
      v66 = 0LL;
      WORD1(v66) = -1;
      v67 = 0LL;
      CmpCleanupKcbStack(&v62);
      v62 = 0LL;
      WORD1(v62) = -1;
      v63 = 0LL;
      CmpUnlockRegistry(v43, v42);
      v1 = v59;
    }
  }
  started = -1073741431;
  v33 = 0;
  v32 = 0;
LABEL_33:
  CmpCleanupDiscardReplaceContext(&v68, &v58[1]);
  if ( KeyNodeForKcb )
    CmpReleaseKeyNodeForKcb(v7, &v60);
  if ( v32 )
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
  if ( (_BYTE)v54 )
  {
    CmpUnlockKcbStack(&v66);
    CmpUnlockKcbStack(&v62);
  }
  if ( v3 )
    CmpUnlockHashEntryByKcb(v7);
  CmpCleanupKcbStack(&v66);
  CmpCleanupKcbStack(&v62);
  CmpDrainDelayDerefContext((_QWORD **)&v58[1]);
  if ( v33 )
    CmpUnlockRegistry(v35, v34);
  CmpDetachFromRegistryProcess((__int64)v72);
  if ( v61[0] != v61 )
    CmpSignalDeferredPosts(v61);
  return (unsigned int)started;
}

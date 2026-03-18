/*
 * XREFs of CmDeleteValueKey @ 0x14066C6F4
 * Callers:
 *     NtDeleteValueKey @ 0x140668FB0 (NtDeleteValueKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140227238 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140227250 (CmpDrainDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140268308 (CmpFreeTransientPoolWithTag.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402F2D0C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1402F30C0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpReportNotifyForKcbStack @ 0x1405F3830 (CmpReportNotifyForKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405F3B6C (CmpGetKcbAtLayerHeight.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x14061B470 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x14061B550 (CmpUnlockKcbStack.c)
 *     CmpSignalDeferredPosts @ 0x14061C8F0 (CmpSignalDeferredPosts.c)
 *     CmpGetEffectiveKcbSemantics @ 0x14066BE80 (CmpGetEffectiveKcbSemantics.c)
 *     CmpMarkValueDataDirty @ 0x14066C57C (CmpMarkValueDataDirty.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14066DDF8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFindNameInListWithStatus @ 0x14066FDFC (CmpFindNameInListWithStatus.c)
 *     HvUnlockHiveFlusherShared @ 0x14067010C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140670144 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140670160 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1406721C0 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140678E00 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A1494 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x1406A183C (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1406A189C (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1406A1B5C (CmpRundownUnitOfWork.c)
 *     CmpRemoveValueFromList @ 0x1406C83E0 (CmpRemoveValueFromList.c)
 *     CmAddLogForAction @ 0x1406D1718 (CmAddLogForAction.c)
 *     CmpIsValueTombstone @ 0x1406D53F0 (CmpIsValueTombstone.c)
 *     CmpAllocateUnitOfWork @ 0x1406D9BBC (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x1406DCF90 (CmpCloneKCBValueListForTrans.c)
 *     CmpFreeValueData @ 0x140705FFC (CmpFreeValueData.c)
 *     CmpFreeValue @ 0x140706124 (CmpFreeValue.c)
 *     HvFreeCell @ 0x140706E0C (HvFreeCell.c)
 *     CmpSetValueKeyTombstone @ 0x1408711F4 (CmpSetValueKeyTombstone.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140874828 (CmpSnapshotKcbStackSecurity.c)
 *     CmpLogTransactionAborted @ 0x14087737C (CmpLogTransactionAborted.c)
 *     CmpRollbackTransactionArray @ 0x140877790 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x14087A8CC (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x14087DA6C (CmpGetValueForAudit.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x140881584 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x140882D40 (CmpPromoteKey.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091FB8C (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, _WORD *a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  ULONG_PTR v5; // rsi
  __int64 v6; // r12
  __int64 KcbAtLayerHeight; // r14
  char v8; // r15
  __int64 v9; // rbx
  int started; // edi
  __int64 v11; // r13
  __int64 v12; // rdi
  __int16 v13; // r15
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // r15d
  char v17; // r14
  ULONG_PTR v18; // rbx
  char v19; // r13
  void *v20; // rbx
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdi
  int v29; // ecx
  _QWORD *UnitOfWork; // rax
  _QWORD *v31; // r14
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  char v36; // al
  _WORD *v37; // r15
  unsigned int v38; // eax
  ULONG_PTR v39; // rdx
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp-B8h]
  char v41; // [rsp+50h] [rbp-B0h] BYREF
  char v42; // [rsp+51h] [rbp-AFh]
  unsigned int v43; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v44; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A0h]
  __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v47; // [rsp+70h] [rbp-90h] BYREF
  int v48; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v49; // [rsp+78h] [rbp-88h] BYREF
  __int64 v50; // [rsp+80h] [rbp-80h] BYREF
  __int128 v51; // [rsp+88h] [rbp-78h] BYREF
  __int128 v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-48h]
  _WORD *v56; // [rsp+C0h] [rbp-40h]
  _QWORD *v57[2]; // [rsp+C8h] [rbp-38h] BYREF
  void *v58; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v59; // [rsp+E0h] [rbp-20h]
  __int128 v60; // [rsp+E8h] [rbp-18h] BYREF
  _OWORD v61[2]; // [rsp+F8h] [rbp-8h] BYREF
  _OWORD v62[3]; // [rsp+118h] [rbp+18h] BYREF

  v55 = a1;
  v4 = a1;
  v43 = 0;
  v57[1] = v57;
  v5 = 0LL;
  v54 = 0LL;
  v57[0] = v57;
  v6 = 0LL;
  BugCheckParameter4 = 0LL;
  v42 = a4;
  v50 = 0xFFFFFFFFLL;
  KcbAtLayerHeight = 0LL;
  v53 = 0xFFFFFFFFLL;
  v46 = 0xFFFFFFFFLL;
  v51 = 0LL;
  WORD1(v51) = -1;
  v47 = -1;
  v44 = -1;
  v59 = a3;
  v56 = a2;
  memset(v62, 0, sizeof(v62));
  v41 = 0;
  v48 = 0;
  v49 = 0LL;
  v60 = 0LL;
  v45 = 0LL;
  v52 = 0LL;
  CmpInitializeDelayDerefContext(&v60);
  v58 = 0LL;
  memset(v61, 0, sizeof(v61));
  CmpAttachToRegistryProcess(v62);
LABEL_2:
  v8 = 1;
  if ( (CmpShutdownRundown & 1) != 0 )
  {
    started = -1073741431;
    v19 = 0;
    v8 = 0;
LABEL_89:
    v17 = 0;
    v18 = BugCheckParameter4;
    goto LABEL_27;
  }
  v9 = MEMORY[0xFFFFF78000000014];
  CmpLockRegistry();
  v5 = *(_QWORD *)(v4 + 8);
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 32) + 160LL) & 0x100000) != 0 )
  {
    started = -1073741790;
LABEL_116:
    v8 = 0;
LABEL_24:
    v17 = 0;
LABEL_25:
    v18 = BugCheckParameter4;
    goto LABEL_26;
  }
  started = CmpStartKcbStackForTopLayerKcb(&v51, v5);
  if ( started < 0 )
    goto LABEL_116;
  CmpLockKcbStackTopExclusiveRestShared(&v51);
  if ( *(_QWORD *)(v4 + 56) || *(_QWORD *)(v4 + 64) )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v4, 0LL) )
    {
      v17 = 0;
      started = (*(_BYTE *)(v4 + 48) & 1) != 0 ? -1073740763 : -1073741444;
    }
    else
    {
      started = CmpTransSearchAddTransFromKeyBody(v4, &v49);
      if ( started >= 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v5 + 32) + 160LL) & 2) == 0 )
          goto LABEL_7;
        started = -1072103423;
      }
      v17 = 0;
    }
    v18 = BugCheckParameter4;
    v19 = 1;
    goto LABEL_27;
  }
  while ( 1 )
  {
LABEL_7:
    v11 = v49;
    v12 = v55;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v55, v49) )
    {
      v17 = 0;
      v8 = 1;
      started = (*(_BYTE *)(v12 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_25;
    }
    if ( v11 )
    {
      UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
      BugCheckParameter4 = (ULONG_PTR)UnitOfWork;
      v31 = UnitOfWork;
      if ( !UnitOfWork )
      {
        v19 = 1;
        started = -1073741670;
        v17 = 0;
        v8 = 1;
        goto LABEL_29;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, v5);
      started = CmpTransEnlistUowInCmTrans(v31, v11);
      if ( started < 0 )
        goto LABEL_23;
      v8 = 1;
      if ( !(unsigned __int8)CmpLockIXLockIntent(v5 + 248, v31)
        || !(unsigned __int8)CmpLockIXLockExclusive(v5 + 264, v31, 1LL) )
      {
        started = -1072103423;
        goto LABEL_24;
      }
      HvLockHiveFlusherShared(*(_QWORD *)(v5 + 32));
      v17 = 1;
      if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v5, v11, &v41) )
      {
        started = -1073741670;
        goto LABEL_25;
      }
      HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
      KcbAtLayerHeight = v45;
      goto LABEL_11;
    }
    if ( *(int *)(v5 + 248) < 0 )
    {
      started = CmpSnapshotTxOwnerArray(v5 + 248, &v43, &v54);
      if ( started < 0 )
      {
LABEL_23:
        v8 = 1;
        goto LABEL_24;
      }
      CmpLogTransactionAborted(v5, 1LL, v34, v43);
      CmpUnlockKcbStack((__int64)&v51);
      v8 = 0;
      CmpCleanupKcbStack((__int64)&v51);
      v51 = 0LL;
      WORD1(v51) = -1;
      v52 = 0LL;
      CmpUnlockRegistry();
      v19 = 0;
      started = CmpRollbackTransactionArray(v43, v54, v35, &v48);
      if ( started < 0 )
        goto LABEL_89;
      goto LABEL_87;
    }
    if ( *(_DWORD *)(v5 + 264) )
    {
      started = CmpSnapshotTxOwnerArray(v5 + 264, &v43, &v54);
      if ( started < 0 )
        goto LABEL_23;
      CmpLogTransactionAborted(v5, 1LL, v32, v43);
      CmpUnlockKcbStack((__int64)&v51);
      v8 = 0;
      CmpCleanupKcbStack((__int64)&v51);
      v51 = 0LL;
      WORD1(v51) = -1;
      v52 = 0LL;
      CmpUnlockRegistry();
      started = CmpRollbackTransactionArray(v43, v54, v33, &v48);
      if ( started < 0 )
      {
        v17 = 0;
        v19 = 0;
        v18 = BugCheckParameter4;
        goto LABEL_27;
      }
LABEL_87:
      v4 = v55;
      goto LABEL_2;
    }
LABEL_11:
    v13 = *(_WORD *)(v5 + 66);
    if ( v13 < 0 )
      goto LABEL_21;
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)&v51, v13);
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) == 1 )
      {
LABEL_20:
        KcbAtLayerHeight = v45;
        goto LABEL_21;
      }
      v14 = *(unsigned int *)(KcbAtLayerHeight + 40);
      if ( (_DWORD)v14 != -1 )
        break;
LABEL_19:
      if ( --v13 < 0 )
        goto LABEL_20;
    }
    if ( v11 && *(_QWORD *)(KcbAtLayerHeight + 288) == v11 )
    {
      started = CmpFindNameInListWithStatus(
                  *(_QWORD *)(KcbAtLayerHeight + 32),
                  (int)KcbAtLayerHeight + 280,
                  (_DWORD)v56,
                  0,
                  (__int64)&v44,
                  (__int64)&v47);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 8LL))(
              *(_QWORD *)(KcbAtLayerHeight + 32),
              v14,
              &v53);
      started = CmpFindNameInListWithStatus(
                  *(_QWORD *)(KcbAtLayerHeight + 32),
                  v15 + 36,
                  (_DWORD)v56,
                  0,
                  (__int64)&v44,
                  (__int64)&v47);
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 16LL))(
        *(_QWORD *)(KcbAtLayerHeight + 32),
        &v53);
    }
    if ( started < 0 )
    {
      if ( started != -1073741772 )
        goto LABEL_23;
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) )
        goto LABEL_20;
      goto LABEL_19;
    }
    v45 = KcbAtLayerHeight;
LABEL_21:
    v16 = v47;
    if ( v47 == -1 )
    {
      started = -1073741772;
      goto LABEL_23;
    }
    v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 8LL))(
            *(_QWORD *)(KcbAtLayerHeight + 32),
            v47,
            &v46);
    if ( (unsigned __int8)CmpIsValueTombstone(*(_QWORD *)(KcbAtLayerHeight + 32), v22) )
    {
      started = -1073741772;
      v17 = 0;
      goto LABEL_107;
    }
    (*(void (__fastcall **)(__int64, __int64 *))(v23 + 16))(v23, &v46);
    v22 = 0LL;
    if ( *(_DWORD *)(v5 + 40) != -1 )
      break;
    CmpUnlockKcbStack((__int64)&v51);
    v8 = 0;
    started = CmpPromoteKey(&v51, 0LL, 1LL);
    if ( started < 0 )
    {
      v17 = 0;
      goto LABEL_25;
    }
  }
  v24 = *(_QWORD *)(v5 + 32);
  ++*(_QWORD *)(v5 + 304);
  HvLockHiveFlusherShared(v24);
  v25 = v49;
  v17 = 1;
  if ( !v49 && !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40), 0LL) )
  {
    started = -1073741443;
    v8 = 1;
    goto LABEL_25;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
         *(_QWORD *)(v5 + 32),
         *(unsigned int *)(v5 + 40),
         &v50);
  CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v5 + 32), v6, *(unsigned int *)(v5 + 40));
  if ( !v42 )
    goto LABEL_50;
  started = CmpSnapshotKcbStackSecurity(&v51, v25, 843140419LL, &v58);
  if ( started < 0 )
    goto LABEL_95;
  started = CmpGetValueForAudit(*(_QWORD *)(v45 + 32), v16, v61, 826363203LL);
  if ( started < 0 )
    goto LABEL_95;
  v25 = v49;
LABEL_50:
  v26 = *(_QWORD *)(v5 + 32);
  if ( v25 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(v26 + 16))(v26, &v50);
    v6 = 0LL;
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    v17 = 0;
    v18 = BugCheckParameter4;
    *(_DWORD *)(BugCheckParameter4 + 88) = v16;
    v8 = 1;
    *(_DWORD *)(BugCheckParameter4 + 68) = 6;
    started = CmAddLogForAction(BugCheckParameter4, 1LL);
    if ( started < 0 )
      goto LABEL_26;
    HvLockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    CmpRemoveValueFromList(*(_QWORD *)(v5 + 32), v44, v5 + 280);
    goto LABEL_59;
  }
  v27 = *(unsigned int *)(v5 + 40);
  if ( *(_WORD *)(v5 + 66) )
  {
    v36 = HvMarkCellDirty(v26, v27, 0LL);
    if ( v5 == v45 )
    {
      if ( v36 && (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), v16, 0LL) )
      {
        v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
                *(_QWORD *)(v5 + 32),
                v16,
                &v46);
        if ( CmpMarkValueDataDirty(*(_QWORD *)(v5 + 32), v22) )
        {
          CmpFreeValueData(*(_QWORD *)(v5 + 32), *(unsigned int *)(v22 + 8));
          *(_DWORD *)(v22 + 8) = -1;
          *(_WORD *)(v22 + 16) |= 2u;
          *(_DWORD *)(v22 + 12) = 0;
          *(_DWORD *)(v22 + 4) = 0;
          *(_QWORD *)(v6 + 4) = v9;
          *(_QWORD *)(v5 + 168) = v9;
          goto LABEL_58;
        }
        goto LABEL_96;
      }
      goto LABEL_94;
    }
    if ( !v36 )
    {
LABEL_94:
      started = -1073741443;
LABEL_95:
      v18 = BugCheckParameter4;
      goto LABEL_62;
    }
    v37 = v56;
    started = CmpSetValueKeyTombstone(
                *(_QWORD *)(v5 + 32),
                v6,
                (_DWORD)v56,
                *(_DWORD *)(v6 + 36),
                *(_DWORD *)(v5 + 40) >> 31);
    if ( started < 0 )
      goto LABEL_95;
    *(_QWORD *)(v6 + 4) = v9;
    *(_QWORD *)(v5 + 168) = v9;
    v38 = (unsigned __int16)*v37;
    if ( *(_DWORD *)(v6 + 60) < v38 )
    {
      *(_DWORD *)(v6 + 60) = v38;
      *(_WORD *)(v5 + 178) = *v37;
    }
LABEL_58:
    CmpCleanUpKcbCachedSymlink(v5, &v60);
    v29 = *(_DWORD *)(v6 + 40);
    *(_DWORD *)(v5 + 96) = *(_DWORD *)(v6 + 36);
    *(_DWORD *)(v5 + 100) = v29;
LABEL_59:
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    started = 0;
    v17 = 0;
    v41 = 0;
    v18 = 0LL;
    CmpReportNotifyForKcbStack((__int64)&v51, v49, 4, (__int64)v57);
    goto LABEL_60;
  }
  if ( !(unsigned __int8)HvMarkCellDirty(v26, v27, 0LL)
    || !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v6 + 40), 0LL)
    || !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), v16, 0LL) )
  {
    goto LABEL_94;
  }
  v28 = v45;
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v45 + 32) + 8LL))(
          *(_QWORD *)(v45 + 32),
          v16,
          &v46);
  if ( CmpMarkValueDataDirty(*(_QWORD *)(v28 + 32), v22) )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v28 + 32) + 16LL))(*(_QWORD *)(v28 + 32), &v46);
    v22 = 0LL;
    CmpRemoveValueFromList(*(_QWORD *)(v5 + 32), v44, v6 + 36);
    CmpFreeValue(*(_QWORD *)(v5 + 32), v16);
    *(_QWORD *)(v6 + 4) = v9;
    *(_QWORD *)(v5 + 168) = v9;
    if ( !*(_DWORD *)(v6 + 36) )
    {
      *(_DWORD *)(v6 + 60) = 0;
      *(_WORD *)(v5 + 178) = 0;
      *(_DWORD *)(v6 + 64) = 0;
      *(_DWORD *)(v5 + 180) = 0;
    }
    goto LABEL_58;
  }
LABEL_96:
  started = -1073741443;
LABEL_107:
  v18 = BugCheckParameter4;
LABEL_60:
  if ( v22 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v45 + 32) + 16LL))(*(_QWORD *)(v45 + 32), &v46);
LABEL_62:
  v8 = 1;
  if ( v6 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 16LL))(*(_QWORD *)(v5 + 32), &v50);
LABEL_26:
  v19 = 1;
LABEL_27:
  if ( v18 )
  {
    CmpRundownUnitOfWork(v18);
    CmpFreeUnitOfWork(v18);
  }
LABEL_29:
  if ( v41 )
  {
    v39 = *(unsigned int *)(v5 + 284);
    if ( (_DWORD)v39 != -1 )
      HvFreeCell(*(_QWORD *)(v5 + 32), v39);
    *(_DWORD *)(v5 + 284) = -1;
    *(_DWORD *)(v5 + 280) = 0;
    *(_QWORD *)(v5 + 288) = 0LL;
  }
  if ( v17 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
  if ( v8 )
    CmpUnlockKcbStack((__int64)&v51);
  CmpDrainDelayDerefContext((_QWORD **)&v60);
  if ( v19 )
    CmpUnlockRegistry();
  if ( v57[0] != v57 )
    CmpSignalDeferredPosts(v57);
  CmpDetachFromRegistryProcess(v62);
  v20 = v58;
  if ( started >= 0 && v42 && v58 )
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v58, 0, (_DWORD)v56, v55, v59, (__int64)v61, 2);
  if ( *((_QWORD *)&v61[0] + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v61[0] + 1), 0x34414D43u);
  if ( v20 )
    CmpFreeTransientPoolWithTag(v20, 0x33414D43u);
  CmpCleanupKcbStack((__int64)&v51);
  return (unsigned int)started;
}

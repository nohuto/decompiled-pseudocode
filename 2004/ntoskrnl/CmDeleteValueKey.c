/*
 * XREFs of CmDeleteValueKey @ 0x1405DDB38
 * Callers:
 *     NtDeleteValueKey @ 0x1405DD640 (NtDeleteValueKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402036B8 (CmpFreeTransientPoolWithTag.c)
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140205F64 (CmpInitializeDelayDerefContext.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402723B4 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1402787F0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1405DE270 (CmpGetEffectiveKcbSemantics.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405DF248 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpMarkValueDataDirty @ 0x1405E112C (CmpMarkValueDataDirty.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405E2CC4 (CmpUpdateKeyNodeAccessBits.c)
 *     HvLockHiveFlusherShared @ 0x1405E2D14 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1405E2D30 (HvUnlockHiveFlusherShared.c)
 *     CmpFindNameInListWithStatus @ 0x1405E31A4 (CmpFindNameInListWithStatus.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405E55D0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x1405E57CC (CmpReportNotifyForKcbStack.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1405E6AE8 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405E7738 (CmpGetKcbAtLayerHeight.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpSignalDeferredPosts @ 0x1405ED780 (CmpSignalDeferredPosts.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405EDBB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCleanupKcbStack @ 0x1405F0A50 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1405F0B30 (CmpUnlockKcbStack.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpRundownUnitOfWork @ 0x1406430FC (CmpRundownUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140643354 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x14064343C (CmpLockIXLockExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406536B4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpFreeValueData @ 0x14069DC94 (CmpFreeValueData.c)
 *     CmpFreeValue @ 0x14069DDBC (CmpFreeValue.c)
 *     HvFreeCell @ 0x14069EAAC (HvFreeCell.c)
 *     CmpRemoveValueFromList @ 0x1406F5350 (CmpRemoveValueFromList.c)
 *     CmAddLogForAction @ 0x1406FEAE8 (CmAddLogForAction.c)
 *     CmpIsValueTombstone @ 0x140701D30 (CmpIsValueTombstone.c)
 *     CmpAllocateUnitOfWork @ 0x140707318 (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x14070ABA0 (CmpCloneKCBValueListForTrans.c)
 *     CmpSetValueKeyTombstone @ 0x14086B7A0 (CmpSetValueKeyTombstone.c)
 *     CmpSnapshotKcbStackSecurity @ 0x14086ECD0 (CmpSnapshotKcbStackSecurity.c)
 *     CmpLogTransactionAborted @ 0x14087182C (CmpLogTransactionAborted.c)
 *     CmpRollbackTransactionArray @ 0x140871C40 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x140874D7C (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x140877EF0 (CmpGetValueForAudit.c)
 *     HvMarkCellDirty @ 0x1408787F0 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087BA14 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x14087D190 (CmpPromoteKey.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140919F0C (SeAdtRegistryValueChangedAuditAlarm.c)
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
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *v22; // rbx
  __int64 v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdi
  int v31; // ecx
  _QWORD *UnitOfWork; // rax
  _QWORD *v33; // r14
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  char v42; // al
  _WORD *v43; // r15
  unsigned int v44; // eax
  ULONG_PTR v45; // rdx
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp-B8h]
  char v47; // [rsp+50h] [rbp-B0h] BYREF
  char v48; // [rsp+51h] [rbp-AFh]
  unsigned int v49; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v50; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A0h]
  __int64 v52; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v53; // [rsp+70h] [rbp-90h] BYREF
  int v54; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h] BYREF
  __int64 v56; // [rsp+80h] [rbp-80h] BYREF
  __int128 v57; // [rsp+88h] [rbp-78h] BYREF
  __int128 v58; // [rsp+98h] [rbp-68h]
  __int64 v59; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v61; // [rsp+B8h] [rbp-48h]
  _WORD *v62; // [rsp+C0h] [rbp-40h]
  _QWORD v63[2]; // [rsp+C8h] [rbp-38h] BYREF
  void *v64; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v65; // [rsp+E0h] [rbp-20h]
  __int128 v66; // [rsp+E8h] [rbp-18h] BYREF
  _OWORD v67[2]; // [rsp+F8h] [rbp-8h] BYREF
  _OWORD v68[3]; // [rsp+118h] [rbp+18h] BYREF

  v61 = a1;
  v4 = a1;
  v49 = 0;
  v63[1] = v63;
  v5 = 0LL;
  v60 = 0LL;
  v63[0] = v63;
  v6 = 0LL;
  BugCheckParameter4 = 0LL;
  v48 = a4;
  v56 = 0xFFFFFFFFLL;
  KcbAtLayerHeight = 0LL;
  v59 = 0xFFFFFFFFLL;
  v52 = 0xFFFFFFFFLL;
  v57 = 0LL;
  WORD1(v57) = -1;
  v53 = -1;
  v50 = -1;
  v65 = a3;
  v62 = a2;
  memset(v68, 0, sizeof(v68));
  v47 = 0;
  v54 = 0;
  v55 = 0LL;
  v66 = 0LL;
  v51 = 0LL;
  v58 = 0LL;
  CmpInitializeDelayDerefContext(&v66);
  v64 = 0LL;
  memset(v67, 0, sizeof(v67));
  CmpAttachToRegistryProcess(v68);
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
  started = CmpStartKcbStackForTopLayerKcb(&v57, v5);
  if ( started < 0 )
    goto LABEL_116;
  CmpLockKcbStackTopExclusiveRestShared(&v57);
  if ( *(_QWORD *)(v4 + 56) || *(_QWORD *)(v4 + 64) )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v4, 0LL) )
    {
      v17 = 0;
      started = (*(_BYTE *)(v4 + 48) & 1) != 0 ? -1073740763 : -1073741444;
    }
    else
    {
      started = CmpTransSearchAddTransFromKeyBody(v4, &v55);
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
    v11 = v55;
    v12 = v61;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v61, v55) )
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
      v33 = UnitOfWork;
      if ( !UnitOfWork )
      {
        v19 = 1;
        started = -1073741670;
        v17 = 0;
        v8 = 1;
        goto LABEL_29;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, v5);
      started = CmpTransEnlistUowInCmTrans(v33, v11);
      if ( started < 0 )
        goto LABEL_23;
      v8 = 1;
      if ( !(unsigned __int8)CmpLockIXLockIntent(v5 + 248, v33)
        || !(unsigned __int8)CmpLockIXLockExclusive(v5 + 264, v33, 1LL) )
      {
        started = -1072103423;
        goto LABEL_24;
      }
      HvLockHiveFlusherShared(*(_QWORD *)(v5 + 32));
      v17 = 1;
      if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v5, v11, &v47) )
      {
        started = -1073741670;
        goto LABEL_25;
      }
      HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
      KcbAtLayerHeight = v51;
      goto LABEL_11;
    }
    if ( *(int *)(v5 + 248) < 0 )
    {
      started = CmpSnapshotTxOwnerArray(v5 + 248, &v49, &v60);
      if ( started < 0 )
      {
LABEL_23:
        v8 = 1;
        goto LABEL_24;
      }
      CmpLogTransactionAborted(v5, 1LL, v38, v49);
      CmpUnlockKcbStack(&v57);
      v8 = 0;
      CmpCleanupKcbStack(&v57);
      v57 = 0LL;
      WORD1(v57) = -1;
      v58 = 0LL;
      CmpUnlockRegistry(v40, v39);
      v19 = 0;
      started = CmpRollbackTransactionArray(v49, v60, v41, &v54);
      if ( started < 0 )
        goto LABEL_89;
      goto LABEL_87;
    }
    if ( *(_DWORD *)(v5 + 264) )
    {
      started = CmpSnapshotTxOwnerArray(v5 + 264, &v49, &v60);
      if ( started < 0 )
        goto LABEL_23;
      CmpLogTransactionAborted(v5, 1LL, v34, v49);
      CmpUnlockKcbStack(&v57);
      v8 = 0;
      CmpCleanupKcbStack(&v57);
      v57 = 0LL;
      WORD1(v57) = -1;
      v58 = 0LL;
      CmpUnlockRegistry(v36, v35);
      started = CmpRollbackTransactionArray(v49, v60, v37, &v54);
      if ( started < 0 )
      {
        v17 = 0;
        v19 = 0;
        v18 = BugCheckParameter4;
        goto LABEL_27;
      }
LABEL_87:
      v4 = v61;
      goto LABEL_2;
    }
LABEL_11:
    v13 = *(_WORD *)(v5 + 66);
    if ( v13 < 0 )
      goto LABEL_21;
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(&v57);
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) == 1 )
      {
LABEL_20:
        KcbAtLayerHeight = v51;
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
                  (_DWORD)v62,
                  0,
                  (__int64)&v50,
                  (__int64)&v53);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 8LL))(
              *(_QWORD *)(KcbAtLayerHeight + 32),
              v14,
              &v59);
      started = CmpFindNameInListWithStatus(
                  *(_QWORD *)(KcbAtLayerHeight + 32),
                  v15 + 36,
                  (_DWORD)v62,
                  0,
                  (__int64)&v50,
                  (__int64)&v53);
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 16LL))(
        *(_QWORD *)(KcbAtLayerHeight + 32),
        &v59);
    }
    if ( started < 0 )
    {
      if ( started != -1073741772 )
        goto LABEL_23;
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) )
        goto LABEL_20;
      goto LABEL_19;
    }
    v51 = KcbAtLayerHeight;
LABEL_21:
    v16 = v53;
    if ( v53 == -1 )
    {
      started = -1073741772;
      goto LABEL_23;
    }
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 8LL))(
            *(_QWORD *)(KcbAtLayerHeight + 32),
            v53,
            &v52);
    if ( (unsigned __int8)CmpIsValueTombstone(*(_QWORD *)(KcbAtLayerHeight + 32), v24) )
    {
      started = -1073741772;
      v17 = 0;
      goto LABEL_107;
    }
    (*(void (__fastcall **)(__int64, __int64 *))(v25 + 16))(v25, &v52);
    v24 = 0LL;
    if ( *(_DWORD *)(v5 + 40) != -1 )
      break;
    CmpUnlockKcbStack(&v57);
    v8 = 0;
    started = CmpPromoteKey(&v57, 0LL, 1LL);
    if ( started < 0 )
    {
      v17 = 0;
      goto LABEL_25;
    }
  }
  v26 = *(_QWORD *)(v5 + 32);
  ++*(_QWORD *)(v5 + 304);
  HvLockHiveFlusherShared(v26);
  v27 = v55;
  v17 = 1;
  if ( !v55 && !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40), 0LL) )
  {
    started = -1073741443;
    v8 = 1;
    goto LABEL_25;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
         *(_QWORD *)(v5 + 32),
         *(unsigned int *)(v5 + 40),
         &v56);
  CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v5 + 32), v6, *(unsigned int *)(v5 + 40));
  if ( !v48 )
    goto LABEL_50;
  started = CmpSnapshotKcbStackSecurity(&v57, v27, 843140419LL, &v64);
  if ( started < 0 )
    goto LABEL_95;
  started = CmpGetValueForAudit(*(_QWORD *)(v51 + 32), v16, v67, 826363203LL);
  if ( started < 0 )
    goto LABEL_95;
  v27 = v55;
LABEL_50:
  v28 = *(_QWORD *)(v5 + 32);
  if ( v27 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(v28 + 16))(v28, &v56);
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
    CmpRemoveValueFromList(*(_QWORD *)(v5 + 32), v50, v5 + 280);
    goto LABEL_59;
  }
  v29 = *(unsigned int *)(v5 + 40);
  if ( *(_WORD *)(v5 + 66) )
  {
    v42 = HvMarkCellDirty(v28, v29, 0LL);
    if ( v5 == v51 )
    {
      if ( v42 && (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), v16, 0LL) )
      {
        v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
                *(_QWORD *)(v5 + 32),
                v16,
                &v52);
        if ( (unsigned __int8)CmpMarkValueDataDirty(*(_QWORD *)(v5 + 32)) )
        {
          CmpFreeValueData(*(_QWORD *)(v5 + 32), *(unsigned int *)(v24 + 8));
          *(_DWORD *)(v24 + 8) = -1;
          *(_WORD *)(v24 + 16) |= 2u;
          *(_DWORD *)(v24 + 12) = 0;
          *(_DWORD *)(v24 + 4) = 0;
          *(_QWORD *)(v6 + 4) = v9;
          *(_QWORD *)(v5 + 168) = v9;
          goto LABEL_58;
        }
        goto LABEL_96;
      }
      goto LABEL_94;
    }
    if ( !v42 )
    {
LABEL_94:
      started = -1073741443;
LABEL_95:
      v18 = BugCheckParameter4;
      goto LABEL_62;
    }
    v43 = v62;
    started = CmpSetValueKeyTombstone(
                *(_QWORD *)(v5 + 32),
                v6,
                (_DWORD)v62,
                *(_DWORD *)(v6 + 36),
                *(_DWORD *)(v5 + 40) >> 31);
    if ( started < 0 )
      goto LABEL_95;
    *(_QWORD *)(v6 + 4) = v9;
    *(_QWORD *)(v5 + 168) = v9;
    v44 = (unsigned __int16)*v43;
    if ( *(_DWORD *)(v6 + 60) < v44 )
    {
      *(_DWORD *)(v6 + 60) = v44;
      *(_WORD *)(v5 + 178) = *v43;
    }
LABEL_58:
    CmpCleanUpKcbCachedSymlink(v5, &v66);
    v31 = *(_DWORD *)(v6 + 40);
    *(_DWORD *)(v5 + 96) = *(_DWORD *)(v6 + 36);
    *(_DWORD *)(v5 + 100) = v31;
LABEL_59:
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    started = 0;
    v17 = 0;
    v47 = 0;
    v18 = 0LL;
    CmpReportNotifyForKcbStack(&v57, v55, 4LL, v63);
    goto LABEL_60;
  }
  if ( !(unsigned __int8)HvMarkCellDirty(v28, v29, 0LL)
    || !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v6 + 40), 0LL)
    || !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), v16, 0LL) )
  {
    goto LABEL_94;
  }
  v30 = v51;
  v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v51 + 32) + 8LL))(
          *(_QWORD *)(v51 + 32),
          v16,
          &v52);
  if ( (unsigned __int8)CmpMarkValueDataDirty(*(_QWORD *)(v30 + 32)) )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v30 + 32) + 16LL))(*(_QWORD *)(v30 + 32), &v52);
    v24 = 0LL;
    CmpRemoveValueFromList(*(_QWORD *)(v5 + 32), v50, v6 + 36);
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
  if ( v24 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v51 + 32) + 16LL))(*(_QWORD *)(v51 + 32), &v52);
LABEL_62:
  v8 = 1;
  if ( v6 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 16LL))(*(_QWORD *)(v5 + 32), &v56);
LABEL_26:
  v19 = 1;
LABEL_27:
  if ( v18 )
  {
    CmpRundownUnitOfWork(v18);
    CmpFreeUnitOfWork(v18);
  }
LABEL_29:
  if ( v47 )
  {
    v45 = *(unsigned int *)(v5 + 284);
    if ( (_DWORD)v45 != -1 )
      HvFreeCell(*(_QWORD *)(v5 + 32), v45);
    *(_DWORD *)(v5 + 284) = -1;
    *(_DWORD *)(v5 + 280) = 0;
    *(_QWORD *)(v5 + 288) = 0LL;
  }
  if ( v17 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
  if ( v8 )
    CmpUnlockKcbStack(&v57);
  CmpDrainDelayDerefContext((_QWORD **)&v66);
  if ( v19 )
    CmpUnlockRegistry(v21, v20);
  if ( (_QWORD *)v63[0] != v63 )
    CmpSignalDeferredPosts(v63);
  CmpDetachFromRegistryProcess(v68);
  v22 = v64;
  if ( started >= 0 && v48 && v64 )
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v64, 0, (_DWORD)v62, v61, v65, (__int64)v67, 2);
  if ( *((_QWORD *)&v67[0] + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v67[0] + 1), 0x34414D43u);
  if ( v22 )
    CmpFreeTransientPoolWithTag(v22, 0x33414D43u);
  CmpCleanupKcbStack(&v57);
  return (unsigned int)started;
}

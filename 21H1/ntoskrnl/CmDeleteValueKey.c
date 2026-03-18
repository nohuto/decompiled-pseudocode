/*
 * XREFs of CmDeleteValueKey @ 0x1406941D8
 * Callers:
 *     NtDeleteValueKey @ 0x140693CE0 (NtDeleteValueKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14025C5D8 (CmpFreeTransientPoolWithTag.c)
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14025EE84 (CmpInitializeDelayDerefContext.c)
 *     CmpTransEnlistUowInKcb @ 0x1402D2D14 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402E1B1C (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406182F0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvLockHiveFlusherShared @ 0x140618340 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x14061835C (HvUnlockHiveFlusherShared.c)
 *     CmpFindNameInListWithStatus @ 0x1406187D0 (CmpFindNameInListWithStatus.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14061ABF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x14061ADEC (CmpReportNotifyForKcbStack.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14061C108 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpGetKcbAtLayerHeight @ 0x14061CD58 (CmpGetKcbAtLayerHeight.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
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
 *     CmpIsValueTombstone @ 0x140693B98 (CmpIsValueTombstone.c)
 *     CmpGetEffectiveKcbSemantics @ 0x140694910 (CmpGetEffectiveKcbSemantics.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406958E8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpRemoveValueFromList @ 0x140695EF0 (CmpRemoveValueFromList.c)
 *     CmpFreeValueData @ 0x140697754 (CmpFreeValueData.c)
 *     CmpFreeValue @ 0x14069787C (CmpFreeValue.c)
 *     CmpMarkValueDataDirty @ 0x140697BF8 (CmpMarkValueDataDirty.c)
 *     HvFreeCell @ 0x1406989DC (HvFreeCell.c)
 *     CmAddLogForAction @ 0x1406DBB4C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406E3928 (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x1406E6CE0 (CmpCloneKCBValueListForTrans.c)
 *     CmpSetValueKeyTombstone @ 0x14086A450 (CmpSetValueKeyTombstone.c)
 *     CmpSnapshotKcbStackSecurity @ 0x14086D210 (CmpSnapshotKcbStackSecurity.c)
 *     CmpLogTransactionAborted @ 0x14087054C (CmpLogTransactionAborted.c)
 *     CmpRollbackTransactionArray @ 0x140870960 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x140873A8C (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x140876C00 (CmpGetValueForAudit.c)
 *     HvMarkCellDirty @ 0x140877500 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087A724 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x14087BEA0 (CmpPromoteKey.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140918C5C (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  ULONG_PTR v5; // rsi
  __int64 v6; // r12
  __int64 KcbAtLayerHeight; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  char v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r8
  struct _LOOKASIDE_LIST_EX *v14; // r9
  int started; // edi
  __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int16 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r15d
  char v25; // r14
  _QWORD *v26; // rbx
  char v27; // r13
  __int64 v28; // rdx
  __int64 v29; // r8
  _DWORD *v30; // r9
  void *v31; // rbx
  __int64 v33; // r13
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdi
  int v40; // ecx
  _QWORD *UnitOfWork; // rax
  _QWORD *v42; // r14
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // r8
  char v47; // al
  _WORD *v48; // r15
  unsigned int v49; // eax
  ULONG_PTR v50; // rdx
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp-B8h]
  char v52; // [rsp+50h] [rbp-B0h] BYREF
  char v53; // [rsp+51h] [rbp-AFh]
  unsigned int v54; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v55; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v58; // [rsp+70h] [rbp-90h] BYREF
  int v59; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v60; // [rsp+78h] [rbp-88h] BYREF
  __int64 v61; // [rsp+80h] [rbp-80h] BYREF
  __int128 v62; // [rsp+88h] [rbp-78h] BYREF
  __int128 v63; // [rsp+98h] [rbp-68h]
  __int64 v64; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v66; // [rsp+B8h] [rbp-48h]
  _WORD *v67; // [rsp+C0h] [rbp-40h]
  _QWORD *v68[2]; // [rsp+C8h] [rbp-38h] BYREF
  void *v69; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v70; // [rsp+E0h] [rbp-20h]
  __int128 v71; // [rsp+E8h] [rbp-18h] BYREF
  _OWORD v72[2]; // [rsp+F8h] [rbp-8h] BYREF
  _OWORD v73[3]; // [rsp+118h] [rbp+18h] BYREF

  v66 = a1;
  v4 = a1;
  v54 = 0;
  v68[1] = v68;
  v5 = 0LL;
  v65 = 0LL;
  v68[0] = v68;
  v6 = 0LL;
  BugCheckParameter4 = 0LL;
  v53 = a4;
  v61 = 0xFFFFFFFFLL;
  KcbAtLayerHeight = 0LL;
  v64 = 0xFFFFFFFFLL;
  v57 = 0xFFFFFFFFLL;
  v62 = 0LL;
  WORD1(v62) = -1;
  v58 = -1;
  v55 = -1;
  v70 = a3;
  v67 = (_WORD *)a2;
  memset(v73, 0, sizeof(v73));
  v52 = 0;
  v59 = 0;
  v60 = 0LL;
  v71 = 0LL;
  v56 = 0LL;
  v63 = 0LL;
  CmpInitializeDelayDerefContext(&v71);
  v69 = 0LL;
  memset(v72, 0, sizeof(v72));
  CmpAttachToRegistryProcess((__int64)v73, v8, v9, v10);
LABEL_2:
  v11 = 1;
  if ( (CmpShutdownRundown & 1) != 0 )
  {
    started = -1073741431;
    v27 = 0;
    v11 = 0;
LABEL_89:
    v25 = 0;
    v26 = (_QWORD *)BugCheckParameter4;
    goto LABEL_27;
  }
  v12 = MEMORY[0xFFFFF78000000014];
  CmpLockRegistry();
  v5 = *(_QWORD *)(v4 + 8);
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 32) + 160LL) & 0x100000) != 0 )
  {
    started = -1073741790;
LABEL_116:
    v11 = 0;
LABEL_24:
    v25 = 0;
LABEL_25:
    v26 = (_QWORD *)BugCheckParameter4;
    goto LABEL_26;
  }
  started = CmpStartKcbStackForTopLayerKcb((__int64)&v62, v5, v13, v14);
  if ( started < 0 )
    goto LABEL_116;
  CmpLockKcbStackTopExclusiveRestShared(&v62);
  if ( *(_QWORD *)(v4 + 56) || *(_QWORD *)(v4 + 64) )
  {
    if ( CmpIsKeyDeletedForKeyBody(v4, 0LL) )
    {
      v25 = 0;
      started = (*(_BYTE *)(v4 + 48) & 1) != 0 ? -1073740763 : -1073741444;
    }
    else
    {
      started = CmpTransSearchAddTransFromKeyBody((_QWORD *)v4, &v60);
      if ( started >= 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v5 + 32) + 160LL) & 2) == 0 )
          goto LABEL_7;
        started = -1072103423;
      }
      v25 = 0;
    }
    v26 = (_QWORD *)BugCheckParameter4;
    v27 = 1;
    goto LABEL_27;
  }
  while ( 1 )
  {
LABEL_7:
    v16 = v60;
    v17 = v66;
    if ( CmpIsKeyDeletedForKeyBody(v66, v60) )
    {
      v25 = 0;
      v11 = 1;
      started = (*(_BYTE *)(v17 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_25;
    }
    if ( v16 )
    {
      UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v19, v18, v20);
      BugCheckParameter4 = (ULONG_PTR)UnitOfWork;
      v42 = UnitOfWork;
      if ( !UnitOfWork )
      {
        v27 = 1;
        started = -1073741670;
        v25 = 0;
        v11 = 1;
        goto LABEL_29;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, v5);
      started = CmpTransEnlistUowInCmTrans(v42, v16);
      if ( started < 0 )
        goto LABEL_23;
      v11 = 1;
      if ( !CmpLockIXLockIntent((unsigned int *)(v5 + 248), (__int64)v42) || !CmpLockIXLockExclusive(v5 + 264, v42, 1) )
      {
        started = -1072103423;
        goto LABEL_24;
      }
      HvLockHiveFlusherShared(*(_QWORD *)(v5 + 32));
      v25 = 1;
      if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v5, v16, &v52) )
      {
        started = -1073741670;
        goto LABEL_25;
      }
      HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
      KcbAtLayerHeight = v56;
      goto LABEL_11;
    }
    if ( *(int *)(v5 + 248) < 0 )
    {
      started = CmpSnapshotTxOwnerArray(v5 + 248, &v54, &v65);
      if ( started < 0 )
      {
LABEL_23:
        v11 = 1;
        goto LABEL_24;
      }
      CmpLogTransactionAborted(v5, 1LL, v45, v54);
      CmpUnlockKcbStack((__int64)&v62);
      v11 = 0;
      CmpCleanupKcbStack((__int64)&v62);
      v62 = 0LL;
      WORD1(v62) = -1;
      v63 = 0LL;
      CmpUnlockRegistry();
      v27 = 0;
      started = CmpRollbackTransactionArray(v54, v65, v46, &v59);
      if ( started < 0 )
        goto LABEL_89;
      goto LABEL_87;
    }
    if ( *(_DWORD *)(v5 + 264) )
    {
      started = CmpSnapshotTxOwnerArray(v5 + 264, &v54, &v65);
      if ( started < 0 )
        goto LABEL_23;
      CmpLogTransactionAborted(v5, 1LL, v43, v54);
      CmpUnlockKcbStack((__int64)&v62);
      v11 = 0;
      CmpCleanupKcbStack((__int64)&v62);
      v62 = 0LL;
      WORD1(v62) = -1;
      v63 = 0LL;
      CmpUnlockRegistry();
      started = CmpRollbackTransactionArray(v54, v65, v44, &v59);
      if ( started < 0 )
      {
        v25 = 0;
        v27 = 0;
        v26 = (_QWORD *)BugCheckParameter4;
        goto LABEL_27;
      }
LABEL_87:
      v4 = v66;
      goto LABEL_2;
    }
LABEL_11:
    v21 = *(_WORD *)(v5 + 66);
    if ( v21 < 0 )
      goto LABEL_21;
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)&v62, v21);
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) == 1 )
      {
LABEL_20:
        KcbAtLayerHeight = v56;
        goto LABEL_21;
      }
      v22 = *(unsigned int *)(KcbAtLayerHeight + 40);
      if ( (_DWORD)v22 != -1 )
        break;
LABEL_19:
      if ( --v21 < 0 )
        goto LABEL_20;
    }
    if ( v16 && *(_QWORD *)(KcbAtLayerHeight + 288) == v16 )
    {
      started = CmpFindNameInListWithStatus(
                  *(_QWORD *)(KcbAtLayerHeight + 32),
                  (unsigned int *)(KcbAtLayerHeight + 280),
                  (__int64)v67,
                  0,
                  (__int64)&v55,
                  (__int64)&v58);
    }
    else
    {
      v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 8LL))(
              *(_QWORD *)(KcbAtLayerHeight + 32),
              v22,
              &v64);
      started = CmpFindNameInListWithStatus(
                  *(_QWORD *)(KcbAtLayerHeight + 32),
                  (unsigned int *)(v23 + 36),
                  (__int64)v67,
                  0,
                  (__int64)&v55,
                  (__int64)&v58);
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 16LL))(
        *(_QWORD *)(KcbAtLayerHeight + 32),
        &v64);
    }
    if ( started < 0 )
    {
      if ( started != -1073741772 )
        goto LABEL_23;
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) )
        goto LABEL_20;
      goto LABEL_19;
    }
    v56 = KcbAtLayerHeight;
LABEL_21:
    v24 = v58;
    if ( v58 == -1 )
    {
      started = -1073741772;
      goto LABEL_23;
    }
    v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 8LL))(
            *(_QWORD *)(KcbAtLayerHeight + 32),
            v58,
            &v57);
    if ( CmpIsValueTombstone(*(_QWORD *)(KcbAtLayerHeight + 32), v33) )
    {
      started = -1073741772;
      v25 = 0;
      goto LABEL_107;
    }
    (*(void (__fastcall **)(__int64, __int64 *))(v34 + 16))(v34, &v57);
    v33 = 0LL;
    if ( *(_DWORD *)(v5 + 40) != -1 )
      break;
    CmpUnlockKcbStack((__int64)&v62);
    v11 = 0;
    started = CmpPromoteKey(&v62, 0LL, 1LL);
    if ( started < 0 )
    {
      v25 = 0;
      goto LABEL_25;
    }
  }
  v35 = *(_QWORD *)(v5 + 32);
  ++*(_QWORD *)(v5 + 304);
  HvLockHiveFlusherShared(v35);
  v36 = v60;
  v25 = 1;
  if ( !v60 && !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40), 0LL) )
  {
    started = -1073741443;
    v11 = 1;
    goto LABEL_25;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
         *(_QWORD *)(v5 + 32),
         *(unsigned int *)(v5 + 40),
         &v61);
  CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v5 + 32), v6, *(_DWORD *)(v5 + 40));
  if ( !v53 )
    goto LABEL_50;
  started = CmpSnapshotKcbStackSecurity(&v62, v36, 843140419LL, &v69);
  if ( started < 0 )
    goto LABEL_95;
  started = CmpGetValueForAudit(*(_QWORD *)(v56 + 32), v24, v72, 826363203LL);
  if ( started < 0 )
    goto LABEL_95;
  v36 = v60;
LABEL_50:
  v37 = *(_QWORD *)(v5 + 32);
  if ( v36 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(v37 + 16))(v37, &v61);
    v6 = 0LL;
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    v25 = 0;
    v26 = (_QWORD *)BugCheckParameter4;
    *(_DWORD *)(BugCheckParameter4 + 88) = v24;
    v11 = 1;
    *(_DWORD *)(BugCheckParameter4 + 68) = 6;
    started = CmAddLogForAction(BugCheckParameter4, 1LL);
    if ( started < 0 )
      goto LABEL_26;
    HvLockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    CmpRemoveValueFromList(*(_QWORD *)(v5 + 32), v55, v5 + 280);
    goto LABEL_59;
  }
  v38 = *(unsigned int *)(v5 + 40);
  if ( *(_WORD *)(v5 + 66) )
  {
    v47 = HvMarkCellDirty(v37, v38, 0LL);
    if ( v5 == v56 )
    {
      if ( v47 && (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), v24, 0LL) )
      {
        v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
                *(_QWORD *)(v5 + 32),
                v24,
                &v57);
        if ( (unsigned __int8)CmpMarkValueDataDirty(*(_QWORD *)(v5 + 32)) )
        {
          CmpFreeValueData(*(_QWORD *)(v5 + 32), *(unsigned int *)(v33 + 8));
          *(_DWORD *)(v33 + 8) = -1;
          *(_WORD *)(v33 + 16) |= 2u;
          *(_DWORD *)(v33 + 12) = 0;
          *(_DWORD *)(v33 + 4) = 0;
          *(_QWORD *)(v6 + 4) = v12;
          *(_QWORD *)(v5 + 168) = v12;
          goto LABEL_58;
        }
        goto LABEL_96;
      }
      goto LABEL_94;
    }
    if ( !v47 )
    {
LABEL_94:
      started = -1073741443;
LABEL_95:
      v26 = (_QWORD *)BugCheckParameter4;
      goto LABEL_62;
    }
    v48 = v67;
    started = CmpSetValueKeyTombstone(
                *(_QWORD *)(v5 + 32),
                v6,
                (_DWORD)v67,
                *(_DWORD *)(v6 + 36),
                *(_DWORD *)(v5 + 40) >> 31);
    if ( started < 0 )
      goto LABEL_95;
    *(_QWORD *)(v6 + 4) = v12;
    *(_QWORD *)(v5 + 168) = v12;
    v49 = (unsigned __int16)*v48;
    if ( *(_DWORD *)(v6 + 60) < v49 )
    {
      *(_DWORD *)(v6 + 60) = v49;
      *(_WORD *)(v5 + 178) = *v48;
    }
LABEL_58:
    CmpCleanUpKcbCachedSymlink(v5);
    v40 = *(_DWORD *)(v6 + 40);
    *(_DWORD *)(v5 + 96) = *(_DWORD *)(v6 + 36);
    *(_DWORD *)(v5 + 100) = v40;
LABEL_59:
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    started = 0;
    v25 = 0;
    v52 = 0;
    v26 = 0LL;
    CmpReportNotifyForKcbStack((__int64)&v62, v60, 4, (__int64)v68);
    goto LABEL_60;
  }
  if ( !(unsigned __int8)HvMarkCellDirty(v37, v38, 0LL)
    || !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v6 + 40), 0LL)
    || !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), v24, 0LL) )
  {
    goto LABEL_94;
  }
  v39 = v56;
  v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v56 + 32) + 8LL))(
          *(_QWORD *)(v56 + 32),
          v24,
          &v57);
  if ( (unsigned __int8)CmpMarkValueDataDirty(*(_QWORD *)(v39 + 32)) )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v39 + 32) + 16LL))(*(_QWORD *)(v39 + 32), &v57);
    v33 = 0LL;
    CmpRemoveValueFromList(*(_QWORD *)(v5 + 32), v55, v6 + 36);
    CmpFreeValue(*(_QWORD *)(v5 + 32), v24);
    *(_QWORD *)(v6 + 4) = v12;
    *(_QWORD *)(v5 + 168) = v12;
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
  v26 = (_QWORD *)BugCheckParameter4;
LABEL_60:
  if ( v33 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v56 + 32) + 16LL))(*(_QWORD *)(v56 + 32), &v57);
LABEL_62:
  v11 = 1;
  if ( v6 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 16LL))(*(_QWORD *)(v5 + 32), &v61);
LABEL_26:
  v27 = 1;
LABEL_27:
  if ( v26 )
  {
    CmpRundownUnitOfWork(v26);
    CmpFreeUnitOfWork(v26);
  }
LABEL_29:
  if ( v52 )
  {
    v50 = *(unsigned int *)(v5 + 284);
    if ( (_DWORD)v50 != -1 )
      HvFreeCell(*(_QWORD *)(v5 + 32), v50);
    *(_DWORD *)(v5 + 284) = -1;
    *(_DWORD *)(v5 + 280) = 0;
    *(_QWORD *)(v5 + 288) = 0LL;
  }
  if ( v25 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
  if ( v11 )
    CmpUnlockKcbStack((__int64)&v62);
  CmpDrainDelayDerefContext((_QWORD **)&v71);
  if ( v27 )
    CmpUnlockRegistry();
  if ( v68[0] != v68 )
    CmpSignalDeferredPosts(v68);
  CmpDetachFromRegistryProcess((__int64)v73, v28, v29, v30);
  v31 = v69;
  if ( started >= 0 && v53 && v69 )
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v69, 0, (_DWORD)v67, v66, v70, (__int64)v72, 2);
  if ( *((_QWORD *)&v72[0] + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v72[0] + 1), 0x34414D43u);
  if ( v31 )
    CmpFreeTransientPoolWithTag(v31, 0x33414D43u);
  CmpCleanupKcbStack((__int64)&v62);
  return (unsigned int)started;
}

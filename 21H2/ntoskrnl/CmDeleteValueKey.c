/*
 * XREFs of CmDeleteValueKey @ 0x140666544
 * Callers:
 *     NtDeleteValueKey @ 0x140669100 (NtDeleteValueKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140206FA8 (CmpFreeTransientPoolWithTag.c)
 *     CmpInitializeDelayDerefContext @ 0x1403510E8 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140351100 (CmpDrainDelayDerefContext.c)
 *     CmpTransEnlistUowInKcb @ 0x140360610 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x140361D2C (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpReportNotifyForKcbStack @ 0x1405ED300 (CmpReportNotifyForKcbStack.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1405EE830 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1405EF510 (CmpGetEffectiveKcbSemantics.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405EF550 (CmpGetKcbAtLayerHeight.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140665D30 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFindNameInListWithStatus @ 0x140665F7C (CmpFindNameInListWithStatus.c)
 *     HvUnlockHiveFlusherShared @ 0x14066628C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406662C4 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406662E0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpMarkValueDataDirty @ 0x140666F88 (CmpMarkValueDataDirty.c)
 *     CmpSignalDeferredPosts @ 0x140667890 (CmpSignalDeferredPosts.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140669070 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFreeValue @ 0x14066B438 (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x14066B4B4 (CmpFreeValueData.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A3094 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRemoveValueFromList @ 0x1406A54A0 (CmpRemoveValueFromList.c)
 *     CmAddLogForAction @ 0x1406AFE4C (CmAddLogForAction.c)
 *     CmpIsValueTombstone @ 0x1406B2EA0 (CmpIsValueTombstone.c)
 *     CmpAllocateUnitOfWork @ 0x1406B8780 (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x1406BCDE4 (CmpCloneKCBValueListForTrans.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x1406FB360 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1406FB440 (CmpUnlockKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406FC600 (CmpIsKeyDeletedForKeyBody.c)
 *     HvFreeCell @ 0x140709534 (HvFreeCell.c)
 *     CmpLockIXLockExclusive @ 0x14071D3E0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14071D440 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14071D7DC (CmpRundownUnitOfWork.c)
 *     CmpSetValueKeyTombstone @ 0x14086E9FC (CmpSetValueKeyTombstone.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140872074 (CmpSnapshotKcbStackSecurity.c)
 *     CmpLogTransactionAborted @ 0x140874C64 (CmpLogTransactionAborted.c)
 *     CmpRollbackTransactionArray @ 0x140875078 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x14087824C (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x14087B3E0 (CmpGetValueForAudit.c)
 *     HvMarkCellDirty @ 0x14087BCE8 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087EAA8 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x1408802C8 (CmpPromoteKey.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D34C (SeAdtRegistryValueChangedAuditAlarm.c)
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
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r13
  ULONG_PTR v19; // rcx
  __int16 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // r15d
  char v24; // r14
  ULONG_PTR v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  void *v28; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdi
  int v36; // ecx
  _QWORD *UnitOfWork; // rax
  _QWORD *v38; // r14
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  char v43; // al
  _WORD *v44; // r15
  unsigned int v45; // eax
  char v46; // al
  ULONG_PTR v47; // rdx
  char v48; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp-B8h]
  char v50[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+58h] [rbp-A8h]
  char v52; // [rsp+60h] [rbp-A0h]
  unsigned int v53; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v54; // [rsp+68h] [rbp-98h] BYREF
  __int64 v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v57; // [rsp+80h] [rbp-80h] BYREF
  int v58; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v59; // [rsp+88h] [rbp-78h] BYREF
  __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  __int128 v61; // [rsp+98h] [rbp-68h] BYREF
  __int128 v62; // [rsp+A8h] [rbp-58h]
  __int64 v63; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-40h] BYREF
  _WORD *v65; // [rsp+C8h] [rbp-38h]
  _QWORD v66[2]; // [rsp+D0h] [rbp-30h] BYREF
  void *v67; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v68; // [rsp+E8h] [rbp-18h]
  __int128 v69; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v70[2]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v71[3]; // [rsp+120h] [rbp+20h] BYREF

  v51 = a1;
  v4 = a1;
  v53 = 0;
  v66[1] = v66;
  v5 = 0LL;
  v64 = 0LL;
  v66[0] = v66;
  v6 = 0LL;
  BugCheckParameter4 = 0LL;
  v52 = a4;
  v60 = 0xFFFFFFFFLL;
  KcbAtLayerHeight = 0LL;
  v63 = 0xFFFFFFFFLL;
  v56 = 0xFFFFFFFFLL;
  v61 = 0LL;
  WORD1(v61) = -1;
  v57 = -1;
  v54 = -1;
  v68 = a3;
  v65 = (_WORD *)a2;
  memset(v71, 0, sizeof(v71));
  v50[0] = 0;
  v58 = 0;
  v59 = 0LL;
  v69 = 0LL;
  v55 = 0LL;
  v62 = 0LL;
  CmpInitializeDelayDerefContext(&v69);
  v67 = 0LL;
  memset(v70, 0, sizeof(v70));
  CmpAttachToRegistryProcess((__int64)v71, v8, v9, v10);
  while ( 1 )
  {
    v11 = 1;
    if ( (CmpShutdownRundown & 1) != 0 )
    {
      started = -1073741431;
      v48 = 0;
LABEL_114:
      v11 = 0;
      v24 = 0;
      v25 = BugCheckParameter4;
      goto LABEL_27;
    }
    v12 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry();
    v5 = *(_QWORD *)(v4 + 8);
    v48 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_114;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v61, v5, v13, v14);
    if ( started < 0 )
      goto LABEL_114;
    CmpLockKcbStackTopExclusiveRestShared(&v61);
    v16 = v51;
    LOBYTE(v17) = 0;
    if ( *(_QWORD *)(v51 + 56) || *(_QWORD *)(v51 + 64) )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v51, 0LL) )
      {
        v24 = 0;
        v46 = *(_BYTE *)(v16 + 48) & 1;
        goto LABEL_110;
      }
      started = CmpTransSearchAddTransFromKeyBody(v16, &v59);
      if ( started < 0 )
        goto LABEL_86;
      if ( (*(_DWORD *)(*(_QWORD *)(v5 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
LABEL_86:
        v24 = v17;
        goto LABEL_25;
      }
LABEL_69:
      v16 = v51;
    }
    v18 = v59;
    v11 = 0;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v16, v59) )
    {
      v24 = 0;
      v11 = 1;
      v46 = *(_BYTE *)(v16 + 48) & 1;
LABEL_110:
      started = v46 != 0 ? -1073740763 : -1073741444;
      goto LABEL_25;
    }
    if ( v18 )
      break;
    v19 = v5 + 248;
    if ( *(int *)(v5 + 248) >= 0 )
    {
      v19 = v5 + 264;
      if ( !*(_DWORD *)(v5 + 264) )
        goto LABEL_11;
    }
    started = CmpSnapshotTxOwnerArray(v19, &v53, &v64);
    if ( started < 0 )
      goto LABEL_23;
    CmpLogTransactionAborted(v5, 1LL, v39, v53);
    CmpUnlockKcbStack(&v61);
    CmpCleanupKcbStack(&v61);
    v61 = 0LL;
    WORD1(v61) = -1;
    v62 = 0LL;
    CmpUnlockRegistry(v41, v40);
    v48 = 0;
    started = CmpRollbackTransactionArray(v53, v64, v42, &v58);
    if ( started < 0 )
      goto LABEL_24;
    v4 = v51;
  }
  UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
  BugCheckParameter4 = (ULONG_PTR)UnitOfWork;
  v38 = UnitOfWork;
  if ( !UnitOfWork )
  {
    v4 = v51;
    started = -1073741670;
    v24 = 0;
    v11 = 1;
    goto LABEL_29;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, v5);
  started = CmpTransEnlistUowInCmTrans(v38, v18);
  if ( started < 0 )
    goto LABEL_23;
  if ( !(unsigned __int8)CmpLockIXLockIntent(v5 + 248, v38)
    || !(unsigned __int8)CmpLockIXLockExclusive(v5 + 264, v38, 1LL) )
  {
    started = -1072103423;
LABEL_23:
    v11 = 1;
LABEL_24:
    v24 = 0;
LABEL_25:
    v25 = BugCheckParameter4;
    goto LABEL_26;
  }
  HvLockHiveFlusherShared(*(_QWORD *)(v5 + 32));
  v24 = 1;
  if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v5, v18, v50) )
  {
    started = -1073741670;
    v11 = 1;
    goto LABEL_25;
  }
  HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
  v16 = v51;
  KcbAtLayerHeight = v55;
LABEL_11:
  v20 = *(_WORD *)(v5 + 66);
  if ( v20 < 0 )
    goto LABEL_21;
  while ( 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)&v61, v20);
    if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, v16) == 1 )
    {
LABEL_20:
      KcbAtLayerHeight = v55;
      goto LABEL_21;
    }
    v21 = *(unsigned int *)(KcbAtLayerHeight + 40);
    if ( (_DWORD)v21 != -1 )
      break;
LABEL_19:
    if ( --v20 < 0 )
      goto LABEL_20;
  }
  if ( v18 && *(_QWORD *)(KcbAtLayerHeight + 288) == v18 )
  {
    started = CmpFindNameInListWithStatus(
                *(_QWORD *)(KcbAtLayerHeight + 32),
                (unsigned int *)(KcbAtLayerHeight + 280),
                (__int64)v65,
                0,
                (__int64)&v54,
                (__int64)&v57);
  }
  else
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 8LL))(
            *(_QWORD *)(KcbAtLayerHeight + 32),
            v21,
            &v63);
    started = CmpFindNameInListWithStatus(
                *(_QWORD *)(KcbAtLayerHeight + 32),
                (unsigned int *)(v22 + 36),
                (__int64)v65,
                0,
                (__int64)&v54,
                (__int64)&v57);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 32),
      &v63);
  }
  if ( started < 0 )
  {
    if ( started != -1073741772 )
      goto LABEL_23;
    v16 = v51;
    if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, v51) )
      goto LABEL_20;
    goto LABEL_19;
  }
  v55 = KcbAtLayerHeight;
LABEL_21:
  v23 = v57;
  if ( v57 == -1 )
  {
    started = -1073741772;
    goto LABEL_23;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 8LL))(
          *(_QWORD *)(KcbAtLayerHeight + 32),
          v57,
          &v56);
  if ( (unsigned __int8)CmpIsValueTombstone(*(_QWORD *)(KcbAtLayerHeight + 32), v17) )
  {
    started = -1073741772;
    v24 = 0;
    goto LABEL_104;
  }
  (*(void (__fastcall **)(__int64, __int64 *))(v30 + 16))(v30, &v56);
  v17 = 0LL;
  if ( *(_DWORD *)(v5 + 40) == -1 )
  {
    CmpUnlockKcbStack(&v61);
    v11 = 0;
    started = CmpPromoteKey(&v61, 0LL, 1LL);
    if ( started < 0 )
      goto LABEL_86;
    goto LABEL_69;
  }
  v31 = *(_QWORD *)(v5 + 32);
  ++*(_QWORD *)(v5 + 304);
  HvLockHiveFlusherShared(v31);
  v32 = v59;
  v24 = 1;
  if ( !v59 && !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40), 0LL) )
  {
    started = -1073741443;
    v11 = 1;
    goto LABEL_25;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
         *(_QWORD *)(v5 + 32),
         *(unsigned int *)(v5 + 40),
         &v60);
  CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v5 + 32), v6, *(_DWORD *)(v5 + 40));
  if ( !v52 )
    goto LABEL_50;
  started = CmpSnapshotKcbStackSecurity(&v61, v32, 843140419LL, &v67);
  if ( started < 0 || (started = CmpGetValueForAudit(*(_QWORD *)(v55 + 32), v23, v70, 826363203LL), started < 0) )
  {
LABEL_92:
    v25 = BugCheckParameter4;
    goto LABEL_62;
  }
  v32 = v59;
LABEL_50:
  v33 = *(_QWORD *)(v5 + 32);
  if ( v32 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(v33 + 16))(v33, &v60);
    v6 = 0LL;
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    v24 = 0;
    v25 = BugCheckParameter4;
    *(_DWORD *)(BugCheckParameter4 + 88) = v23;
    v11 = 1;
    *(_DWORD *)(BugCheckParameter4 + 68) = 6;
    started = CmAddLogForAction(BugCheckParameter4, 1LL);
    if ( started < 0 )
      goto LABEL_26;
    HvLockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    CmpRemoveValueFromList(*(_QWORD *)(v5 + 32), v54, v5 + 280);
    goto LABEL_59;
  }
  v34 = *(unsigned int *)(v5 + 40);
  if ( *(_WORD *)(v5 + 66) )
  {
    v43 = HvMarkCellDirty(v33, v34, 0LL);
    if ( v5 == v55 )
    {
      if ( v43 && (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), v23, 0LL) )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
                *(_QWORD *)(v5 + 32),
                v23,
                &v56);
        if ( (unsigned __int8)CmpMarkValueDataDirty(*(_QWORD *)(v5 + 32)) )
        {
          CmpFreeValueData(*(_QWORD *)(v5 + 32), *(unsigned int *)(v17 + 8));
          *(_DWORD *)(v17 + 8) = -1;
          *(_WORD *)(v17 + 16) |= 2u;
          *(_DWORD *)(v17 + 12) = 0;
          *(_DWORD *)(v17 + 4) = 0;
          *(_QWORD *)(v6 + 4) = v12;
          *(_QWORD *)(v5 + 168) = v12;
          goto LABEL_58;
        }
        goto LABEL_93;
      }
      goto LABEL_91;
    }
    if ( !v43 )
    {
LABEL_91:
      started = -1073741443;
      goto LABEL_92;
    }
    v44 = v65;
    started = CmpSetValueKeyTombstone(
                *(_QWORD *)(v5 + 32),
                v6,
                (_DWORD)v65,
                *(_DWORD *)(v6 + 36),
                *(_DWORD *)(v5 + 40) >> 31);
    if ( started < 0 )
      goto LABEL_92;
    *(_QWORD *)(v6 + 4) = v12;
    *(_QWORD *)(v5 + 168) = v12;
    v45 = (unsigned __int16)*v44;
    if ( *(_DWORD *)(v6 + 60) < v45 )
    {
      *(_DWORD *)(v6 + 60) = v45;
      *(_WORD *)(v5 + 178) = *v44;
    }
LABEL_58:
    CmpCleanUpKcbCachedSymlink(v5);
    v36 = *(_DWORD *)(v6 + 40);
    *(_DWORD *)(v5 + 96) = *(_DWORD *)(v6 + 36);
    *(_DWORD *)(v5 + 100) = v36;
LABEL_59:
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    started = 0;
    v24 = 0;
    v50[0] = 0;
    v25 = 0LL;
    CmpReportNotifyForKcbStack((__int64)&v61, v59, 4, (__int64)v66);
    goto LABEL_60;
  }
  if ( !(unsigned __int8)HvMarkCellDirty(v33, v34, 0LL)
    || !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v6 + 40), 0LL)
    || !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), v23, 0LL) )
  {
    goto LABEL_91;
  }
  v35 = v55;
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v55 + 32) + 8LL))(
          *(_QWORD *)(v55 + 32),
          v23,
          &v56);
  if ( (unsigned __int8)CmpMarkValueDataDirty(*(_QWORD *)(v35 + 32)) )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v35 + 32) + 16LL))(*(_QWORD *)(v35 + 32), &v56);
    v17 = 0LL;
    CmpRemoveValueFromList(*(_QWORD *)(v5 + 32), v54, v6 + 36);
    CmpFreeValue(*(_QWORD *)(v5 + 32), v23);
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
LABEL_93:
  started = -1073741443;
LABEL_104:
  v25 = BugCheckParameter4;
LABEL_60:
  if ( v17 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v55 + 32) + 16LL))(*(_QWORD *)(v55 + 32), &v56);
LABEL_62:
  v11 = 1;
  if ( v6 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 16LL))(*(_QWORD *)(v5 + 32), &v60);
LABEL_26:
  v4 = v51;
LABEL_27:
  if ( v25 )
  {
    CmpRundownUnitOfWork(v25);
    CmpFreeUnitOfWork(v25);
  }
LABEL_29:
  if ( v50[0] )
  {
    v47 = *(unsigned int *)(v5 + 284);
    if ( (_DWORD)v47 != -1 )
      HvFreeCell(*(_QWORD *)(v5 + 32), v47);
    *(_DWORD *)(v5 + 284) = -1;
    *(_DWORD *)(v5 + 280) = 0;
    *(_QWORD *)(v5 + 288) = 0LL;
  }
  if ( v24 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
  if ( v11 )
    CmpUnlockKcbStack(&v61);
  CmpDrainDelayDerefContext((_QWORD **)&v69);
  if ( v48 )
    CmpUnlockRegistry(v27, v26);
  if ( (_QWORD *)v66[0] != v66 )
    CmpSignalDeferredPosts(v66);
  CmpDetachFromRegistryProcess((__int64)v71);
  v28 = v67;
  if ( started >= 0 && v52 && v67 )
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v67, 0, (_DWORD)v65, v4, v68, (__int64)v70, 2);
  if ( *((_QWORD *)&v70[0] + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v70[0] + 1), 0x34414D43u);
  if ( v28 )
    CmpFreeTransientPoolWithTag(v28, 0x33414D43u);
  CmpCleanupKcbStack(&v61);
  return (unsigned int)started;
}

/*
 * XREFs of CmDeleteValueKey @ 0x14065B364
 * Callers:
 *     NtDeleteValueKey @ 0x14065DF20 (NtDeleteValueKey.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x140213DB0 (CmpTransEnlistUowInKcb.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14026D0B0 (CmpTransEnlistUowInCmTrans.c)
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1405DED94 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRemoveValueFromList @ 0x1406030D0 (CmpRemoveValueFromList.c)
 *     CmAddLogForAction @ 0x14060E74C (CmAddLogForAction.c)
 *     CmpIsValueTombstone @ 0x140611F60 (CmpIsValueTombstone.c)
 *     CmpAllocateUnitOfWork @ 0x140617BA0 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140619820 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140619E60 (CmpLockIXLockExclusive.c)
 *     CmpCloneKCBValueListForTrans @ 0x14061BF60 (CmpCloneKCBValueListForTrans.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14065AB50 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFindNameInListWithStatus @ 0x14065AD9C (CmpFindNameInListWithStatus.c)
 *     HvUnlockHiveFlusherShared @ 0x14065B0AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14065B0E4 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14065B100 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpMarkValueDataDirty @ 0x14065BDA8 (CmpMarkValueDataDirty.c)
 *     CmpSignalDeferredPosts @ 0x14065C6B0 (CmpSignalDeferredPosts.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14065DE90 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFreeValue @ 0x140660258 (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x1406602D4 (CmpFreeValueData.c)
 *     CmpRundownUnitOfWork @ 0x140664278 (CmpRundownUnitOfWork.c)
 *     CmpReportNotifyForKcbStack @ 0x1406DCA60 (CmpReportNotifyForKcbStack.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1406DDF90 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1406DEC70 (CmpGetEffectiveKcbSemantics.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406DECB0 (CmpGetKcbAtLayerHeight.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140712740 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140712820 (CmpUnlockKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     CmpSetValueKeyTombstone @ 0x14086EB5C (CmpSetValueKeyTombstone.c)
 *     CmpSnapshotKcbStackSecurity @ 0x1408721D4 (CmpSnapshotKcbStackSecurity.c)
 *     CmpLogTransactionAborted @ 0x140874DC4 (CmpLogTransactionAborted.c)
 *     CmpRollbackTransactionArray @ 0x1408751D8 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1408783AC (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x14087B540 (CmpGetValueForAudit.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087EC08 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x140880428 (CmpPromoteKey.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D4AC (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  ULONG_PTR v5; // rsi
  __int64 v6; // r12
  __int64 KcbAtLayerHeight; // r14
  char v8; // r15
  __int64 v9; // rbx
  __int64 v10; // r8
  struct _LOOKASIDE_LIST_EX *v11; // r9
  int started; // edi
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // r13
  ULONG_PTR v16; // rcx
  __int16 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // r15d
  char v21; // r14
  ULONG_PTR v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  void *v25; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rdi
  int v33; // ecx
  _QWORD *UnitOfWork; // rax
  _QWORD *v35; // r14
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  char v40; // al
  _WORD *v41; // r15
  unsigned int v42; // eax
  char v43; // al
  ULONG_PTR v44; // rdx
  char v45; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp-B8h]
  char v47[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+58h] [rbp-A8h]
  char v49; // [rsp+60h] [rbp-A0h]
  unsigned int v50; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v51; // [rsp+68h] [rbp-98h] BYREF
  __int64 v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v54; // [rsp+80h] [rbp-80h] BYREF
  int v55; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v56; // [rsp+88h] [rbp-78h] BYREF
  __int64 v57; // [rsp+90h] [rbp-70h] BYREF
  __int128 v58; // [rsp+98h] [rbp-68h] BYREF
  __int128 v59; // [rsp+A8h] [rbp-58h]
  __int64 v60; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-40h] BYREF
  _WORD *v62; // [rsp+C8h] [rbp-38h]
  _QWORD v63[2]; // [rsp+D0h] [rbp-30h] BYREF
  void *v64; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v65; // [rsp+E8h] [rbp-18h]
  __int128 v66; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v67[2]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v68[3]; // [rsp+120h] [rbp+20h] BYREF

  v48 = a1;
  v4 = a1;
  v50 = 0;
  v63[1] = v63;
  v5 = 0LL;
  v61 = 0LL;
  v63[0] = v63;
  v6 = 0LL;
  BugCheckParameter4 = 0LL;
  v49 = a4;
  v57 = 0xFFFFFFFFLL;
  KcbAtLayerHeight = 0LL;
  v60 = 0xFFFFFFFFLL;
  v53 = 0xFFFFFFFFLL;
  v58 = 0LL;
  WORD1(v58) = -1;
  v54 = -1;
  v51 = -1;
  v65 = a3;
  v62 = (_WORD *)a2;
  memset(v68, 0, sizeof(v68));
  v47[0] = 0;
  v55 = 0;
  v56 = 0LL;
  v66 = 0LL;
  v52 = 0LL;
  v59 = 0LL;
  CmpInitializeDelayDerefContext(&v66);
  v64 = 0LL;
  memset(v67, 0, sizeof(v67));
  CmpAttachToRegistryProcess(v68);
  while ( 1 )
  {
    v8 = 1;
    if ( (CmpShutdownRundown & 1) != 0 )
    {
      started = -1073741431;
      v45 = 0;
LABEL_114:
      v8 = 0;
      v21 = 0;
      v22 = BugCheckParameter4;
      goto LABEL_27;
    }
    v9 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry();
    v5 = *(_QWORD *)(v4 + 8);
    v45 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_114;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v58, v5, v10, v11);
    if ( started < 0 )
      goto LABEL_114;
    CmpLockKcbStackTopExclusiveRestShared(&v58);
    v13 = v48;
    LOBYTE(v14) = 0;
    if ( *(_QWORD *)(v48 + 56) || *(_QWORD *)(v48 + 64) )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v48, 0LL) )
      {
        v21 = 0;
        v43 = *(_BYTE *)(v13 + 48) & 1;
        goto LABEL_110;
      }
      started = CmpTransSearchAddTransFromKeyBody((_QWORD *)v13, &v56);
      if ( started < 0 )
        goto LABEL_86;
      if ( (*(_DWORD *)(*(_QWORD *)(v5 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
LABEL_86:
        v21 = v14;
        goto LABEL_25;
      }
LABEL_69:
      v13 = v48;
    }
    v15 = v56;
    v8 = 0;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v13, v56) )
    {
      v21 = 0;
      v8 = 1;
      v43 = *(_BYTE *)(v13 + 48) & 1;
LABEL_110:
      started = v43 != 0 ? -1073740763 : -1073741444;
      goto LABEL_25;
    }
    if ( v15 )
      break;
    v16 = v5 + 248;
    if ( *(int *)(v5 + 248) >= 0 )
    {
      v16 = v5 + 264;
      if ( !*(_DWORD *)(v5 + 264) )
        goto LABEL_11;
    }
    started = CmpSnapshotTxOwnerArray(v16, &v50, &v61);
    if ( started < 0 )
      goto LABEL_23;
    CmpLogTransactionAborted(v5, 1LL, v36, v50);
    CmpUnlockKcbStack(&v58);
    CmpCleanupKcbStack(&v58);
    v58 = 0LL;
    WORD1(v58) = -1;
    v59 = 0LL;
    CmpUnlockRegistry(v38, v37);
    v45 = 0;
    started = CmpRollbackTransactionArray(v50, v61, v39, &v55);
    if ( started < 0 )
      goto LABEL_24;
    v4 = v48;
  }
  UnitOfWork = CmpAllocateUnitOfWork();
  BugCheckParameter4 = (ULONG_PTR)UnitOfWork;
  v35 = UnitOfWork;
  if ( !UnitOfWork )
  {
    v4 = v48;
    started = -1073741670;
    v21 = 0;
    v8 = 1;
    goto LABEL_29;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, v5);
  started = CmpTransEnlistUowInCmTrans(v35, v15);
  if ( started < 0 )
    goto LABEL_23;
  if ( !CmpLockIXLockIntent((unsigned int *)(v5 + 248), (__int64)v35) || !CmpLockIXLockExclusive(v5 + 264, v35, 1) )
  {
    started = -1072103423;
LABEL_23:
    v8 = 1;
LABEL_24:
    v21 = 0;
LABEL_25:
    v22 = BugCheckParameter4;
    goto LABEL_26;
  }
  HvLockHiveFlusherShared(*(_QWORD *)(v5 + 32));
  v21 = 1;
  if ( !CmpCloneKCBValueListForTrans(v5, v15, v47) )
  {
    started = -1073741670;
    v8 = 1;
    goto LABEL_25;
  }
  HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
  v13 = v48;
  KcbAtLayerHeight = v52;
LABEL_11:
  v17 = *(_WORD *)(v5 + 66);
  if ( v17 < 0 )
    goto LABEL_21;
  while ( 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(&v58);
    if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, v13) == 1 )
    {
LABEL_20:
      KcbAtLayerHeight = v52;
      goto LABEL_21;
    }
    v18 = *(unsigned int *)(KcbAtLayerHeight + 40);
    if ( (_DWORD)v18 != -1 )
      break;
LABEL_19:
    if ( --v17 < 0 )
      goto LABEL_20;
  }
  if ( v15 && *(_QWORD *)(KcbAtLayerHeight + 288) == v15 )
  {
    started = CmpFindNameInListWithStatus(
                *(_QWORD *)(KcbAtLayerHeight + 32),
                (unsigned int *)(KcbAtLayerHeight + 280),
                (__int64)v62,
                0,
                (__int64)&v51,
                (__int64)&v54);
  }
  else
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 8LL))(
            *(_QWORD *)(KcbAtLayerHeight + 32),
            v18,
            &v60);
    started = CmpFindNameInListWithStatus(
                *(_QWORD *)(KcbAtLayerHeight + 32),
                (unsigned int *)(v19 + 36),
                (__int64)v62,
                0,
                (__int64)&v51,
                (__int64)&v54);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 32),
      &v60);
  }
  if ( started < 0 )
  {
    if ( started != -1073741772 )
      goto LABEL_23;
    v13 = v48;
    if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, v48) )
      goto LABEL_20;
    goto LABEL_19;
  }
  v52 = KcbAtLayerHeight;
LABEL_21:
  v20 = v54;
  if ( v54 == -1 )
  {
    started = -1073741772;
    goto LABEL_23;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 8LL))(
          *(_QWORD *)(KcbAtLayerHeight + 32),
          v54,
          &v53);
  if ( CmpIsValueTombstone(*(_QWORD *)(KcbAtLayerHeight + 32), v14) )
  {
    started = -1073741772;
    v21 = 0;
    goto LABEL_104;
  }
  (*(void (__fastcall **)(__int64, __int64 *))(v27 + 16))(v27, &v53);
  v14 = 0LL;
  if ( *(_DWORD *)(v5 + 40) == -1 )
  {
    CmpUnlockKcbStack(&v58);
    v8 = 0;
    started = CmpPromoteKey(&v58, 0LL, 1LL);
    if ( started < 0 )
      goto LABEL_86;
    goto LABEL_69;
  }
  v28 = *(_QWORD *)(v5 + 32);
  ++*(_QWORD *)(v5 + 304);
  HvLockHiveFlusherShared(v28);
  v29 = v56;
  v21 = 1;
  if ( !v56 && !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40), 0LL) )
  {
    started = -1073741443;
    v8 = 1;
    goto LABEL_25;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
         *(_QWORD *)(v5 + 32),
         *(unsigned int *)(v5 + 40),
         &v57);
  CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v5 + 32), v6, *(_DWORD *)(v5 + 40));
  if ( !v49 )
    goto LABEL_50;
  started = CmpSnapshotKcbStackSecurity(&v58, v29, 843140419LL, &v64);
  if ( started < 0 || (started = CmpGetValueForAudit(*(_QWORD *)(v52 + 32), v20, v67, 826363203LL), started < 0) )
  {
LABEL_92:
    v22 = BugCheckParameter4;
    goto LABEL_62;
  }
  v29 = v56;
LABEL_50:
  v30 = *(_QWORD *)(v5 + 32);
  if ( v29 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(v30 + 16))(v30, &v57);
    v6 = 0LL;
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    v21 = 0;
    v22 = BugCheckParameter4;
    *(_DWORD *)(BugCheckParameter4 + 88) = v20;
    v8 = 1;
    *(_DWORD *)(BugCheckParameter4 + 68) = 6;
    started = CmAddLogForAction(BugCheckParameter4, 1);
    if ( started < 0 )
      goto LABEL_26;
    HvLockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    CmpRemoveValueFromList(*(_QWORD *)(v5 + 32), v51, (unsigned int *)(v5 + 280));
    goto LABEL_59;
  }
  v31 = *(unsigned int *)(v5 + 40);
  if ( *(_WORD *)(v5 + 66) )
  {
    v40 = HvMarkCellDirty(v30, v31, 0LL);
    if ( v5 == v52 )
    {
      if ( v40 && (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), v20, 0LL) )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
                *(_QWORD *)(v5 + 32),
                v20,
                &v53);
        if ( (unsigned __int8)CmpMarkValueDataDirty(*(_QWORD *)(v5 + 32)) )
        {
          CmpFreeValueData(*(_QWORD *)(v5 + 32), *(unsigned int *)(v14 + 8));
          *(_DWORD *)(v14 + 8) = -1;
          *(_WORD *)(v14 + 16) |= 2u;
          *(_DWORD *)(v14 + 12) = 0;
          *(_DWORD *)(v14 + 4) = 0;
          *(_QWORD *)(v6 + 4) = v9;
          *(_QWORD *)(v5 + 168) = v9;
          goto LABEL_58;
        }
        goto LABEL_93;
      }
      goto LABEL_91;
    }
    if ( !v40 )
    {
LABEL_91:
      started = -1073741443;
      goto LABEL_92;
    }
    v41 = v62;
    started = CmpSetValueKeyTombstone(
                *(_QWORD *)(v5 + 32),
                v6,
                (_DWORD)v62,
                *(_DWORD *)(v6 + 36),
                *(_DWORD *)(v5 + 40) >> 31);
    if ( started < 0 )
      goto LABEL_92;
    *(_QWORD *)(v6 + 4) = v9;
    *(_QWORD *)(v5 + 168) = v9;
    v42 = (unsigned __int16)*v41;
    if ( *(_DWORD *)(v6 + 60) < v42 )
    {
      *(_DWORD *)(v6 + 60) = v42;
      *(_WORD *)(v5 + 178) = *v41;
    }
LABEL_58:
    CmpCleanUpKcbCachedSymlink(v5, &v66);
    v33 = *(_DWORD *)(v6 + 40);
    *(_DWORD *)(v5 + 96) = *(_DWORD *)(v6 + 36);
    *(_DWORD *)(v5 + 100) = v33;
LABEL_59:
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    started = 0;
    v21 = 0;
    v47[0] = 0;
    v22 = 0LL;
    CmpReportNotifyForKcbStack(&v58, v56, 4LL, v63);
    goto LABEL_60;
  }
  if ( !(unsigned __int8)HvMarkCellDirty(v30, v31, 0LL)
    || !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v6 + 40), 0LL)
    || !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), v20, 0LL) )
  {
    goto LABEL_91;
  }
  v32 = v52;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v52 + 32) + 8LL))(
          *(_QWORD *)(v52 + 32),
          v20,
          &v53);
  if ( (unsigned __int8)CmpMarkValueDataDirty(*(_QWORD *)(v32 + 32)) )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v32 + 32) + 16LL))(*(_QWORD *)(v32 + 32), &v53);
    v14 = 0LL;
    CmpRemoveValueFromList(*(_QWORD *)(v5 + 32), v51, (unsigned int *)(v6 + 36));
    CmpFreeValue(*(_QWORD *)(v5 + 32), v20);
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
LABEL_93:
  started = -1073741443;
LABEL_104:
  v22 = BugCheckParameter4;
LABEL_60:
  if ( v14 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v52 + 32) + 16LL))(*(_QWORD *)(v52 + 32), &v53);
LABEL_62:
  v8 = 1;
  if ( v6 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 16LL))(*(_QWORD *)(v5 + 32), &v57);
LABEL_26:
  v4 = v48;
LABEL_27:
  if ( v22 )
  {
    CmpRundownUnitOfWork(v22);
    CmpFreeUnitOfWork(v22);
  }
LABEL_29:
  if ( v47[0] )
  {
    v44 = *(unsigned int *)(v5 + 284);
    if ( (_DWORD)v44 != -1 )
      HvFreeCell(*(_QWORD *)(v5 + 32), v44);
    *(_DWORD *)(v5 + 284) = -1;
    *(_DWORD *)(v5 + 280) = 0;
    *(_QWORD *)(v5 + 288) = 0LL;
  }
  if ( v21 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
  if ( v8 )
    CmpUnlockKcbStack(&v58);
  CmpDrainDelayDerefContext((_QWORD **)&v66);
  if ( v45 )
    CmpUnlockRegistry(v24, v23);
  if ( (_QWORD *)v63[0] != v63 )
    CmpSignalDeferredPosts(v63);
  CmpDetachFromRegistryProcess(v68);
  v25 = v64;
  if ( started >= 0 && v49 && v64 )
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v64, 0, (_DWORD)v62, v4, v65, (__int64)v67, 2);
  if ( *((_QWORD *)&v67[0] + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v67[0] + 1), 0x34414D43u);
  if ( v25 )
    CmpFreeTransientPoolWithTag(v25, 0x33414D43u);
  CmpCleanupKcbStack(&v58);
  return (unsigned int)started;
}

/*
 * XREFs of CmDeleteValueKey @ 0x140714E58
 * Callers:
 *     NtDeleteValueKey @ 0x140714980 (NtDeleteValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInKcb @ 0x1402A21B0 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402A2204 (CmpTransEnlistUowInCmTrans.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpLockIXLockExclusive @ 0x14067E9B8 (CmpLockIXLockExclusive.c)
 *     CmpAllocateUnitOfWork @ 0x14067EA18 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x14067EF3C (CmpLockIXLockIntent.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14067F480 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRemoveValueFromList @ 0x1406BEFA0 (CmpRemoveValueFromList.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpIsValueTombstone @ 0x1406C01F4 (CmpIsValueTombstone.c)
 *     CmpCloneKCBValueListForTrans @ 0x1406C8F10 (CmpCloneKCBValueListForTrans.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406E9124 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpMarkValueDataDirty @ 0x140716D50 (CmpMarkValueDataDirty.c)
 *     CmAddLogForAction @ 0x14071784C (CmAddLogForAction.c)
 *     CmpSignalDeferredPosts @ 0x140719010 (CmpSignalDeferredPosts.c)
 *     CmpRundownUnitOfWork @ 0x14071C120 (CmpRundownUnitOfWork.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14071EE7C (CmpCleanUpKcbCachedSymlink.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14071F6D0 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpReportNotifyForKcbStack @ 0x140721878 (CmpReportNotifyForKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpFindNameInListWithStatus @ 0x1407221B0 (CmpFindNameInListWithStatus.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140722534 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFreeValue @ 0x14079B22C (CmpFreeValue.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     CmpFreeValueData @ 0x14079CF44 (CmpFreeValueData.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpSetValueKeyTombstone @ 0x140914BEC (CmpSetValueKeyTombstone.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140918BC4 (CmpSnapshotKcbStackSecurity.c)
 *     CmpRollbackTransactionArray @ 0x14091BC64 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x14091ECE0 (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x140921930 (CmpGetValueForAudit.c)
 *     CmpPromoteKey @ 0x1409226E0 (CmpPromoteKey.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409C6D8C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpIsShutdownRundownActive @ 0x140AB4248 (CmpIsShutdownRundownActive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AB45A0 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, _WORD *a2, __int64 a3, char a4)
{
  char v4; // r15
  __int64 v5; // r13
  ULONG_PTR v6; // rsi
  __int64 v7; // rbx
  int started; // edi
  __int64 v9; // rdi
  char v10; // r14
  unsigned int v11; // r12d
  __int64 v12; // r13
  ULONG_PTR v13; // rcx
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PPRIVILEGE_SET v19; // rcx
  __int64 v20; // r8
  char IsShutdownRundownActive; // al
  _QWORD *v22; // r12
  ULONG_PTR v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *UnitOfWork; // rax
  __int64 v31; // r8
  __int64 v32; // rdi
  __int16 v33; // r15
  __int16 v34; // r8
  __int64 KcbAtLayerHeight; // r14
  int v36; // eax
  char v37; // al
  ULONG_PTR v38; // rdx
  int NameInListWithStatus; // eax
  bool v40; // zf
  ULONG_PTR v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  int v44; // edx
  ULONG_PTR v45; // rcx
  __int64 CellFlat; // rax
  __int64 v47; // r13
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // r14
  ULONG_PTR v52; // rcx
  __int64 CellPaged; // rax
  __int64 v54; // r8
  __int64 v55; // rcx
  ULONG_PTR v56; // rcx
  ULONG_PTR v57; // rdx
  ULONG_PTR v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r14
  int v62; // eax
  ULONG_PTR v63; // rcx
  __int64 v64; // rax
  _WORD *v65; // r12
  unsigned int v66; // eax
  int v67; // ecx
  __int64 v68; // rcx
  __int64 v69; // rbx
  _DWORD *v70; // rcx
  int v71; // eax
  __int64 v72; // rbx
  __int64 v73; // rcx
  char v74; // al
  __int64 v75; // [rsp+20h] [rbp-E0h]
  __int64 v76; // [rsp+28h] [rbp-D8h]
  __int64 v77; // [rsp+30h] [rbp-D0h]
  __int64 v78; // [rsp+38h] [rbp-C8h]
  __int64 v79; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v80; // [rsp+48h] [rbp-B8h]
  char v81; // [rsp+50h] [rbp-B0h]
  _DWORD BugCheckParameter4[3]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v83; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v84[3]; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v85; // [rsp+70h] [rbp-90h]
  __int64 v86; // [rsp+78h] [rbp-88h] BYREF
  __int64 v87; // [rsp+80h] [rbp-80h] BYREF
  int v88; // [rsp+88h] [rbp-78h] BYREF
  __int64 v89; // [rsp+90h] [rbp-70h] BYREF
  __int128 v90; // [rsp+98h] [rbp-68h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+A8h] [rbp-58h]
  __int64 v92; // [rsp+B8h] [rbp-48h] BYREF
  PVOID P; // [rsp+C0h] [rbp-40h]
  _WORD *v94; // [rsp+C8h] [rbp-38h]
  void *v95; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v96[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v97; // [rsp+F0h] [rbp-10h]
  __int128 v98; // [rsp+F8h] [rbp-8h] BYREF
  _OWORD v99[2]; // [rsp+108h] [rbp+8h] BYREF
  _OWORD v100[3]; // [rsp+128h] [rbp+28h] BYREF

  v4 = 0;
  v80 = a1;
  v81 = a4;
  v97 = a3;
  v96[1] = v96;
  v5 = a1;
  v94 = a2;
  v96[0] = v96;
  v83 = 0;
  v90 = 0LL;
  WORD1(v90) = -1;
  v6 = 0LL;
  v92 = 0LL;
  v86 = 0LL;
  v89 = 0LL;
  *(_QWORD *)&BugCheckParameter4[1] = 0LL;
  memset(v100, 0, sizeof(v100));
  P = 0LL;
  BYTE1(v79) = 0;
  v88 = 0;
  v98 = 0LL;
  v87 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v85 = 0LL;
  HvpGetCellContextReinitialize(&v86);
  HvpGetCellContextReinitialize(&v89);
  *(_QWORD *)&v84[1] = 0LL;
  HvpGetCellContextReinitialize(&BugCheckParameter4[1]);
  BugCheckParameter4[0] = -1;
  v84[0] = -1;
  CmpInitializeDelayDerefContext(&v98);
  v95 = 0LL;
  memset(v99, 0, sizeof(v99));
  CmpAttachToRegistryProcess(v100);
  if ( (unsigned __int8)CmpIsShutdownRundownActive() )
  {
LABEL_20:
    started = -1073741431;
    LOBYTE(v79) = 0;
LABEL_21:
    v10 = 0;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v7 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry();
    v6 = *(_QWORD *)(v5 + 8);
    LOBYTE(v79) = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_21;
    }
    started = CmpStartKcbStackForTopLayerKcb(&v90, v6);
    if ( started < 0 )
      goto LABEL_21;
    CmpLockKcbStackTopExclusiveRestShared(&v90);
    v9 = v80;
    v10 = 1;
    if ( *(_QWORD *)(v80 + 56) || *(_QWORD *)(v80 + 64) )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v80, 0LL) )
      {
        v74 = *(_BYTE *)(v9 + 48) & 1;
        goto LABEL_163;
      }
      started = CmpTransSearchAddTransFromKeyBody((_QWORD *)v9, &v87);
      if ( started < 0 )
        goto LABEL_138;
      if ( (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_138;
      }
      v9 = v80;
    }
    v11 = BugCheckParameter4[0];
LABEL_11:
    v12 = v87;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v9, v87) )
    {
      v10 = 1;
      v74 = *(_BYTE *)(v9 + 48) & 1;
LABEL_163:
      started = v74 != 0 ? -1073740763 : -1073741444;
      goto LABEL_138;
    }
    if ( v12 )
      break;
    v13 = v6 + 248;
    if ( *(int *)(v6 + 248) >= 0 )
    {
      v13 = v6 + 264;
      if ( !*(_DWORD *)(v6 + 264) )
        goto LABEL_57;
    }
    started = CmpSnapshotTxOwnerArray(v13, &v83, &v92);
    if ( started < 0 )
    {
      v10 = 1;
      goto LABEL_138;
    }
    v15 = v83;
    CmpLogTransactionAbortedWithChildName(v6, 0LL, 1u, v14, v83);
    CmpUnlockKcbStack(&v90);
    v19 = Privileges[1];
    v10 = 0;
    if ( Privileges[1] )
      CmSiFreeMemory(Privileges[1]);
    v90 = 0LL;
    WORD1(v90) = -1;
    *(_OWORD *)Privileges = 0LL;
    CmpUnlockRegistry(v19, v16, v17, v18);
    LOBYTE(v79) = 0;
    started = CmpRollbackTransactionArray(v15, v92, v20, &v88);
    if ( started < 0 )
      goto LABEL_138;
    IsShutdownRundownActive = CmpIsShutdownRundownActive();
    v5 = v80;
    if ( IsShutdownRundownActive )
      goto LABEL_20;
  }
  UnitOfWork = CmpAllocateUnitOfWork();
  P = UnitOfWork;
  v22 = UnitOfWork;
  if ( UnitOfWork )
  {
    CmpTransEnlistUowInKcb(UnitOfWork, v6);
    started = CmpTransEnlistUowInCmTrans(v22, v12);
    if ( started < 0 )
    {
      v10 = 1;
      goto LABEL_158;
    }
    v10 = 1;
    if ( !CmpLockIXLockIntent((unsigned int *)(v6 + 248), (__int64)v22, v31)
      || !CmpLockIXLockExclusive(v6 + 264, v22, 1LL) )
    {
      started = -1072103423;
LABEL_158:
      v5 = v80;
LABEL_23:
      CmpRundownUnitOfWork((ULONG_PTR)v22);
      ExFreePoolWithTag(v22, 0x77554D43u);
      goto LABEL_24;
    }
    ExAcquirePushLockSharedEx(*(_QWORD *)(v6 + 32) + 72LL, 0LL);
    v4 = 1;
    started = CmpCloneKCBValueListForTrans(v6, v12, (_BYTE *)&v79 + 1);
    if ( started < 0 )
      goto LABEL_158;
    v32 = *(_QWORD *)(v6 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v32 + 72));
    KeAbPostRelease(v32 + 72);
    v11 = BugCheckParameter4[0];
    v12 = v87;
    v9 = v80;
LABEL_57:
    v33 = *(_WORD *)(v6 + 66);
    if ( v33 >= 0 )
    {
      while ( 1 )
      {
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(&v90, (unsigned __int16)v33);
        v36 = *(__int16 *)(KcbAtLayerHeight + 66);
        if ( v36 == *(unsigned __int16 *)(v9 + 4) )
        {
          v37 = *(_BYTE *)(KcbAtLayerHeight + 65);
          if ( !v37 )
            goto LABEL_64;
        }
        else
        {
          if ( !(_WORD)v36 )
            goto LABEL_64;
          v37 = *(_BYTE *)(KcbAtLayerHeight + 65);
        }
        if ( v37 == (_BYTE)v34 )
          goto LABEL_83;
LABEL_64:
        v38 = *(unsigned int *)(KcbAtLayerHeight + 40);
        if ( (_DWORD)v38 != -1 )
        {
          if ( v12 && *(_QWORD *)(KcbAtLayerHeight + 288) == v12 )
          {
            NameInListWithStatus = CmpFindNameInListWithStatus(
                                     *(_QWORD *)(KcbAtLayerHeight + 32),
                                     (__int64)v84,
                                     (__int64)BugCheckParameter4);
            started = NameInListWithStatus;
            if ( NameInListWithStatus >= 0 )
              goto LABEL_88;
            v40 = NameInListWithStatus == -1073741772;
          }
          else
          {
            v41 = *(_QWORD *)(KcbAtLayerHeight + 32);
            if ( ((unsigned __int8)v34 & *(_BYTE *)(v41 + 140)) != 0 )
              HvpGetCellFlat(v41, v38, &v89);
            else
              HvpGetCellPaged(v41);
            v42 = CmpFindNameInListWithStatus(
                    *(_QWORD *)(KcbAtLayerHeight + 32),
                    (__int64)v84,
                    (__int64)BugCheckParameter4);
            v43 = *(_QWORD *)(KcbAtLayerHeight + 32);
            started = v42;
            if ( (*(_BYTE *)(v43 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v43, &v89);
            else
              HvpReleaseCellPaged(v43, &v89);
            if ( started >= 0 )
            {
LABEL_88:
              v11 = BugCheckParameter4[0];
              *(_QWORD *)&v84[1] = KcbAtLayerHeight;
              goto LABEL_85;
            }
            v40 = started == -1073741772;
          }
          if ( !v40 )
          {
            v10 = 1;
            v4 = 0;
            goto LABEL_138;
          }
          v9 = v80;
          v44 = *(__int16 *)(KcbAtLayerHeight + 66);
          if ( v44 == *(unsigned __int16 *)(v80 + 4) || (_WORD)v44 && *(_BYTE *)(KcbAtLayerHeight + 65) )
          {
LABEL_83:
            v11 = BugCheckParameter4[0];
            break;
          }
          v34 = 1;
        }
        v33 -= v34;
        if ( v33 < 0 )
          goto LABEL_83;
      }
    }
    KcbAtLayerHeight = *(_QWORD *)&v84[1];
LABEL_85:
    if ( v11 == -1 )
    {
      started = -1073741772;
      v10 = 1;
      v4 = 0;
      goto LABEL_138;
    }
    v45 = *(_QWORD *)(KcbAtLayerHeight + 32);
    if ( (*(_BYTE *)(v45 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v45, v11, &BugCheckParameter4[1]);
    else
      CellFlat = HvpGetCellPaged(v45);
    v47 = CellFlat;
    v4 = 0;
    if ( CmpIsValueTombstone(*(_QWORD *)(KcbAtLayerHeight + 32), CellFlat) )
    {
      started = -1073741772;
      goto LABEL_150;
    }
    if ( (*(_BYTE *)(v48 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v48, &BugCheckParameter4[1]);
    else
      HvpReleaseCellPaged(v48, &BugCheckParameter4[1]);
    v47 = 0LL;
    if ( *(_DWORD *)(v6 + 40) != -1 )
    {
      v50 = *(_QWORD *)(v6 + 32);
      ++*(_QWORD *)(v6 + 304);
      ExAcquirePushLockSharedEx(v50 + 72, 0LL);
      v51 = v87;
      v4 = 1;
      if ( !v87 )
      {
        started = HvpMarkCellDirty(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
        v10 = 1;
        if ( started < 0 )
        {
LABEL_138:
          v5 = v80;
LABEL_22:
          v22 = P;
          if ( !P )
            goto LABEL_24;
          goto LABEL_23;
        }
        v51 = v87;
      }
      v52 = *(_QWORD *)(v6 + 32);
      if ( (*(_BYTE *)(v52 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v52, *(unsigned int *)(v6 + 40), &v86);
      else
        CellPaged = HvpGetCellPaged(v52);
      v54 = *(unsigned int *)(v6 + 40);
      v55 = *(_QWORD *)(v6 + 32);
      v85 = CellPaged;
      CmpUpdateKeyNodeAccessBits(v55, CellPaged, v54);
      if ( !v81
        || (started = CmpSnapshotKcbStackSecurity(&v90, v51, 843140419LL, &v95), started >= 0)
        && (started = CmpGetValueForAudit(*(_QWORD *)(*(_QWORD *)&v84[1] + 32LL), v11), started >= 0) )
      {
        v56 = *(_QWORD *)(v6 + 32);
        if ( v51 )
        {
          v10 = 1;
          if ( (*(_BYTE *)(v56 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v56, &v86);
          else
            HvpReleaseCellPaged(v56, &v86);
          v69 = *(_QWORD *)(v6 + 32);
          v85 = 0LL;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v69 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v69 + 72));
          KeAbPostRelease(v69 + 72);
          v70 = P;
          v71 = BugCheckParameter4[0];
          v4 = 0;
          *((_DWORD *)P + 17) = 6;
          v70[22] = v71;
          started = CmAddLogForAction(v70, 1LL);
          if ( started < 0 )
            goto LABEL_138;
          ExAcquirePushLockSharedEx(*(_QWORD *)(v6 + 32) + 72LL, 0LL);
          CmpRemoveValueFromList(*(_QWORD *)(v6 + 32), v84[0], (unsigned int *)(v6 + 280));
          goto LABEL_146;
        }
        v57 = *(unsigned int *)(v6 + 40);
        if ( *(_WORD *)(v6 + 66) )
        {
          KcbAtLayerHeight = *(_QWORD *)&v84[1];
          v62 = HvpMarkCellDirty(v56, v57);
          started = v62;
          if ( v6 == KcbAtLayerHeight )
          {
            if ( v62 >= 0 )
            {
              started = HvpMarkCellDirty(*(_QWORD *)(v6 + 32), v11);
              if ( started >= 0 )
              {
                v63 = *(_QWORD *)(v6 + 32);
                if ( (*(_BYTE *)(v63 + 140) & 1) != 0 )
                  v64 = HvpGetCellFlat(v63, v11, &BugCheckParameter4[1]);
                else
                  v64 = HvpGetCellPaged(v63);
                v47 = v64;
                started = CmpMarkValueDataDirty(*(_QWORD *)(v6 + 32));
                if ( started < 0 )
                  goto LABEL_150;
                CmpFreeValueData(*(_QWORD *)(v6 + 32), *(unsigned int *)(v47 + 8));
                *(_DWORD *)(v47 + 8) = -1;
                *(_WORD *)(v47 + 16) |= 2u;
                v61 = v85;
                *(_DWORD *)(v47 + 12) = 0;
                *(_DWORD *)(v47 + 4) = 0;
                *(_QWORD *)(v61 + 4) = v7;
                *(_QWORD *)(v6 + 168) = v7;
                goto LABEL_134;
              }
            }
          }
          else if ( v62 >= 0 )
          {
            v61 = v85;
            v65 = v94;
            started = CmpSetValueKeyTombstone(
                        *(_QWORD *)(v6 + 32),
                        v85,
                        (_DWORD)v94,
                        *(_DWORD *)(v85 + 36),
                        *(_DWORD *)(v6 + 40) >> 31);
            if ( started >= 0 )
            {
              *(_QWORD *)(v61 + 4) = v7;
              *(_QWORD *)(v6 + 168) = v7;
              v66 = (unsigned __int16)*v65;
              if ( *(_DWORD *)(v61 + 60) < v66 )
              {
                *(_DWORD *)(v61 + 60) = v66;
                *(_WORD *)(v6 + 178) = *v65;
              }
              goto LABEL_134;
            }
          }
        }
        else
        {
          started = HvpMarkCellDirty(v56, v57);
          if ( started >= 0 )
          {
            started = HvpMarkCellDirty(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 100));
            if ( started >= 0 )
            {
              started = HvpMarkCellDirty(*(_QWORD *)(v6 + 32), v11);
              if ( started >= 0 )
              {
                KcbAtLayerHeight = *(_QWORD *)&v84[1];
                v58 = *(_QWORD *)(*(_QWORD *)&v84[1] + 32LL);
                if ( (*(_BYTE *)(v58 + 140) & 1) != 0 )
                  v59 = HvpGetCellFlat(v58, v11, &BugCheckParameter4[1]);
                else
                  v59 = HvpGetCellPaged(v58);
                v47 = v59;
                started = CmpMarkValueDataDirty(*(_QWORD *)(KcbAtLayerHeight + 32));
                if ( started < 0 )
                  goto LABEL_150;
                v60 = *(_QWORD *)(KcbAtLayerHeight + 32);
                if ( (*(_BYTE *)(v60 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v60, &BugCheckParameter4[1]);
                else
                  HvpReleaseCellPaged(v60, &BugCheckParameter4[1]);
                v61 = v85;
                v47 = 0LL;
                CmpRemoveValueFromList(*(_QWORD *)(v6 + 32), v84[0], (unsigned int *)(v85 + 36));
                CmpFreeValue(*(_QWORD *)(v6 + 32), v11);
                *(_QWORD *)(v61 + 4) = v7;
                *(_QWORD *)(v6 + 168) = v7;
                if ( !*(_DWORD *)(v61 + 36) )
                {
                  *(_DWORD *)(v61 + 60) = 0;
                  *(_WORD *)(v6 + 178) = 0;
                  *(_DWORD *)(v61 + 64) = 0;
                  *(_DWORD *)(v6 + 180) = 0;
                }
LABEL_134:
                CmpCleanUpKcbCachedSymlink(v6, &v98);
                v67 = *(_DWORD *)(v61 + 40);
                *(_DWORD *)(v6 + 96) = *(_DWORD *)(v61 + 36);
                *(_DWORD *)(v6 + 100) = v67;
LABEL_146:
                v72 = *(_QWORD *)(v6 + 32);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v72 + 72), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v72 + 72));
                KeAbPostRelease(v72 + 72);
                P = 0LL;
                BYTE1(v79) = 0;
                v4 = 0;
                CmpReportNotifyForKcbStack(&v90, v87, 4LL, v96, v75, v76, v77, v78, v79);
                KcbAtLayerHeight = *(_QWORD *)&v84[1];
                started = 0;
LABEL_150:
                if ( v47 )
                {
                  v73 = *(_QWORD *)(KcbAtLayerHeight + 32);
                  if ( (*(_BYTE *)(v73 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v73, &BugCheckParameter4[1]);
                  else
                    HvpReleaseCellPaged(v73, &BugCheckParameter4[1]);
                }
              }
            }
          }
        }
      }
      v10 = 1;
      if ( v85 )
      {
        v68 = *(_QWORD *)(v6 + 32);
        if ( (*(_BYTE *)(v68 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v68, &v86);
        else
          HvpReleaseCellPaged(v68, &v86);
      }
      goto LABEL_138;
    }
    CmpUnlockKcbStack(&v90);
    LOBYTE(v49) = 1;
    v10 = 0;
    started = CmpPromoteKey(&v90, 0LL, v49);
    if ( started < 0 )
      goto LABEL_138;
    v9 = v80;
    goto LABEL_11;
  }
  v5 = v80;
  started = -1073741670;
  v10 = 1;
LABEL_24:
  if ( BYTE1(v79) )
  {
    v23 = *(unsigned int *)(v6 + 284);
    if ( (_DWORD)v23 != -1 )
      HvFreeCell(*(_QWORD *)(v6 + 32), v23);
    *(_DWORD *)(v6 + 284) = -1;
    *(_DWORD *)(v6 + 280) = 0;
    *(_QWORD *)(v6 + 288) = 0LL;
  }
  if ( v4 )
  {
    v24 = *(_QWORD *)(v6 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v24 + 72));
    KeAbPostRelease(v24 + 72);
  }
  if ( v10 )
    CmpUnlockKcbStack(&v90);
  CmpDrainDelayDerefContext((_QWORD **)&v98);
  if ( (_BYTE)v79 )
    CmpUnlockRegistry(v26, v25, v27, v28);
  if ( (_QWORD *)v96[0] != v96 )
    CmpSignalDeferredPosts(v96);
  CmpDetachFromRegistryProcess(v100);
  if ( started >= 0 && v81 && v95 )
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v95, 0, (_DWORD)v94, v5, v97, (__int64)v99, 2);
  if ( *((_QWORD *)&v99[0] + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v99[0] + 1), 0x34414D43u);
  if ( v95 )
    CmpFreeTransientPoolWithTag(v95, 0x33414D43u);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return (unsigned int)started;
}

/*
 * XREFs of CmSetValueKey @ 0x14066E7B0
 * Callers:
 *     NtSetValueKey @ 0x14066DEB0 (NtSetValueKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140227238 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140227250 (CmpDrainDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140268308 (CmpFreeTransientPoolWithTag.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402F2D0C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1402F30C0 (CmpTransEnlistUowInKcb.c)
 *     CmpSwapValueInList @ 0x1402F3114 (CmpSwapValueInList.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     RtlIsSandboxedToken @ 0x1405E80A0 (RtlIsSandboxedToken.c)
 *     CmpReportNotifyForKcbStack @ 0x1405F3830 (CmpReportNotifyForKcbStack.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x14061B470 (CmpCleanupKcbStack.c)
 *     CmpLockKcbStackShared @ 0x14061B4F0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x14061B550 (CmpUnlockKcbStack.c)
 *     CmpIsKeyStackSymlink @ 0x14061BC50 (CmpIsKeyStackSymlink.c)
 *     CmpSignalDeferredPosts @ 0x14061C8F0 (CmpSignalDeferredPosts.c)
 *     RtlEqualUnicodeString @ 0x14061FE70 (RtlEqualUnicodeString.c)
 *     CmpSetValueKeyExisting @ 0x14066C27C (CmpSetValueKeyExisting.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14066DDF8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x14066DE7C (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14066FC68 (CmpCompareNewValueDataAgainstKCBCache.c)
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
 *     CmpFreeValue @ 0x140706124 (CmpFreeValue.c)
 *     CmpSetValueKeyNew @ 0x1407063C8 (CmpSetValueKeyNew.c)
 *     CmpAddValueKeyNew @ 0x14070647C (CmpAddValueKeyNew.c)
 *     HvFreeCell @ 0x140706E0C (HvFreeCell.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140874828 (CmpSnapshotKcbStackSecurity.c)
 *     CmpLogTransactionAborted @ 0x14087737C (CmpLogTransactionAborted.c)
 *     CmpRollbackTransactionArray @ 0x140877790 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x14087A8CC (CmpSnapshotTxOwnerArray.c)
 *     CmpAddValueToList @ 0x14087DA44 (CmpAddValueToList.c)
 *     CmpGetValueForAudit @ 0x14087DA6C (CmpGetValueForAudit.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x140881584 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x140882D40 (CmpPromoteKey.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091FB8C (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmSetValueKey(
        __int64 a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  const UNICODE_STRING *v7; // r13
  ULONG_PTR v9; // rdi
  _BOOL8 v10; // rdx
  char v11; // r12
  __int64 v12; // rbx
  int started; // esi
  char v14; // r15
  __int64 v15; // r12
  ULONG_PTR v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  char v19; // r13
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rdx
  ULONG_PTR v23; // rcx
  int v24; // esi
  const UNICODE_STRING *v25; // rcx
  unsigned int Length; // eax
  unsigned int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // ebx
  char v31; // bl
  void *v32; // rbx
  __int64 v34; // rax
  int v35; // ebx
  __int64 v36; // rcx
  unsigned int v37; // r13d
  _DWORD *v38; // rcx
  int v39; // eax
  _QWORD *UnitOfWork; // rax
  _QWORD *v41; // r13
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // rax
  char IsValueTombstone; // si
  __int64 v47; // rcx
  __int64 v48; // rcx
  ULONG_PTR v49; // rdx
  void *Src; // [rsp+20h] [rbp-E0h]
  size_t Size; // [rsp+28h] [rbp-D8h]
  char v52[3]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v53; // [rsp+44h] [rbp-BCh]
  int v54; // [rsp+48h] [rbp-B8h] BYREF
  char PreviousMode; // [rsp+4Ch] [rbp-B4h]
  unsigned int v56; // [rsp+50h] [rbp-B0h]
  unsigned int v57; // [rsp+54h] [rbp-ACh]
  BOOL v58; // [rsp+58h] [rbp-A8h]
  unsigned int v59; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v60; // [rsp+60h] [rbp-A0h] BYREF
  int v61; // [rsp+64h] [rbp-9Ch] BYREF
  const UNICODE_STRING *v62; // [rsp+68h] [rbp-98h]
  __int64 v63; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp-88h]
  __int128 v65; // [rsp+80h] [rbp-80h] BYREF
  __int128 v66; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+A0h] [rbp-60h] BYREF
  void *v68; // [rsp+A8h] [rbp-58h]
  __int64 v69; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD *v71[2]; // [rsp+C0h] [rbp-40h] BYREF
  void *v72; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v73; // [rsp+D8h] [rbp-28h]
  __int128 v74; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v75; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v76; // [rsp+100h] [rbp+0h]
  _OWORD v77[3]; // [rsp+110h] [rbp+10h] BYREF

  v73 = a6;
  v7 = a2;
  v62 = a2;
  v71[1] = v71;
  v71[0] = v71;
  v68 = a4;
  v65 = 0LL;
  WORD1(v65) = -1;
  v9 = 0LL;
  v57 = a3;
  v54 = 0;
  v69 = 0LL;
  v60 = 0;
  memset(v77, 0, sizeof(v77));
  BugCheckParameter4 = 0LL;
  v52[0] = 0;
  v61 = 0;
  v74 = 0LL;
  v70 = 0LL;
  v66 = 0LL;
  v67 = 0xFFFFFFFFLL;
  v63 = 0xFFFFFFFFLL;
  CmpInitializeDelayDerefContext(&v74);
  v75 = 0LL;
  v59 = -1;
  v76 = 0LL;
  v53 = -1;
  v72 = (void *)v10;
  v58 = v10;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CmpAttachToRegistryProcess(v77);
  v56 = a5;
  while ( 1 )
  {
    v11 = a7;
    if ( (CmpShutdownRundown & 1) != 0 )
    {
      v31 = 0;
      v14 = 0;
      v19 = 0;
      started = -1073741431;
      goto LABEL_45;
    }
    v12 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry();
    v9 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 0x100000) != 0 )
      break;
    started = CmpStartKcbStackForTopLayerKcb(&v65, v9);
    if ( started < 0 )
      goto LABEL_133;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      v14 = 1;
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v65);
    }
    else
    {
      v14 = 0;
      CmpLockKcbStackShared((__int64)&v65);
    }
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        v14 = 1;
        v19 = 0;
        started = -1073740763;
        v31 = 1;
        if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
          started = -1073741444;
        goto LABEL_45;
      }
      started = CmpTransSearchAddTransFromKeyBody(a1, &v70);
      if ( started < 0 )
        goto LABEL_128;
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
LABEL_128:
        v14 = 1;
        v19 = 0;
        v31 = 1;
        goto LABEL_45;
      }
    }
LABEL_10:
    v15 = v70;
    while ( 1 )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v15) )
      {
        v14 = 1;
        v19 = 0;
        started = -1073740763;
        if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
          started = -1073741444;
        goto LABEL_43;
      }
      if ( *(_BYTE *)(v9 + 65) == 1 )
        goto LABEL_96;
      if ( v15 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
        BugCheckParameter4 = (ULONG_PTR)UnitOfWork;
        v41 = UnitOfWork;
        if ( !UnitOfWork )
        {
          v11 = a7;
          v14 = 1;
          v31 = 1;
          started = -1073741670;
          v19 = 0;
          goto LABEL_47;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v9);
        started = CmpTransEnlistUowInCmTrans(v41, v15);
        if ( started < 0 )
          goto LABEL_123;
        if ( !(unsigned __int8)CmpLockIXLockIntent(v9 + 248, v41)
          || !(unsigned __int8)CmpLockIXLockExclusive(v9 + 264, v41, 1LL) )
        {
          started = -1072103423;
LABEL_123:
          v14 = 1;
LABEL_64:
          v19 = 0;
LABEL_43:
          v31 = 1;
LABEL_44:
          v11 = a7;
          goto LABEL_45;
        }
        HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        v19 = 1;
        if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v9, v15, v52) )
        {
          started = -1073741670;
          v14 = 1;
          v31 = 1;
          goto LABEL_44;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        v7 = v62;
        goto LABEL_16;
      }
      v16 = v9 + 248;
      if ( *(int *)(v9 + 248) < 0 )
        break;
      v16 = v9 + 264;
      if ( *(_DWORD *)(v9 + 264) )
        break;
LABEL_16:
      if ( CmpIsKeyStackSymlink((__int64)&v65)
        && (v57 != 6
         || (v56 & 1) != 0
         || v56 > 0xFFFF
         || !v7
         || !RtlEqualUnicodeString(&CmSymbolicLinkValueName, v7, 1u)
         || RtlIsSandboxedToken(0LL, PreviousMode)) )
      {
LABEL_96:
        started = -1073741790;
        goto LABEL_123;
      }
      if ( *(_DWORD *)(v9 + 40) == -1 )
      {
        CmpUnlockKcbStack((__int64)&v65);
        LOBYTE(v42) = 1;
        v14 = 0;
        started = CmpPromoteKey(&v65, 0LL, v42);
        if ( started < 0 )
        {
          v31 = 1;
          v19 = 0;
          goto LABEL_44;
        }
        v14 = 1;
      }
      else
      {
        if ( v14 )
          goto LABEL_24;
        v17 = CmpCompareNewValueDataAgainstKCBCache(v9, v7, v57, v68, v56);
        if ( v17 != 1 )
        {
          v14 = 1;
          if ( !v17 )
          {
            started = 0;
            goto LABEL_64;
          }
          if ( *(struct _KTHREAD **)(v9 + 56) == KeGetCurrentThread() || CmpTryConvertKcbLockSharedToExclusive(v9) )
          {
            v15 = v70;
LABEL_24:
            v18 = *(_QWORD *)(v9 + 32);
            ++*(_QWORD *)(v9 + 304);
            HvLockHiveFlusherShared(v18);
            v19 = 1;
            if ( !v15 && !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 40), 0LL) )
            {
              started = -1073741443;
              v14 = 1;
              v31 = 1;
              goto LABEL_44;
            }
            v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 8LL))(
                    *(_QWORD *)(v9 + 32),
                    *(unsigned int *)(v9 + 40),
                    &v67);
            CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v9 + 32), v20, *(unsigned int *)(v9 + 40));
            v21 = *(_QWORD *)(v9 + 32);
            if ( v15 )
            {
              started = CmpFindNameInListWithStatus(v21, (int)v9 + 280, (_DWORD)v62, 0, (__int64)&v60, (__int64)&v59);
              if ( (int)(started + 0x80000000) >= 0 )
                goto LABEL_66;
            }
            else
            {
              started = CmpFindNameInListWithStatus(v21, (int)v20 + 36, (_DWORD)v62, 0, (__int64)&v60, (__int64)&v59);
              if ( (int)(started + 0x80000000) < 0 )
                goto LABEL_28;
LABEL_66:
              if ( started != -1073741772 )
              {
LABEL_120:
                v30 = v53;
                goto LABEL_39;
              }
            }
LABEL_28:
            v22 = v59;
            v54 = v59;
            if ( a7 )
            {
              started = CmpSnapshotKcbStackSecurity(&v65, v15, 859917635LL, &v72);
              if ( started < 0 )
                goto LABEL_120;
              v22 = (unsigned int)v54;
              if ( v54 == -1 )
              {
                v58 = 0;
              }
              else
              {
                v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 8LL))(
                        *(_QWORD *)(v9 + 32),
                        (unsigned int)v54,
                        &v63);
                IsValueTombstone = CmpIsValueTombstone(*(_QWORD *)(v9 + 32), v45);
                v58 = IsValueTombstone == 0;
                (*(void (__fastcall **)(__int64, __int64 *))(v47 + 16))(v47, &v63);
                if ( !IsValueTombstone )
                {
                  started = CmpGetValueForAudit(*(_QWORD *)(v9 + 32), (unsigned int)v54, &v75, 876694851LL);
                  if ( started < 0 )
                    goto LABEL_120;
                }
                v22 = (unsigned int)v54;
              }
            }
            v23 = *(_QWORD *)(v9 + 32);
            v24 = *(_DWORD *)(v9 + 40) >> 31;
            v61 = v24;
            if ( !v15 )
            {
              if ( (_DWORD)v22 == -1 )
              {
                started = CmpSetValueKeyNew(v23, v20, (_DWORD)v62, v60, v57, (__int64)v68, v56, v24);
              }
              else
              {
                v34 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(v23 + 8))(v23, v22, &v63);
                LODWORD(Size) = v56;
                started = CmpSetValueKeyExisting(*(_QWORD *)(v9 + 32), (unsigned int)v54, v34, v57, v68, Size, v24);
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v63);
              }
              if ( started < 0 )
                goto LABEL_120;
              v25 = v62;
              Length = v62->Length;
              if ( *(_DWORD *)(v20 + 60) < Length )
              {
                *(_DWORD *)(v20 + 60) = Length;
                *(_WORD *)(v9 + 178) = v25->Length;
              }
              v27 = v56;
              if ( *(_DWORD *)(v20 + 64) < v56 )
              {
                *(_DWORD *)(v20 + 64) = v56;
                *(_DWORD *)(v9 + 180) = v27;
              }
              *(_QWORD *)(v20 + 4) = v12;
              *(_QWORD *)(v9 + 168) = v12;
              CmpCleanUpKcbCachedSymlink(v9, &v74);
              v28 = *(_DWORD *)(v20 + 36);
              *(_DWORD *)(v9 + 100) = *(_DWORD *)(v20 + 40);
              v29 = *(_QWORD *)(v9 + 32);
              *(_DWORD *)(v9 + 96) = v28;
              HvUnlockHiveFlusherShared(v29);
              goto LABEL_38;
            }
            LODWORD(Src) = v56;
            v53 = CmpAddValueKeyNew(v23, (size_t)Src, 1);
            v30 = v53;
            if ( v53 == -1 )
            {
              started = -1073741670;
            }
            else
            {
              v35 = v54;
              v36 = *(_QWORD *)(v9 + 32);
              if ( v54 == -1 )
              {
                v59 = *(_DWORD *)(v9 + 280);
                started = CmpAddValueToList(v36, v53, v59, 1, v9 + 280);
                if ( started < 0 )
                  goto LABEL_120;
                v24 = v61;
                v37 = v59;
              }
              else
              {
                v37 = v60;
                CmpSwapValueInList(v36, v53, v60, v9 + 280);
              }
              HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
              v38 = (_DWORD *)BugCheckParameter4;
              if ( v35 == -1 )
              {
                v39 = 4;
              }
              else
              {
                *(_DWORD *)(BugCheckParameter4 + 88) = v35;
                v39 = 5;
              }
              v38[17] = v39;
              v38[23] = v53;
              v38[18] = v24;
              started = CmAddLogForAction(v38, 1LL);
              if ( started < 0 )
              {
                if ( v20 )
                {
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v67);
                  v20 = 0LL;
                }
                HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                v48 = *(_QWORD *)(v9 + 32);
                if ( v35 == -1 )
                  CmpRemoveValueFromList(v48, v37, v9 + 280);
                else
                  CmpSwapValueInList(v48, v35, v37, v9 + 280);
                HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                v19 = 0;
                goto LABEL_120;
              }
LABEL_38:
              BugCheckParameter4 = 0LL;
              v52[0] = 0;
              v30 = -1;
              CmpReportNotifyForKcbStack((__int64)&v65, v15, 4, (__int64)v71);
              started = 0;
              v19 = 0;
            }
LABEL_39:
            if ( v20 )
              (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v67);
            v14 = 1;
            if ( v30 != -1 )
              CmpFreeValue(*(_QWORD *)(v9 + 32), v30);
            goto LABEL_43;
          }
          CmpUnlockKcbStack((__int64)&v65);
          CmpLockKcbStackTopExclusiveRestShared((__int64)&v65);
          goto LABEL_10;
        }
        CmpUnlockKcbStack((__int64)&v65);
        CmpLockKcbStackTopExclusiveRestShared((__int64)&v65);
      }
    }
    started = CmpSnapshotTxOwnerArray(v16, &v54, &v69);
    if ( started < 0 )
      goto LABEL_123;
    CmpLogTransactionAborted(v9, 1LL, v43, (unsigned int)v54);
    CmpUnlockKcbStack((__int64)&v65);
    v14 = 0;
    CmpCleanupKcbStack((__int64)&v65);
    v65 = 0LL;
    WORD1(v65) = -1;
    v66 = 0LL;
    CmpUnlockRegistry();
    started = CmpRollbackTransactionArray((unsigned int)v54, v69, v44, &v61);
    if ( started < 0 )
    {
      v19 = 0;
      v31 = 0;
      goto LABEL_44;
    }
  }
  started = -1073741790;
LABEL_133:
  v31 = 1;
  v14 = 0;
  v19 = 0;
LABEL_45:
  if ( BugCheckParameter4 )
  {
    CmpRundownUnitOfWork(BugCheckParameter4);
    CmpFreeUnitOfWork(BugCheckParameter4);
  }
LABEL_47:
  if ( v52[0] )
  {
    v49 = *(unsigned int *)(v9 + 284);
    if ( (_DWORD)v49 != -1 )
      HvFreeCell(*(_QWORD *)(v9 + 32), v49);
    *(_DWORD *)(v9 + 284) = -1;
    *(_DWORD *)(v9 + 280) = 0;
    *(_QWORD *)(v9 + 288) = 0LL;
  }
  if ( v19 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
  if ( v14 )
    CmpUnlockKcbStack((__int64)&v65);
  CmpDrainDelayDerefContext((_QWORD **)&v74);
  if ( v31 )
    CmpUnlockRegistry();
  if ( v71[0] != v71 )
    CmpSignalDeferredPosts(v71);
  CmpDetachFromRegistryProcess(v77);
  v32 = v72;
  if ( started >= 0 && v11 && v72 )
  {
    *(_QWORD *)&v76 = __PAIR64__(v56, v57);
    *((_QWORD *)&v76 + 1) = v68;
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v72, 0, (_DWORD)v62, a1, v73, (__int64)&v75, v58);
  }
  if ( *((_QWORD *)&v75 + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v75 + 1), 0x34414D43u);
  if ( v32 )
    CmpFreeTransientPoolWithTag(v32, 0x33414D43u);
  CmpCleanupKcbStack((__int64)&v65);
  return (unsigned int)started;
}

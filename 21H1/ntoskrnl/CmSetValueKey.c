/*
 * XREFs of CmSetValueKey @ 0x140619570
 * Callers:
 *     NtSetValueKey @ 0x140618C70 (NtSetValueKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14025C5D8 (CmpFreeTransientPoolWithTag.c)
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14025EE84 (CmpInitializeDelayDerefContext.c)
 *     CmpSwapValueInList @ 0x1402D2C9C (CmpSwapValueInList.c)
 *     CmpTransEnlistUowInKcb @ 0x1402D2D14 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402E1B1C (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     RtlEqualUnicodeString @ 0x140609D30 (RtlEqualUnicodeString.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x1406182C4 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406182F0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvLockHiveFlusherShared @ 0x140618340 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x14061835C (HvUnlockHiveFlusherShared.c)
 *     CmpFindNameInListWithStatus @ 0x1406187D0 (CmpFindNameInListWithStatus.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140618ADC (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14061ABF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x14061ADEC (CmpReportNotifyForKcbStack.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14061C108 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpSignalDeferredPosts @ 0x140622DA0 (CmpSignalDeferredPosts.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406231D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpIsKeyStackSymlink @ 0x140623FE0 (CmpIsKeyStackSymlink.c)
 *     CmpCleanupKcbStack @ 0x140626070 (CmpCleanupKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1406260F0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140626150 (CmpUnlockKcbStack.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     RtlIsSandboxedToken @ 0x140649A20 (RtlIsSandboxedToken.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406569A4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x14068E09C (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14068E2C0 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14068E618 (CmpRundownUnitOfWork.c)
 *     CmpIsValueTombstone @ 0x140693B98 (CmpIsValueTombstone.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406958E8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpRemoveValueFromList @ 0x140695EF0 (CmpRemoveValueFromList.c)
 *     CmpFreeValue @ 0x14069787C (CmpFreeValue.c)
 *     CmpSetValueKeyExisting @ 0x1406978F8 (CmpSetValueKeyExisting.c)
 *     CmpSetValueKeyNew @ 0x140697F98 (CmpSetValueKeyNew.c)
 *     CmpAddValueKeyNew @ 0x14069804C (CmpAddValueKeyNew.c)
 *     HvFreeCell @ 0x1406989DC (HvFreeCell.c)
 *     CmAddLogForAction @ 0x1406DBB4C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406E3928 (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x1406E6CE0 (CmpCloneKCBValueListForTrans.c)
 *     CmpSnapshotKcbStackSecurity @ 0x14086D210 (CmpSnapshotKcbStackSecurity.c)
 *     CmpLogTransactionAborted @ 0x14087054C (CmpLogTransactionAborted.c)
 *     CmpRollbackTransactionArray @ 0x140870960 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x140873A8C (CmpSnapshotTxOwnerArray.c)
 *     CmpAddValueToList @ 0x140876BD8 (CmpAddValueToList.c)
 *     CmpGetValueForAudit @ 0x140876C00 (CmpGetValueForAudit.c)
 *     HvMarkCellDirty @ 0x140877500 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087A724 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x14087BEA0 (CmpPromoteKey.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140918C5C (SeAdtRegistryValueChangedAuditAlarm.c)
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
  __int64 v32; // rdx
  __int64 v33; // rcx
  void *v34; // rbx
  int v36; // eax
  int v37; // ebx
  __int64 v38; // rcx
  unsigned int v39; // r13d
  _DWORD *v40; // rcx
  int v41; // eax
  _QWORD *UnitOfWork; // rax
  _QWORD *v43; // r13
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  char IsValueTombstone; // si
  __int64 v51; // rcx
  __int64 v52; // rcx
  ULONG_PTR v53; // rdx
  void *Src; // [rsp+20h] [rbp-E0h]
  size_t Size; // [rsp+28h] [rbp-D8h]
  char v56[3]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v57; // [rsp+44h] [rbp-BCh]
  int v58; // [rsp+48h] [rbp-B8h] BYREF
  char PreviousMode; // [rsp+4Ch] [rbp-B4h]
  unsigned int v60; // [rsp+50h] [rbp-B0h]
  unsigned int v61; // [rsp+54h] [rbp-ACh]
  BOOL v62; // [rsp+58h] [rbp-A8h]
  unsigned int v63; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v64; // [rsp+60h] [rbp-A0h] BYREF
  int v65; // [rsp+64h] [rbp-9Ch] BYREF
  const UNICODE_STRING *v66; // [rsp+68h] [rbp-98h]
  __int64 v67; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp-88h]
  __int128 v69; // [rsp+80h] [rbp-80h] BYREF
  __int128 v70; // [rsp+90h] [rbp-70h]
  __int64 v71; // [rsp+A0h] [rbp-60h] BYREF
  void *v72; // [rsp+A8h] [rbp-58h]
  __int64 v73; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v74; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v75[2]; // [rsp+C0h] [rbp-40h] BYREF
  void *v76; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v77; // [rsp+D8h] [rbp-28h]
  __int128 v78; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v79; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v80; // [rsp+100h] [rbp+0h]
  _OWORD v81[3]; // [rsp+110h] [rbp+10h] BYREF

  v77 = a6;
  v7 = a2;
  v66 = a2;
  v75[1] = v75;
  v75[0] = v75;
  v72 = a4;
  v69 = 0LL;
  WORD1(v69) = -1;
  v9 = 0LL;
  v61 = a3;
  v58 = 0;
  v73 = 0LL;
  v64 = 0;
  memset(v81, 0, sizeof(v81));
  BugCheckParameter4 = 0LL;
  v56[0] = 0;
  v65 = 0;
  v78 = 0LL;
  v74 = 0LL;
  v70 = 0LL;
  v71 = 0xFFFFFFFFLL;
  v67 = 0xFFFFFFFFLL;
  CmpInitializeDelayDerefContext(&v78);
  v79 = 0LL;
  v63 = -1;
  v80 = 0LL;
  v57 = -1;
  v76 = (void *)v10;
  v62 = v10;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CmpAttachToRegistryProcess(v81);
  v60 = a5;
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
    started = CmpStartKcbStackForTopLayerKcb(&v69, v9);
    if ( started < 0 )
      goto LABEL_133;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      v14 = 1;
      CmpLockKcbStackTopExclusiveRestShared(&v69);
    }
    else
    {
      v14 = 0;
      CmpLockKcbStackShared(&v69);
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
      started = CmpTransSearchAddTransFromKeyBody(a1, &v74);
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
    v15 = v74;
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
        v43 = UnitOfWork;
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
        started = CmpTransEnlistUowInCmTrans(v43, v15);
        if ( started < 0 )
          goto LABEL_123;
        if ( !(unsigned __int8)CmpLockIXLockIntent(v9 + 248, v43)
          || !(unsigned __int8)CmpLockIXLockExclusive(v9 + 264, v43, 1LL) )
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
        if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v9, v15, v56) )
        {
          started = -1073741670;
          v14 = 1;
          v31 = 1;
          goto LABEL_44;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        v7 = v66;
        goto LABEL_16;
      }
      v16 = v9 + 248;
      if ( *(int *)(v9 + 248) < 0 )
        break;
      v16 = v9 + 264;
      if ( *(_DWORD *)(v9 + 264) )
        break;
LABEL_16:
      if ( (unsigned __int8)CmpIsKeyStackSymlink(&v69)
        && (v61 != 6
         || (v60 & 1) != 0
         || v60 > 0xFFFF
         || !v7
         || !RtlEqualUnicodeString(&CmSymbolicLinkValueName, v7, 1u)
         || (unsigned __int8)RtlIsSandboxedToken(0LL)) )
      {
LABEL_96:
        started = -1073741790;
        goto LABEL_123;
      }
      if ( *(_DWORD *)(v9 + 40) == -1 )
      {
        CmpUnlockKcbStack(&v69);
        LOBYTE(v44) = 1;
        v14 = 0;
        started = CmpPromoteKey(&v69, 0LL, v44);
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
        v17 = CmpCompareNewValueDataAgainstKCBCache(v9, (__int64)v7, v61, v72, v60);
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
            v15 = v74;
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
                    &v71);
            CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v9 + 32), v20, *(_DWORD *)(v9 + 40));
            v21 = *(_QWORD *)(v9 + 32);
            if ( v15 )
            {
              started = CmpFindNameInListWithStatus(
                          v21,
                          (unsigned int *)(v9 + 280),
                          (__int64)v66,
                          0,
                          (__int64)&v64,
                          (__int64)&v63);
              if ( (int)(started + 0x80000000) >= 0 )
                goto LABEL_66;
            }
            else
            {
              started = CmpFindNameInListWithStatus(
                          v21,
                          (unsigned int *)(v20 + 36),
                          (__int64)v66,
                          0,
                          (__int64)&v64,
                          (__int64)&v63);
              if ( (int)(started + 0x80000000) < 0 )
                goto LABEL_28;
LABEL_66:
              if ( started != -1073741772 )
              {
LABEL_120:
                v30 = v57;
                goto LABEL_39;
              }
            }
LABEL_28:
            v22 = v63;
            v58 = v63;
            if ( a7 )
            {
              started = CmpSnapshotKcbStackSecurity(&v69, v15, 859917635LL, &v76);
              if ( started < 0 )
                goto LABEL_120;
              v22 = (unsigned int)v58;
              if ( v58 == -1 )
              {
                v62 = 0;
              }
              else
              {
                v49 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 8LL))(
                        *(_QWORD *)(v9 + 32),
                        (unsigned int)v58,
                        &v67);
                IsValueTombstone = CmpIsValueTombstone(*(_QWORD *)(v9 + 32), v49);
                v62 = IsValueTombstone == 0;
                (*(void (__fastcall **)(__int64, __int64 *))(v51 + 16))(v51, &v67);
                if ( !IsValueTombstone )
                {
                  started = CmpGetValueForAudit(*(_QWORD *)(v9 + 32), (unsigned int)v58, &v79, 876694851LL);
                  if ( started < 0 )
                    goto LABEL_120;
                }
                v22 = (unsigned int)v58;
              }
            }
            v23 = *(_QWORD *)(v9 + 32);
            v24 = *(_DWORD *)(v9 + 40) >> 31;
            v65 = v24;
            if ( !v15 )
            {
              if ( (_DWORD)v22 == -1 )
              {
                started = CmpSetValueKeyNew(v23, v20, (_DWORD)v66, v64, v61, (__int64)v72, v60, v24);
              }
              else
              {
                v36 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(v23 + 8))(v23, v22, &v67);
                LODWORD(Size) = v60;
                started = CmpSetValueKeyExisting(*(_QWORD *)(v9 + 32), v58, v36, v61, v72, Size, v24);
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v67);
              }
              if ( started < 0 )
                goto LABEL_120;
              v25 = v66;
              Length = v66->Length;
              if ( *(_DWORD *)(v20 + 60) < Length )
              {
                *(_DWORD *)(v20 + 60) = Length;
                *(_WORD *)(v9 + 178) = v25->Length;
              }
              v27 = v60;
              if ( *(_DWORD *)(v20 + 64) < v60 )
              {
                *(_DWORD *)(v20 + 64) = v60;
                *(_DWORD *)(v9 + 180) = v27;
              }
              *(_QWORD *)(v20 + 4) = v12;
              *(_QWORD *)(v9 + 168) = v12;
              CmpCleanUpKcbCachedSymlink(v9, &v78);
              v28 = *(_DWORD *)(v20 + 36);
              *(_DWORD *)(v9 + 100) = *(_DWORD *)(v20 + 40);
              v29 = *(_QWORD *)(v9 + 32);
              *(_DWORD *)(v9 + 96) = v28;
              HvUnlockHiveFlusherShared(v29);
              goto LABEL_38;
            }
            LODWORD(Src) = v60;
            v57 = CmpAddValueKeyNew(v23, (size_t)Src, 1);
            v30 = v57;
            if ( v57 == -1 )
            {
              started = -1073741670;
            }
            else
            {
              v37 = v58;
              v38 = *(_QWORD *)(v9 + 32);
              if ( v58 == -1 )
              {
                v63 = *(_DWORD *)(v9 + 280);
                started = CmpAddValueToList(v38, v57, v63, 1, v9 + 280);
                if ( started < 0 )
                  goto LABEL_120;
                v24 = v65;
                v39 = v63;
              }
              else
              {
                v39 = v64;
                CmpSwapValueInList(v38, v57, v64, v9 + 280);
              }
              HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
              v40 = (_DWORD *)BugCheckParameter4;
              if ( v37 == -1 )
              {
                v41 = 4;
              }
              else
              {
                *(_DWORD *)(BugCheckParameter4 + 88) = v37;
                v41 = 5;
              }
              v40[17] = v41;
              v40[23] = v57;
              v40[18] = v24;
              started = CmAddLogForAction(v40, 1LL);
              if ( started < 0 )
              {
                if ( v20 )
                {
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v71);
                  v20 = 0LL;
                }
                HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                v52 = *(_QWORD *)(v9 + 32);
                if ( v37 == -1 )
                  CmpRemoveValueFromList(v52, v39, v9 + 280);
                else
                  CmpSwapValueInList(v52, v37, v39, v9 + 280);
                HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                v19 = 0;
                goto LABEL_120;
              }
LABEL_38:
              BugCheckParameter4 = 0LL;
              v56[0] = 0;
              v30 = -1;
              CmpReportNotifyForKcbStack(&v69, v15, 4LL, v75);
              started = 0;
              v19 = 0;
            }
LABEL_39:
            if ( v20 )
              (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v71);
            v14 = 1;
            if ( v30 != -1 )
              CmpFreeValue(*(_QWORD *)(v9 + 32), v30);
            goto LABEL_43;
          }
          CmpUnlockKcbStack(&v69);
          CmpLockKcbStackTopExclusiveRestShared(&v69);
          goto LABEL_10;
        }
        CmpUnlockKcbStack(&v69);
        CmpLockKcbStackTopExclusiveRestShared(&v69);
      }
    }
    started = CmpSnapshotTxOwnerArray(v16, &v58, &v73);
    if ( started < 0 )
      goto LABEL_123;
    CmpLogTransactionAborted(v9, 1LL, v45, (unsigned int)v58);
    CmpUnlockKcbStack(&v69);
    v14 = 0;
    CmpCleanupKcbStack(&v69);
    v69 = 0LL;
    WORD1(v69) = -1;
    v70 = 0LL;
    CmpUnlockRegistry(v47, v46);
    started = CmpRollbackTransactionArray((unsigned int)v58, v73, v48, &v65);
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
  if ( v56[0] )
  {
    v53 = *(unsigned int *)(v9 + 284);
    if ( (_DWORD)v53 != -1 )
      HvFreeCell(*(_QWORD *)(v9 + 32), v53);
    *(_DWORD *)(v9 + 284) = -1;
    *(_DWORD *)(v9 + 280) = 0;
    *(_QWORD *)(v9 + 288) = 0LL;
  }
  if ( v19 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
  if ( v14 )
    CmpUnlockKcbStack(&v69);
  CmpDrainDelayDerefContext((_QWORD **)&v78);
  if ( v31 )
    CmpUnlockRegistry(v33, v32);
  if ( (_QWORD *)v75[0] != v75 )
    CmpSignalDeferredPosts(v75);
  CmpDetachFromRegistryProcess(v81);
  v34 = v76;
  if ( started >= 0 && v11 && v76 )
  {
    *(_QWORD *)&v80 = __PAIR64__(v60, v61);
    *((_QWORD *)&v80 + 1) = v72;
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v76, 0, (_DWORD)v66, a1, v77, (__int64)&v79, v62);
  }
  if ( *((_QWORD *)&v79 + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v79 + 1), 0x34414D43u);
  if ( v34 )
    CmpFreeTransientPoolWithTag(v34, 0x33414D43u);
  CmpCleanupKcbStack(&v69);
  return (unsigned int)started;
}

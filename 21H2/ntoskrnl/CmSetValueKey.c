/*
 * XREFs of CmSetValueKey @ 0x1406646C0
 * Callers:
 *     NtSetValueKey @ 0x140663DC0 (NtSetValueKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140206FA8 (CmpFreeTransientPoolWithTag.c)
 *     CmpSwapValueInList @ 0x1402BD8B4 (CmpSwapValueInList.c)
 *     CmpInitializeDelayDerefContext @ 0x1403510E8 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140351100 (CmpDrainDelayDerefContext.c)
 *     CmpTransEnlistUowInKcb @ 0x140360610 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x140361D2C (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpReportNotifyForKcbStack @ 0x1405ED300 (CmpReportNotifyForKcbStack.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1405EE830 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     RtlEqualUnicodeString @ 0x140601410 (RtlEqualUnicodeString.c)
 *     SeCaptureSubjectContext @ 0x140655B30 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 *     CmpTryAcquireIXLockExclusive @ 0x1406650F8 (CmpTryAcquireIXLockExclusive.c)
 *     CmpTryAcquireIXLockIntent @ 0x140665108 (CmpTryAcquireIXLockIntent.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140665D30 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKcbImmutable @ 0x140665DD0 (CmpIsKcbImmutable.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140665DE8 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpFindNameInListWithStatus @ 0x140665F7C (CmpFindNameInListWithStatus.c)
 *     HvUnlockHiveFlusherShared @ 0x14066628C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406662C4 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406662E0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x140666330 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpIsKcbLockedExclusive @ 0x14066635C (CmpIsKcbLockedExclusive.c)
 *     CmpSetValueKeyExisting @ 0x140666C88 (CmpSetValueKeyExisting.c)
 *     CmpSignalDeferredPosts @ 0x140667890 (CmpSignalDeferredPosts.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140669070 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFreeValue @ 0x14066B438 (CmpFreeValue.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A3094 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRemoveValueFromList @ 0x1406A54A0 (CmpRemoveValueFromList.c)
 *     CmAddLogForAction @ 0x1406AFE4C (CmAddLogForAction.c)
 *     CmpIsValueTombstone @ 0x1406B2EA0 (CmpIsValueTombstone.c)
 *     CmpAllocateUnitOfWork @ 0x1406B8780 (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x1406BCDE4 (CmpCloneKCBValueListForTrans.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x1406FB360 (CmpCleanupKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1406FB3E0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1406FB440 (CmpUnlockKcbStack.c)
 *     CmpIsKeyStackSymlink @ 0x1406FBB80 (CmpIsKeyStackSymlink.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406FC600 (CmpIsKeyDeletedForKeyBody.c)
 *     RtlIsSandboxedToken @ 0x1407054C0 (RtlIsSandboxedToken.c)
 *     HvFreeCell @ 0x140709534 (HvFreeCell.c)
 *     CmpAddValueKeyNew @ 0x140709FA0 (CmpAddValueKeyNew.c)
 *     CmpSetValueKeyNew @ 0x14070A140 (CmpSetValueKeyNew.c)
 *     CmpLockIXLockExclusive @ 0x14071D3E0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14071D440 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14071D7DC (CmpRundownUnitOfWork.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140872074 (CmpSnapshotKcbStackSecurity.c)
 *     CmpLogTransactionAborted @ 0x140874C64 (CmpLogTransactionAborted.c)
 *     CmpRollbackTransactionArray @ 0x140875078 (CmpRollbackTransactionArray.c)
 *     CmpIsShutdownRundownActive @ 0x140875BA8 (CmpIsShutdownRundownActive.c)
 *     CmpSnapshotTxOwnerArray @ 0x14087824C (CmpSnapshotTxOwnerArray.c)
 *     CmpAddValueToList @ 0x14087B3B8 (CmpAddValueToList.c)
 *     CmpGetValueForAudit @ 0x14087B3E0 (CmpGetValueForAudit.c)
 *     HvMarkCellDirty @ 0x14087BCE8 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087EAA8 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x1408802C8 (CmpPromoteKey.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D34C (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmSetValueKey(
        __int64 a1,
        const UNICODE_STRING *a2,
        int a3,
        void *a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r12
  ULONG_PTR v8; // r13
  ULONG_PTR v9; // rdi
  _BOOL8 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  char IsShutdownRundownActive; // al
  unsigned int v15; // r15d
  __int64 v16; // rbx
  int started; // esi
  __int64 v18; // rsi
  char v19; // r14
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *UnitOfWork; // rax
  char v27; // r15
  PCUNICODE_STRING v28; // rsi
  char v29; // bl
  ULONG_PTR v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  void *v33; // rbx
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r14
  int v39; // edx
  unsigned int v40; // r12d
  __int64 v41; // rax
  char IsValueTombstone; // si
  __int64 v43; // rcx
  ULONG_PTR v44; // rcx
  int v45; // esi
  int v46; // eax
  unsigned int v47; // r12d
  PCUNICODE_STRING v48; // rcx
  unsigned int Length; // eax
  int v50; // eax
  __int64 v51; // rcx
  unsigned int v52; // ebx
  int v53; // eax
  __int64 v54; // rcx
  unsigned int v55; // r15d
  int v56; // eax
  __int64 v57; // rcx
  bool v58; // zf
  void *Src; // [rsp+20h] [rbp-E0h]
  size_t Size; // [rsp+28h] [rbp-D8h]
  size_t v61; // [rsp+30h] [rbp-D0h]
  char v62[7]; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v63; // [rsp+48h] [rbp-B8h]
  int v64; // [rsp+50h] [rbp-B0h]
  char PreviousMode; // [rsp+54h] [rbp-ACh]
  int v66; // [rsp+58h] [rbp-A8h]
  unsigned int v67; // [rsp+5Ch] [rbp-A4h]
  BOOL v68; // [rsp+60h] [rbp-A0h]
  int v69; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v70; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v71; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v72; // [rsp+70h] [rbp-90h] BYREF
  __int64 v73; // [rsp+78h] [rbp-88h] BYREF
  PCUNICODE_STRING String2; // [rsp+80h] [rbp-80h]
  __int128 v75; // [rsp+88h] [rbp-78h] BYREF
  __int128 v76; // [rsp+98h] [rbp-68h]
  __int64 v77; // [rsp+A8h] [rbp-58h] BYREF
  void *v78; // [rsp+B0h] [rbp-50h]
  __int64 v79; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-40h]
  _QWORD v81[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v82; // [rsp+D8h] [rbp-28h] BYREF
  void *v83; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v84; // [rsp+E8h] [rbp-18h]
  __int128 v85; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v86; // [rsp+100h] [rbp+0h] BYREF
  __int128 v87; // [rsp+110h] [rbp+10h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v89[3]; // [rsp+140h] [rbp+40h] BYREF

  v84 = a6;
  v7 = a1;
  String2 = a2;
  v81[1] = v81;
  v81[0] = v81;
  v8 = 0LL;
  v75 = 0LL;
  WORD1(v75) = -1;
  v9 = 0LL;
  v63 = a1;
  v78 = a4;
  v66 = a3;
  v70 = 0;
  v79 = 0LL;
  v71 = 0;
  memset(v89, 0, sizeof(v89));
  v62[0] = 0;
  v72 = 0;
  v82 = 0LL;
  v85 = 0LL;
  v77 = 0xFFFFFFFFLL;
  v76 = 0LL;
  v73 = 0xFFFFFFFFLL;
  CmpInitializeDelayDerefContext(&v85);
  v86 = 0LL;
  v69 = -1;
  v87 = 0LL;
  v64 = -1;
  v83 = (void *)v10;
  v68 = v10;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess((__int64)v89, v11, v12, v13);
  IsShutdownRundownActive = CmpIsShutdownRundownActive();
  v15 = a5;
  v67 = a5;
  while ( 2 )
  {
    if ( IsShutdownRundownActive )
    {
      v29 = 0;
      v19 = 0;
      v27 = 0;
      started = -1073741431;
      goto LABEL_42;
    }
    v16 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry();
    v9 = *(_QWORD *)(v7 + 8);
    if ( (unsigned __int8)CmpIsKcbImmutable(v9) )
    {
      started = -1073741790;
      goto LABEL_130;
    }
    started = CmpStartKcbStackForTopLayerKcb(&v75, v9);
    if ( started < 0 )
    {
LABEL_130:
      v29 = 1;
      v19 = 0;
      v27 = 0;
      goto LABEL_42;
    }
    v18 = v63;
    if ( *(_QWORD *)(v63 + 56) || *(_QWORD *)(v63 + 64) )
    {
      v19 = 1;
      CmpLockKcbStackTopExclusiveRestShared(&v75);
    }
    else
    {
      v19 = 0;
      CmpLockKcbStackShared(&v75);
    }
    if ( !*(_QWORD *)(v18 + 56) && !*(_QWORD *)(v18 + 64) )
      goto LABEL_15;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v18, 0LL) )
    {
LABEL_126:
      v19 = 1;
      v27 = 0;
      v58 = (*(_BYTE *)(v18 + 48) & 1) == 0;
      started = -1073740763;
      if ( v58 )
        started = -1073741444;
      goto LABEL_40;
    }
    started = CmpTransSearchAddTransFromKeyBody(v18, &v82);
    if ( started < 0 )
    {
LABEL_38:
      v19 = 1;
      break;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 2) != 0 )
    {
LABEL_124:
      started = -1072103423;
      goto LABEL_38;
    }
    v18 = v63;
LABEL_15:
    v20 = v82;
    v80 = v82;
    while ( 1 )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v18, v20) )
        goto LABEL_126;
      if ( *(_BYTE *)(v9 + 65) == 1 )
        goto LABEL_37;
      if ( v20 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
        v8 = (ULONG_PTR)UnitOfWork;
        if ( !UnitOfWork )
        {
          v7 = v63;
          v19 = 1;
          v29 = 1;
          started = -1073741670;
          v27 = 0;
          goto LABEL_44;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v9);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v8, v20);
        if ( started < 0 )
          goto LABEL_38;
        if ( !(unsigned __int8)CmpLockIXLockIntent(v9 + 248, v8)
          || !(unsigned __int8)CmpLockIXLockExclusive(v9 + 264, v8, 1LL) )
        {
          goto LABEL_124;
        }
        HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        v27 = 1;
        if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v9, v20, v62) )
        {
          started = -1073741670;
          v19 = 1;
          goto LABEL_40;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        v15 = v67;
        goto LABEL_30;
      }
      if ( !(unsigned __int8)CmpTryAcquireIXLockIntent(v9 + 248)
        || !(unsigned __int8)CmpTryAcquireIXLockExclusive(v9 + 264) )
      {
        break;
      }
LABEL_30:
      if ( (unsigned __int8)CmpIsKeyStackSymlink(&v75) )
      {
        if ( v66 != 6
          || (v15 & 1) != 0
          || v15 > 0xFFFF
          || (v28 = String2) == 0LL
          || !RtlEqualUnicodeString(&CmSymbolicLinkValueName, String2, 1u)
          || (unsigned __int8)RtlIsSandboxedToken(&SubjectContext) )
        {
LABEL_37:
          started = -1073741790;
          goto LABEL_38;
        }
      }
      else
      {
        v28 = String2;
      }
      if ( *(_DWORD *)(v9 + 40) == -1 )
      {
        CmpUnlockKcbStack(&v75);
        LOBYTE(v35) = 1;
        v19 = 0;
        started = CmpPromoteKey(&v75, 0LL, v35);
        if ( started < 0 )
        {
          v29 = 1;
          v27 = 0;
          goto LABEL_41;
        }
        v18 = v63;
        v19 = 1;
      }
      else
      {
        if ( v19 )
          goto LABEL_77;
        v36 = CmpCompareNewValueDataAgainstKCBCache(v9, v28, (unsigned int)v66, v78, v15);
        if ( v36 != 1 )
        {
          v19 = 1;
          if ( !v36 )
          {
            started = 0;
            goto LABEL_39;
          }
          if ( (unsigned int)CmpIsKcbLockedExclusive(v9) || (unsigned __int8)CmpTryConvertKcbLockSharedToExclusive() )
          {
LABEL_77:
            v37 = *(_QWORD *)(v9 + 32);
            ++*(_QWORD *)(v9 + 304);
            HvLockHiveFlusherShared(v37);
            v27 = 1;
            if ( !v20 && !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 40), 0LL) )
            {
              started = -1073741443;
              v19 = 1;
              goto LABEL_40;
            }
            v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 8LL))(
                    *(_QWORD *)(v9 + 32),
                    *(unsigned int *)(v9 + 40),
                    &v77);
            CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v9 + 32), v38, *(unsigned int *)(v9 + 40));
            v39 = v9 + 280;
            if ( !v20 )
              v39 = v38 + 36;
            started = CmpFindNameInListWithStatus(
                        *(_QWORD *)(v9 + 32),
                        v39,
                        (_DWORD)v28,
                        0,
                        (__int64)&v71,
                        (__int64)&v69);
            if ( (int)(started + 0x80000000) >= 0 && started != -1073741772 )
              goto LABEL_118;
            v40 = v69;
            if ( !a7 )
              goto LABEL_91;
            started = CmpSnapshotKcbStackSecurity(&v75, v80, 859917635LL, &v83);
            if ( started < 0 )
              goto LABEL_118;
            if ( v40 == -1 )
            {
              v68 = 0;
              goto LABEL_91;
            }
            v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 8LL))(
                    *(_QWORD *)(v9 + 32),
                    v40,
                    &v73);
            IsValueTombstone = CmpIsValueTombstone(*(_QWORD *)(v9 + 32), v41);
            v68 = IsValueTombstone == 0;
            (*(void (__fastcall **)(__int64, __int64 *))(v43 + 16))(v43, &v73);
            if ( !IsValueTombstone )
            {
              started = CmpGetValueForAudit(*(_QWORD *)(v9 + 32), v40, &v86, 876694851LL);
              if ( started < 0 )
                goto LABEL_118;
            }
LABEL_91:
            v44 = *(_QWORD *)(v9 + 32);
            v45 = *(_DWORD *)(v9 + 40) >> 31;
            v69 = v45;
            if ( v80 )
            {
              LODWORD(Src) = v67;
              v53 = CmpAddValueKeyNew(v44, (size_t)Src, 1);
              v64 = v53;
              v52 = v53;
              if ( v53 == -1 )
              {
                started = -1073741670;
                goto LABEL_119;
              }
              v54 = *(_QWORD *)(v9 + 32);
              if ( v40 == -1 )
              {
                v72 = *(_DWORD *)(v9 + 280);
                started = CmpAddValueToList(v54, v53, v72, 1, v9 + 280);
                if ( started < 0 )
                  goto LABEL_118;
                v55 = v72;
                v45 = v69;
              }
              else
              {
                v55 = v71;
                CmpSwapValueInList(v54, v53, v71, v9 + 280);
              }
              HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
              if ( v40 == -1 )
              {
                v56 = 4;
              }
              else
              {
                *(_DWORD *)(v8 + 88) = v40;
                v56 = 5;
              }
              *(_DWORD *)(v8 + 68) = v56;
              *(_DWORD *)(v8 + 92) = v64;
              *(_DWORD *)(v8 + 72) = v45;
              started = CmAddLogForAction(v8, 1LL);
              if ( started < 0 )
              {
                if ( v38 )
                {
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v77);
                  v38 = 0LL;
                }
                HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                v57 = *(_QWORD *)(v9 + 32);
                if ( v40 == -1 )
                  CmpRemoveValueFromList(v57, v55, v9 + 280);
                else
                  CmpSwapValueInList(v57, v40, v55, v9 + 280);
                HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                v27 = 0;
                goto LABEL_118;
              }
            }
            else
            {
              if ( v40 != -1 )
              {
                v46 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v44 + 8))(v44, v40, &v73);
                LODWORD(Size) = v67;
                started = CmpSetValueKeyExisting(*(_QWORD *)(v9 + 32), v40, v46, v66, v78, Size, v45);
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v73);
                if ( started >= 0 )
                {
                  v47 = v67;
                  goto LABEL_96;
                }
LABEL_118:
                v52 = v64;
LABEL_119:
                if ( v38 )
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v77);
                v19 = 1;
                if ( v52 != -1 )
                  CmpFreeValue(*(_QWORD *)(v9 + 32), v52);
                goto LABEL_40;
              }
              v47 = v67;
              LODWORD(v61) = v67;
              started = CmpSetValueKeyNew(v44, v66, (__int64)v78, v61, v45);
              if ( started < 0 )
                goto LABEL_118;
LABEL_96:
              v48 = String2;
              Length = String2->Length;
              if ( *(_DWORD *)(v38 + 60) < Length )
              {
                *(_DWORD *)(v38 + 60) = Length;
                *(_WORD *)(v9 + 178) = v48->Length;
              }
              if ( *(_DWORD *)(v38 + 64) < v47 )
              {
                *(_DWORD *)(v38 + 64) = v47;
                *(_DWORD *)(v9 + 180) = v47;
              }
              *(_QWORD *)(v38 + 4) = v16;
              *(_QWORD *)(v9 + 168) = v16;
              CmpCleanUpKcbCachedSymlink(v9);
              v50 = *(_DWORD *)(v38 + 36);
              *(_DWORD *)(v9 + 100) = *(_DWORD *)(v38 + 40);
              v51 = *(_QWORD *)(v9 + 32);
              *(_DWORD *)(v9 + 96) = v50;
              HvUnlockHiveFlusherShared(v51);
            }
            v8 = 0LL;
            v52 = -1;
            v62[0] = 0;
            CmpReportNotifyForKcbStack((__int64)&v75, v80, 4, (__int64)v81);
            started = 0;
            v27 = 0;
            goto LABEL_119;
          }
        }
        CmpUnlockKcbStack(&v75);
        CmpLockKcbStackTopExclusiveRestShared(&v75);
        v18 = v63;
      }
    }
    started = CmpSnapshotTxOwnerArray(v21, &v70, &v79);
    if ( started < 0 )
      goto LABEL_38;
    CmpLogTransactionAborted(v9, 1LL, v22, v70);
    CmpUnlockKcbStack(&v75);
    v19 = 0;
    CmpCleanupKcbStack(&v75);
    v75 = 0LL;
    WORD1(v75) = -1;
    v76 = 0LL;
    CmpUnlockRegistry(v24, v23);
    started = CmpRollbackTransactionArray(v70, v79, v25, &v72);
    if ( started >= 0 )
    {
      IsShutdownRundownActive = CmpIsShutdownRundownActive();
      v7 = v63;
      continue;
    }
    break;
  }
LABEL_39:
  v27 = 0;
LABEL_40:
  v29 = v19;
LABEL_41:
  v7 = v63;
LABEL_42:
  if ( v8 )
  {
    CmpRundownUnitOfWork(v8);
    CmpFreeUnitOfWork(v8);
  }
LABEL_44:
  if ( v62[0] )
  {
    v30 = *(unsigned int *)(v9 + 284);
    if ( (_DWORD)v30 != -1 )
      HvFreeCell(*(_QWORD *)(v9 + 32), v30);
    *(_DWORD *)(v9 + 284) = -1;
    *(_DWORD *)(v9 + 280) = 0;
    *(_QWORD *)(v9 + 288) = 0LL;
  }
  if ( v27 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
  if ( v19 )
    CmpUnlockKcbStack(&v75);
  CmpDrainDelayDerefContext((_QWORD **)&v85);
  if ( v29 )
    CmpUnlockRegistry(v32, v31);
  if ( (_QWORD *)v81[0] != v81 )
    CmpSignalDeferredPosts(v81);
  CmpDetachFromRegistryProcess((__int64)v89);
  SeReleaseSubjectContext(&SubjectContext);
  v33 = v83;
  if ( started >= 0 && a7 && v83 )
  {
    *(_QWORD *)&v87 = __PAIR64__(v67, v66);
    *((_QWORD *)&v87 + 1) = v78;
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v83, 0, (_DWORD)String2, v7, v84, (__int64)&v86, v68);
  }
  if ( *((_QWORD *)&v86 + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v86 + 1), 0x34414D43u);
  if ( v33 )
    CmpFreeTransientPoolWithTag(v33, 0x33414D43u);
  CmpCleanupKcbStack(&v75);
  return (unsigned int)started;
}

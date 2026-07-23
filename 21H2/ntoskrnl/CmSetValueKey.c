/*
 * XREFs of CmSetValueKey @ 0x1406594E0
 * Callers:
 *     NtSetValueKey @ 0x140658BE0 (NtSetValueKey.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x140213DB0 (CmpTransEnlistUowInKcb.c)
 *     CmpSwapValueInList @ 0x140213E04 (CmpSwapValueInList.c)
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
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     CmpTryAcquireIXLockExclusive @ 0x140659F18 (CmpTryAcquireIXLockExclusive.c)
 *     CmpTryAcquireIXLockIntent @ 0x140659F28 (CmpTryAcquireIXLockIntent.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14065AB50 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKcbImmutable @ 0x14065ABF0 (CmpIsKcbImmutable.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14065AC08 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpFindNameInListWithStatus @ 0x14065AD9C (CmpFindNameInListWithStatus.c)
 *     HvUnlockHiveFlusherShared @ 0x14065B0AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14065B0E4 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14065B100 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x14065B150 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpIsKcbLockedExclusive @ 0x14065B17C (CmpIsKcbLockedExclusive.c)
 *     CmpSetValueKeyExisting @ 0x14065BAA8 (CmpSetValueKeyExisting.c)
 *     CmpSignalDeferredPosts @ 0x14065C6B0 (CmpSignalDeferredPosts.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14065DE90 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFreeValue @ 0x140660258 (CmpFreeValue.c)
 *     CmpRundownUnitOfWork @ 0x140664278 (CmpRundownUnitOfWork.c)
 *     CmpReportNotifyForKcbStack @ 0x1406DCA60 (CmpReportNotifyForKcbStack.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1406DDF90 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140712740 (CmpCleanupKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1407127C0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140712820 (CmpUnlockKcbStack.c)
 *     CmpIsKeyStackSymlink @ 0x140712F60 (CmpIsKeyStackSymlink.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 *     RtlIsSandboxedToken @ 0x14071C8A0 (RtlIsSandboxedToken.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     CmpAddValueKeyNew @ 0x140721380 (CmpAddValueKeyNew.c)
 *     CmpSetValueKeyNew @ 0x140721520 (CmpSetValueKeyNew.c)
 *     CmpSnapshotKcbStackSecurity @ 0x1408721D4 (CmpSnapshotKcbStackSecurity.c)
 *     CmpLogTransactionAborted @ 0x140874DC4 (CmpLogTransactionAborted.c)
 *     CmpRollbackTransactionArray @ 0x1408751D8 (CmpRollbackTransactionArray.c)
 *     CmpIsShutdownRundownActive @ 0x140875D08 (CmpIsShutdownRundownActive.c)
 *     CmpSnapshotTxOwnerArray @ 0x1408783AC (CmpSnapshotTxOwnerArray.c)
 *     CmpAddValueToList @ 0x14087B518 (CmpAddValueToList.c)
 *     CmpGetValueForAudit @ 0x14087B540 (CmpGetValueForAudit.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087EC08 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x140880428 (CmpPromoteKey.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D4AC (SeAdtRegistryValueChangedAuditAlarm.c)
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
  char IsShutdownRundownActive; // al
  unsigned int v12; // r15d
  __int64 v13; // rbx
  int started; // esi
  __int64 v15; // rsi
  char v16; // r14
  __int64 v17; // r12
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *UnitOfWork; // rax
  char v24; // r15
  PCUNICODE_STRING v25; // rsi
  char v26; // bl
  ULONG_PTR v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  void *v30; // rbx
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r14
  int v36; // edx
  unsigned int v37; // r12d
  __int64 v38; // rax
  bool IsValueTombstone; // si
  __int64 v40; // rcx
  ULONG_PTR v41; // rcx
  int v42; // esi
  int v43; // eax
  unsigned int v44; // r12d
  PCUNICODE_STRING v45; // rcx
  unsigned int Length; // eax
  int v47; // eax
  __int64 v48; // rcx
  unsigned int v49; // ebx
  int v50; // eax
  __int64 v51; // rcx
  unsigned int v52; // r15d
  int v53; // eax
  ULONG_PTR v54; // rcx
  bool v55; // zf
  void *Src; // [rsp+20h] [rbp-E0h]
  size_t Size; // [rsp+28h] [rbp-D8h]
  size_t v58; // [rsp+30h] [rbp-D0h]
  char v59[7]; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v60; // [rsp+48h] [rbp-B8h]
  int v61; // [rsp+50h] [rbp-B0h]
  char PreviousMode; // [rsp+54h] [rbp-ACh]
  int v63; // [rsp+58h] [rbp-A8h]
  unsigned int v64; // [rsp+5Ch] [rbp-A4h]
  BOOL v65; // [rsp+60h] [rbp-A0h]
  int v66; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v67; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v68; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v69; // [rsp+70h] [rbp-90h] BYREF
  __int64 v70; // [rsp+78h] [rbp-88h] BYREF
  PCUNICODE_STRING String2; // [rsp+80h] [rbp-80h]
  __int128 v72; // [rsp+88h] [rbp-78h] BYREF
  __int128 v73; // [rsp+98h] [rbp-68h]
  __int64 v74; // [rsp+A8h] [rbp-58h] BYREF
  void *v75; // [rsp+B0h] [rbp-50h]
  __int64 v76; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v77; // [rsp+C0h] [rbp-40h]
  _QWORD v78[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v79; // [rsp+D8h] [rbp-28h] BYREF
  void *v80; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v81; // [rsp+E8h] [rbp-18h]
  __int128 v82; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v83; // [rsp+100h] [rbp+0h] BYREF
  __int128 v84; // [rsp+110h] [rbp+10h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v86[3]; // [rsp+140h] [rbp+40h] BYREF

  v81 = a6;
  v7 = a1;
  String2 = a2;
  v78[1] = v78;
  v78[0] = v78;
  v8 = 0LL;
  v72 = 0LL;
  WORD1(v72) = -1;
  v9 = 0LL;
  v60 = a1;
  v75 = a4;
  v63 = a3;
  v67 = 0;
  v76 = 0LL;
  v68 = 0;
  memset(v86, 0, sizeof(v86));
  v59[0] = 0;
  v69 = 0;
  v79 = 0LL;
  v82 = 0LL;
  v74 = 0xFFFFFFFFLL;
  v73 = 0LL;
  v70 = 0xFFFFFFFFLL;
  CmpInitializeDelayDerefContext(&v82);
  v83 = 0LL;
  v66 = -1;
  v84 = 0LL;
  v61 = -1;
  v80 = (void *)v10;
  v65 = v10;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(v86);
  IsShutdownRundownActive = CmpIsShutdownRundownActive();
  v12 = a5;
  v64 = a5;
  while ( 2 )
  {
    if ( IsShutdownRundownActive )
    {
      v26 = 0;
      v16 = 0;
      v24 = 0;
      started = -1073741431;
      goto LABEL_42;
    }
    v13 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry();
    v9 = *(_QWORD *)(v7 + 8);
    if ( (unsigned __int8)CmpIsKcbImmutable(v9) )
    {
      started = -1073741790;
      goto LABEL_130;
    }
    started = CmpStartKcbStackForTopLayerKcb(&v72, v9);
    if ( started < 0 )
    {
LABEL_130:
      v26 = 1;
      v16 = 0;
      v24 = 0;
      goto LABEL_42;
    }
    v15 = v60;
    if ( *(_QWORD *)(v60 + 56) || *(_QWORD *)(v60 + 64) )
    {
      v16 = 1;
      CmpLockKcbStackTopExclusiveRestShared(&v72);
    }
    else
    {
      v16 = 0;
      CmpLockKcbStackShared(&v72);
    }
    if ( !*(_QWORD *)(v15 + 56) && !*(_QWORD *)(v15 + 64) )
      goto LABEL_15;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v15, 0LL) )
    {
LABEL_126:
      v16 = 1;
      v24 = 0;
      v55 = (*(_BYTE *)(v15 + 48) & 1) == 0;
      started = -1073740763;
      if ( v55 )
        started = -1073741444;
      goto LABEL_40;
    }
    started = CmpTransSearchAddTransFromKeyBody((_QWORD *)v15, &v79);
    if ( started < 0 )
    {
LABEL_38:
      v16 = 1;
      break;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 2) != 0 )
    {
LABEL_124:
      started = -1072103423;
      goto LABEL_38;
    }
    v15 = v60;
LABEL_15:
    v17 = v79;
    v77 = v79;
    while ( 1 )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v15, v17) )
        goto LABEL_126;
      if ( *(_BYTE *)(v9 + 65) == 1 )
        goto LABEL_37;
      if ( v17 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v8 = (ULONG_PTR)UnitOfWork;
        if ( !UnitOfWork )
        {
          v7 = v60;
          v16 = 1;
          v26 = 1;
          started = -1073741670;
          v24 = 0;
          goto LABEL_44;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v9);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v8, v17);
        if ( started < 0 )
          goto LABEL_38;
        if ( !CmpLockIXLockIntent((unsigned int *)(v9 + 248), v8) || !CmpLockIXLockExclusive(v9 + 264, (_QWORD *)v8, 1) )
          goto LABEL_124;
        HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        v24 = 1;
        if ( !CmpCloneKCBValueListForTrans(v9, v17, v59) )
        {
          started = -1073741670;
          v16 = 1;
          goto LABEL_40;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        v12 = v64;
        goto LABEL_30;
      }
      if ( !(unsigned __int8)CmpTryAcquireIXLockIntent(v9 + 248)
        || !(unsigned __int8)CmpTryAcquireIXLockExclusive(v9 + 264) )
      {
        break;
      }
LABEL_30:
      if ( (unsigned __int8)CmpIsKeyStackSymlink(&v72) )
      {
        if ( v63 != 6
          || (v12 & 1) != 0
          || v12 > 0xFFFF
          || (v25 = String2) == 0LL
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
        v25 = String2;
      }
      if ( *(_DWORD *)(v9 + 40) == -1 )
      {
        CmpUnlockKcbStack(&v72);
        LOBYTE(v32) = 1;
        v16 = 0;
        started = CmpPromoteKey(&v72, 0LL, v32);
        if ( started < 0 )
        {
          v26 = 1;
          v24 = 0;
          goto LABEL_41;
        }
        v15 = v60;
        v16 = 1;
      }
      else
      {
        if ( v16 )
          goto LABEL_77;
        v33 = CmpCompareNewValueDataAgainstKCBCache(v9, v25, (unsigned int)v63, v75, v12);
        if ( v33 != 1 )
        {
          v16 = 1;
          if ( !v33 )
          {
            started = 0;
            goto LABEL_39;
          }
          if ( (unsigned int)CmpIsKcbLockedExclusive(v9) || (unsigned __int8)CmpTryConvertKcbLockSharedToExclusive() )
          {
LABEL_77:
            v34 = *(_QWORD *)(v9 + 32);
            ++*(_QWORD *)(v9 + 304);
            HvLockHiveFlusherShared(v34);
            v24 = 1;
            if ( !v17 && !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 40), 0LL) )
            {
              started = -1073741443;
              v16 = 1;
              goto LABEL_40;
            }
            v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 8LL))(
                    *(_QWORD *)(v9 + 32),
                    *(unsigned int *)(v9 + 40),
                    &v74);
            CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v9 + 32), v35, *(unsigned int *)(v9 + 40));
            v36 = v9 + 280;
            if ( !v17 )
              v36 = v35 + 36;
            started = CmpFindNameInListWithStatus(
                        *(_QWORD *)(v9 + 32),
                        v36,
                        (_DWORD)v25,
                        0,
                        (__int64)&v68,
                        (__int64)&v66);
            if ( (int)(started + 0x80000000) >= 0 && started != -1073741772 )
              goto LABEL_118;
            v37 = v66;
            if ( !a7 )
              goto LABEL_91;
            started = CmpSnapshotKcbStackSecurity(&v72, v77, 859917635LL, &v80);
            if ( started < 0 )
              goto LABEL_118;
            if ( v37 == -1 )
            {
              v65 = 0;
              goto LABEL_91;
            }
            v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 8LL))(
                    *(_QWORD *)(v9 + 32),
                    v37,
                    &v70);
            IsValueTombstone = CmpIsValueTombstone(*(_QWORD *)(v9 + 32), v38);
            v65 = !IsValueTombstone;
            (*(void (__fastcall **)(__int64, __int64 *))(v40 + 16))(v40, &v70);
            if ( !IsValueTombstone )
            {
              started = CmpGetValueForAudit(*(_QWORD *)(v9 + 32), v37, &v83, 876694851LL);
              if ( started < 0 )
                goto LABEL_118;
            }
LABEL_91:
            v41 = *(_QWORD *)(v9 + 32);
            v42 = *(_DWORD *)(v9 + 40) >> 31;
            v66 = v42;
            if ( v77 )
            {
              LODWORD(Src) = v64;
              v50 = CmpAddValueKeyNew(v41, (size_t)Src, 1);
              v61 = v50;
              v49 = v50;
              if ( v50 == -1 )
              {
                started = -1073741670;
                goto LABEL_119;
              }
              v51 = *(_QWORD *)(v9 + 32);
              if ( v37 == -1 )
              {
                v69 = *(_DWORD *)(v9 + 280);
                started = CmpAddValueToList(v51, v50, v69, 1, v9 + 280);
                if ( started < 0 )
                  goto LABEL_118;
                v52 = v69;
                v42 = v66;
              }
              else
              {
                v52 = v68;
                CmpSwapValueInList(v51, v50, v68, v9 + 280);
              }
              HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
              if ( v37 == -1 )
              {
                v53 = 4;
              }
              else
              {
                *(_DWORD *)(v8 + 88) = v37;
                v53 = 5;
              }
              *(_DWORD *)(v8 + 68) = v53;
              *(_DWORD *)(v8 + 92) = v61;
              *(_DWORD *)(v8 + 72) = v42;
              started = CmAddLogForAction(v8, 1);
              if ( started < 0 )
              {
                if ( v35 )
                {
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v74);
                  v35 = 0LL;
                }
                HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                v54 = *(_QWORD *)(v9 + 32);
                if ( v37 == -1 )
                  CmpRemoveValueFromList(v54, v52, (unsigned int *)(v9 + 280));
                else
                  CmpSwapValueInList(v54, v37, v52, v9 + 280);
                HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                v24 = 0;
                goto LABEL_118;
              }
            }
            else
            {
              if ( v37 != -1 )
              {
                v43 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v41 + 8))(v41, v37, &v70);
                LODWORD(Size) = v64;
                started = CmpSetValueKeyExisting(*(_QWORD *)(v9 + 32), v37, v43, v63, v75, Size, v42);
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v70);
                if ( started >= 0 )
                {
                  v44 = v64;
                  goto LABEL_96;
                }
LABEL_118:
                v49 = v61;
LABEL_119:
                if ( v35 )
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v74);
                v16 = 1;
                if ( v49 != -1 )
                  CmpFreeValue(*(_QWORD *)(v9 + 32), v49);
                goto LABEL_40;
              }
              v44 = v64;
              LODWORD(v58) = v64;
              started = CmpSetValueKeyNew(v41, v63, (__int64)v75, v58, v42);
              if ( started < 0 )
                goto LABEL_118;
LABEL_96:
              v45 = String2;
              Length = String2->Length;
              if ( *(_DWORD *)(v35 + 60) < Length )
              {
                *(_DWORD *)(v35 + 60) = Length;
                *(_WORD *)(v9 + 178) = v45->Length;
              }
              if ( *(_DWORD *)(v35 + 64) < v44 )
              {
                *(_DWORD *)(v35 + 64) = v44;
                *(_DWORD *)(v9 + 180) = v44;
              }
              *(_QWORD *)(v35 + 4) = v13;
              *(_QWORD *)(v9 + 168) = v13;
              CmpCleanUpKcbCachedSymlink(v9, &v82);
              v47 = *(_DWORD *)(v35 + 36);
              *(_DWORD *)(v9 + 100) = *(_DWORD *)(v35 + 40);
              v48 = *(_QWORD *)(v9 + 32);
              *(_DWORD *)(v9 + 96) = v47;
              HvUnlockHiveFlusherShared(v48);
            }
            v8 = 0LL;
            v49 = -1;
            v59[0] = 0;
            CmpReportNotifyForKcbStack(&v72, v77, 4LL, v78);
            started = 0;
            v24 = 0;
            goto LABEL_119;
          }
        }
        CmpUnlockKcbStack(&v72);
        CmpLockKcbStackTopExclusiveRestShared(&v72);
        v15 = v60;
      }
    }
    started = CmpSnapshotTxOwnerArray(v18, &v67, &v76);
    if ( started < 0 )
      goto LABEL_38;
    CmpLogTransactionAborted(v9, 1LL, v19, v67);
    CmpUnlockKcbStack(&v72);
    v16 = 0;
    CmpCleanupKcbStack(&v72);
    v72 = 0LL;
    WORD1(v72) = -1;
    v73 = 0LL;
    CmpUnlockRegistry(v21, v20);
    started = CmpRollbackTransactionArray(v67, v76, v22, &v69);
    if ( started >= 0 )
    {
      IsShutdownRundownActive = CmpIsShutdownRundownActive();
      v7 = v60;
      continue;
    }
    break;
  }
LABEL_39:
  v24 = 0;
LABEL_40:
  v26 = v16;
LABEL_41:
  v7 = v60;
LABEL_42:
  if ( v8 )
  {
    CmpRundownUnitOfWork(v8);
    CmpFreeUnitOfWork(v8);
  }
LABEL_44:
  if ( v59[0] )
  {
    v27 = *(unsigned int *)(v9 + 284);
    if ( (_DWORD)v27 != -1 )
      HvFreeCell(*(_QWORD *)(v9 + 32), v27);
    *(_DWORD *)(v9 + 284) = -1;
    *(_DWORD *)(v9 + 280) = 0;
    *(_QWORD *)(v9 + 288) = 0LL;
  }
  if ( v24 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
  if ( v16 )
    CmpUnlockKcbStack(&v72);
  CmpDrainDelayDerefContext((_QWORD **)&v82);
  if ( v26 )
    CmpUnlockRegistry(v29, v28);
  if ( (_QWORD *)v78[0] != v78 )
    CmpSignalDeferredPosts(v78);
  CmpDetachFromRegistryProcess(v86);
  SeReleaseSubjectContext(&SubjectContext);
  v30 = v80;
  if ( started >= 0 && a7 && v80 )
  {
    *(_QWORD *)&v84 = __PAIR64__(v64, v63);
    *((_QWORD *)&v84 + 1) = v75;
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v80, 0, (_DWORD)String2, v7, v81, (__int64)&v83, v65);
  }
  if ( *((_QWORD *)&v83 + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v83 + 1), 0x34414D43u);
  if ( v30 )
    CmpFreeTransientPoolWithTag(v30, 0x33414D43u);
  CmpCleanupKcbStack(&v72);
  return (unsigned int)started;
}

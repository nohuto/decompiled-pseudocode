/*
 * XREFs of CmRenameKey @ 0x14086ED6C
 * Callers:
 *     NtRenameKey @ 0x14086B010 (NtRenameKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140227238 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140227250 (CmpDrainDelayDerefContext.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402F2D0C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1402F30C0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     Feature_MSRC76458_DisableTransactedRename__private_IsEnabled @ 0x1403EFBDC (Feature_MSRC76458_DisableTransactedRename__private_IsEnabled.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpHKeyNodeSize @ 0x1404EAC24 (CmpHKeyNodeSize.c)
 *     CmpMarkCachedFullKCBNameStale @ 0x1404EADC0 (CmpMarkCachedFullKCBNameStale.c)
 *     CmpCreateLayerLink @ 0x1405D53EC (CmpCreateLayerLink.c)
 *     CmpAllocateLayerInfoForKcb @ 0x1405D5478 (CmpAllocateLayerInfoForKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405F3B6C (CmpGetKcbAtLayerHeight.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpCleanupKcbStack @ 0x14061B470 (CmpCleanupKcbStack.c)
 *     DelistKeyBodyFromKCB @ 0x14061C990 (DelistKeyBodyFromKCB.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14061CAE0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14061D4F4 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpGetEffectiveKcbSemantics @ 0x14066BE80 (CmpGetEffectiveKcbSemantics.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKcbImmutable @ 0x14066FC50 (CmpIsKcbImmutable.c)
 *     CmpCreateKeyControlBlock @ 0x1406723D0 (CmpCreateKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByName @ 0x1406728C4 (CmpFindKcbInHashEntryByName.c)
 *     CmpGetNameControlBlock @ 0x140672990 (CmpGetNameControlBlock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140672C20 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140682488 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A1494 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x1406A183C (CmpLockIXLockExclusive.c)
 *     CmpRundownUnitOfWork @ 0x1406A1B5C (CmpRundownUnitOfWork.c)
 *     CmpSearchForOpenSubKeys @ 0x1406A2128 (CmpSearchForOpenSubKeys.c)
 *     CmpCleanupRollbackPacket @ 0x1406A34DC (CmpCleanupRollbackPacket.c)
 *     CmpReferenceKeyControlBlock @ 0x1406A364C (CmpReferenceKeyControlBlock.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406A3E1C (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpReportNotify @ 0x1406A456C (CmpReportNotify.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406BDDC0 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1406C43B8 (CmpFindSubKeyByNameWithStatus.c)
 *     CmAddLogForAction @ 0x1406D1718 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406D9BBC (CmpAllocateUnitOfWork.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1407017C0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x1407018BC (CmpMarkKeyUnbacked.c)
 *     CmpDiscardKcb @ 0x140701A1C (CmpDiscardKcb.c)
 *     CmpGetKeyNodeForKcb @ 0x1407028D4 (CmpGetKeyNodeForKcb.c)
 *     CmpRemoveSubKeyFromList @ 0x140702BC8 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyToList @ 0x140703A3C (CmpAddSubKeyToList.c)
 *     CmpHashUnicodeComponent @ 0x140703EC4 (CmpHashUnicodeComponent.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140704958 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x140704A60 (CmpCleanUpSubKeyInfo.c)
 *     CmpCopyName @ 0x1407065BC (CmpCopyName.c)
 *     HvFreeCell @ 0x140706E0C (HvFreeCell.c)
 *     HvAllocateCell @ 0x140707168 (HvAllocateCell.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140725D90 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140725ECC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1407263F0 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x140726768 (CmpSubtreeEnumeratorInitialize.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076A0E0 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14076E954 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x14076EB60 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x14077691C (CmpAbortRollbackPacket.c)
 *     EnlistKeyBodyWithKCB @ 0x14079DD2C (EnlistKeyBodyWithKCB.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140866204 (CmpReleaseKeyNodeForKcb.c)
 *     CmpInsertKeyHash @ 0x140871824 (CmpInsertKeyHash.c)
 *     CmpRemoveKeyControlBlock @ 0x140871930 (CmpRemoveKeyControlBlock.c)
 *     CmpCheckKcbStackAccess @ 0x140873E9C (CmpCheckKcbStackAccess.c)
 *     CmpDoAccessCheckOnKcbSubtree @ 0x140874250 (CmpDoAccessCheckOnKcbSubtree.c)
 *     CmpIsShutdownRundownActive @ 0x1408782BC (CmpIsShutdownRundownActive.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1408788E8 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpLogUnsupportedOperation @ 0x1408789D8 (CmpLogUnsupportedOperation.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140878BB0 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x140878D78 (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x140878DC8 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSubtreeEnumeratorReset @ 0x140878DF8 (CmpSubtreeEnumeratorReset.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x140878E58 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpDuplicateIndex @ 0x14087CA38 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x14087CC5C (CmpFreeIndexByCell.c)
 *     CmpMarkAllChildrenDirty @ 0x14087D44C (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x14087D4FC (CmpMarkEntireIndexDirty.c)
 *     CmpUpdateParentForEachSon @ 0x14087D950 (CmpUpdateParentForEachSon.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x140881584 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x140882D40 (CmpPromoteKey.c)
 *     CmpPromoteSubtreeForKcbStack @ 0x1408832AC (CmpPromoteSubtreeForKcbStack.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmRenameKey(_QWORD *a1, __m128i *a2, char a3)
{
  __int64 v3; // r12
  char v4; // di
  _QWORD *v5; // rbx
  ULONG_PTR v6; // r15
  ULONG_PTR v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _LOOKASIDE_LIST_EX *v12; // r9
  __int64 v13; // r8
  struct _LOOKASIDE_LIST_EX *v14; // r9
  int started; // r14d
  int v16; // r8d
  __int64 v17; // r8
  char v18; // di
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  char v24; // r9
  _QWORD *UnitOfWork; // rdi
  _QWORD *v26; // rbx
  char v27; // bl
  char v28; // bl
  unsigned __int8 v29; // bl
  __int16 v30; // di
  __int64 KcbAtLayerHeight; // rbx
  __int64 KeyNodeForKcb; // rax
  __int16 v33; // r14
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rcx
  unsigned int v37; // eax
  int v38; // edi
  unsigned int v39; // ebx
  __int64 v40; // rcx
  unsigned int v41; // edi
  ULONG_PTR KcbInHashEntryByName; // rax
  __int64 v43; // r8
  volatile signed __int64 *v44; // r14
  ULONG_PTR v45; // r12
  __int64 v46; // rdx
  char v47; // r12
  __int64 v48; // r8
  __int16 v49; // ax
  __int16 v50; // cx
  __int64 v51; // r12
  ULONG_PTR v52; // rax
  ULONG_PTR v53; // r14
  ULONG_PTR v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  _QWORD *v57; // rsi
  __int64 v58; // rax
  int v59; // edx
  __int64 v60; // rbx
  ULONG_PTR v61; // rdx
  ULONG_PTR v62; // rdx
  unsigned int v63; // r14d
  int v64; // eax
  __int64 EntryAtLayerHeight; // rax
  int v66; // eax
  unsigned int v67; // edi
  __int64 v68; // rax
  __int64 v69; // rbx
  _BYTE *v70; // rcx
  unsigned __int16 v71; // ax
  __int64 v72; // rbx
  unsigned __int64 v73; // rbx
  __int64 v74; // rdx
  int v75; // ecx
  int v76; // ecx
  __int64 v77; // rbx
  unsigned int v78; // edx
  __int64 v79; // rax
  char v80; // cl
  unsigned int v81; // eax
  _QWORD *v82; // rax
  __int64 v83; // rdx
  _QWORD *v84; // rcx
  __int64 v85; // rcx
  unsigned int *v86; // rax
  void *v87; // rcx
  int i; // eax
  __int64 v89; // rax
  __int64 *v90; // rsi
  _QWORD *v91; // rax
  ULONG_PTR v92; // rdi
  int v93; // eax
  __int64 v94; // rax
  __int64 v95; // rbx
  unsigned __int16 v96; // ax
  __int64 v97; // rdx
  ULONG_PTR v98; // rdi
  ULONG_PTR v99; // rcx
  ULONG_PTR v100; // rcx
  ULONG_PTR v101; // r8
  int v102; // eax
  _QWORD *v103; // rbx
  _QWORD *v104; // rcx
  ULONG_PTR v105; // rdi
  ULONG_PTR v106; // rbx
  ULONG_PTR v107; // rbx
  __int64 v109; // [rsp+30h] [rbp-D0h]
  __int64 v110; // [rsp+38h] [rbp-C8h]
  unsigned int Cell; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v112; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp-A0h]
  char v114; // [rsp+68h] [rbp-98h]
  char v115; // [rsp+69h] [rbp-97h]
  char v116; // [rsp+6Ah] [rbp-96h]
  __int16 v118; // [rsp+6Ch] [rbp-94h]
  ULONG_PTR v120; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp-80h]
  __int128 v122; // [rsp+88h] [rbp-78h] BYREF
  __int64 v123; // [rsp+98h] [rbp-68h] BYREF
  __int64 v124; // [rsp+A0h] [rbp-60h]
  __int128 v125; // [rsp+A8h] [rbp-58h] BYREF
  int v126; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+C0h] [rbp-40h]
  __int64 v128; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v129; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v130; // [rsp+D8h] [rbp-28h]
  ULONG_PTR v131; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v132; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v133; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v134; // [rsp+F8h] [rbp-8h] BYREF
  ULONG_PTR v135; // [rsp+100h] [rbp+0h]
  unsigned int v136; // [rsp+108h] [rbp+8h] BYREF
  __int64 v137; // [rsp+110h] [rbp+10h] BYREF
  __int64 v138; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int8 *NameControlBlock; // [rsp+120h] [rbp+20h]
  ULONG_PTR v140; // [rsp+128h] [rbp+28h]
  unsigned int v141; // [rsp+130h] [rbp+30h] BYREF
  ULONG_PTR v142; // [rsp+138h] [rbp+38h] BYREF
  _QWORD *v143; // [rsp+140h] [rbp+40h]
  _OWORD v144[2]; // [rsp+148h] [rbp+48h] BYREF
  _OWORD v145[2]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v146[112]; // [rsp+190h] [rbp+90h] BYREF

  v3 = 0LL;
  v4 = a3;
  v5 = a1;
  v143 = a1;
  v138 = 0LL;
  v126 = 0;
  v122 = 0LL;
  memset(v146, 0, 0x68uLL);
  memset(v144, 0, sizeof(v144));
  WORD1(v144[0]) = -1;
  v6 = 0LL;
  memset(v145, 0, sizeof(v145));
  WORD1(v145[0]) = -1;
  v7 = 0LL;
  v137 = 0LL;
  v125 = 0LL;
  v140 = 0LL;
  BugCheckParameter4 = 0LL;
  v135 = 0LL;
  v131 = 0LL;
  v112 = 0LL;
  BugCheckParameter2 = 0LL;
  v124 = 0LL;
  v134 = 0xFFFFFFFFLL;
  v128 = 0xFFFFFFFFLL;
  Cell = -1;
  v132 = 0LL;
  v129 = 0xFFFFFFFFLL;
  v123 = 0xFFFFFFFFLL;
  v130 = 0LL;
  v133 = 0xFFFFFFFFLL;
  NameControlBlock = 0LL;
  v120 = -1LL;
  CmpSubtreeEnumeratorInitialize((__int64)v146);
  CmpInitializeDelayDerefContext(&v122);
  v8 = MEMORY[0xFFFFF78000000014];
  if ( (unsigned __int8)CmpIsShutdownRundownActive(v10, v9) )
  {
LABEL_200:
    started = -1073741431;
    v115 = 0;
    goto LABEL_201;
  }
  while ( 1 )
  {
    CmpLockRegistryExclusive();
    v6 = v5[1];
    v115 = 1;
    v7 = *(_QWORD *)(v6 + 72);
    started = CmpStartKcbStackForTopLayerKcb((__int64)v144, v6, v11, v12);
    if ( started < 0 )
      goto LABEL_201;
    started = CmpStartKcbStackForTopLayerKcb((__int64)v145, v7, v13, v14);
    if ( started < 0 )
      goto LABEL_201;
    if ( (*(_DWORD *)(v6 + 8) & 0x180) != 0
      || CmpIsKcbImmutable(v6)
      || *(PVOID *)(v6 + 32) == CmpMasterHive
      || (*(_DWORD *)(v6 + 184) & 0x40000) != 0 )
    {
      started = -1073741790;
LABEL_201:
      v35 = 0LL;
      goto LABEL_202;
    }
    started = CmpPerformKeyBodyDeletionCheck((__int64)v5, 0LL);
    if ( started < 0 )
      goto LABEL_201;
    if ( v5[7] || v5[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(v5, &v138);
      if ( started < 0 )
        goto LABEL_201;
      v3 = v138;
      started = CmpPerformKeyBodyDeletionCheck((__int64)v5, v138);
      if ( started < 0 )
        goto LABEL_87;
    }
    else
    {
      v138 = 0LL;
    }
    if ( *(_WORD *)(v6 + 66) && v3 )
    {
      CmpLogUnsupportedOperation(26LL);
LABEL_86:
      started = -1073741822;
      goto LABEL_87;
    }
    if ( v3 )
    {
      CmpLogUnsupportedOperation(24LL);
      if ( (unsigned int)Feature_MSRC76458_DisableTransactedRename__private_IsEnabled() )
        goto LABEL_86;
    }
    LOBYTE(v16) = v4;
    started = CmpCheckKcbStackAccess((unsigned int)v145, v3, v16, 4, 0);
    if ( started < 0 )
      goto LABEL_91;
    LOBYTE(v17) = v4;
    v18 = 0;
    started = CmpDoAccessCheckOnKcbSubtree(v144, v3, v17, *(_WORD *)(v6 + 66) != 0 ? 196633 : 0x10000);
    if ( started < 0 )
      goto LABEL_182;
    CmpFlushNotifiesOnKeyBodyList(v6, 0LL, (__int64)&v122, 1);
    CmpReportNotify(v6, v3, 1LL, 0LL);
    if ( v3 )
    {
      if ( *(_QWORD *)(v6 + 208) != v6 + 208 )
      {
        started = -1072103423;
        goto LABEL_182;
      }
      UnitOfWork = CmpAllocateUnitOfWork();
      v140 = (ULONG_PTR)UnitOfWork;
      if ( !UnitOfWork || (v26 = CmpAllocateUnitOfWork(), (v135 = (ULONG_PTR)v26) == 0) )
      {
        started = -1073741670;
        goto LABEL_91;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, v7);
      CmpTransEnlistUowInKcb(v26, v6);
      started = CmpTransEnlistUowInCmTrans(UnitOfWork, v3);
      if ( started < 0 )
        goto LABEL_91;
      started = CmpTransEnlistUowInCmTrans(v26, v3);
      if ( started < 0 )
        goto LABEL_91;
      v27 = CmpLockIXLockExclusive(v7 + 248, UnitOfWork, 0);
      v28 = CmpLockIXLockExclusive(v7 + 264, UnitOfWork, 1) & v27;
      v114 = 0;
      v29 = CmpLockIXLockExclusive(v6 + 248, (_QWORD *)v135, 0) & v28;
      if ( ((unsigned __int8)CmpLockIXLockExclusive(v6 + 264, (_QWORD *)v135, 1) & v29) == 0 )
      {
        started = -1072103423;
LABEL_91:
        v35 = 0LL;
        goto LABEL_92;
      }
      v24 = 0;
    }
    else
    {
      LOBYTE(v19) = 1;
      started = CmpTryAcquireKcbIXLocks(v6, v19, v20, (__int64)&v125);
      if ( started == -1073741267 )
      {
        v18 = 1;
        v114 = 1;
      }
      else
      {
        v114 = 0;
        if ( started < 0 )
          goto LABEL_91;
      }
      LOBYTE(v21) = 1;
      v23 = CmpTryAcquireKcbIXLocks(v7, v21, v22, (__int64)&v125);
      started = v23;
      if ( v23 == -1073741267 )
        goto LABEL_27;
      v24 = 0;
      if ( v23 < 0 )
      {
LABEL_88:
        v35 = 0LL;
        v57 = 0LL;
        goto LABEL_203;
      }
      if ( v18 )
      {
LABEL_27:
        CmpLogTransactionAbortedForRollbackPacket(v6, 4u);
        CmpDrainDelayDerefContext((_QWORD **)&v122);
        CmpUnlockRegistry();
        v3 = 0LL;
        v115 = 0;
        started = CmpAbortRollbackPacket((__int64)&v125);
        if ( started >= 0 )
        {
          CmpCleanupRollbackPacket((__int64)&v125);
          goto LABEL_83;
        }
        v35 = 0LL;
LABEL_90:
        v57 = 0LL;
        goto LABEL_203;
      }
    }
    v30 = *(_WORD *)(v7 + 66);
    LODWORD(BugCheckParameter3) = -1;
    v136 = -1;
    v124 = 0LL;
    if ( v30 < 0 )
      goto LABEL_49;
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v145, v30);
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) == 1 )
      {
LABEL_43:
        v33 = -1;
        v34 = v124;
        goto LABEL_44;
      }
      if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
        break;
LABEL_42:
      if ( --v30 < 0 )
        goto LABEL_43;
    }
    KeyNodeForKcb = CmpGetKeyNodeForKcb(KcbAtLayerHeight, (__int64)&v128, 1);
    started = CmpFindSubKeyByNameWithStatus(
                *(_QWORD *)(KcbAtLayerHeight + 32),
                KeyNodeForKcb,
                (unsigned __int16 *)a2,
                &v136);
    CmpReleaseKeyNodeForKcb(KcbAtLayerHeight);
    v24 = 0;
    if ( started < 0 )
    {
      if ( started != -1073741772 )
        goto LABEL_88;
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) )
        goto LABEL_43;
      goto LABEL_42;
    }
    v34 = *(_QWORD *)(KcbAtLayerHeight + 32);
    v33 = v30;
    v124 = v34;
LABEL_44:
    LODWORD(BugCheckParameter3) = v136;
    if ( v136 == -1 )
    {
LABEL_49:
      v116 = v24;
      goto LABEL_50;
    }
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v34 + 8))(v34, v136, &v134);
    if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v124, v35) != 1 )
    {
      started = -1073741535;
      goto LABEL_202;
    }
    (*(void (__fastcall **)(__int64, __int64 *))(v36 + 16))(v36, &v134);
    v116 = 1;
    if ( v33 != *(_WORD *)(v7 + 66) )
    {
      LODWORD(BugCheckParameter3) = -1;
      v124 = 0LL;
    }
LABEL_50:
    v37 = CmpHashUnicodeComponent(a2);
    v38 = 37 * *(_DWORD *)(v7 + 16);
    v39 = v37;
    v40 = *(_QWORD *)(v7 + 32);
    v141 = v37;
    v41 = v37 + v38;
    KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v40, v41, v7, (__int64)a2);
    v112 = KcbInHashEntryByName;
    v44 = (volatile signed __int64 *)KcbInHashEntryByName;
    if ( KcbInHashEntryByName )
      CmpReferenceKeyControlBlock(KcbInHashEntryByName);
    if ( v3 )
    {
      if ( v44 )
      {
        CmpReferenceKeyControlBlockUnsafe(v44);
        v90 = (__int64 *)a2;
        v131 = (ULONG_PTR)v44;
        goto LABEL_186;
      }
      v90 = (__int64 *)a2;
      started = CmpCreateKeyControlBlock(*(_QWORD *)(v7 + 32), -1, v7, 0LL, 0, (unsigned __int16 *)a2, v39, v41, &v131);
      v35 = 0LL;
      if ( started >= 0 )
      {
LABEL_186:
        v91 = CmpAllocateUnitOfWork();
        v35 = 0LL;
        BugCheckParameter4 = (ULONG_PTR)v91;
        if ( v91 )
        {
          v92 = v131;
          CmpTransEnlistUowInKcb(v91, v131);
          started = CmpTransEnlistUowInCmTrans((_QWORD *)BugCheckParameter4, v3);
          if ( started < 0 )
            goto LABEL_202;
          CmpLockIXLockExclusive(v92 + 248, (_QWORD *)BugCheckParameter4, 0);
          CmpLockIXLockExclusive(v92 + 264, (_QWORD *)BugCheckParameter4, 1);
          v93 = CmpHKeyNodeSize();
          Cell = HvAllocateCell(*(_QWORD *)(v7 + 32), v93, 1LL, (__int64)&v132, (__int64)&v129);
          v67 = Cell;
          if ( Cell == -1 )
          {
            v45 = v112;
            v57 = (_QWORD *)BugCheckParameter4;
            started = -1073741443;
          }
          else
          {
            v94 = CmpGetKeyNodeForKcb(v6, (__int64)&v123, 1);
            v95 = v132;
            *(_OWORD *)v132 = *(_OWORD *)v94;
            *(_OWORD *)(v95 + 16) = *(_OWORD *)(v94 + 16);
            *(_OWORD *)(v95 + 32) = *(_OWORD *)(v94 + 32);
            *(_OWORD *)(v95 + 48) = *(_OWORD *)(v94 + 48);
            *(_QWORD *)(v95 + 64) = *(_QWORD *)(v94 + 64);
            *(_DWORD *)(v95 + 72) = *(_DWORD *)(v94 + 72);
            CmpReleaseKeyNodeForKcb(v6);
            v96 = CmpCopyName((_BYTE *)(v95 + 76), v90);
            *(_WORD *)(v95 + 72) = v96;
            if ( v96 >= *(_WORD *)v90 )
              *(_WORD *)(v95 + 2) &= ~0x20u;
            else
              *(_WORD *)(v95 + 2) |= 0x20u;
            v97 = v132;
            v98 = v131;
            v99 = v131;
            *(_QWORD *)(v132 + 4) = MEMORY[0xFFFFF78000000014];
            *(_DWORD *)(v99 + 40) = Cell;
            CmpRebuildKcbCacheFromNode(v99, v97, (__int64)&v122, 1);
            (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v7 + 32) + 16LL))(*(_QWORD *)(v7 + 32), &v129);
            v100 = v140;
            v101 = v135;
            *(_DWORD *)(v140 + 68) = 10;
            *(_QWORD *)(v100 + 88) = v6;
            *(_QWORD *)(v100 + 96) = v98;
            *(_DWORD *)(v101 + 68) = 11;
            *(_QWORD *)(v101 + 88) = v98;
            *(_DWORD *)(BugCheckParameter4 + 68) = 12;
            *(_QWORD *)(BugCheckParameter4 + 88) = v6;
            v102 = *(_DWORD *)(v6 + 40) >> 31;
            *(_QWORD *)(BugCheckParameter4 + 80) = v100;
            *(_DWORD *)(BugCheckParameter4 + 72) = v102;
            started = CmAddLogForAction(v101, 1u);
            v35 = 0LL;
            if ( started < 0 )
              goto LABEL_202;
            v103 = v143;
            v104 = v143;
            *(_QWORD *)(v98 + 240) = v138;
            DelistKeyBodyFromKCB(v104, 1);
            v103[1] = v98;
            EnlistKeyBodyWithKCB(v103, 2);
            v131 = 0LL;
            CmpDereferenceKeyControlBlockWithLock(v6, (__int64)&v122, 0);
            v140 = 0LL;
            v57 = 0LL;
            v135 = 0LL;
            started = 0;
            v35 = 0LL;
            v67 = -1;
            v45 = v112;
          }
          goto LABEL_205;
        }
        started = -1073741670;
      }
LABEL_92:
      v57 = 0LL;
      goto LABEL_203;
    }
    v45 = (ULONG_PTR)v44;
    if ( !v44 )
    {
      v47 = v114;
      goto LABEL_64;
    }
    started = CmpTryAcquireKcbIXLocks((__int64)v44, 1LL, v43, (__int64)&v125);
    if ( started == -1073741267 )
    {
      v47 = 1;
      goto LABEL_58;
    }
    if ( started < 0 )
    {
LABEL_94:
      v35 = 0LL;
      v57 = 0LL;
      goto LABEL_204;
    }
    v47 = v114;
LABEL_58:
    LOBYTE(v46) = 1;
    started = CmpPrepareToInvalidateAllHigherLayerKcbs(v112, v46, &v125);
    if ( started == -1073741267 )
    {
      v47 = 1;
      goto LABEL_61;
    }
    if ( started < 0 )
      goto LABEL_91;
LABEL_61:
    started = CmpPrepareForSubtreeInvalidation(v112, (__int64)&v125);
    if ( started == -1073741267 )
    {
      v47 = 1;
      goto LABEL_64;
    }
    if ( started < 0 )
      goto LABEL_91;
LABEL_64:
    started = CmpPrepareToInvalidateAllHigherLayerKcbs(v6, 1LL, &v125);
    if ( started == -1073741267 )
    {
      v47 = 1;
      goto LABEL_68;
    }
    if ( started < 0 )
      goto LABEL_91;
LABEL_68:
    if ( !*(_WORD *)(v6 + 66) )
      goto LABEL_71;
    started = CmpPrepareForSubtreeInvalidation(v6, (__int64)&v125);
    if ( started != -1073741267 )
    {
      if ( started < 0 )
        goto LABEL_91;
LABEL_71:
      if ( !v47 )
        break;
    }
    CmpLogTransactionAbortedForRollbackPacket(v6, 4u);
    v45 = v112;
    if ( v112 )
    {
      CmpDereferenceKeyControlBlockWithLock(v112, (__int64)&v122, 0);
      v45 = 0LL;
      v112 = 0LL;
    }
    CmpDrainDelayDerefContext((_QWORD **)&v122);
    CmpUnlockRegistry();
    v115 = 0;
    started = CmpAbortRollbackPacket((__int64)&v125);
    if ( started < 0 )
      goto LABEL_94;
    CmpCleanupRollbackPacket((__int64)&v125);
    v5 = v143;
    v3 = 0LL;
LABEL_83:
    v125 = 0LL;
    CmpCleanupKcbStack((__int64)v144);
    CmpCleanupKcbStack((__int64)v145);
    v8 = MEMORY[0xFFFFF78000000014];
    if ( (unsigned __int8)CmpIsShutdownRundownActive(v56, v55) )
      goto LABEL_200;
    v4 = a3;
  }
  v45 = v112;
  if ( v112 )
  {
    CmpInvalidateAllHigherLayerKcbs(v112, 1LL, 8LL, &v122);
    CmpInvalidateSubtree(v112, 8, (__int64)&v122, 0LL);
    CmpFlushNotifiesOnKeyBodyList(v112, 8LL, (__int64)&v122, 1);
    CmpDiscardKcb(v112, (__int64)&v122);
  }
  CmpInvalidateAllHigherLayerKcbs(v6, 1LL, 8LL, &v122);
  v49 = *(_WORD *)(v6 + 66);
  if ( v49 )
  {
    CmpInvalidateSubtree(v6, 8, (__int64)&v122, 0LL);
    v49 = *(_WORD *)(v6 + 66);
  }
  v50 = 0;
  v118 = 0;
  if ( v49 <= 0 )
  {
LABEL_108:
    if ( *(_WORD *)(v6 + 66) )
    {
      started = CmpPromoteKey(v144, 1LL, 0LL);
      v35 = 0LL;
      if ( started < 0 )
        goto LABEL_202;
      started = CmpPromoteSubtreeForKcbStack(v144);
      if ( started < 0 )
        goto LABEL_202;
    }
    LOBYTE(v48) = 1;
    if ( !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40), v48)
      || (v60 = CmpGetKeyNodeForKcb(v7, (__int64)&v133, 1),
          v130 = v60,
          v61 = *(unsigned int *)(v60 + 28),
          (_DWORD)v61 != -1)
      && !(unsigned __int8)CmpMarkEntireIndexDirty(*(_QWORD *)(v7 + 32), v61) )
    {
      started = -1073741443;
      v35 = 0LL;
      v57 = 0LL;
      goto LABEL_204;
    }
    v62 = *(unsigned int *)(v60 + 32);
    if ( (_DWORD)v62 == -1 )
    {
      v35 = 0LL;
    }
    else
    {
      v35 = 0LL;
      if ( !(unsigned __int8)CmpMarkEntireIndexDirty(*(_QWORD *)(v7 + 32), v62) )
      {
        started = -1073741443;
        v57 = 0LL;
        goto LABEL_204;
      }
    }
    if ( !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40), 1LL)
      || (v63 = BugCheckParameter3, (_DWORD)BugCheckParameter3 != -1)
      && !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v7 + 32), (unsigned int)BugCheckParameter3, 1LL) )
    {
      v57 = 0LL;
      started = -1073741443;
      goto LABEL_204;
    }
    if ( v116 )
    {
      started = CmpSubtreeEnumeratorStartForKcbStack(v146, v144);
      if ( started < 0 )
        goto LABEL_202;
      v64 = CmpSubtreeEnumeratorAdvance((__int64)v146);
      v35 = 0LL;
      while ( 1 )
      {
        if ( v64 == -2147483622 )
        {
          v63 = BugCheckParameter3;
          goto LABEL_133;
        }
        CmpSubtreeEnumeratorGetCurrentKeyStacks(v146, 0LL, &v137);
        EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v137, *(_WORD *)(v6 + 66));
        if ( !(unsigned __int8)HvMarkCellDirty(
                                 *(_QWORD *)EntryAtLayerHeight,
                                 *(unsigned int *)(EntryAtLayerHeight + 8),
                                 1LL) )
          break;
        v64 = CmpSubtreeEnumeratorAdvance((__int64)v146);
      }
      started = -1073741443;
      goto LABEL_90;
    }
    if ( !(unsigned __int8)CmpMarkAllChildrenDirty(*(_QWORD *)(v6 + 32)) )
    {
      started = -1073741443;
      goto LABEL_202;
    }
LABEL_133:
    v66 = CmpHKeyNodeSize();
    Cell = HvAllocateCell(*(_QWORD *)(v6 + 32), v66, *(_DWORD *)(v6 + 40) >> 31, (__int64)&v132, (__int64)&v129);
    if ( Cell == -1 )
    {
      v45 = v112;
      started = -1073741443;
      v57 = 0LL;
      v67 = -1;
      goto LABEL_205;
    }
    v68 = CmpGetKeyNodeForKcb(v6, (__int64)&v123, 1);
    v69 = v132;
    v70 = (_BYTE *)(v132 + 76);
    *(_OWORD *)v132 = *(_OWORD *)v68;
    *(_OWORD *)(v69 + 16) = *(_OWORD *)(v68 + 16);
    *(_OWORD *)(v69 + 32) = *(_OWORD *)(v68 + 32);
    *(_OWORD *)(v69 + 48) = *(_OWORD *)(v68 + 48);
    *(_QWORD *)(v69 + 64) = *(_QWORD *)(v68 + 64);
    *(_DWORD *)(v69 + 72) = *(_DWORD *)(v68 + 72);
    v71 = CmpCopyName(v70, a2);
    *(_WORD *)(v69 + 72) = v71;
    if ( v71 >= (unsigned int)a2->m128i_i16[0] )
      *(_WORD *)(v69 + 2) &= ~0x20u;
    else
      *(_WORD *)(v69 + 2) |= 0x20u;
    *(_QWORD *)(v69 + 4) = v8;
    if ( v116 )
      *(_BYTE *)(v69 + 13) |= 3u;
    CmpReleaseKeyNodeForKcb(v6);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v6 + 32) + 16LL))(*(_QWORD *)(v6 + 32), &v129);
    NameControlBlock = CmpGetNameControlBlock((unsigned __int16 *)a2, &v141);
    if ( NameControlBlock )
    {
      v72 = v130;
      if ( *(_DWORD *)(v130 + 28) == -1 || (LODWORD(v120) = CmpDuplicateIndex(*(_QWORD *)(v7 + 32)), (_DWORD)v120 != -1) )
      {
        if ( *(_DWORD *)(v72 + 32) == -1
          || (HIDWORD(v120) = CmpDuplicateIndex(*(_QWORD *)(v7 + 32)), HIDWORD(v120) != -1) )
        {
          if ( v63 != -1
            && !CmpRemoveSubKeyFromList(*(_QWORD *)(v7 + 32), (int *)&v120 + ((unsigned __int64)v63 >> 31), v63) )
          {
            started = -1073741443;
            goto LABEL_87;
          }
          v73 = (unsigned __int64)Cell >> 31;
          if ( !CmpAddSubKeyToList(*(_QWORD *)(v7 + 32), (unsigned int *)&v120 + v73, Cell) )
          {
            started = -1073741670;
LABEL_153:
            v35 = 0LL;
            v57 = 0LL;
            goto LABEL_203;
          }
          if ( !*(_WORD *)(v6 + 66)
            && !CmpRemoveSubKeyFromList(
                  *(_QWORD *)(v7 + 32),
                  (int *)&v120 + ((unsigned __int64)*(unsigned int *)(v6 + 40) >> 31),
                  *(_DWORD *)(v6 + 40)) )
          {
            started = -1073741443;
            goto LABEL_153;
          }
          v74 = v130;
          v75 = *(_DWORD *)(v130 + 28);
          *(_DWORD *)(v130 + 28) = v120;
          LODWORD(v120) = v75;
          v76 = *(_DWORD *)(v74 + 32);
          *(_DWORD *)(v74 + 32) = HIDWORD(v120);
          HIDWORD(v120) = v76;
          if ( v63 != -1 )
            --*(_DWORD *)(v74 + 4 * ((unsigned __int64)v63 >> 31) + 20);
          ++*(_DWORD *)(v74 + 4 * v73 + 20);
          if ( !*(_WORD *)(v6 + 66) )
            --*(_DWORD *)(v74 + 4 * ((unsigned __int64)*(unsigned int *)(v6 + 40) >> 31) + 20);
          CmpCleanUpSubKeyInfo(v7, 1);
          v77 = v130;
          v78 = a2->m128i_u16[0];
          if ( (unsigned __int16)*(_DWORD *)(v130 + 52) < v78 )
          {
            *(_WORD *)(v130 + 52) = v78;
            *(_WORD *)(v7 + 176) = a2->m128i_i16[0];
          }
          if ( *(_WORD *)(v6 + 66) )
          {
            v79 = CmpGetKeyNodeForKcb(v6, (__int64)&v123, 1);
            v80 = *(_BYTE *)(v79 + 13);
            *(_WORD *)(v79 + 2) &= 0x20u;
            *(_DWORD *)(v79 + 28) = -1;
            *(_BYTE *)(v79 + 13) = v80 & 0x7C | 1;
            *(_WORD *)(v79 + 52) = 0;
            *(_DWORD *)(v79 + 52) &= 0xFF00FFFF;
            *(_BYTE *)(v79 + 55) = 0;
            *(_QWORD *)(v79 + 20) = 0LL;
            *(_DWORD *)(v79 + 32) = -1;
            *(_DWORD *)(v79 + 36) = 0;
            *(_DWORD *)(v79 + 40) = -1;
            *(_DWORD *)(v79 + 48) = -1;
            *(_QWORD *)(v79 + 56) = 0LL;
            *(_DWORD *)(v79 + 64) = 0;
            *(_WORD *)(v79 + 74) = 0;
            CmpReleaseKeyNodeForKcb(v6);
          }
          else
          {
            HvFreeCell(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
          }
          v81 = Cell;
          Cell = -1;
          *(_DWORD *)(v6 + 40) = v81;
          if ( *(_WORD *)(v6 + 66) )
          {
            v82 = *(_QWORD **)(v6 + 192);
            v83 = *v82;
            if ( *(_QWORD **)(*v82 + 8LL) != v82 || (v84 = (_QWORD *)v82[1], (_QWORD *)*v84 != v82) )
              __fastfail(3u);
            *v84 = v83;
            *(_QWORD *)(v83 + 8) = v84;
            CmpDereferenceKeyControlBlockWithLock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 192) + 24LL) + 16LL),
              (__int64)&v122,
              0);
            *(_QWORD *)(*(_QWORD *)(v6 + 192) + 24LL) = 0LL;
            CmpCreateLayerLink(BugCheckParameter2, v6);
          }
          CmpRemoveKeyControlBlock(v6);
          v85 = *(_QWORD *)(v6 + 32);
          *(_DWORD *)(v6 + 16) = v41;
          CmpInsertKeyHash(v85);
          v86 = *(unsigned int **)(v6 + 80);
          *(_QWORD *)(v6 + 80) = NameControlBlock;
          NameControlBlock = (unsigned __int8 *)v86;
          CmpMarkCachedFullKCBNameStale(v6);
          v87 = *(void **)(v6 + 200);
          if ( (unsigned __int64)v87 >= 2 )
            ExFreePoolWithTag(v87, 0x624E4D43u);
          *(_QWORD *)(v6 + 200) = 0LL;
          if ( v116 )
            *(_BYTE *)(v6 + 65) = 3;
          CmpUpdateParentForEachSon(*(_QWORD *)(v6 + 32));
          if ( v116 )
          {
            CmpSubtreeEnumeratorReset(v146);
            CmpSubtreeEnumeratorBeginForKcbStack(v146, v144);
            for ( i = CmpSubtreeEnumeratorAdvance((__int64)v146);
                  i != -2147483622;
                  i = CmpSubtreeEnumeratorAdvance((__int64)v146) )
            {
              CmpSubtreeEnumeratorGetCurrentKeyStacks(v146, 0LL, &v137);
              v89 = CmpKeyNodeStackGetEntryAtLayerHeight(v137, *(_WORD *)(v6 + 66));
              *(_BYTE *)(*(_QWORD *)(v89 + 16) + 13LL) |= 3u;
            }
          }
          *(_QWORD *)(v77 + 4) = v8;
          *(_QWORD *)(v7 + 168) = v8;
          CmpReleaseKeyNodeForKcb(v7);
          v130 = 0LL;
          CmpSearchForOpenSubKeys(v6, 1, 0LL);
          ++*(_QWORD *)(v7 + 304);
          ++*(_QWORD *)(v6 + 304);
          if ( v63 != -1 )
            HvFreeCell(*(_QWORD *)(v7 + 32), v63);
          started = 0;
LABEL_182:
          v35 = 0LL;
          v57 = 0LL;
          goto LABEL_203;
        }
      }
    }
    started = -1073741670;
LABEL_87:
    v35 = 0LL;
    v57 = 0LL;
    goto LABEL_203;
  }
  do
  {
    v51 = CmpGetKcbAtLayerHeight((__int64)v145, v50);
    v52 = CmpFindKcbInHashEntryByName(*(_QWORD *)(v7 + 32), v41, v7, (__int64)a2);
    v142 = v52;
    v53 = v52;
    if ( v52 )
    {
      CmpReferenceKeyControlBlock(v52);
      CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
      v54 = v53;
    }
    else
    {
      if ( *(_DWORD *)(v51 + 40) == -1
        || (v58 = CmpGetKeyNodeForKcb(v51, (__int64)&v128, 1),
            started = CmpFindSubKeyByNameWithStatus(*(_QWORD *)(v51 + 32), v58, (unsigned __int16 *)a2, &v126),
            CmpReleaseKeyNodeForKcb(v51),
            started == -1073741772) )
      {
        v59 = -1;
        v126 = -1;
      }
      else
      {
        if ( started < 0 )
          goto LABEL_87;
        v59 = v126;
      }
      LODWORD(v110) = v41;
      LODWORD(v109) = v39;
      started = CmpCreateKeyControlBlock(
                  *(_QWORD *)(v51 + 32),
                  v59,
                  v51,
                  BugCheckParameter2,
                  0,
                  (unsigned __int16 *)a2,
                  v109,
                  v110,
                  &v142);
      if ( started < 0 )
        goto LABEL_91;
      if ( BugCheckParameter2 )
        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
      v54 = v142;
    }
    v50 = v118 + 1;
    BugCheckParameter2 = v54;
    v118 = v50;
  }
  while ( v50 < *(__int16 *)(v6 + 66) );
  if ( !v54 )
  {
    v45 = v112;
    goto LABEL_108;
  }
  started = CmpAllocateLayerInfoForKcb(v54);
  v35 = 0LL;
  if ( started >= 0 )
  {
    v45 = v112;
    goto LABEL_108;
  }
LABEL_202:
  v57 = (_QWORD *)BugCheckParameter4;
LABEL_203:
  v45 = v112;
LABEL_204:
  v67 = Cell;
LABEL_205:
  CmpSubtreeEnumeratorCleanup((__int64)v146);
  if ( v130 )
    CmpReleaseKeyNodeForKcb(v7);
  if ( v35 )
    (*(void (__fastcall **)(__int64, __int64 *))(v124 + 16))(v124, &v134);
  if ( (_DWORD)v120 != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v7 + 32), (unsigned int)v120);
  if ( HIDWORD(v120) != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v7 + 32), HIDWORD(v120));
  if ( v67 != -1 )
    HvFreeCell(*(_QWORD *)(v6 + 32), v67);
  if ( NameControlBlock )
    CmpDereferenceNameControlBlockWithLock((unsigned int *)NameControlBlock);
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2, (__int64)&v122, 0);
  v105 = v131;
  if ( v131 )
  {
    CmpMarkKeyUnbacked(v131);
    CmpDereferenceKeyControlBlockWithLock(v105, (__int64)&v122, 0);
  }
  if ( v45 )
    CmpDereferenceKeyControlBlockWithLock(v45, (__int64)&v122, 0);
  if ( v57 )
  {
    CmpRundownUnitOfWork(v57);
    CmpFreeUnitOfWork(v57);
  }
  v106 = v135;
  if ( v135 )
  {
    CmpRundownUnitOfWork((_QWORD *)v135);
    CmpFreeUnitOfWork(v106);
  }
  v107 = v140;
  if ( v140 )
  {
    CmpRundownUnitOfWork((_QWORD *)v140);
    CmpFreeUnitOfWork(v107);
  }
  CmpDrainDelayDerefContext((_QWORD **)&v122);
  if ( v115 )
    CmpUnlockRegistry();
  CmpCleanupKcbStack((__int64)v144);
  CmpCleanupKcbStack((__int64)v145);
  CmpCleanupRollbackPacket((__int64)&v125);
  return (unsigned int)started;
}

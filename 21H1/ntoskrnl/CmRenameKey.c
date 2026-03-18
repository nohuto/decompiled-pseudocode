/*
 * XREFs of CmRenameKey @ 0x140867FFC
 * Callers:
 *     NtRenameKey @ 0x1408642D0 (NtRenameKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14025EE84 (CmpInitializeDelayDerefContext.c)
 *     CmpTransEnlistUowInKcb @ 0x1402D2D14 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402E1B1C (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpCreateLayerLink @ 0x1405CDB78 (CmpCreateLayerLink.c)
 *     CmpAllocateLayerInfoForKcb @ 0x1405CDC04 (CmpAllocateLayerInfoForKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14061ABF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x14061CD58 (CmpGetKcbAtLayerHeight.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14061CE00 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpCreateKeyControlBlock @ 0x14061CE30 (CmpCreateKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByName @ 0x14061D324 (CmpFindKcbInHashEntryByName.c)
 *     CmpGetNameControlBlock @ 0x14061D3F0 (CmpGetNameControlBlock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x14061D680 (CmpDereferenceNameControlBlockWithLock.c)
 *     DelistKeyBodyFromKCB @ 0x1406229D0 (DelistKeyBodyFromKCB.c)
 *     CmpCleanupKcbStack @ 0x140626070 (CmpCleanupKcbStack.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406569A4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpReportNotify @ 0x1406581E4 (CmpReportNotify.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x140658FF0 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpSearchForOpenSubKeys @ 0x140659498 (CmpSearchForOpenSubKeys.c)
 *     CmpReferenceKeyControlBlock @ 0x1406596B4 (CmpReferenceKeyControlBlock.c)
 *     CmpCleanupRollbackPacket @ 0x14065B6DC (CmpCleanupRollbackPacket.c)
 *     CmpLockIXLockExclusive @ 0x14068E09C (CmpLockIXLockExclusive.c)
 *     CmpRundownUnitOfWork @ 0x14068E618 (CmpRundownUnitOfWork.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14068E788 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140691D6C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x140691E68 (CmpMarkKeyUnbacked.c)
 *     CmpGetKeyNodeForKcb @ 0x140692A30 (CmpGetKeyNodeForKcb.c)
 *     CmpRemoveSubKeyFromList @ 0x140692D44 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyToList @ 0x1406933B0 (CmpAddSubKeyToList.c)
 *     CmpHashUnicodeComponent @ 0x1406937F4 (CmpHashUnicodeComponent.c)
 *     CmpDiscardKcb @ 0x1406939DC (CmpDiscardKcb.c)
 *     CmpGetEffectiveKcbSemantics @ 0x140694910 (CmpGetEffectiveKcbSemantics.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140696828 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x140696930 (CmpCleanUpSubKeyInfo.c)
 *     CmpCopyName @ 0x14069818C (CmpCopyName.c)
 *     HvFreeCell @ 0x1406989DC (HvFreeCell.c)
 *     HvAllocateCell @ 0x140698D38 (HvAllocateCell.c)
 *     CmpNameSize @ 0x1406C22BC (CmpNameSize.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C2C50 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406C8D88 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1406CFC28 (CmpFindSubKeyByNameWithStatus.c)
 *     CmAddLogForAction @ 0x1406DBB4C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406E3928 (CmpAllocateUnitOfWork.c)
 *     CmpPromoteSubtree @ 0x140715408 (CmpPromoteSubtree.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140715950 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140715A40 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140715B7C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1407160A0 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x140716418 (CmpSubtreeEnumeratorInitialize.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1407599F0 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14075DFD4 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x14075E1E0 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x140765F2C (CmpAbortRollbackPacket.c)
 *     EnlistKeyBodyWithKCB @ 0x14078F08C (EnlistKeyBodyWithKCB.c)
 *     CmpReleaseKeyNodeForKcb @ 0x14085F494 (CmpReleaseKeyNodeForKcb.c)
 *     CmpInsertKeyHash @ 0x14086AA4C (CmpInsertKeyHash.c)
 *     CmpRemoveKeyControlBlock @ 0x14086AB58 (CmpRemoveKeyControlBlock.c)
 *     CmpCheckKcbStackAccess @ 0x14086C8F0 (CmpCheckKcbStackAccess.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140871AA8 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpLogUnsupportedOperation @ 0x140871B98 (CmpLogUnsupportedOperation.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140871D70 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x140871F38 (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x140871F88 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSubtreeEnumeratorReset @ 0x140871FB8 (CmpSubtreeEnumeratorReset.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x140872018 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpDuplicateIndex @ 0x140875BD8 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x140875DF0 (CmpFreeIndexByCell.c)
 *     CmpMarkAllChildrenDirty @ 0x1408765E0 (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x140876690 (CmpMarkEntireIndexDirty.c)
 *     CmpUpdateParentForEachSon @ 0x140876AE4 (CmpUpdateParentForEachSon.c)
 *     HvMarkCellDirty @ 0x140877500 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087A724 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x14087BEA0 (CmpPromoteKey.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmRenameKey(_QWORD *a1, unsigned __int16 *a2, KPROCESSOR_MODE a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  ULONG_PTR v5; // r15
  ULONG_PTR v6; // r13
  ULONG_PTR v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r8
  struct _LOOKASIDE_LIST_EX *v10; // r9
  __int64 v11; // r8
  struct _LOOKASIDE_LIST_EX *v12; // r9
  int started; // r14d
  _DWORD *v14; // rcx
  int v15; // r8d
  __int64 v16; // r12
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  _QWORD *v21; // rdi
  _QWORD *v22; // rbx
  char v23; // bl
  char v24; // bl
  unsigned __int8 v25; // bl
  __int16 v26; // di
  __int64 KcbAtLayerHeight; // rbx
  __int64 KeyNodeForKcb; // rax
  __int16 v29; // r14
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned int v32; // eax
  int v33; // edi
  unsigned int v34; // ebx
  __int64 v35; // rcx
  unsigned int v36; // edi
  ULONG_PTR KcbInHashEntryByName; // rax
  __int64 v38; // r8
  volatile signed __int64 *v39; // r14
  __int64 v40; // rdx
  char v41; // r12
  _QWORD *v42; // rsi
  __int64 v43; // r8
  __int16 v44; // ax
  __int16 v45; // cx
  __int64 v46; // r12
  ULONG_PTR v47; // rax
  ULONG_PTR v48; // r14
  ULONG_PTR v49; // rax
  __int64 v50; // rax
  int v51; // edx
  __int64 v52; // rbx
  ULONG_PTR v53; // rdx
  ULONG_PTR v54; // rdx
  unsigned int v55; // r14d
  int v56; // eax
  __int64 EntryAtLayerHeight; // rax
  unsigned __int16 v58; // ax
  unsigned int v59; // edi
  __int64 v60; // rax
  __int64 v61; // rbx
  unsigned __int16 *v62; // rdx
  _BYTE *v63; // rcx
  unsigned __int16 v64; // ax
  __m128i *v65; // rcx
  __int64 v66; // rbx
  unsigned __int64 v67; // rbx
  __int64 v68; // rdx
  int v69; // ecx
  int v70; // ecx
  __int64 v71; // rbx
  __m128i *v72; // r8
  unsigned int v73; // edx
  __int64 v74; // rax
  char v75; // cl
  unsigned int v76; // eax
  _QWORD *v77; // rax
  __int64 v78; // rdx
  _QWORD *v79; // rcx
  ULONG_PTR v80; // rcx
  __int64 v81; // rcx
  unsigned int *v82; // rax
  void *v83; // rcx
  int i; // eax
  __int64 v85; // rax
  unsigned __int16 *v86; // rsi
  _QWORD *v87; // rax
  ULONG_PTR v88; // rdi
  unsigned __int16 v89; // ax
  __int64 v90; // rax
  __int64 v91; // rbx
  unsigned __int16 v92; // ax
  __int64 v93; // rdx
  ULONG_PTR v94; // rdi
  ULONG_PTR v95; // rcx
  ULONG_PTR v96; // rcx
  ULONG_PTR v97; // r8
  int v98; // eax
  _QWORD *v99; // rbx
  _QWORD *v100; // rcx
  ULONG_PTR v101; // rdi
  ULONG_PTR v102; // rbx
  ULONG_PTR v103; // rbx
  __int64 v105; // [rsp+30h] [rbp-D0h]
  __int64 v106; // [rsp+38h] [rbp-C8h]
  unsigned int Cell; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v109; // [rsp+60h] [rbp-A0h]
  char v110; // [rsp+68h] [rbp-98h]
  char v111; // [rsp+69h] [rbp-97h]
  char v112; // [rsp+6Ah] [rbp-96h]
  __int16 v114; // [rsp+6Ch] [rbp-94h]
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-90h] BYREF
  __m128i *v116; // [rsp+78h] [rbp-88h]
  ULONG_PTR v117; // [rsp+80h] [rbp-80h] BYREF
  __int128 v118; // [rsp+88h] [rbp-78h] BYREF
  __int64 v119; // [rsp+98h] [rbp-68h] BYREF
  __int64 v120; // [rsp+A0h] [rbp-60h]
  __int128 v121; // [rsp+A8h] [rbp-58h] BYREF
  int v122; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+C0h] [rbp-40h]
  __int64 v124; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v125; // [rsp+D0h] [rbp-30h]
  ULONG_PTR v126; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v127; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v128; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v129; // [rsp+F0h] [rbp-10h] BYREF
  ULONG_PTR v130; // [rsp+F8h] [rbp-8h]
  __int64 v131; // [rsp+100h] [rbp+0h] BYREF
  __int64 v132; // [rsp+108h] [rbp+8h] BYREF
  __int64 v133; // [rsp+110h] [rbp+10h] BYREF
  unsigned int *NameControlBlock; // [rsp+118h] [rbp+18h]
  ULONG_PTR UnitOfWork; // [rsp+120h] [rbp+20h]
  unsigned int v136; // [rsp+128h] [rbp+28h] BYREF
  ULONG_PTR v137; // [rsp+130h] [rbp+30h] BYREF
  _QWORD *v138; // [rsp+138h] [rbp+38h]
  _OWORD v139[2]; // [rsp+140h] [rbp+40h] BYREF
  _OWORD v140[2]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v141[112]; // [rsp+180h] [rbp+80h] BYREF

  LOBYTE(v3) = 0;
  v116 = (__m128i *)a2;
  v4 = a1;
  v138 = a1;
  v133 = 0LL;
  v122 = 0;
  v118 = 0LL;
  memset(v141, 0, 0x68uLL);
  memset(v139, 0, sizeof(v139));
  WORD1(v139[0]) = -1;
  v5 = 0LL;
  memset(v140, 0, sizeof(v140));
  WORD1(v140[0]) = -1;
  v6 = 0LL;
  v132 = 0LL;
  v7 = 0LL;
  v121 = 0LL;
  UnitOfWork = 0LL;
  BugCheckParameter4 = 0LL;
  v130 = 0LL;
  v126 = 0LL;
  v109 = 0LL;
  BugCheckParameter2 = 0LL;
  v120 = 0LL;
  v129 = 0xFFFFFFFFLL;
  v127 = 0xFFFFFFFFLL;
  Cell = -1;
  v131 = 0LL;
  v124 = 0xFFFFFFFFLL;
  v119 = 0xFFFFFFFFLL;
  v125 = 0LL;
  v128 = 0xFFFFFFFFLL;
  NameControlBlock = 0LL;
  v117 = -1LL;
  CmpSubtreeEnumeratorInitialize((__int64)v141);
  CmpInitializeDelayDerefContext(&v118);
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = MEMORY[0xFFFFF78000000014];
      v111 = 0;
      if ( (CmpShutdownRundown & 1) != 0 )
      {
        started = -1073741431;
        v110 = 0;
        goto LABEL_195;
      }
      CmpLockRegistryExclusive();
      v5 = v4[1];
      v110 = 1;
      v6 = *(_QWORD *)(v5 + 72);
      started = CmpStartKcbStackForTopLayerKcb((__int64)v139, v5, v9, v10);
      if ( started < 0 )
        goto LABEL_195;
      started = CmpStartKcbStackForTopLayerKcb((__int64)v140, v6, v11, v12);
      if ( started < 0 )
        goto LABEL_193;
      if ( (*(_DWORD *)(v5 + 8) & 0x180) != 0
        || (v14 = *(_DWORD **)(v5 + 32), (v14[40] & 0x100000) != 0)
        || v14 == CmpMasterHive
        || (*(_DWORD *)(v5 + 184) & 0x40000) != 0 )
      {
        started = -1073741790;
LABEL_193:
        v3 = 0LL;
        v42 = 0LL;
        goto LABEL_197;
      }
      started = CmpPerformKeyBodyDeletionCheck((__int64)v4, 0LL);
      if ( started < 0 )
        goto LABEL_195;
      if ( v4[7] || v4[8] )
      {
        started = CmpTransSearchAddTransFromKeyBody(v4, &v133);
        if ( started < 0 )
          goto LABEL_195;
        v16 = v133;
        started = CmpPerformKeyBodyDeletionCheck((__int64)v4, v133);
        if ( started < 0 )
          goto LABEL_77;
      }
      else
      {
        v16 = 0LL;
        v133 = 0LL;
      }
      if ( *(_WORD *)(v5 + 66) && v16 )
      {
        CmpLogUnsupportedOperation(26LL);
        started = -1073741822;
        goto LABEL_77;
      }
      if ( v16 )
        CmpLogUnsupportedOperation(24LL);
      LOBYTE(v15) = a3;
      started = CmpCheckKcbStackAccess((unsigned int)v140, v16, v15, 4, 0);
      if ( started < 0 )
        goto LABEL_77;
      started = CmpDoAccessCheckOnLayeredSubtree(
                  (__int64)v139,
                  v16,
                  0LL,
                  a3,
                  *(_WORD *)(v5 + 66) != 0 ? 196633 : 0x10000,
                  1);
      if ( started < 0 )
        goto LABEL_77;
      CmpFlushNotifiesOnKeyBodyList(v5, 0LL, (__int64)&v118, 1);
      CmpReportNotify(v5, v16, 1LL, 0LL);
      if ( v16 )
        break;
      started = CmpTryAcquireKcbIXLocks(v5, 1LL, v17, (__int64)&v121);
      if ( started == -1073741267 )
      {
        LOBYTE(v3) = 1;
        v111 = 1;
      }
      else if ( started < 0 )
      {
        goto LABEL_77;
      }
      LOBYTE(v18) = 1;
      v20 = CmpTryAcquireKcbIXLocks(v6, v18, v19, (__int64)&v121);
      started = v20;
      if ( v20 != -1073741267 )
      {
        if ( v20 < 0 )
        {
LABEL_78:
          v7 = v109;
          v3 = 0LL;
          v42 = 0LL;
          goto LABEL_197;
        }
        if ( !(_BYTE)v3 )
          goto LABEL_36;
      }
      CmpLogTransactionAbortedForRollbackPacket(v5, 4u);
      CmpDrainDelayDerefContext((_QWORD **)&v118);
      CmpUnlockRegistry();
      v3 = 0LL;
      v110 = 0;
      started = CmpAbortRollbackPacket((__int64)&v121);
      if ( started < 0 )
        goto LABEL_79;
      CmpCleanupRollbackPacket((__int64)&v121);
      v121 = 0LL;
      CmpCleanupKcbStack((__int64)v139);
      CmpCleanupKcbStack((__int64)v140);
      v7 = v109;
    }
    if ( *(_QWORD *)(v5 + 208) != v5 + 208 )
      goto LABEL_191;
    UnitOfWork = (ULONG_PTR)CmpAllocateUnitOfWork();
    v21 = (_QWORD *)UnitOfWork;
    if ( !UnitOfWork )
      goto LABEL_142;
    v130 = (ULONG_PTR)CmpAllocateUnitOfWork();
    v22 = (_QWORD *)v130;
    if ( !v130 )
      goto LABEL_142;
    CmpTransEnlistUowInKcb(v21, v6);
    CmpTransEnlistUowInKcb(v22, v5);
    started = CmpTransEnlistUowInCmTrans(v21, v16);
    if ( started < 0 )
      goto LABEL_77;
    started = CmpTransEnlistUowInCmTrans(v22, v16);
    if ( started < 0 )
      goto LABEL_77;
    v23 = CmpLockIXLockExclusive(v6 + 248, v21, 0);
    v24 = CmpLockIXLockExclusive(v6 + 264, v21, 1) & v23;
    v25 = CmpLockIXLockExclusive(v5 + 248, (_QWORD *)v130, 0) & v24;
    if ( ((unsigned __int8)CmpLockIXLockExclusive(v5 + 264, (_QWORD *)v130, 1) & v25) == 0 )
    {
LABEL_191:
      started = -1072103423;
      goto LABEL_77;
    }
LABEL_36:
    v26 = *(_WORD *)(v6 + 66);
    LODWORD(BugCheckParameter3) = -1;
    v120 = 0LL;
    if ( v26 < 0 )
      goto LABEL_49;
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v140, v26);
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) == 1 )
      {
LABEL_43:
        v29 = -1;
        v30 = v120;
        goto LABEL_44;
      }
      if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
        break;
LABEL_42:
      if ( --v26 < 0 )
        goto LABEL_43;
    }
    KeyNodeForKcb = CmpGetKeyNodeForKcb(KcbAtLayerHeight, (__int64)&v127, 1);
    started = CmpFindSubKeyByNameWithStatus(
                *(_QWORD *)(KcbAtLayerHeight + 32),
                KeyNodeForKcb,
                (unsigned __int16 *)v116,
                &BugCheckParameter3);
    CmpReleaseKeyNodeForKcb(KcbAtLayerHeight);
    if ( started < 0 )
    {
      if ( started != -1073741772 )
        goto LABEL_78;
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) )
        goto LABEL_43;
      goto LABEL_42;
    }
    v30 = *(_QWORD *)(KcbAtLayerHeight + 32);
    v29 = v26;
    v120 = v30;
LABEL_44:
    if ( (_DWORD)BugCheckParameter3 == -1 )
    {
LABEL_49:
      v112 = 0;
      goto LABEL_50;
    }
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v30 + 8))(v30, (unsigned int)BugCheckParameter3, &v129);
    if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v120, v3) != 1 )
    {
      started = -1073741535;
      goto LABEL_82;
    }
    (*(void (__fastcall **)(__int64, __int64 *))(v31 + 16))(v31, &v129);
    v112 = 1;
    if ( v29 != *(_WORD *)(v6 + 66) )
    {
      LODWORD(BugCheckParameter3) = -1;
      v120 = 0LL;
    }
LABEL_50:
    v32 = CmpHashUnicodeComponent(v116);
    v33 = 37 * *(_DWORD *)(v6 + 16);
    v34 = v32;
    v35 = *(_QWORD *)(v6 + 32);
    v136 = v32;
    v36 = v32 + v33;
    KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v35, v36, v6, (__int64)v116);
    v109 = KcbInHashEntryByName;
    v39 = (volatile signed __int64 *)KcbInHashEntryByName;
    if ( KcbInHashEntryByName )
      CmpReferenceKeyControlBlock(KcbInHashEntryByName);
    if ( v16 )
    {
      if ( v39 )
      {
        CmpReferenceKeyControlBlockUnsafe(v39);
        v86 = (unsigned __int16 *)v116;
        v126 = (ULONG_PTR)v39;
        goto LABEL_180;
      }
      v86 = (unsigned __int16 *)v116;
      started = CmpCreateKeyControlBlock(
                  *(_QWORD *)(v6 + 32),
                  -1,
                  v6,
                  0LL,
                  0,
                  (unsigned __int16 *)v116,
                  v34,
                  v36,
                  &v126);
      v3 = 0LL;
      if ( started >= 0 )
      {
LABEL_180:
        v87 = CmpAllocateUnitOfWork();
        v3 = 0LL;
        BugCheckParameter4 = (ULONG_PTR)v87;
        if ( v87 )
        {
          v88 = v126;
          CmpTransEnlistUowInKcb(v87, v126);
          started = CmpTransEnlistUowInCmTrans((_QWORD *)BugCheckParameter4, v16);
          if ( started < 0 )
            goto LABEL_82;
          CmpLockIXLockExclusive(v88 + 248, (_QWORD *)BugCheckParameter4, 0);
          CmpLockIXLockExclusive(v88 + 264, (_QWORD *)BugCheckParameter4, 1);
          v89 = CmpNameSize(v86);
          Cell = HvAllocateCell(*(_QWORD *)(v6 + 32), (unsigned int)v89 + 76, 1LL, (__int64)&v131, (__int64)&v124);
          v59 = Cell;
          if ( Cell == -1 )
          {
            v7 = v109;
            v42 = (_QWORD *)BugCheckParameter4;
            started = -1073741443;
          }
          else
          {
            v90 = CmpGetKeyNodeForKcb(v5, (__int64)&v119, 1);
            v91 = v131;
            *(_OWORD *)v131 = *(_OWORD *)v90;
            *(_OWORD *)(v91 + 16) = *(_OWORD *)(v90 + 16);
            *(_OWORD *)(v91 + 32) = *(_OWORD *)(v90 + 32);
            *(_OWORD *)(v91 + 48) = *(_OWORD *)(v90 + 48);
            *(_QWORD *)(v91 + 64) = *(_QWORD *)(v90 + 64);
            *(_DWORD *)(v91 + 72) = *(_DWORD *)(v90 + 72);
            CmpReleaseKeyNodeForKcb(v5);
            v92 = CmpCopyName((_BYTE *)(v91 + 76), v86);
            *(_WORD *)(v91 + 72) = v92;
            if ( v92 >= *v86 )
              *(_WORD *)(v91 + 2) &= ~0x20u;
            else
              *(_WORD *)(v91 + 2) |= 0x20u;
            v93 = v131;
            v94 = v126;
            v95 = v126;
            *(_QWORD *)(v131 + 4) = MEMORY[0xFFFFF78000000014];
            *(_DWORD *)(v95 + 40) = Cell;
            CmpRebuildKcbCacheFromNode(v95, v93, (__int64)&v118, 1);
            (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v6 + 32) + 16LL))(*(_QWORD *)(v6 + 32), &v124);
            v96 = UnitOfWork;
            v97 = v130;
            *(_DWORD *)(UnitOfWork + 68) = 10;
            *(_QWORD *)(v96 + 88) = v5;
            *(_QWORD *)(v96 + 96) = v94;
            *(_DWORD *)(v97 + 68) = 11;
            *(_QWORD *)(v97 + 88) = v94;
            *(_DWORD *)(BugCheckParameter4 + 68) = 12;
            *(_QWORD *)(BugCheckParameter4 + 88) = v5;
            v98 = *(_DWORD *)(v5 + 40) >> 31;
            *(_QWORD *)(BugCheckParameter4 + 80) = v96;
            *(_DWORD *)(BugCheckParameter4 + 72) = v98;
            started = CmAddLogForAction(v97, 1u);
            v3 = 0LL;
            if ( started < 0 )
              goto LABEL_82;
            v99 = v138;
            v100 = v138;
            *(_QWORD *)(v94 + 240) = v133;
            DelistKeyBodyFromKCB(v100, 1);
            v99[1] = v94;
            EnlistKeyBodyWithKCB(v99, 2);
            v126 = 0LL;
            CmpDereferenceKeyControlBlockWithLock(v5, (__int64)&v118, 0);
            UnitOfWork = 0LL;
            v42 = 0LL;
            v130 = 0LL;
            started = 0;
            v3 = 0LL;
            v59 = -1;
            v7 = v109;
          }
          goto LABEL_198;
        }
        started = -1073741670;
      }
      v7 = v109;
LABEL_196:
      v42 = 0LL;
      goto LABEL_197;
    }
    v7 = (ULONG_PTR)v39;
    if ( !v39 )
    {
      v41 = v111;
      goto LABEL_64;
    }
    started = CmpTryAcquireKcbIXLocks((__int64)v39, 1LL, v38, (__int64)&v121);
    if ( started == -1073741267 )
    {
      v41 = 1;
      goto LABEL_58;
    }
    if ( started < 0 )
      goto LABEL_195;
    v41 = v111;
LABEL_58:
    LOBYTE(v40) = 1;
    started = CmpPrepareToInvalidateAllHigherLayerKcbs(v109, v40, &v121);
    if ( started == -1073741267 )
    {
      v41 = 1;
      goto LABEL_61;
    }
    if ( started < 0 )
      goto LABEL_77;
LABEL_61:
    started = CmpPrepareForSubtreeInvalidation(v109, (__int64)&v121);
    if ( started == -1073741267 )
    {
      v41 = 1;
      goto LABEL_64;
    }
    if ( started < 0 )
      goto LABEL_77;
LABEL_64:
    started = CmpPrepareToInvalidateAllHigherLayerKcbs(v5, 1LL, &v121);
    if ( started == -1073741267 )
    {
      v41 = 1;
      goto LABEL_68;
    }
    if ( started < 0 )
      goto LABEL_77;
LABEL_68:
    if ( !*(_WORD *)(v5 + 66) )
      goto LABEL_71;
    started = CmpPrepareForSubtreeInvalidation(v5, (__int64)&v121);
    if ( started != -1073741267 )
      break;
LABEL_72:
    CmpLogTransactionAbortedForRollbackPacket(v5, 4u);
    v7 = v109;
    v3 = 0LL;
    if ( v109 )
    {
      CmpDereferenceKeyControlBlockWithLock(v109, (__int64)&v118, 0);
      v7 = 0LL;
      v109 = 0LL;
    }
    CmpDrainDelayDerefContext((_QWORD **)&v118);
    CmpUnlockRegistry();
    v110 = 0;
    started = CmpAbortRollbackPacket((__int64)&v121);
    if ( started < 0 )
      goto LABEL_80;
    CmpCleanupRollbackPacket((__int64)&v121);
    v121 = 0LL;
    CmpCleanupKcbStack((__int64)v139);
    CmpCleanupKcbStack((__int64)v140);
    v4 = v138;
  }
  if ( started < 0 )
    goto LABEL_77;
LABEL_71:
  if ( v41 )
    goto LABEL_72;
  v7 = v109;
  if ( v109 )
  {
    CmpInvalidateAllHigherLayerKcbs(v109, 1LL, 8LL, &v118);
    CmpInvalidateSubtree(v109, 8, (__int64)&v118, 0LL);
    CmpFlushNotifiesOnKeyBodyList(v109, 8LL, (__int64)&v118, 1);
    CmpDiscardKcb(v109, (__int64)&v118);
  }
  CmpInvalidateAllHigherLayerKcbs(v5, 1LL, 8LL, &v118);
  v44 = *(_WORD *)(v5 + 66);
  if ( v44 )
  {
    CmpInvalidateSubtree(v5, 8, (__int64)&v118, 0LL);
    v44 = *(_WORD *)(v5 + 66);
  }
  v45 = 0;
  v114 = 0;
  if ( v44 <= 0 )
  {
LABEL_104:
    if ( *(_WORD *)(v5 + 66) )
    {
      started = CmpPromoteKey(v139, 1LL, 0LL);
      v3 = 0LL;
      if ( started < 0 )
        goto LABEL_82;
      started = CmpPromoteSubtree((__int64)v139, 0LL);
      if ( started < 0 )
        goto LABEL_82;
    }
    LOBYTE(v43) = 1;
    if ( !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40), v43)
      || (v52 = CmpGetKeyNodeForKcb(v6, (__int64)&v128, 1),
          v125 = v52,
          v53 = *(unsigned int *)(v52 + 28),
          (_DWORD)v53 != -1)
      && !(unsigned __int8)CmpMarkEntireIndexDirty(*(_QWORD *)(v6 + 32), v53) )
    {
      started = -1073741443;
      goto LABEL_195;
    }
    v54 = *(unsigned int *)(v52 + 32);
    if ( (_DWORD)v54 == -1 )
    {
      v3 = 0LL;
    }
    else
    {
      v3 = 0LL;
      if ( !(unsigned __int8)CmpMarkEntireIndexDirty(*(_QWORD *)(v6 + 32), v54) )
      {
        started = -1073741443;
        goto LABEL_80;
      }
    }
    if ( !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40), 1LL)
      || (v55 = BugCheckParameter3, (_DWORD)BugCheckParameter3 != -1)
      && !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v6 + 32), (unsigned int)BugCheckParameter3, 1LL) )
    {
      started = -1073741443;
      goto LABEL_83;
    }
    if ( v112 )
    {
      started = CmpSubtreeEnumeratorStartForKcbStack(v141, v139);
      if ( started < 0 )
        goto LABEL_82;
      v56 = CmpSubtreeEnumeratorAdvance((__int64)v141);
      v3 = 0LL;
      while ( 1 )
      {
        if ( v56 == -2147483622 )
        {
          v55 = BugCheckParameter3;
          goto LABEL_129;
        }
        CmpSubtreeEnumeratorGetCurrentKeyStacks(v141, 0LL, &v132);
        EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v132, *(_WORD *)(v5 + 66));
        if ( !(unsigned __int8)HvMarkCellDirty(
                                 *(_QWORD *)EntryAtLayerHeight,
                                 *(unsigned int *)(EntryAtLayerHeight + 8),
                                 1LL) )
          break;
        v56 = CmpSubtreeEnumeratorAdvance((__int64)v141);
      }
      started = -1073741443;
LABEL_79:
      v7 = v109;
LABEL_80:
      v42 = 0LL;
      goto LABEL_197;
    }
    if ( !(unsigned __int8)CmpMarkAllChildrenDirty(*(_QWORD *)(v5 + 32)) )
    {
      started = -1073741443;
      goto LABEL_82;
    }
LABEL_129:
    v58 = CmpNameSize((unsigned __int16 *)v116);
    Cell = HvAllocateCell(
             *(_QWORD *)(v5 + 32),
             (unsigned int)v58 + 76,
             *(_DWORD *)(v5 + 40) >> 31,
             (__int64)&v131,
             (__int64)&v124);
    if ( Cell == -1 )
    {
      v7 = v109;
      started = -1073741443;
      v42 = 0LL;
      v59 = -1;
      goto LABEL_198;
    }
    v60 = CmpGetKeyNodeForKcb(v5, (__int64)&v119, 1);
    v61 = v131;
    v62 = (unsigned __int16 *)v116;
    v63 = (_BYTE *)(v131 + 76);
    *(_OWORD *)v131 = *(_OWORD *)v60;
    *(_OWORD *)(v61 + 16) = *(_OWORD *)(v60 + 16);
    *(_OWORD *)(v61 + 32) = *(_OWORD *)(v60 + 32);
    *(_OWORD *)(v61 + 48) = *(_OWORD *)(v60 + 48);
    *(_QWORD *)(v61 + 64) = *(_QWORD *)(v60 + 64);
    *(_DWORD *)(v61 + 72) = *(_DWORD *)(v60 + 72);
    v64 = CmpCopyName(v63, v62);
    v65 = v116;
    *(_WORD *)(v61 + 72) = v64;
    if ( v64 >= (unsigned int)v65->m128i_i16[0] )
      *(_WORD *)(v61 + 2) &= ~0x20u;
    else
      *(_WORD *)(v61 + 2) |= 0x20u;
    *(_QWORD *)(v61 + 4) = v8;
    if ( v112 )
      *(_BYTE *)(v61 + 13) |= 3u;
    CmpReleaseKeyNodeForKcb(v5);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 16LL))(*(_QWORD *)(v5 + 32), &v124);
    NameControlBlock = (unsigned int *)CmpGetNameControlBlock((unsigned __int16 *)v116, &v136);
    if ( !NameControlBlock )
      goto LABEL_138;
    v66 = v125;
    if ( *(_DWORD *)(v125 + 28) != -1 && (LODWORD(v117) = CmpDuplicateIndex(*(_QWORD *)(v6 + 32)), (_DWORD)v117 == -1)
      || *(_DWORD *)(v66 + 32) != -1 && (HIDWORD(v117) = CmpDuplicateIndex(*(_QWORD *)(v6 + 32)), HIDWORD(v117) == -1) )
    {
LABEL_142:
      started = -1073741670;
    }
    else
    {
      if ( v55 != -1
        && !CmpRemoveSubKeyFromList(*(_QWORD *)(v6 + 32), (unsigned int *)&v117 + ((unsigned __int64)v55 >> 31), v55) )
      {
        goto LABEL_147;
      }
      v67 = (unsigned __int64)Cell >> 31;
      if ( !CmpAddSubKeyToList(*(_QWORD *)(v6 + 32), (unsigned int *)&v117 + v67, Cell) )
      {
LABEL_138:
        started = -1073741670;
LABEL_139:
        v7 = v109;
        v3 = 0LL;
        v42 = 0LL;
        goto LABEL_197;
      }
      if ( !*(_WORD *)(v5 + 66)
        && !CmpRemoveSubKeyFromList(
              *(_QWORD *)(v6 + 32),
              (unsigned int *)&v117 + ((unsigned __int64)*(unsigned int *)(v5 + 40) >> 31),
              *(_DWORD *)(v5 + 40)) )
      {
LABEL_147:
        started = -1073741443;
        goto LABEL_139;
      }
      v68 = v125;
      v69 = *(_DWORD *)(v125 + 28);
      *(_DWORD *)(v125 + 28) = v117;
      LODWORD(v117) = v69;
      v70 = *(_DWORD *)(v68 + 32);
      *(_DWORD *)(v68 + 32) = HIDWORD(v117);
      HIDWORD(v117) = v70;
      if ( v55 != -1 )
        --*(_DWORD *)(v68 + 4 * ((unsigned __int64)v55 >> 31) + 20);
      started = 0;
      ++*(_DWORD *)(v68 + 4 * v67 + 20);
      if ( !*(_WORD *)(v5 + 66) )
        --*(_DWORD *)(v68 + 4 * ((unsigned __int64)*(unsigned int *)(v5 + 40) >> 31) + 20);
      CmpCleanUpSubKeyInfo(v6, 1);
      v71 = v125;
      v72 = v116;
      v73 = v116->m128i_u16[0];
      if ( (unsigned __int16)*(_DWORD *)(v125 + 52) < v73 )
      {
        *(_WORD *)(v125 + 52) = v73;
        *(_WORD *)(v6 + 176) = v72->m128i_i16[0];
      }
      if ( *(_WORD *)(v5 + 66) )
      {
        v74 = CmpGetKeyNodeForKcb(v5, (__int64)&v119, 1);
        v75 = *(_BYTE *)(v74 + 13);
        *(_WORD *)(v74 + 2) &= 0x20u;
        *(_WORD *)(v74 + 52) = 0;
        *(_DWORD *)(v74 + 52) &= 0xFF00FFFF;
        *(_BYTE *)(v74 + 13) = v75 & 0x7C | 1;
        *(_DWORD *)(v74 + 28) = -1;
        *(_DWORD *)(v74 + 32) = -1;
        *(_DWORD *)(v74 + 40) = -1;
        *(_DWORD *)(v74 + 48) = -1;
        *(_QWORD *)(v74 + 20) = 0LL;
        *(_DWORD *)(v74 + 36) = 0;
        *(_BYTE *)(v74 + 55) = 0;
        *(_QWORD *)(v74 + 56) = 0LL;
        *(_DWORD *)(v74 + 64) = 0;
        *(_WORD *)(v74 + 74) = 0;
        CmpReleaseKeyNodeForKcb(v5);
      }
      else
      {
        HvFreeCell(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40));
      }
      v76 = Cell;
      Cell = -1;
      *(_DWORD *)(v5 + 40) = v76;
      if ( *(_WORD *)(v5 + 66) )
      {
        v77 = *(_QWORD **)(v5 + 192);
        v78 = *v77;
        if ( *(_QWORD **)(*v77 + 8LL) != v77 || (v79 = (_QWORD *)v77[1], (_QWORD *)*v79 != v77) )
          __fastfail(3u);
        *v79 = v78;
        *(_QWORD *)(v78 + 8) = v79;
        CmpDereferenceKeyControlBlockWithLock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 192) + 24LL) + 16LL),
          (__int64)&v118,
          0);
        v80 = BugCheckParameter2;
        *(_QWORD *)(*(_QWORD *)(v5 + 192) + 24LL) = 0LL;
        CmpCreateLayerLink(v80, v5);
      }
      CmpRemoveKeyControlBlock(v5);
      v81 = *(_QWORD *)(v5 + 32);
      *(_DWORD *)(v5 + 16) = v36;
      CmpInsertKeyHash(v81);
      v82 = *(unsigned int **)(v5 + 80);
      *(_QWORD *)(v5 + 80) = NameControlBlock;
      NameControlBlock = v82;
      if ( *(_QWORD *)(v5 + 296) )
        _InterlockedOr64((volatile signed __int64 *)(v5 + 296), 1uLL);
      v83 = *(void **)(v5 + 200);
      if ( (unsigned __int64)v83 >= 2 )
        ExFreePoolWithTag(v83, 0x624E4D43u);
      *(_QWORD *)(v5 + 200) = 0LL;
      if ( v112 )
        *(_BYTE *)(v5 + 65) = 3;
      CmpUpdateParentForEachSon(*(_QWORD *)(v5 + 32));
      if ( v112 )
      {
        CmpSubtreeEnumeratorReset(v141);
        CmpSubtreeEnumeratorBeginForKcbStack(v141, v139);
        for ( i = CmpSubtreeEnumeratorAdvance((__int64)v141);
              i != -2147483622;
              i = CmpSubtreeEnumeratorAdvance((__int64)v141) )
        {
          CmpSubtreeEnumeratorGetCurrentKeyStacks(v141, 0LL, &v132);
          v85 = CmpKeyNodeStackGetEntryAtLayerHeight(v132, *(_WORD *)(v5 + 66));
          *(_BYTE *)(*(_QWORD *)(v85 + 16) + 13LL) |= 3u;
        }
      }
      *(_QWORD *)(v71 + 4) = v8;
      *(_QWORD *)(v6 + 168) = v8;
      CmpReleaseKeyNodeForKcb(v6);
      v125 = 0LL;
      CmpSearchForOpenSubKeys(v5, 1, 0LL);
      ++*(_QWORD *)(v6 + 304);
      ++*(_QWORD *)(v5 + 304);
      if ( (_DWORD)BugCheckParameter3 != -1 )
        HvFreeCell(*(_QWORD *)(v6 + 32), (unsigned int)BugCheckParameter3);
    }
LABEL_77:
    v7 = v109;
LABEL_195:
    v3 = 0LL;
    goto LABEL_196;
  }
  do
  {
    v46 = CmpGetKcbAtLayerHeight((__int64)v140, v45);
    v47 = CmpFindKcbInHashEntryByName(*(_QWORD *)(v6 + 32), v36, v6, (__int64)v116);
    v137 = v47;
    v48 = v47;
    if ( v47 )
    {
      CmpReferenceKeyControlBlock(v47);
      CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
      v49 = v48;
    }
    else
    {
      if ( *(_DWORD *)(v46 + 40) == -1
        || (v50 = CmpGetKeyNodeForKcb(v46, (__int64)&v127, 1),
            started = CmpFindSubKeyByNameWithStatus(*(_QWORD *)(v46 + 32), v50, (unsigned __int16 *)v116, &v122),
            CmpReleaseKeyNodeForKcb(v46),
            started == -1073741772) )
      {
        v51 = -1;
        v122 = -1;
      }
      else
      {
        if ( started < 0 )
          goto LABEL_139;
        v51 = v122;
      }
      LODWORD(v106) = v36;
      LODWORD(v105) = v34;
      started = CmpCreateKeyControlBlock(
                  *(_QWORD *)(v46 + 32),
                  v51,
                  v46,
                  BugCheckParameter2,
                  0,
                  (unsigned __int16 *)v116,
                  v105,
                  v106,
                  &v137);
      if ( started < 0 )
        goto LABEL_77;
      if ( BugCheckParameter2 )
        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
      v49 = v137;
    }
    v45 = v114 + 1;
    BugCheckParameter2 = v49;
    v114 = v45;
  }
  while ( v45 < *(__int16 *)(v5 + 66) );
  if ( !v49 )
  {
    v7 = v109;
    goto LABEL_104;
  }
  started = CmpAllocateLayerInfoForKcb(v49);
  v3 = 0LL;
  if ( started >= 0 )
  {
    v7 = v109;
    goto LABEL_104;
  }
LABEL_82:
  v7 = v109;
LABEL_83:
  v42 = (_QWORD *)BugCheckParameter4;
LABEL_197:
  v59 = Cell;
LABEL_198:
  CmpSubtreeEnumeratorCleanup((__int64)v141);
  if ( v125 )
    CmpReleaseKeyNodeForKcb(v6);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64 *))(v120 + 16))(v120, &v129);
  if ( (_DWORD)v117 != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v6 + 32), (unsigned int)v117);
  if ( HIDWORD(v117) != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v6 + 32), HIDWORD(v117));
  if ( v59 != -1 )
    HvFreeCell(*(_QWORD *)(v5 + 32), v59);
  if ( NameControlBlock )
    CmpDereferenceNameControlBlockWithLock(NameControlBlock);
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2, (__int64)&v118, 0);
  v101 = v126;
  if ( v126 )
  {
    CmpMarkKeyUnbacked(v126);
    CmpDereferenceKeyControlBlockWithLock(v101, (__int64)&v118, 0);
  }
  if ( v7 )
    CmpDereferenceKeyControlBlockWithLock(v7, (__int64)&v118, 0);
  if ( v42 )
  {
    CmpRundownUnitOfWork(v42);
    CmpFreeUnitOfWork(v42);
  }
  v102 = v130;
  if ( v130 )
  {
    CmpRundownUnitOfWork((_QWORD *)v130);
    CmpFreeUnitOfWork(v102);
  }
  v103 = UnitOfWork;
  if ( UnitOfWork )
  {
    CmpRundownUnitOfWork((_QWORD *)UnitOfWork);
    CmpFreeUnitOfWork(v103);
  }
  CmpDrainDelayDerefContext((_QWORD **)&v118);
  if ( v110 )
    CmpUnlockRegistry();
  CmpCleanupKcbStack((__int64)v139);
  CmpCleanupKcbStack((__int64)v140);
  CmpCleanupRollbackPacket((__int64)&v121);
  return (unsigned int)started;
}

/*
 * XREFs of CmRenameKey @ 0x14086CA04
 * Callers:
 *     NtRenameKey @ 0x140868C30 (NtRenameKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1403510E8 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140351100 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     CmpDereferenceSecurityNode @ 0x1403F06FC (CmpDereferenceSecurityNode.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 *     CmpHKeyNodeSize @ 0x1404EC7B4 (CmpHKeyNodeSize.c)
 *     CmpMarkCachedFullKCBNameStale @ 0x1404EC950 (CmpMarkCachedFullKCBNameStale.c)
 *     CmpReferenceSecurityNode @ 0x1405CCCC8 (CmpReferenceSecurityNode.c)
 *     CmpCreateLayerLink @ 0x1405D8378 (CmpCreateLayerLink.c)
 *     CmpAllocateLayerInfoForKcb @ 0x1405D8404 (CmpAllocateLayerInfoForKcb.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1405EF510 (CmpGetEffectiveKcbSemantics.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405EF550 (CmpGetKcbAtLayerHeight.c)
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByName @ 0x1405EFB44 (CmpFindKcbInHashEntryByName.c)
 *     CmpGetNameControlBlock @ 0x1405EFC10 (CmpGetNameControlBlock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1405EFEA0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140665D30 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKcbImmutable @ 0x140665DD0 (CmpIsKcbImmutable.c)
 *     CmpAddSubKeyToList @ 0x140669DA0 (CmpAddSubKeyToList.c)
 *     CmpCleanUpSubKeyInfo @ 0x14066A0AC (CmpCleanUpSubKeyInfo.c)
 *     CmpHashUnicodeComponent @ 0x14066A224 (CmpHashUnicodeComponent.c)
 *     CmpMarkKeyDirty @ 0x14066A298 (CmpMarkKeyDirty.c)
 *     CmpFreeKeyByCell @ 0x14066B280 (CmpFreeKeyByCell.c)
 *     CmpRemoveSubKeyFromList @ 0x14066B670 (CmpRemoveSubKeyFromList.c)
 *     CmpGetKeyNodeForKcb @ 0x14066BFD4 (CmpGetKeyNodeForKcb.c)
 *     CmpDiscardKcb @ 0x14066C928 (CmpDiscardKcb.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14066CC00 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockRegistryExclusive @ 0x14067278C (CmpLockRegistryExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406934B0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140699C98 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A3094 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpReportNotify @ 0x1406A405C (CmpReportNotify.c)
 *     CmpSearchForOpenSubKeys @ 0x1406BF360 (CmpSearchForOpenSubKeys.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406C3144 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpCleanupKcbStack @ 0x1406FB360 (CmpCleanupKcbStack.c)
 *     HvAllocateCell @ 0x140709404 (HvAllocateCell.c)
 *     HvFreeCell @ 0x140709534 (HvFreeCell.c)
 *     CmpCopyName @ 0x14070A0E0 (CmpCopyName.c)
 *     CmpReferenceKeyControlBlock @ 0x140719888 (CmpReferenceKeyControlBlock.c)
 *     CmpCleanupRollbackPacket @ 0x14071C518 (CmpCleanupRollbackPacket.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14071D94C (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140729850 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14072998C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140729F10 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x14072A288 (CmpSubtreeEnumeratorInitialize.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076E1A4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140772AC4 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x140772CE0 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x14077A8CC (CmpAbortRollbackPacket.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407AC8F8 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140863E04 (CmpReleaseKeyNodeForKcb.c)
 *     CmpInsertKeyHash @ 0x14086F02C (CmpInsertKeyHash.c)
 *     CmpRemoveKeyControlBlock @ 0x14086F138 (CmpRemoveKeyControlBlock.c)
 *     CmpCheckKcbStackAccess @ 0x1408716E4 (CmpCheckKcbStackAccess.c)
 *     CmpDoAccessCheckOnKcbSubtree @ 0x140871A9C (CmpDoAccessCheckOnKcbSubtree.c)
 *     CmpIsShutdownRundownActive @ 0x140875BA8 (CmpIsShutdownRundownActive.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140876258 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpLogUnsupportedOperation @ 0x14087634C (CmpLogUnsupportedOperation.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140876520 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x1408766F8 (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x140876748 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSubtreeEnumeratorReset @ 0x140876778 (CmpSubtreeEnumeratorReset.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x1408767D8 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpDuplicateIndex @ 0x14087A3B0 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x14087A5D4 (CmpFreeIndexByCell.c)
 *     CmpMarkAllChildrenDirty @ 0x14087ADD8 (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x14087AE88 (CmpMarkEntireIndexDirty.c)
 *     CmpUpdateParentForEachSon @ 0x14087B2E8 (CmpUpdateParentForEachSon.c)
 *     HvMarkCellDirty @ 0x14087BCE8 (HvMarkCellDirty.c)
 *     CmpPromoteKey @ 0x1408802C8 (CmpPromoteKey.c)
 *     CmpPromoteSubtreeForKcbStack @ 0x14088083C (CmpPromoteSubtreeForKcbStack.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmRenameKey(__int64 a1, __m128i *a2, char a3)
{
  ULONG_PTR v3; // rbx
  char v4; // r12
  _QWORD *v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r13
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
  char v18; // r12
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // r9
  __int16 v25; // di
  __int64 KcbAtLayerHeight; // rbx
  __int64 v27; // r9
  __int64 KeyNodeForKcb; // rax
  __int16 v29; // r14
  __int64 v30; // rdi
  __int64 v31; // rcx
  unsigned int v32; // eax
  int v33; // edi
  unsigned int v34; // ebx
  __int64 v35; // rcx
  unsigned int v36; // edi
  ULONG_PTR KcbInHashEntryByName; // rax
  __int64 v38; // r14
  __int64 v39; // r8
  __int64 v40; // r9
  char v41; // si
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  ULONG_PTR v45; // r14
  __int64 v46; // r8
  __int16 v47; // ax
  __int64 v48; // rdx
  __int16 v49; // cx
  __int64 v50; // r12
  ULONG_PTR v51; // rax
  ULONG_PTR v52; // r14
  ULONG_PTR v53; // rax
  __int64 v54; // rax
  int v55; // edx
  int LayerInfoForKcb; // eax
  __int64 v57; // rbx
  __int64 v58; // r8
  ULONG_PTR v59; // rdx
  ULONG_PTR v60; // rdx
  unsigned int v61; // r12d
  char v62; // r14
  int v63; // eax
  __int64 EntryAtLayerHeight; // rax
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // rbx
  unsigned __int16 v68; // ax
  __m128i *v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // r12
  unsigned int v72; // eax
  __int64 v73; // r14
  unsigned __int64 v74; // rbx
  int v75; // eax
  int v76; // ecx
  int v77; // eax
  __m128i *v78; // r8
  unsigned int v79; // edx
  __int64 v80; // rax
  char v81; // cl
  _QWORD *v82; // rax
  __int64 v83; // rdx
  _QWORD *v84; // rcx
  ULONG_PTR v85; // rcx
  __int64 v86; // rcx
  unsigned int *v87; // rax
  void *v88; // rcx
  int i; // eax
  __int64 v90; // rax
  __int64 v92; // [rsp+30h] [rbp-D0h]
  __int64 v93; // [rsp+38h] [rbp-C8h]
  __int64 v94; // [rsp+58h] [rbp-A8h]
  char v95; // [rsp+60h] [rbp-A0h]
  __int16 v97; // [rsp+62h] [rbp-9Eh]
  ULONG_PTR v98; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-90h]
  __m128i *v100; // [rsp+78h] [rbp-88h]
  unsigned int v101; // [rsp+80h] [rbp-80h]
  __int128 v102; // [rsp+88h] [rbp-78h] BYREF
  int v103; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v104; // [rsp+9Ch] [rbp-64h]
  __int64 v105; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-58h]
  ULONG_PTR v107; // [rsp+B0h] [rbp-50h]
  __int128 v108; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v109; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v110; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v111; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v112; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v113; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v114; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD *v115; // [rsp+F8h] [rbp-8h]
  __int64 v116; // [rsp+100h] [rbp+0h] BYREF
  __int64 v117; // [rsp+108h] [rbp+8h]
  unsigned __int8 *NameControlBlock; // [rsp+110h] [rbp+10h]
  unsigned int v119; // [rsp+118h] [rbp+18h] BYREF
  ULONG_PTR v120; // [rsp+120h] [rbp+20h] BYREF
  ULONG_PTR v121; // [rsp+128h] [rbp+28h] BYREF
  _OWORD v122[2]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v123[2]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v124[112]; // [rsp+170h] [rbp+70h] BYREF

  v3 = 0LL;
  v4 = a3;
  v100 = a2;
  v5 = (_QWORD *)a1;
  v115 = (_QWORD *)a1;
  v120 = 0LL;
  v103 = 0;
  v108 = 0LL;
  memset(v124, 0, 0x68uLL);
  memset(v122, 0, sizeof(v122));
  WORD1(v122[0]) = -1;
  v6 = 0LL;
  memset(v123, 0, sizeof(v123));
  WORD1(v123[0]) = -1;
  v7 = 0LL;
  v116 = 0LL;
  v102 = 0LL;
  v107 = 0LL;
  BugCheckParameter2 = 0LL;
  v94 = 0LL;
  v113 = 0xFFFFFFFFLL;
  v109 = 0xFFFFFFFFLL;
  LODWORD(BugCheckParameter3) = -1;
  v105 = 0LL;
  v114 = 0xFFFFFFFFLL;
  v110 = 0xFFFFFFFFLL;
  v104 = -1;
  v117 = 0LL;
  v112 = 0xFFFFFFFFLL;
  NameControlBlock = 0LL;
  v98 = -1LL;
  CmpSubtreeEnumeratorInitialize((__int64)v124);
  CmpInitializeDelayDerefContext(&v108);
  v8 = MEMORY[0xFFFFF78000000014];
  if ( (unsigned __int8)CmpIsShutdownRundownActive(v10, v9) )
  {
LABEL_162:
    started = -1073741431;
    v41 = v3;
    goto LABEL_163;
  }
  while ( 1 )
  {
    CmpLockRegistryExclusive();
    v6 = v5[1];
    v7 = *(_QWORD *)(v6 + 72);
    started = CmpStartKcbStackForTopLayerKcb((__int64)v122, v6, v11, v12);
    if ( started < 0 )
      goto LABEL_67;
    started = CmpStartKcbStackForTopLayerKcb((__int64)v123, v7, v13, v14);
    if ( started < 0 )
      goto LABEL_67;
    if ( (*(_DWORD *)(v6 + 8) & 0x180) != 0
      || CmpIsKcbImmutable(v6)
      || *(_QWORD *)(v6 + 32) == CmpMasterHive
      || (*(_DWORD *)(v6 + 184) & 0x40000) != 0 )
    {
      started = -1073741790;
      goto LABEL_67;
    }
    started = CmpPerformKeyBodyDeletionCheck((__int64)v5, 0LL);
    if ( started < 0 )
      goto LABEL_67;
    if ( v5[7] == v3 && v5[8] == v3 )
    {
      v120 = v3;
    }
    else
    {
      started = CmpTransSearchAddTransFromKeyBody(v5, &v120);
      if ( started < 0 )
        goto LABEL_67;
      v3 = v120;
      started = CmpPerformKeyBodyDeletionCheck((__int64)v5, v120);
      if ( started < 0 )
        goto LABEL_66;
    }
    if ( *(_WORD *)(v6 + 66) && v3 )
    {
      v44 = 26LL;
LABEL_65:
      CmpLogUnsupportedOperation(v44);
      started = -1073741822;
      goto LABEL_66;
    }
    if ( v3 )
    {
      v44 = 24LL;
      goto LABEL_65;
    }
    LOBYTE(v16) = v4;
    started = CmpCheckKcbStackAccess((unsigned int)v123, 0, v16, 4, 0);
    if ( started < 0 )
      goto LABEL_67;
    LOBYTE(v17) = v4;
    started = CmpDoAccessCheckOnKcbSubtree(v122, 0LL, v17, *(_WORD *)(v6 + 66) != 0 ? 196633 : 0x10000);
    if ( started < 0 )
      goto LABEL_67;
    v18 = 1;
    CmpFlushNotifiesOnKeyBodyList(v6, 0LL, (__int64)&v108, 1);
    CmpReportNotify(v6, 0, 1LL, 0LL);
    LOBYTE(v19) = 1;
    v21 = CmpTryAcquireKcbIXLocks(v6, v19, v20, (__int64)&v102);
    started = v21;
    if ( v21 != -1073741267 )
    {
      v18 = 0;
      if ( v21 < 0 )
        goto LABEL_67;
    }
    v23 = CmpTryAcquireKcbIXLocks(v7, 1LL, v22, (__int64)&v102);
    started = v23;
    if ( v23 != -1073741267 )
    {
      if ( v23 < 0 )
        goto LABEL_67;
      if ( !v18 )
        break;
    }
    CmpLogTransactionAbortedForRollbackPacket(v6, 4u, (unsigned int *)&v102, v24);
    CmpDrainDelayDerefContext((_QWORD **)&v108);
    CmpUnlockRegistry();
    v41 = 0;
    started = CmpAbortRollbackPacket((__int64)&v102, 0LL);
    if ( started < 0 )
      goto LABEL_163;
    CmpCleanupRollbackPacket((__int64)&v102);
LABEL_62:
    v102 = 0LL;
    CmpCleanupKcbStack((__int64)v122);
    CmpCleanupKcbStack((__int64)v123);
    v8 = MEMORY[0xFFFFF78000000014];
    if ( (unsigned __int8)CmpIsShutdownRundownActive(v43, v42) )
      goto LABEL_162;
    v4 = a3;
  }
  v25 = *(_WORD *)(v7 + 66);
  v101 = -1;
  v111 = -1;
  v94 = 0LL;
  if ( v25 < 0 )
  {
LABEL_38:
    v95 = v3;
    goto LABEL_39;
  }
  while ( 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v123, v25);
    if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, v27) == 1 )
    {
LABEL_31:
      v29 = -1;
      goto LABEL_32;
    }
    if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
      break;
LABEL_30:
    if ( --v25 < 0 )
      goto LABEL_31;
  }
  KeyNodeForKcb = CmpGetKeyNodeForKcb(KcbAtLayerHeight, (__int64)&v109, 1);
  started = CmpFindSubKeyByNameWithStatus(
              *(_QWORD *)(KcbAtLayerHeight + 32),
              KeyNodeForKcb,
              (unsigned __int16 *)v100,
              &v111);
  CmpReleaseKeyNodeForKcb(KcbAtLayerHeight);
  if ( started < 0 )
  {
    if ( started != -1073741772 )
    {
      v3 = 0LL;
      v30 = 0LL;
LABEL_69:
      v41 = 1;
      goto LABEL_164;
    }
    if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, (__int64)v115) )
      goto LABEL_31;
    goto LABEL_30;
  }
  v29 = v25;
  v94 = *(_QWORD *)(KcbAtLayerHeight + 32);
LABEL_32:
  v101 = v111;
  if ( v111 == -1 )
  {
    LOBYTE(v3) = 0;
    goto LABEL_38;
  }
  v30 = v94;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v94 + 8))(v94, v111, &v113);
  if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v94, v3) != 1 )
  {
    started = -1073741535;
    goto LABEL_69;
  }
  (*(void (__fastcall **)(__int64, __int64 *))(v94 + 16))(v31, &v113);
  v95 = 1;
  if ( v29 != *(_WORD *)(v7 + 66) )
  {
    v101 = -1;
    v94 = 0LL;
  }
LABEL_39:
  v32 = CmpHashUnicodeComponent(v100);
  v33 = 37 * *(_DWORD *)(v7 + 16);
  v34 = v32;
  v35 = *(_QWORD *)(v7 + 32);
  v119 = v32;
  v36 = v32 + v33;
  KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v35, v36, v7, (__int64)v100);
  v107 = KcbInHashEntryByName;
  v38 = KcbInHashEntryByName;
  if ( !KcbInHashEntryByName )
    goto LABEL_49;
  CmpReferenceKeyControlBlock(KcbInHashEntryByName);
  started = CmpTryAcquireKcbIXLocks(v38, 1LL, v39, (__int64)&v102);
  if ( started == -1073741267 )
  {
    v18 = 1;
    goto LABEL_43;
  }
  if ( started < 0 )
    goto LABEL_66;
LABEL_43:
  started = CmpPrepareToInvalidateAllHigherLayerKcbs(v107, 2LL, &v102);
  if ( started == -1073741267 )
  {
    v18 = 1;
    goto LABEL_46;
  }
  if ( started < 0 )
    goto LABEL_66;
LABEL_46:
  started = CmpPrepareForSubtreeInvalidation(v107, 0, (__int64)&v102);
  if ( started == -1073741267 )
  {
    v18 = 1;
    goto LABEL_49;
  }
  if ( started < 0 )
    goto LABEL_66;
LABEL_49:
  started = CmpPrepareToInvalidateAllHigherLayerKcbs(v6, 2LL, &v102);
  if ( started == -1073741267 )
  {
    v18 = 1;
    goto LABEL_52;
  }
  if ( started < 0 )
    goto LABEL_66;
LABEL_52:
  if ( !*(_WORD *)(v6 + 66) )
    goto LABEL_55;
  started = CmpPrepareForSubtreeInvalidation(v6, 0, (__int64)&v102);
  if ( started == -1073741267 )
  {
LABEL_56:
    CmpLogTransactionAbortedForRollbackPacket(v6, 4u, (unsigned int *)&v102, v40);
    v3 = v107;
    if ( v107 )
    {
      CmpDereferenceKeyControlBlockWithLock(v107, (__int64)&v108, 0);
      v3 = 0LL;
      v107 = 0LL;
    }
    CmpDrainDelayDerefContext((_QWORD **)&v108);
    CmpUnlockRegistry();
    v41 = v3;
    started = CmpAbortRollbackPacket((__int64)&v102, 0LL);
    if ( started < 0 )
      goto LABEL_163;
    CmpCleanupRollbackPacket((__int64)&v102);
    v5 = v115;
    goto LABEL_62;
  }
  if ( started < 0 )
  {
LABEL_66:
    v3 = 0LL;
    goto LABEL_67;
  }
LABEL_55:
  if ( v18 )
    goto LABEL_56;
  v45 = v107;
  if ( v107 )
  {
    CmpInvalidateAllHigherLayerKcbs(v107, 8LL, 2LL, &v108);
    CmpInvalidateSubtree(v45, 8, 0, (__int64)&v108, 0LL);
    CmpFlushNotifiesOnKeyBodyList(v45, 8LL, (__int64)&v108, 1);
    CmpDiscardKcb(v45);
  }
  CmpInvalidateAllHigherLayerKcbs(v6, 8LL, 2LL, &v108);
  v47 = *(_WORD *)(v6 + 66);
  v48 = 0LL;
  if ( v47 )
  {
    CmpInvalidateSubtree(v6, 8, 0, (__int64)&v108, 0LL);
    v47 = *(_WORD *)(v6 + 66);
    v48 = 0LL;
  }
  v97 = 0;
  v49 = 0;
  if ( v47 > 0 )
  {
    do
    {
      v50 = CmpGetKcbAtLayerHeight((__int64)v123, v49);
      v51 = CmpFindKcbInHashEntryByName(*(_QWORD *)(v7 + 32), v36, v7, (__int64)v100);
      v121 = v51;
      v52 = v51;
      if ( v51 )
      {
        CmpReferenceKeyControlBlock(v51);
        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
        v53 = v52;
      }
      else
      {
        if ( *(_DWORD *)(v50 + 40) == -1
          || (v54 = CmpGetKeyNodeForKcb(v50, (__int64)&v109, 1),
              started = CmpFindSubKeyByNameWithStatus(*(_QWORD *)(v50 + 32), v54, (unsigned __int16 *)v100, &v103),
              CmpReleaseKeyNodeForKcb(v50),
              started == -1073741772) )
        {
          v55 = -1;
          v103 = -1;
        }
        else
        {
          if ( started < 0 )
            goto LABEL_95;
          v55 = v103;
        }
        LODWORD(v93) = v36;
        LODWORD(v92) = v34;
        started = CmpCreateKeyControlBlock(
                    *(_QWORD *)(v50 + 32),
                    v55,
                    v50,
                    BugCheckParameter2,
                    0,
                    (unsigned __int16 *)v100,
                    v92,
                    v93,
                    &v121);
        if ( started < 0 )
          goto LABEL_95;
        if ( BugCheckParameter2 )
          CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
        v53 = v121;
      }
      v49 = v97 + 1;
      BugCheckParameter2 = v53;
      v97 = v49;
    }
    while ( v49 < *(__int16 *)(v6 + 66) );
    v48 = 0LL;
    if ( v53 )
    {
      LayerInfoForKcb = CmpAllocateLayerInfoForKcb(v53);
      v48 = 0LL;
      started = LayerInfoForKcb;
      v3 = 0LL;
      if ( LayerInfoForKcb < 0 )
        goto LABEL_67;
    }
  }
  if ( *(_WORD *)(v6 + 66) )
  {
    LOBYTE(v48) = 1;
    started = CmpPromoteKey(v122, v48, 0LL);
    v3 = 0LL;
    if ( started < 0 )
      goto LABEL_67;
    started = CmpPromoteSubtreeForKcbStack(v122);
    if ( started < 0 )
      goto LABEL_67;
  }
  LOBYTE(v46) = 1;
  if ( !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40), v46) )
    goto LABEL_94;
  v57 = CmpGetKeyNodeForKcb(v7, (__int64)&v112, 1);
  v117 = v57;
  v59 = *(unsigned int *)(v57 + 28);
  if ( (_DWORD)v59 != -1 && !(unsigned __int8)CmpMarkEntireIndexDirty(*(_QWORD *)(v7 + 32), v59) )
    goto LABEL_94;
  v60 = *(unsigned int *)(v57 + 32);
  if ( (_DWORD)v60 == -1 )
  {
    v3 = 0LL;
  }
  else
  {
    v3 = 0LL;
    if ( !(unsigned __int8)CmpMarkEntireIndexDirty(*(_QWORD *)(v7 + 32), v60) )
      goto LABEL_100;
  }
  LOBYTE(v58) = 1;
  if ( !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40), v58)
    || (v61 = v101, v101 != -1) && !CmpMarkKeyDirty(*(_QWORD *)(v7 + 32), v101, 1) )
  {
LABEL_100:
    started = -1073741443;
    goto LABEL_67;
  }
  v62 = v95;
  if ( v95 )
  {
    started = CmpSubtreeEnumeratorStartForKcbStack(v124, v122);
    if ( started >= 0 )
    {
      v63 = CmpSubtreeEnumeratorAdvance((__int64)v124);
      v3 = 0LL;
      while ( v63 != -2147483622 )
      {
        CmpSubtreeEnumeratorGetCurrentKeyStacks(v124, 0LL, &v116);
        EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v116, *(_WORD *)(v6 + 66));
        if ( !(unsigned __int8)HvMarkCellDirty(
                                 *(_QWORD *)EntryAtLayerHeight,
                                 *(unsigned int *)(EntryAtLayerHeight + 8),
                                 1LL) )
          goto LABEL_100;
        v63 = CmpSubtreeEnumeratorAdvance((__int64)v124);
      }
      v62 = v95;
      goto LABEL_114;
    }
    goto LABEL_67;
  }
  if ( !(unsigned __int8)CmpMarkAllChildrenDirty(*(_QWORD *)(v6 + 32)) )
    goto LABEL_100;
LABEL_114:
  v65 = CmpHKeyNodeSize();
  LODWORD(BugCheckParameter3) = HvAllocateCell(*(_QWORD *)(v6 + 32), v65, *(_DWORD *)(v6 + 40) >> 31, &v105, &v114);
  if ( (_DWORD)BugCheckParameter3 == -1 )
    goto LABEL_100;
  v66 = CmpGetKeyNodeForKcb(v6, (__int64)&v110, 1);
  v67 = v105;
  *(_OWORD *)v105 = *(_OWORD *)v66;
  *(_OWORD *)(v67 + 16) = *(_OWORD *)(v66 + 16);
  *(_OWORD *)(v67 + 32) = *(_OWORD *)(v66 + 32);
  *(_OWORD *)(v67 + 48) = *(_OWORD *)(v66 + 48);
  *(_QWORD *)(v67 + 64) = *(_QWORD *)(v66 + 64);
  *(_DWORD *)(v67 + 72) = *(_DWORD *)(v66 + 72);
  CmpReleaseKeyNodeForKcb(v6);
  v68 = CmpCopyName((_BYTE *)(v67 + 76), v100);
  v69 = v100;
  *(_WORD *)(v67 + 72) = v68;
  if ( v68 >= (unsigned int)v69->m128i_i16[0] )
    *(_WORD *)(v105 + 2) &= ~0x20u;
  else
    *(_WORD *)(v67 + 2) |= 0x20u;
  v70 = v105;
  *(_QWORD *)(v105 + 4) = v8;
  if ( v62 )
    *(_BYTE *)(v70 + 13) |= 3u;
  v3 = 0LL;
  if ( !*(_WORD *)(v6 + 66) )
  {
LABEL_123:
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v6 + 32) + 16LL))(*(_QWORD *)(v6 + 32), &v114);
    v105 = 0LL;
    NameControlBlock = CmpGetNameControlBlock((unsigned __int16 *)v100, &v119);
    if ( !NameControlBlock
      || (v73 = v117, *(_DWORD *)(v117 + 28) != -1)
      && (LODWORD(v98) = CmpDuplicateIndex(*(_QWORD *)(v7 + 32)), (_DWORD)v98 == -1)
      || *(_DWORD *)(v73 + 32) != -1 && (HIDWORD(v98) = CmpDuplicateIndex(*(_QWORD *)(v7 + 32)), HIDWORD(v98) == -1) )
    {
      started = -1073741670;
      goto LABEL_67;
    }
    if ( v61 == -1 || CmpRemoveSubKeyFromList(*(_QWORD *)(v7 + 32), (int *)&v98 + ((unsigned __int64)v61 >> 31), v61) )
    {
      v74 = (unsigned __int64)(unsigned int)BugCheckParameter3 >> 31;
      if ( !CmpAddSubKeyToList(*(_QWORD *)(v7 + 32), (unsigned int *)&v98 + v74, BugCheckParameter3) )
      {
        started = -1073741670;
        goto LABEL_95;
      }
      if ( *(_WORD *)(v6 + 66)
        || CmpRemoveSubKeyFromList(
             *(_QWORD *)(v7 + 32),
             (int *)&v98 + ((unsigned __int64)*(unsigned int *)(v6 + 40) >> 31),
             *(_DWORD *)(v6 + 40)) )
      {
        v75 = v98;
        LODWORD(v98) = *(_DWORD *)(v73 + 28);
        v76 = *(_DWORD *)(v73 + 32);
        *(_DWORD *)(v73 + 28) = v75;
        v77 = HIDWORD(v98);
        HIDWORD(v98) = v76;
        *(_DWORD *)(v73 + 32) = v77;
        if ( v61 != -1 )
          --*(_DWORD *)(v73 + 4 * ((unsigned __int64)v61 >> 31) + 20);
        ++*(_DWORD *)(v73 + 4 * v74 + 20);
        if ( !*(_WORD *)(v6 + 66) )
          --*(_DWORD *)(v73 + 4 * ((unsigned __int64)*(unsigned int *)(v6 + 40) >> 31) + 20);
        CmpCleanUpSubKeyInfo(v7, 1);
        v78 = v100;
        v79 = v100->m128i_u16[0];
        if ( (unsigned __int16)*(_DWORD *)(v73 + 52) < v79 )
        {
          *(_WORD *)(v73 + 52) = v79;
          *(_WORD *)(v7 + 176) = v78->m128i_i16[0];
        }
        if ( *(_WORD *)(v6 + 66) )
        {
          v80 = CmpGetKeyNodeForKcb(v6, (__int64)&v110, 1);
          v81 = *(_BYTE *)(v80 + 13);
          *(_WORD *)(v80 + 2) &= 0x20u;
          *(_WORD *)(v80 + 52) = 0;
          *(_DWORD *)(v80 + 52) &= 0xFF00FFFF;
          *(_BYTE *)(v80 + 13) = v81 & 0x7C | 1;
          *(_DWORD *)(v80 + 28) = -1;
          *(_DWORD *)(v80 + 32) = -1;
          *(_DWORD *)(v80 + 40) = -1;
          *(_DWORD *)(v80 + 48) = -1;
          *(_QWORD *)(v80 + 20) = 0LL;
          *(_DWORD *)(v80 + 36) = 0;
          *(_BYTE *)(v80 + 55) = 0;
          *(_QWORD *)(v80 + 56) = 0LL;
          *(_DWORD *)(v80 + 64) = 0;
          *(_WORD *)(v80 + 74) = 0;
          CmpReleaseKeyNodeForKcb(v6);
        }
        else
        {
          HvFreeCell(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
        }
        *(_DWORD *)(v6 + 40) = BugCheckParameter3;
        LODWORD(BugCheckParameter3) = -1;
        v104 = -1;
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
            (__int64)&v108,
            0);
          v85 = BugCheckParameter2;
          *(_QWORD *)(*(_QWORD *)(v6 + 192) + 24LL) = 0LL;
          CmpCreateLayerLink(v85, v6);
        }
        CmpRemoveKeyControlBlock(v6);
        v86 = *(_QWORD *)(v6 + 32);
        *(_DWORD *)(v6 + 16) = v36;
        CmpInsertKeyHash(v86);
        v87 = *(unsigned int **)(v6 + 80);
        *(_QWORD *)(v6 + 80) = NameControlBlock;
        NameControlBlock = (unsigned __int8 *)v87;
        CmpMarkCachedFullKCBNameStale(v6);
        v88 = *(void **)(v6 + 200);
        if ( (unsigned __int64)v88 >= 2 )
          ExFreePoolWithTag(v88, 0x624E4D43u);
        *(_QWORD *)(v6 + 200) = 0LL;
        if ( v95 )
          *(_BYTE *)(v6 + 65) = 3;
        CmpUpdateParentForEachSon(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
        if ( v95 )
        {
          CmpSubtreeEnumeratorReset(v124);
          CmpSubtreeEnumeratorBeginForKcbStack(v124, v122);
          for ( i = CmpSubtreeEnumeratorAdvance((__int64)v124);
                i != -2147483622;
                i = CmpSubtreeEnumeratorAdvance((__int64)v124) )
          {
            CmpSubtreeEnumeratorGetCurrentKeyStacks(v124, 0LL, &v116);
            v90 = CmpKeyNodeStackGetEntryAtLayerHeight(v116, *(_WORD *)(v6 + 66));
            *(_BYTE *)(*(_QWORD *)(v90 + 16) + 13LL) |= 3u;
          }
        }
        *(_QWORD *)(v73 + 4) = v8;
        *(_QWORD *)(v7 + 168) = v8;
        CmpReleaseKeyNodeForKcb(v7);
        v117 = 0LL;
        CmpSearchForOpenSubKeys(v6, 1, 0LL);
        ++*(_QWORD *)(v7 + 304);
        ++*(_QWORD *)(v6 + 304);
        if ( v61 != -1 )
          CmpFreeKeyByCell(*(_QWORD *)(v7 + 32), v61, 0);
        started = 0;
        v3 = 0LL;
        goto LABEL_67;
      }
LABEL_94:
      started = -1073741443;
LABEL_95:
      v3 = 0LL;
      goto LABEL_67;
    }
    goto LABEL_100;
  }
  v71 = v105;
  started = CmpReferenceSecurityNode(*(_QWORD *)(v6 + 32), *(unsigned int *)(v105 + 44));
  if ( started >= 0 )
  {
    v72 = *(_DWORD *)(v71 + 44);
    v61 = v101;
    v104 = v72;
    goto LABEL_123;
  }
LABEL_67:
  v41 = 1;
LABEL_163:
  v30 = v94;
LABEL_164:
  CmpSubtreeEnumeratorCleanup((__int64)v124);
  if ( v117 )
    CmpReleaseKeyNodeForKcb(v7);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64 *))(v30 + 16))(v30, &v113);
  if ( v104 != -1 )
    CmpDereferenceSecurityNode(*(_QWORD *)(v6 + 32), v104);
  if ( v105 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v6 + 32) + 16LL))(*(_QWORD *)(v6 + 32), &v114);
  if ( (_DWORD)v98 != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v7 + 32), (unsigned int)v98);
  if ( HIDWORD(v98) != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v7 + 32), HIDWORD(v98));
  if ( (_DWORD)BugCheckParameter3 != -1 )
    HvFreeCell(*(_QWORD *)(v6 + 32), (unsigned int)BugCheckParameter3);
  if ( NameControlBlock )
    CmpDereferenceNameControlBlockWithLock((unsigned int *)NameControlBlock);
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2, (__int64)&v108, 0);
  if ( v107 )
    CmpDereferenceKeyControlBlockWithLock(v107, (__int64)&v108, 0);
  CmpDrainDelayDerefContext((_QWORD **)&v108);
  if ( v41 )
    CmpUnlockRegistry();
  CmpCleanupKcbStack((__int64)v122);
  CmpCleanupKcbStack((__int64)v123);
  CmpCleanupRollbackPacket((__int64)&v102);
  return (unsigned int)started;
}

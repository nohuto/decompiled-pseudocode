/*
 * XREFs of CmRenameKey @ 0x140912608
 * Callers:
 *     NtRenameKey @ 0x14090EF60 (NtRenameKey.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x1402A2104 (CmpDereferenceSecurityNode.c)
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpHKeyNodeSize @ 0x14053E93C (CmpHKeyNodeSize.c)
 *     CmpMarkCachedFullKCBNameStale @ 0x14053F064 (CmpMarkCachedFullKCBNameStale.c)
 *     CmpReferenceSecurityNode @ 0x140657894 (CmpReferenceSecurityNode.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14065B81C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x14065C388 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x14065C63C (CmpSubtreeEnumeratorCleanup.c)
 *     CmpFreeIndexByCell @ 0x14065E7EC (CmpFreeIndexByCell.c)
 *     CmpDuplicateIndex @ 0x14065E880 (CmpDuplicateIndex.c)
 *     CmpMarkEntireIndexDirty @ 0x14065E97C (CmpMarkEntireIndexDirty.c)
 *     CmpGetKeyNodeForKcb @ 0x14067E828 (CmpGetKeyNodeForKcb.c)
 *     CmpDiscardKcb @ 0x14067EB68 (CmpDiscardKcb.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14067EE40 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14067F480 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpCleanupRollbackPacket @ 0x140681834 (CmpCleanupRollbackPacket.c)
 *     CmpInvalidateSubtree @ 0x14069E21C (CmpInvalidateSubtree.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14069E26C (CmpPrepareForSubtreeInvalidation.c)
 *     CmpSearchForOpenSubKeys @ 0x14069E3E0 (CmpSearchForOpenSubKeys.c)
 *     CmpReportNotify @ 0x14069EF78 (CmpReportNotify.c)
 *     CmpCleanupKcbStack @ 0x14069F004 (CmpCleanupKcbStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14069F45C (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14069FC64 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x1406A0010 (CmpAbortRollbackPacket.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406A0070 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpCreateLayerLink @ 0x1406CAE28 (CmpCreateLayerLink.c)
 *     CmpAllocateLayerInfoForKcb @ 0x1406CAEB4 (CmpAllocateLayerInfoForKcb.c)
 *     CmpFindKcbInHashEntryByName @ 0x1406D2154 (CmpFindKcbInHashEntryByName.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1406E7088 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406FEA54 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFreeKeyByCell @ 0x1407164DC (CmpFreeKeyByCell.c)
 *     CmpMarkKeyDirty @ 0x140716758 (CmpMarkKeyDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x140716F80 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyToList @ 0x1407185B4 (CmpAddSubKeyToList.c)
 *     CmpHashUnicodeComponent @ 0x140718B68 (CmpHashUnicodeComponent.c)
 *     CmpReferenceKeyControlBlock @ 0x14071B250 (CmpReferenceKeyControlBlock.c)
 *     CmpCleanUpSubKeyInfo @ 0x14071B5A0 (CmpCleanUpSubKeyInfo.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14071C0FC (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpGetEffectiveKcbSemantics @ 0x140721CA0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKcbImmutable @ 0x140721FB8 (CmpIsKcbImmutable.c)
 *     CmpCopyName @ 0x14079B8C0 (CmpCopyName.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvAllocateCell @ 0x14079C8A4 (HvAllocateCell.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCreateKeyControlBlock @ 0x1407C3850 (CmpCreateKeyControlBlock.c)
 *     CmpGetNameControlBlock @ 0x1407C3E50 (CmpGetNameControlBlock.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x14082F12C (CmpFindSubKeyByNameWithStatus.c)
 *     HvMarkCellDirty @ 0x14087D6D0 (HvMarkCellDirty.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140881426 (CmpReleaseKeyNodeForKcb.c)
 *     CmpInsertKeyHash @ 0x14091524C (CmpInsertKeyHash.c)
 *     CmpRemoveKeyControlBlock @ 0x1409154C4 (CmpRemoveKeyControlBlock.c)
 *     CmpCheckKcbStackAccess @ 0x140918134 (CmpCheckKcbStackAccess.c)
 *     CmpDoAccessCheckOnKcbSubtree @ 0x14091854C (CmpDoAccessCheckOnKcbSubtree.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x14091CDE8 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpLogUnsupportedOperation @ 0x14091CEA0 (CmpLogUnsupportedOperation.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x14091D070 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x14091D1FC (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x14091D24C (CmpSubtreeEnumeratorInitialize.c)
 *     CmpSubtreeEnumeratorReset @ 0x14091D284 (CmpSubtreeEnumeratorReset.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x14091D2E4 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpMarkAllChildrenDirty @ 0x140921078 (CmpMarkAllChildrenDirty.c)
 *     CmpUpdateParentForEachSon @ 0x14092183C (CmpUpdateParentForEachSon.c)
 *     CmpPromoteKey @ 0x1409226E0 (CmpPromoteKey.c)
 *     CmpPromoteSubtreeForKcbStack @ 0x140922C44 (CmpPromoteSubtreeForKcbStack.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpIsShutdownRundownActive @ 0x140AB4248 (CmpIsShutdownRundownActive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     HvpGetBinContextInitialize @ 0x140AB4534 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall CmRenameKey(__int64 a1, UNICODE_STRING *a2, char a3)
{
  ULONG_PTR v3; // rbx
  char v4; // r12
  _QWORD *v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r13
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  __int64 v13; // rsi
  int started; // r14d
  int v15; // r8d
  __int64 v16; // r8
  char v17; // r12
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r8
  int v22; // eax
  __int16 v23; // di
  __int64 KcbAtLayerHeight; // rbx
  __int64 v25; // r9
  __int64 KeyNodeForKcb; // rax
  __int16 v27; // r14
  __int64 v28; // rdi
  __int64 CellFlat; // rax
  int v30; // eax
  int v31; // edi
  int v32; // ebx
  __int64 v33; // rcx
  unsigned int v34; // edi
  ULONG_PTR KcbInHashEntryByName; // rax
  __int64 v36; // r14
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  char v42; // si
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  unsigned int *v48; // r12
  ULONG_PTR v49; // r14
  __int16 v50; // ax
  __int16 v51; // cx
  __int64 v52; // r12
  ULONG_PTR v53; // rax
  ULONG_PTR v54; // r14
  ULONG_PTR v55; // rax
  __int64 v56; // rax
  int v57; // edx
  int v58; // eax
  __int64 v59; // r12
  ULONG_PTR v60; // rdx
  ULONG_PTR v61; // rdx
  unsigned int v62; // r12d
  __int64 EntryAtLayerHeight; // rax
  int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rbx
  __m128i *v67; // r14
  unsigned __int16 v68; // ax
  unsigned __int16 v69; // cx
  __int64 v70; // rbx
  __int64 v71; // r12
  int v72; // ecx
  __int64 v73; // rcx
  __int64 v74; // rax
  ULONG_PTR v75; // rdx
  ULONG_PTR v76; // rdx
  unsigned __int64 v77; // r12
  __int64 v78; // r14
  unsigned int v79; // ebx
  unsigned int v80; // ecx
  unsigned int v81; // ecx
  __int64 v82; // rax
  char v83; // cl
  _QWORD *v84; // rax
  __int64 v85; // rdx
  _QWORD *v86; // rcx
  ULONG_PTR v87; // rcx
  __int64 v88; // rcx
  void *v89; // rcx
  int i; // eax
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v98; // [rsp+30h] [rbp-D0h]
  __int64 v99; // [rsp+38h] [rbp-C8h]
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-A8h]
  char v101; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *NameControlBlock; // [rsp+68h] [rbp-98h]
  __int16 v104; // [rsp+70h] [rbp-90h]
  unsigned __int16 v105; // [rsp+70h] [rbp-90h]
  unsigned int v106; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v107; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v108; // [rsp+80h] [rbp-80h]
  unsigned int v109; // [rsp+84h] [rbp-7Ch] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING *v111; // [rsp+90h] [rbp-70h]
  __int64 v112; // [rsp+98h] [rbp-68h] BYREF
  __int128 v113; // [rsp+A0h] [rbp-60h] BYREF
  int v114; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v115[3]; // [rsp+B4h] [rbp-4Ch] BYREF
  __int64 v116; // [rsp+C0h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp-38h]
  ULONG_PTR v118; // [rsp+D0h] [rbp-30h]
  __int128 v119; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v120; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v121; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v122; // [rsp+F8h] [rbp-8h]
  ULONG_PTR v123; // [rsp+100h] [rbp+0h] BYREF
  __int64 v124; // [rsp+108h] [rbp+8h] BYREF
  _QWORD *v125; // [rsp+110h] [rbp+10h]
  __int64 v126; // [rsp+118h] [rbp+18h] BYREF
  _OWORD v127[2]; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v128[2]; // [rsp+140h] [rbp+40h] BYREF
  __int16 v129[56]; // [rsp+160h] [rbp+60h] BYREF

  v3 = 0LL;
  v4 = a3;
  v111 = a2;
  v5 = (_QWORD *)a1;
  v125 = (_QWORD *)a1;
  v123 = 0LL;
  v114 = 0;
  v119 = 0LL;
  memset(v129, 0, 0x68uLL);
  v126 = 0LL;
  v118 = 0LL;
  BugCheckParameter2 = 0LL;
  memset(v127, 0, sizeof(v127));
  WORD1(v127[0]) = -1;
  memset(v128, 0, sizeof(v128));
  WORD1(v128[0]) = -1;
  v6 = 0LL;
  v113 = 0LL;
  v7 = 0LL;
  BugCheckParameter3 = 0LL;
  v112 = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)&v112 + 4);
  v120 = v8;
  HvpGetBinContextInitialize((char *)&v120 + 4);
  v116 = v9;
  v109 = v9;
  *(_QWORD *)&v115[1] = 0LL;
  HvpGetBinContextInitialize((char *)&v116 + 4);
  v121 = v10;
  HvpGetBinContextInitialize((char *)&v121 + 4);
  v124 = v11;
  v115[0] = v11;
  v122 = 0LL;
  HvpGetBinContextInitialize((char *)&v124 + 4);
  NameControlBlock = 0LL;
  v106 = v12;
  v107 = v12;
  CmpSubtreeEnumeratorInitialize(v129);
  CmpInitializeDelayDerefContext(&v119);
  v13 = MEMORY[0xFFFFF78000000014];
  if ( (unsigned __int8)CmpIsShutdownRundownActive() )
  {
LABEL_174:
    started = -1073741431;
    v42 = v3;
    goto LABEL_175;
  }
  while ( 1 )
  {
    CmpLockRegistryExclusive();
    v6 = v5[1];
    v7 = *(_QWORD *)(v6 + 72);
    started = CmpStartKcbStackForTopLayerKcb((__int64)v127, v6);
    if ( started < 0 )
      goto LABEL_137;
    started = CmpStartKcbStackForTopLayerKcb((__int64)v128, v7);
    if ( started < 0 )
      goto LABEL_137;
    if ( (*(_DWORD *)(v6 + 8) & 0x180) != 0
      || CmpIsKcbImmutable(v6)
      || *(_QWORD *)(v6 + 32) == CmpMasterHive
      || (*(_DWORD *)(v6 + 184) & 0x40000) != 0 )
    {
      started = -1073741790;
      goto LABEL_137;
    }
    started = CmpPerformKeyBodyDeletionCheck(v5, 0LL);
    if ( started < 0 )
      goto LABEL_137;
    if ( v5[7] == v3 && v5[8] == v3 )
    {
      v123 = v3;
    }
    else
    {
      started = CmpTransSearchAddTransFromKeyBody(v5, &v123);
      if ( started < 0 )
        goto LABEL_137;
      v3 = v123;
      started = CmpPerformKeyBodyDeletionCheck(v5, v123);
      if ( started < 0 )
        goto LABEL_72;
    }
    if ( *(_WORD *)(v6 + 66) && v3 )
    {
      v47 = 26LL;
LABEL_71:
      CmpLogUnsupportedOperation(v47);
      started = -1073741822;
      goto LABEL_72;
    }
    if ( v3 )
    {
      v47 = 24LL;
      goto LABEL_71;
    }
    LOBYTE(v15) = v4;
    started = CmpCheckKcbStackAccess((unsigned int)v128, 0, v15, 4, 0);
    if ( started < 0 )
      goto LABEL_170;
    LOBYTE(v16) = v4;
    started = CmpDoAccessCheckOnKcbSubtree(v127, 0LL, v16, *(_WORD *)(v6 + 66) != 0 ? 196633 : 0x10000);
    if ( started < 0
      || (v17 = 1,
          CmpFlushNotifiesOnKeyBodyList(v6, 0LL, (__int64)&v119, 1),
          CmpReportNotify(v6, 0LL, 1u, 0LL),
          LOBYTE(v18) = 1,
          v20 = CmpTryAcquireKcbIXLocks(v6, v18, v19, (__int64)&v113),
          started = v20,
          v20 != -1073741267)
      && (v17 = 0, v20 < 0) )
    {
LABEL_170:
      v48 = 0LL;
      goto LABEL_74;
    }
    v22 = CmpTryAcquireKcbIXLocks(v7, 1LL, v21, (__int64)&v113);
    started = v22;
    if ( v22 == -1073741267 )
      goto LABEL_66;
    if ( v22 < 0 )
      goto LABEL_170;
    if ( v17 )
    {
LABEL_66:
      CmpLogTransactionAbortedForRollbackPacket(v6, 4u);
      CmpDrainDelayDerefContext((_QWORD **)&v119);
      CmpUnlockRegistry(v44, v43, v45, v46);
      v42 = 0;
      started = CmpAbortRollbackPacket((__int64)&v113, 0LL);
      if ( started < 0 )
      {
        v48 = 0LL;
        goto LABEL_176;
      }
      CmpCleanupRollbackPacket((__int64)&v113);
      goto LABEL_68;
    }
    v23 = *(_WORD *)(v7 + 66);
    v108 = -1;
    LODWORD(BugCheckParameter4) = -1;
    BugCheckParameter3 = 0LL;
    if ( v23 < 0 )
    {
LABEL_44:
      v101 = v3;
      goto LABEL_45;
    }
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v128, v23);
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, v25) == 1 )
      {
LABEL_31:
        v27 = -1;
        goto LABEL_32;
      }
      if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
        break;
LABEL_30:
      if ( --v23 < 0 )
        goto LABEL_31;
    }
    KeyNodeForKcb = CmpGetKeyNodeForKcb(KcbAtLayerHeight, (__int64)&v120, 1);
    started = CmpFindSubKeyByNameWithStatus(
                *(_QWORD *)(KcbAtLayerHeight + 32),
                KeyNodeForKcb,
                v111,
                &BugCheckParameter4);
    CmpReleaseKeyNodeForKcb(KcbAtLayerHeight, (unsigned int *)&v120);
    if ( started < 0 )
    {
      if ( started != -1073741772 )
      {
        v3 = 0LL;
        v28 = 0LL;
        v48 = 0LL;
LABEL_76:
        v42 = 1;
        goto LABEL_177;
      }
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, (__int64)v125) )
        goto LABEL_31;
      goto LABEL_30;
    }
    v27 = v23;
    BugCheckParameter3 = *(_QWORD *)(KcbAtLayerHeight + 32);
LABEL_32:
    v108 = BugCheckParameter4;
    if ( (_DWORD)BugCheckParameter4 == -1 )
    {
      LOBYTE(v3) = 0;
      goto LABEL_44;
    }
    v28 = BugCheckParameter3;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v112);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, (unsigned int *)&v112);
    v3 = CellFlat;
    if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(BugCheckParameter3, CellFlat) != 1 )
    {
      v48 = 0LL;
      started = -1073741535;
      goto LABEL_76;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v112);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v112);
    v101 = 1;
    if ( v27 != *(_WORD *)(v7 + 66) )
    {
      v108 = -1;
      BugCheckParameter3 = 0LL;
    }
LABEL_45:
    v30 = CmpHashUnicodeComponent((__m128i *)v111);
    v31 = 37 * *(_DWORD *)(v7 + 16);
    v32 = v30;
    v33 = *(_QWORD *)(v7 + 32);
    LODWORD(BugCheckParameter4) = v30;
    v34 = v30 + v31;
    KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v33, v34, v7, (__int64)v111);
    v118 = KcbInHashEntryByName;
    v36 = KcbInHashEntryByName;
    if ( !KcbInHashEntryByName )
      goto LABEL_55;
    CmpReferenceKeyControlBlock(KcbInHashEntryByName);
    started = CmpTryAcquireKcbIXLocks(v36, 1LL, v37, (__int64)&v113);
    if ( started == -1073741267 )
    {
      v17 = 1;
      goto LABEL_49;
    }
    if ( started < 0 )
      goto LABEL_72;
LABEL_49:
    started = CmpPrepareToInvalidateAllHigherLayerKcbs(v118, 2LL, &v113);
    if ( started == -1073741267 )
    {
      v17 = 1;
      goto LABEL_52;
    }
    if ( started < 0 )
      goto LABEL_72;
LABEL_52:
    started = CmpPrepareForSubtreeInvalidation(v118, 0, (__int64)&v113);
    if ( started == -1073741267 )
    {
      v17 = 1;
      goto LABEL_55;
    }
    if ( started < 0 )
      goto LABEL_72;
LABEL_55:
    started = CmpPrepareToInvalidateAllHigherLayerKcbs(v6, 2LL, &v113);
    if ( started == -1073741267 )
    {
      v17 = 1;
      goto LABEL_58;
    }
    if ( started < 0 )
      goto LABEL_72;
LABEL_58:
    if ( !*(_WORD *)(v6 + 66) )
      goto LABEL_61;
    started = CmpPrepareForSubtreeInvalidation(v6, 0, (__int64)&v113);
    if ( started != -1073741267 )
      break;
LABEL_62:
    CmpLogTransactionAbortedForRollbackPacket(v6, 4u);
    v3 = v118;
    if ( v118 )
    {
      CmpDereferenceKeyControlBlockWithLock(v118, (__int64)&v119, 0);
      v3 = 0LL;
      v118 = 0LL;
    }
    CmpDrainDelayDerefContext((_QWORD **)&v119);
    CmpUnlockRegistry(v39, v38, v40, v41);
    v42 = v3;
    started = CmpAbortRollbackPacket((__int64)&v113, 0LL);
    if ( started < 0 )
      goto LABEL_175;
    CmpCleanupRollbackPacket((__int64)&v113);
    v5 = v125;
LABEL_68:
    v113 = 0LL;
    CmpCleanupKcbStack((__int64)v127);
    CmpCleanupKcbStack((__int64)v128);
    v13 = MEMORY[0xFFFFF78000000014];
    if ( (unsigned __int8)CmpIsShutdownRundownActive() )
      goto LABEL_174;
    v4 = a3;
  }
  if ( started < 0 )
  {
LABEL_72:
    v3 = 0LL;
    goto LABEL_73;
  }
LABEL_61:
  if ( v17 )
    goto LABEL_62;
  v49 = v118;
  if ( v118 )
  {
    CmpInvalidateAllHigherLayerKcbs(v118, 8LL, 2LL, &v119);
    CmpInvalidateSubtree(v49, 8LL, 0, (__int64)&v119, 0LL);
    CmpFlushNotifiesOnKeyBodyList(v49, 8LL, (__int64)&v119, 1);
    CmpDiscardKcb(v49);
  }
  CmpInvalidateAllHigherLayerKcbs(v6, 8LL, 2LL, &v119);
  v50 = *(_WORD *)(v6 + 66);
  if ( v50 )
  {
    CmpInvalidateSubtree(v6, 8LL, 0, (__int64)&v119, 0LL);
    v50 = *(_WORD *)(v6 + 66);
  }
  v51 = 0;
  v104 = 0;
  if ( v50 > 0 )
  {
    do
    {
      v52 = CmpGetKcbAtLayerHeight((__int64)v128, v51);
      v53 = CmpFindKcbInHashEntryByName(*(_QWORD *)(v7 + 32), v34, v7, (__int64)v111);
      v123 = v53;
      v54 = v53;
      if ( v53 )
      {
        CmpReferenceKeyControlBlock(v53);
        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
        v55 = v54;
        BugCheckParameter2 = v54;
      }
      else
      {
        if ( *(_DWORD *)(v52 + 40) == -1
          || (v56 = CmpGetKeyNodeForKcb(v52, (__int64)&v120, 1),
              started = CmpFindSubKeyByNameWithStatus(*(_QWORD *)(v52 + 32), v56, v111, &v114),
              CmpReleaseKeyNodeForKcb(v52, (unsigned int *)&v120),
              started == -1073741772) )
        {
          v57 = -1;
          v114 = -1;
        }
        else
        {
          if ( started < 0 )
          {
            v3 = 0LL;
            v48 = 0LL;
            goto LABEL_74;
          }
          v57 = v114;
        }
        LODWORD(v99) = v34;
        LODWORD(v98) = v32;
        v58 = CmpCreateKeyControlBlock(
                *(_QWORD *)(v52 + 32),
                v57,
                v52,
                BugCheckParameter2,
                0,
                &v111->Length,
                v98,
                v99,
                &v123);
        v48 = 0LL;
        started = v58;
        if ( v58 < 0 )
        {
          v3 = 0LL;
          goto LABEL_74;
        }
        if ( BugCheckParameter2 )
          CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
        v54 = v123;
        v55 = v123;
        BugCheckParameter2 = v123;
      }
      v51 = v104 + 1;
      v104 = v51;
    }
    while ( v51 < *(__int16 *)(v6 + 66) );
    if ( v55 )
    {
      started = CmpAllocateLayerInfoForKcb(v54);
      v3 = 0LL;
      if ( started < 0 )
        goto LABEL_137;
    }
  }
  if ( *(_WORD *)(v6 + 66) )
  {
    started = CmpPromoteKey(v127, 1LL, 0LL);
    v3 = 0LL;
    if ( started < 0 )
      goto LABEL_137;
    started = CmpPromoteSubtreeForKcbStack(v127);
    if ( started < 0 )
      goto LABEL_137;
  }
  started = HvMarkCellDirty(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40), 1);
  v3 = 0LL;
  if ( started < 0 )
    goto LABEL_137;
  v59 = CmpGetKeyNodeForKcb(v7, (__int64)&v124, 1);
  v122 = v59;
  v60 = *(unsigned int *)(v59 + 28);
  if ( (_DWORD)v60 != -1 )
  {
    started = CmpMarkEntireIndexDirty(*(_QWORD *)(v7 + 32), v60);
    v3 = 0LL;
    if ( started < 0 )
      goto LABEL_137;
  }
  v61 = *(unsigned int *)(v59 + 32);
  if ( (_DWORD)v61 != -1 )
  {
    started = CmpMarkEntireIndexDirty(*(_QWORD *)(v7 + 32), v61);
    v3 = 0LL;
    if ( started < 0 )
      goto LABEL_137;
  }
  started = HvMarkCellDirty(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40), 1);
  v3 = 0LL;
  if ( started < 0 )
    goto LABEL_137;
  v62 = v108;
  if ( v108 != -1 )
  {
    started = CmpMarkKeyDirty(*(_QWORD *)(v7 + 32), v108, 1);
    v3 = 0LL;
    if ( started < 0 )
      goto LABEL_137;
  }
  if ( !v101 )
  {
    started = CmpMarkAllChildrenDirty(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
    v3 = 0LL;
    if ( started >= 0 )
      goto LABEL_118;
    goto LABEL_137;
  }
  started = CmpSubtreeEnumeratorStartForKcbStack(v129, v127);
  v3 = 0LL;
  if ( started < 0 )
    goto LABEL_137;
  while ( (unsigned int)CmpSubtreeEnumeratorAdvance((__int64)v129) != -2147483622 )
  {
    CmpSubtreeEnumeratorGetCurrentKeyStacks(v129, 0LL, &v126);
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v126, *(_WORD *)(v6 + 66));
    started = HvMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(unsigned int *)(EntryAtLayerHeight + 8), 1);
    if ( started < 0 )
      goto LABEL_72;
  }
LABEL_118:
  v64 = CmpHKeyNodeSize();
  started = HvAllocateCell(
              *(_QWORD *)(v6 + 32),
              v64,
              *(_DWORD *)(v6 + 40) >> 31,
              &v109,
              (__int64)&v115[1],
              (__int64)&v116);
  v3 = 0LL;
  if ( started < 0 )
  {
LABEL_137:
    v42 = 1;
LABEL_175:
    v48 = (unsigned int *)NameControlBlock;
    goto LABEL_176;
  }
  v65 = CmpGetKeyNodeForKcb(v6, (__int64)&v121, 1);
  v66 = *(_QWORD *)&v115[1];
  **(_OWORD **)&v115[1] = *(_OWORD *)v65;
  *(_OWORD *)(v66 + 16) = *(_OWORD *)(v65 + 16);
  *(_OWORD *)(v66 + 32) = *(_OWORD *)(v65 + 32);
  *(_OWORD *)(v66 + 48) = *(_OWORD *)(v65 + 48);
  *(_QWORD *)(v66 + 64) = *(_QWORD *)(v65 + 64);
  *(_DWORD *)(v66 + 72) = *(_DWORD *)(v65 + 72);
  CmpReleaseKeyNodeForKcb(v6, (unsigned int *)&v121);
  v67 = (__m128i *)v111;
  v68 = CmpCopyName((_BYTE *)(v66 + 76), v111);
  v69 = v67->m128i_i16[0];
  *(_WORD *)(v66 + 72) = v68;
  v105 = v69;
  if ( v68 >= v69 )
    *(_WORD *)(*(_QWORD *)&v115[1] + 2LL) &= ~0x20u;
  else
    *(_WORD *)(v66 + 2) |= 0x20u;
  v70 = *(_QWORD *)&v115[1];
  *(_QWORD *)(*(_QWORD *)&v115[1] + 4LL) = v13;
  if ( v101 )
    *(_BYTE *)(v70 + 13) |= 3u;
  v3 = 0LL;
  if ( *(_WORD *)(v6 + 66) )
  {
    v71 = *(_QWORD *)&v115[1];
    started = CmpReferenceSecurityNode(*(_QWORD *)(v6 + 32), *(unsigned int *)(*(_QWORD *)&v115[1] + 44LL));
    if ( started < 0 )
      goto LABEL_137;
    v72 = *(_DWORD *)(v71 + 44);
    v62 = v108;
    v67 = (__m128i *)v111;
    v115[0] = v72;
  }
  v73 = *(_QWORD *)(v6 + 32);
  if ( (*(_BYTE *)(v73 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v73, &v116);
  else
    HvpReleaseCellPaged(v73, (unsigned int *)&v116);
  *(_QWORD *)&v115[1] = 0LL;
  NameControlBlock = CmpGetNameControlBlock(v67, (unsigned int *)&BugCheckParameter4);
  if ( NameControlBlock )
  {
    v74 = v122;
    v75 = *(unsigned int *)(v122 + 28);
    if ( (_DWORD)v75 != -1 )
    {
      started = CmpDuplicateIndex(*(_QWORD *)(v7 + 32), v75, 0, &v106);
      if ( started < 0 )
        goto LABEL_137;
      v74 = v122;
      v3 = 0LL;
    }
    v76 = *(unsigned int *)(v74 + 32);
    if ( (_DWORD)v76 == -1 || (started = CmpDuplicateIndex(*(_QWORD *)(v7 + 32), v76, 1, &v107), started >= 0) )
    {
      if ( v62 != -1 && !CmpRemoveSubKeyFromList(*(_QWORD *)(v7 + 32), &v106 + ((unsigned __int64)v62 >> 31), v62) )
      {
        started = -1073741443;
        v3 = 0LL;
        goto LABEL_137;
      }
      v77 = (unsigned __int64)v109 >> 31;
      started = CmpAddSubKeyToList(*(_QWORD *)(v7 + 32), &v106 + v77, v109);
      v3 = 0LL;
      if ( started >= 0 )
      {
        if ( !*(_WORD *)(v6 + 66)
          && !CmpRemoveSubKeyFromList(
                *(_QWORD *)(v7 + 32),
                &v106 + ((unsigned __int64)*(unsigned int *)(v6 + 40) >> 31),
                *(_DWORD *)(v6 + 40)) )
        {
          started = -1073741443;
          goto LABEL_137;
        }
        v78 = v122;
        v79 = v108;
        v80 = *(_DWORD *)(v122 + 28);
        *(_DWORD *)(v122 + 28) = v106;
        v106 = v80;
        v81 = *(_DWORD *)(v78 + 32);
        *(_DWORD *)(v78 + 32) = v107;
        v107 = v81;
        if ( v79 != -1 )
          --*(_DWORD *)(v78 + 4 * ((unsigned __int64)v79 >> 31) + 20);
        ++*(_DWORD *)(v78 + 4 * v77 + 20);
        if ( !*(_WORD *)(v6 + 66) )
          --*(_DWORD *)(v78 + 4 * ((unsigned __int64)*(unsigned int *)(v6 + 40) >> 31) + 20);
        CmpCleanUpSubKeyInfo(v7, 1);
        if ( (unsigned __int16)*(_DWORD *)(v78 + 52) < (unsigned int)v105 )
        {
          *(_WORD *)(v78 + 52) = v105;
          *(_WORD *)(v7 + 176) = v105;
        }
        if ( *(_WORD *)(v6 + 66) )
        {
          v82 = CmpGetKeyNodeForKcb(v6, (__int64)&v121, 1);
          v83 = *(_BYTE *)(v82 + 13);
          *(_WORD *)(v82 + 2) &= 0x20u;
          *(_WORD *)(v82 + 52) = 0;
          *(_DWORD *)(v82 + 52) &= 0xFF00FFFF;
          *(_BYTE *)(v82 + 13) = v83 & 0x7C | 1;
          *(_DWORD *)(v82 + 28) = -1;
          *(_DWORD *)(v82 + 32) = -1;
          *(_DWORD *)(v82 + 40) = -1;
          *(_DWORD *)(v82 + 48) = -1;
          *(_QWORD *)(v82 + 20) = 0LL;
          *(_DWORD *)(v82 + 36) = 0;
          *(_BYTE *)(v82 + 55) = 0;
          *(_QWORD *)(v82 + 56) = 0LL;
          *(_DWORD *)(v82 + 64) = 0;
          *(_WORD *)(v82 + 74) = 0;
          CmpReleaseKeyNodeForKcb(v6, (unsigned int *)&v121);
        }
        else
        {
          HvFreeCell(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
        }
        *(_DWORD *)(v6 + 40) = v109;
        v109 = -1;
        v115[0] = -1;
        if ( *(_WORD *)(v6 + 66) )
        {
          v84 = *(_QWORD **)(v6 + 192);
          v85 = *v84;
          if ( *(_QWORD **)(*v84 + 8LL) != v84 || (v86 = (_QWORD *)v84[1], (_QWORD *)*v86 != v84) )
            __fastfail(3u);
          *v86 = v85;
          *(_QWORD *)(v85 + 8) = v86;
          CmpDereferenceKeyControlBlockWithLock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 192) + 24LL) + 16LL),
            (__int64)&v119,
            0);
          v87 = BugCheckParameter2;
          *(_QWORD *)(*(_QWORD *)(v6 + 192) + 24LL) = 0LL;
          CmpCreateLayerLink(v87, v6);
        }
        CmpRemoveKeyControlBlock(v6);
        v88 = *(_QWORD *)(v6 + 32);
        *(_DWORD *)(v6 + 16) = v34;
        CmpInsertKeyHash(v88);
        v48 = *(unsigned int **)(v6 + 80);
        *(_QWORD *)(v6 + 80) = NameControlBlock;
        CmpMarkCachedFullKCBNameStale(v6);
        v89 = *(void **)(v6 + 200);
        if ( (unsigned __int64)v89 >= 2 )
          ExFreePoolWithTag(v89, 0x624E4D43u);
        *(_QWORD *)(v6 + 200) = 0LL;
        if ( v101 )
          *(_BYTE *)(v6 + 65) = 3;
        CmpUpdateParentForEachSon(*(_QWORD *)(v6 + 32));
        if ( v101 )
        {
          CmpSubtreeEnumeratorReset(v129);
          CmpSubtreeEnumeratorBeginForKcbStack(v129, v127);
          for ( i = CmpSubtreeEnumeratorAdvance((__int64)v129);
                i != -2147483622;
                i = CmpSubtreeEnumeratorAdvance((__int64)v129) )
          {
            CmpSubtreeEnumeratorGetCurrentKeyStacks(v129, 0LL, &v126);
            v91 = CmpKeyNodeStackGetEntryAtLayerHeight(v126, *(_WORD *)(v6 + 66));
            *(_BYTE *)(*(_QWORD *)(v91 + 16) + 13LL) |= 3u;
          }
        }
        *(_QWORD *)(v78 + 4) = v13;
        *(_QWORD *)(v7 + 168) = v13;
        CmpReleaseKeyNodeForKcb(v7, (unsigned int *)&v124);
        v122 = 0LL;
        CmpSearchForOpenSubKeys(v6, 1, 0LL);
        ++*(_QWORD *)(v7 + 304);
        ++*(_QWORD *)(v6 + 304);
        if ( v79 != -1 )
          CmpFreeKeyByCell(*(_QWORD *)(v7 + 32), v79, 0);
        started = 0;
        v3 = 0LL;
        goto LABEL_74;
      }
    }
    goto LABEL_137;
  }
  started = -1073741670;
LABEL_73:
  v48 = 0LL;
LABEL_74:
  v42 = 1;
LABEL_176:
  v28 = BugCheckParameter3;
LABEL_177:
  CmpSubtreeEnumeratorCleanup((__int64)v129);
  if ( v122 )
    CmpReleaseKeyNodeForKcb(v7, (unsigned int *)&v124);
  if ( v3 )
  {
    if ( (*(_BYTE *)(v28 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v28, &v112);
    else
      HvpReleaseCellPaged(v28, (unsigned int *)&v112);
  }
  if ( v115[0] != -1 )
    CmpDereferenceSecurityNode(*(_QWORD *)(v6 + 32), v115[0]);
  if ( *(_QWORD *)&v115[1] )
  {
    v92 = *(_QWORD *)(v6 + 32);
    if ( (*(_BYTE *)(v92 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v92, &v116);
    else
      HvpReleaseCellPaged(v92, (unsigned int *)&v116);
  }
  if ( v106 != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v7 + 32), v106);
  if ( v107 != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v7 + 32), v107);
  if ( v109 != -1 )
    HvFreeCell(*(_QWORD *)(v6 + 32), v109);
  if ( v48 )
    CmpDereferenceNameControlBlockWithLock(v48);
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2, (__int64)&v119, 0);
  if ( v118 )
    CmpDereferenceKeyControlBlockWithLock(v118, (__int64)&v119, 0);
  CmpDrainDelayDerefContext((_QWORD **)&v119);
  if ( v42 )
    CmpUnlockRegistry(v94, v93, v95, v96);
  CmpCleanupKcbStack((__int64)v127);
  CmpCleanupKcbStack((__int64)v128);
  CmpCleanupRollbackPacket((__int64)&v113);
  return (unsigned int)started;
}

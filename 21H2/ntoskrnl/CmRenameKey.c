/*
 * XREFs of CmRenameKey @ 0x14086CB64
 * Callers:
 *     NtRenameKey @ 0x140868D90 (NtRenameKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpDereferenceSecurityNode @ 0x1403F086C (CmpDereferenceSecurityNode.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpHKeyNodeSize @ 0x1404EC9F4 (CmpHKeyNodeSize.c)
 *     CmpMarkCachedFullKCBNameStale @ 0x1404ECB90 (CmpMarkCachedFullKCBNameStale.c)
 *     CmpReferenceSecurityNode @ 0x1405CCCC8 (CmpReferenceSecurityNode.c)
 *     CmpCreateLayerLink @ 0x1405D8378 (CmpCreateLayerLink.c)
 *     CmpAllocateLayerInfoForKcb @ 0x1405D8404 (CmpAllocateLayerInfoForKcb.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1405DED94 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpSearchForOpenSubKeys @ 0x1405DF4D8 (CmpSearchForOpenSubKeys.c)
 *     CmpCleanupRollbackPacket @ 0x1405E094C (CmpCleanupRollbackPacket.c)
 *     CmpReferenceKeyControlBlock @ 0x1405E09D4 (CmpReferenceKeyControlBlock.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1405E119C (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpReportNotify @ 0x1405E1B2C (CmpReportNotify.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405F2A10 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1405F8E58 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14065AB50 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKcbImmutable @ 0x14065ABF0 (CmpIsKcbImmutable.c)
 *     CmpAddSubKeyToList @ 0x14065EBC0 (CmpAddSubKeyToList.c)
 *     CmpCleanUpSubKeyInfo @ 0x14065EECC (CmpCleanUpSubKeyInfo.c)
 *     CmpHashUnicodeComponent @ 0x14065F044 (CmpHashUnicodeComponent.c)
 *     CmpMarkKeyDirty @ 0x14065F0B8 (CmpMarkKeyDirty.c)
 *     CmpFreeKeyByCell @ 0x1406600A0 (CmpFreeKeyByCell.c)
 *     CmpRemoveSubKeyFromList @ 0x140660490 (CmpRemoveSubKeyFromList.c)
 *     CmpGetKeyNodeForKcb @ 0x140660DF4 (CmpGetKeyNodeForKcb.c)
 *     CmpDiscardKcb @ 0x140661748 (CmpDiscardKcb.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140661A20 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1406643E8 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1406DEC70 (CmpGetEffectiveKcbSemantics.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406DECB0 (CmpGetKcbAtLayerHeight.c)
 *     CmpCreateKeyControlBlock @ 0x1406DEDB0 (CmpCreateKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByName @ 0x1406DF2A4 (CmpFindKcbInHashEntryByName.c)
 *     CmpGetNameControlBlock @ 0x1406DF370 (CmpGetNameControlBlock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1406DF600 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140712740 (CmpCleanupKcbStack.c)
 *     HvAllocateCell @ 0x1407207E4 (HvAllocateCell.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     CmpCopyName @ 0x1407214C0 (CmpCopyName.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140729D00 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140729E3C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14072A3C0 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x14072A738 (CmpSubtreeEnumeratorInitialize.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076E364 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140772C84 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x140772EA0 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x14077AA8C (CmpAbortRollbackPacket.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407ACAF8 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140863F5C (CmpReleaseKeyNodeForKcb.c)
 *     CmpInsertKeyHash @ 0x14086F18C (CmpInsertKeyHash.c)
 *     CmpRemoveKeyControlBlock @ 0x14086F298 (CmpRemoveKeyControlBlock.c)
 *     CmpCheckKcbStackAccess @ 0x140871844 (CmpCheckKcbStackAccess.c)
 *     CmpDoAccessCheckOnKcbSubtree @ 0x140871BFC (CmpDoAccessCheckOnKcbSubtree.c)
 *     CmpIsShutdownRundownActive @ 0x140875D08 (CmpIsShutdownRundownActive.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1408763B8 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpLogUnsupportedOperation @ 0x1408764AC (CmpLogUnsupportedOperation.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140876680 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x140876858 (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x1408768A8 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSubtreeEnumeratorReset @ 0x1408768D8 (CmpSubtreeEnumeratorReset.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x140876938 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpDuplicateIndex @ 0x14087A510 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x14087A734 (CmpFreeIndexByCell.c)
 *     CmpMarkAllChildrenDirty @ 0x14087AF38 (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x14087AFE8 (CmpMarkEntireIndexDirty.c)
 *     CmpUpdateParentForEachSon @ 0x14087B448 (CmpUpdateParentForEachSon.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 *     CmpPromoteKey @ 0x140880428 (CmpPromoteKey.c)
 *     CmpPromoteSubtreeForKcbStack @ 0x14088099C (CmpPromoteSubtreeForKcbStack.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int16 v24; // di
  __int64 KcbAtLayerHeight; // rbx
  __int64 v26; // r9
  __int64 KeyNodeForKcb; // rax
  __int16 v28; // r14
  __int64 v29; // rdi
  __int64 v30; // rcx
  unsigned int v31; // eax
  int v32; // edi
  unsigned int v33; // ebx
  __int64 v34; // rcx
  unsigned int v35; // edi
  ULONG_PTR KcbInHashEntryByName; // rax
  __int64 v37; // r14
  __int64 v38; // r8
  char v39; // si
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  ULONG_PTR v43; // r14
  __int64 v44; // r8
  __int16 v45; // ax
  __int64 v46; // rdx
  __int16 v47; // cx
  __int64 v48; // r12
  ULONG_PTR v49; // rax
  ULONG_PTR v50; // r14
  ULONG_PTR v51; // rax
  __int64 v52; // rax
  int v53; // edx
  int LayerInfoForKcb; // eax
  __int64 v55; // rbx
  __int64 v56; // r8
  ULONG_PTR v57; // rdx
  ULONG_PTR v58; // rdx
  unsigned int v59; // r12d
  char v60; // r14
  int v61; // eax
  __int64 EntryAtLayerHeight; // rax
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rbx
  unsigned __int16 v66; // ax
  __m128i *v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // r12
  unsigned int v70; // eax
  __int64 v71; // r14
  unsigned __int64 v72; // rbx
  int v73; // eax
  int v74; // ecx
  int v75; // eax
  __m128i *v76; // r8
  unsigned int v77; // edx
  __int64 v78; // rax
  char v79; // cl
  _QWORD *v80; // rax
  __int64 v81; // rdx
  _QWORD *v82; // rcx
  ULONG_PTR v83; // rcx
  __int64 v84; // rcx
  unsigned int *v85; // rax
  void *v86; // rcx
  int i; // eax
  __int64 v88; // rax
  __int64 v90; // [rsp+30h] [rbp-D0h]
  __int64 v91; // [rsp+38h] [rbp-C8h]
  __int64 v92; // [rsp+58h] [rbp-A8h]
  char v93; // [rsp+60h] [rbp-A0h]
  __int16 v95; // [rsp+62h] [rbp-9Eh]
  ULONG_PTR v96; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-90h]
  __m128i *v98; // [rsp+78h] [rbp-88h]
  unsigned int v99; // [rsp+80h] [rbp-80h]
  __int128 v100; // [rsp+88h] [rbp-78h] BYREF
  int v101; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v102; // [rsp+9Ch] [rbp-64h]
  __int64 v103; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-58h]
  ULONG_PTR v105; // [rsp+B0h] [rbp-50h]
  __int128 v106; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v107; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v108; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v109; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v110; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v111; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v112; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD *v113; // [rsp+F8h] [rbp-8h]
  __int64 v114; // [rsp+100h] [rbp+0h] BYREF
  __int64 v115; // [rsp+108h] [rbp+8h]
  unsigned __int8 *NameControlBlock; // [rsp+110h] [rbp+10h]
  unsigned int v117; // [rsp+118h] [rbp+18h] BYREF
  ULONG_PTR v118; // [rsp+120h] [rbp+20h] BYREF
  ULONG_PTR v119; // [rsp+128h] [rbp+28h] BYREF
  _OWORD v120[2]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v121[2]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v122[112]; // [rsp+170h] [rbp+70h] BYREF

  v3 = 0LL;
  v4 = a3;
  v98 = a2;
  v5 = (_QWORD *)a1;
  v113 = (_QWORD *)a1;
  v118 = 0LL;
  v101 = 0;
  v106 = 0LL;
  memset(v122, 0, 0x68uLL);
  memset(v120, 0, sizeof(v120));
  WORD1(v120[0]) = -1;
  v6 = 0LL;
  memset(v121, 0, sizeof(v121));
  WORD1(v121[0]) = -1;
  v7 = 0LL;
  v114 = 0LL;
  v100 = 0LL;
  v105 = 0LL;
  BugCheckParameter2 = 0LL;
  v92 = 0LL;
  v111 = 0xFFFFFFFFLL;
  v107 = 0xFFFFFFFFLL;
  LODWORD(BugCheckParameter3) = -1;
  v103 = 0LL;
  v112 = 0xFFFFFFFFLL;
  v108 = 0xFFFFFFFFLL;
  v102 = -1;
  v115 = 0LL;
  v110 = 0xFFFFFFFFLL;
  NameControlBlock = 0LL;
  v96 = -1LL;
  CmpSubtreeEnumeratorInitialize((__int64)v122);
  CmpInitializeDelayDerefContext(&v106);
  v8 = MEMORY[0xFFFFF78000000014];
  if ( (unsigned __int8)CmpIsShutdownRundownActive(v10, v9) )
  {
LABEL_162:
    started = -1073741431;
    v39 = v3;
    goto LABEL_163;
  }
  while ( 1 )
  {
    CmpLockRegistryExclusive();
    v6 = v5[1];
    v7 = *(_QWORD *)(v6 + 72);
    started = CmpStartKcbStackForTopLayerKcb((__int64)v120, v6, v11, v12);
    if ( started < 0 )
      goto LABEL_67;
    started = CmpStartKcbStackForTopLayerKcb((__int64)v121, v7, v13, v14);
    if ( started < 0 )
      goto LABEL_67;
    if ( (*(_DWORD *)(v6 + 8) & 0x180) != 0
      || CmpIsKcbImmutable(v6)
      || *(PVOID *)(v6 + 32) == CmpMasterHive
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
      v118 = v3;
    }
    else
    {
      started = CmpTransSearchAddTransFromKeyBody(v5, &v118);
      if ( started < 0 )
        goto LABEL_67;
      v3 = v118;
      started = CmpPerformKeyBodyDeletionCheck((__int64)v5, v118);
      if ( started < 0 )
        goto LABEL_66;
    }
    if ( *(_WORD *)(v6 + 66) && v3 )
    {
      v42 = 26LL;
LABEL_65:
      CmpLogUnsupportedOperation(v42);
      started = -1073741822;
      goto LABEL_66;
    }
    if ( v3 )
    {
      v42 = 24LL;
      goto LABEL_65;
    }
    LOBYTE(v16) = v4;
    started = CmpCheckKcbStackAccess((unsigned int)v121, 0, v16, 4, 0);
    if ( started < 0 )
      goto LABEL_67;
    LOBYTE(v17) = v4;
    started = CmpDoAccessCheckOnKcbSubtree(v120, 0LL, v17, *(_WORD *)(v6 + 66) != 0 ? 196633 : 0x10000);
    if ( started < 0 )
      goto LABEL_67;
    v18 = 1;
    CmpFlushNotifiesOnKeyBodyList(v6, 0, (__int64)&v106, 1);
    CmpReportNotify(v6, 0LL, 1u, 0LL);
    LOBYTE(v19) = 1;
    v21 = CmpTryAcquireKcbIXLocks(v6, v19, v20, (__int64)&v100);
    started = v21;
    if ( v21 != -1073741267 )
    {
      v18 = 0;
      if ( v21 < 0 )
        goto LABEL_67;
    }
    v23 = CmpTryAcquireKcbIXLocks(v7, 1LL, v22, (__int64)&v100);
    started = v23;
    if ( v23 != -1073741267 )
    {
      if ( v23 < 0 )
        goto LABEL_67;
      if ( !v18 )
        break;
    }
    CmpLogTransactionAbortedForRollbackPacket(v6, 4u);
    CmpDrainDelayDerefContext((_QWORD **)&v106);
    CmpUnlockRegistry();
    v39 = 0;
    started = CmpAbortRollbackPacket((__int64)&v100, 0LL);
    if ( started < 0 )
      goto LABEL_163;
    CmpCleanupRollbackPacket((__int64)&v100);
LABEL_62:
    v100 = 0LL;
    CmpCleanupKcbStack((__int64)v120);
    CmpCleanupKcbStack((__int64)v121);
    v8 = MEMORY[0xFFFFF78000000014];
    if ( (unsigned __int8)CmpIsShutdownRundownActive(v41, v40) )
      goto LABEL_162;
    v4 = a3;
  }
  v24 = *(_WORD *)(v7 + 66);
  v99 = -1;
  v109 = -1;
  v92 = 0LL;
  if ( v24 < 0 )
  {
LABEL_38:
    v93 = v3;
    goto LABEL_39;
  }
  while ( 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v121, v24);
    if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, v26) == 1 )
    {
LABEL_31:
      v28 = -1;
      goto LABEL_32;
    }
    if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
      break;
LABEL_30:
    if ( --v24 < 0 )
      goto LABEL_31;
  }
  KeyNodeForKcb = CmpGetKeyNodeForKcb(KcbAtLayerHeight, (__int64)&v107, 1);
  started = CmpFindSubKeyByNameWithStatus(
              *(_QWORD *)(KcbAtLayerHeight + 32),
              KeyNodeForKcb,
              (unsigned __int16 *)v98,
              &v109);
  CmpReleaseKeyNodeForKcb(KcbAtLayerHeight);
  if ( started < 0 )
  {
    if ( started != -1073741772 )
    {
      v3 = 0LL;
      v29 = 0LL;
LABEL_69:
      v39 = 1;
      goto LABEL_164;
    }
    if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, (__int64)v113) )
      goto LABEL_31;
    goto LABEL_30;
  }
  v28 = v24;
  v92 = *(_QWORD *)(KcbAtLayerHeight + 32);
LABEL_32:
  v99 = v109;
  if ( v109 == -1 )
  {
    LOBYTE(v3) = 0;
    goto LABEL_38;
  }
  v29 = v92;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v92 + 8))(v92, v109, &v111);
  if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v92, v3) != 1 )
  {
    started = -1073741535;
    goto LABEL_69;
  }
  (*(void (__fastcall **)(__int64, __int64 *))(v92 + 16))(v30, &v111);
  v93 = 1;
  if ( v28 != *(_WORD *)(v7 + 66) )
  {
    v99 = -1;
    v92 = 0LL;
  }
LABEL_39:
  v31 = CmpHashUnicodeComponent(v98);
  v32 = 37 * *(_DWORD *)(v7 + 16);
  v33 = v31;
  v34 = *(_QWORD *)(v7 + 32);
  v117 = v31;
  v35 = v31 + v32;
  KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v34, v35, v7, (__int64)v98);
  v105 = KcbInHashEntryByName;
  v37 = KcbInHashEntryByName;
  if ( !KcbInHashEntryByName )
    goto LABEL_49;
  CmpReferenceKeyControlBlock(KcbInHashEntryByName);
  started = CmpTryAcquireKcbIXLocks(v37, 1LL, v38, (__int64)&v100);
  if ( started == -1073741267 )
  {
    v18 = 1;
    goto LABEL_43;
  }
  if ( started < 0 )
    goto LABEL_66;
LABEL_43:
  started = CmpPrepareToInvalidateAllHigherLayerKcbs(v105, 2LL, &v100);
  if ( started == -1073741267 )
  {
    v18 = 1;
    goto LABEL_46;
  }
  if ( started < 0 )
    goto LABEL_66;
LABEL_46:
  started = CmpPrepareForSubtreeInvalidation(v105, 0, (__int64)&v100);
  if ( started == -1073741267 )
  {
    v18 = 1;
    goto LABEL_49;
  }
  if ( started < 0 )
    goto LABEL_66;
LABEL_49:
  started = CmpPrepareToInvalidateAllHigherLayerKcbs(v6, 2LL, &v100);
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
  started = CmpPrepareForSubtreeInvalidation(v6, 0, (__int64)&v100);
  if ( started == -1073741267 )
  {
LABEL_56:
    CmpLogTransactionAbortedForRollbackPacket(v6, 4u);
    v3 = v105;
    if ( v105 )
    {
      CmpDereferenceKeyControlBlockWithLock(v105, (__int64)&v106, 0);
      v3 = 0LL;
      v105 = 0LL;
    }
    CmpDrainDelayDerefContext((_QWORD **)&v106);
    CmpUnlockRegistry();
    v39 = v3;
    started = CmpAbortRollbackPacket((__int64)&v100, 0LL);
    if ( started < 0 )
      goto LABEL_163;
    CmpCleanupRollbackPacket((__int64)&v100);
    v5 = v113;
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
  v43 = v105;
  if ( v105 )
  {
    CmpInvalidateAllHigherLayerKcbs(v105, 8LL, 2LL, &v106);
    CmpInvalidateSubtree(v43, 8, 0, (__int64)&v106, 0LL);
    CmpFlushNotifiesOnKeyBodyList(v43, 8, (__int64)&v106, 1);
    CmpDiscardKcb(v43);
  }
  CmpInvalidateAllHigherLayerKcbs(v6, 8LL, 2LL, &v106);
  v45 = *(_WORD *)(v6 + 66);
  v46 = 0LL;
  if ( v45 )
  {
    CmpInvalidateSubtree(v6, 8, 0, (__int64)&v106, 0LL);
    v45 = *(_WORD *)(v6 + 66);
    v46 = 0LL;
  }
  v95 = 0;
  v47 = 0;
  if ( v45 > 0 )
  {
    do
    {
      v48 = CmpGetKcbAtLayerHeight((__int64)v121, v47);
      v49 = CmpFindKcbInHashEntryByName(*(_QWORD *)(v7 + 32), v35, v7, (__int64)v98);
      v119 = v49;
      v50 = v49;
      if ( v49 )
      {
        CmpReferenceKeyControlBlock(v49);
        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
        v51 = v50;
      }
      else
      {
        if ( *(_DWORD *)(v48 + 40) == -1
          || (v52 = CmpGetKeyNodeForKcb(v48, (__int64)&v107, 1),
              started = CmpFindSubKeyByNameWithStatus(*(_QWORD *)(v48 + 32), v52, (unsigned __int16 *)v98, &v101),
              CmpReleaseKeyNodeForKcb(v48),
              started == -1073741772) )
        {
          v53 = -1;
          v101 = -1;
        }
        else
        {
          if ( started < 0 )
            goto LABEL_95;
          v53 = v101;
        }
        LODWORD(v91) = v35;
        LODWORD(v90) = v33;
        started = CmpCreateKeyControlBlock(
                    *(_QWORD *)(v48 + 32),
                    v53,
                    v48,
                    BugCheckParameter2,
                    0,
                    (unsigned __int16 *)v98,
                    v90,
                    v91,
                    &v119);
        if ( started < 0 )
          goto LABEL_95;
        if ( BugCheckParameter2 )
          CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
        v51 = v119;
      }
      v47 = v95 + 1;
      BugCheckParameter2 = v51;
      v95 = v47;
    }
    while ( v47 < *(__int16 *)(v6 + 66) );
    v46 = 0LL;
    if ( v51 )
    {
      LayerInfoForKcb = CmpAllocateLayerInfoForKcb(v51);
      v46 = 0LL;
      started = LayerInfoForKcb;
      v3 = 0LL;
      if ( LayerInfoForKcb < 0 )
        goto LABEL_67;
    }
  }
  if ( *(_WORD *)(v6 + 66) )
  {
    LOBYTE(v46) = 1;
    started = CmpPromoteKey(v120, v46, 0LL);
    v3 = 0LL;
    if ( started < 0 )
      goto LABEL_67;
    started = CmpPromoteSubtreeForKcbStack(v120);
    if ( started < 0 )
      goto LABEL_67;
  }
  LOBYTE(v44) = 1;
  if ( !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40), v44) )
    goto LABEL_94;
  v55 = CmpGetKeyNodeForKcb(v7, (__int64)&v110, 1);
  v115 = v55;
  v57 = *(unsigned int *)(v55 + 28);
  if ( (_DWORD)v57 != -1 && !(unsigned __int8)CmpMarkEntireIndexDirty(*(_QWORD *)(v7 + 32), v57) )
    goto LABEL_94;
  v58 = *(unsigned int *)(v55 + 32);
  if ( (_DWORD)v58 == -1 )
  {
    v3 = 0LL;
  }
  else
  {
    v3 = 0LL;
    if ( !(unsigned __int8)CmpMarkEntireIndexDirty(*(_QWORD *)(v7 + 32), v58) )
      goto LABEL_100;
  }
  LOBYTE(v56) = 1;
  if ( !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40), v56)
    || (v59 = v99, v99 != -1) && !CmpMarkKeyDirty(*(_QWORD *)(v7 + 32), v99, 1) )
  {
LABEL_100:
    started = -1073741443;
    goto LABEL_67;
  }
  v60 = v93;
  if ( v93 )
  {
    started = CmpSubtreeEnumeratorStartForKcbStack(v122, v120);
    if ( started >= 0 )
    {
      v61 = CmpSubtreeEnumeratorAdvance((__int64)v122);
      v3 = 0LL;
      while ( v61 != -2147483622 )
      {
        CmpSubtreeEnumeratorGetCurrentKeyStacks(v122, 0LL, &v114);
        EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v114, *(_WORD *)(v6 + 66));
        if ( !(unsigned __int8)HvMarkCellDirty(
                                 *(_QWORD *)EntryAtLayerHeight,
                                 *(unsigned int *)(EntryAtLayerHeight + 8),
                                 1LL) )
          goto LABEL_100;
        v61 = CmpSubtreeEnumeratorAdvance((__int64)v122);
      }
      v60 = v93;
      goto LABEL_114;
    }
    goto LABEL_67;
  }
  if ( !(unsigned __int8)CmpMarkAllChildrenDirty(*(_QWORD *)(v6 + 32)) )
    goto LABEL_100;
LABEL_114:
  v63 = CmpHKeyNodeSize();
  LODWORD(BugCheckParameter3) = HvAllocateCell(*(_QWORD *)(v6 + 32), v63, *(_DWORD *)(v6 + 40) >> 31, &v103, &v112);
  if ( (_DWORD)BugCheckParameter3 == -1 )
    goto LABEL_100;
  v64 = CmpGetKeyNodeForKcb(v6, (__int64)&v108, 1);
  v65 = v103;
  *(_OWORD *)v103 = *(_OWORD *)v64;
  *(_OWORD *)(v65 + 16) = *(_OWORD *)(v64 + 16);
  *(_OWORD *)(v65 + 32) = *(_OWORD *)(v64 + 32);
  *(_OWORD *)(v65 + 48) = *(_OWORD *)(v64 + 48);
  *(_QWORD *)(v65 + 64) = *(_QWORD *)(v64 + 64);
  *(_DWORD *)(v65 + 72) = *(_DWORD *)(v64 + 72);
  CmpReleaseKeyNodeForKcb(v6);
  v66 = CmpCopyName((_BYTE *)(v65 + 76), v98);
  v67 = v98;
  *(_WORD *)(v65 + 72) = v66;
  if ( v66 >= (unsigned int)v67->m128i_i16[0] )
    *(_WORD *)(v103 + 2) &= ~0x20u;
  else
    *(_WORD *)(v65 + 2) |= 0x20u;
  v68 = v103;
  *(_QWORD *)(v103 + 4) = v8;
  if ( v60 )
    *(_BYTE *)(v68 + 13) |= 3u;
  v3 = 0LL;
  if ( !*(_WORD *)(v6 + 66) )
  {
LABEL_123:
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v6 + 32) + 16LL))(*(_QWORD *)(v6 + 32), &v112);
    v103 = 0LL;
    NameControlBlock = CmpGetNameControlBlock(v98, &v117);
    if ( !NameControlBlock
      || (v71 = v115, *(_DWORD *)(v115 + 28) != -1)
      && (LODWORD(v96) = CmpDuplicateIndex(*(_QWORD *)(v7 + 32)), (_DWORD)v96 == -1)
      || *(_DWORD *)(v71 + 32) != -1 && (HIDWORD(v96) = CmpDuplicateIndex(*(_QWORD *)(v7 + 32)), HIDWORD(v96) == -1) )
    {
      started = -1073741670;
      goto LABEL_67;
    }
    if ( v59 == -1 || CmpRemoveSubKeyFromList(*(_QWORD *)(v7 + 32), (int *)&v96 + ((unsigned __int64)v59 >> 31), v59) )
    {
      v72 = (unsigned __int64)(unsigned int)BugCheckParameter3 >> 31;
      if ( !CmpAddSubKeyToList(*(_QWORD *)(v7 + 32), (unsigned int *)&v96 + v72, BugCheckParameter3) )
      {
        started = -1073741670;
        goto LABEL_95;
      }
      if ( *(_WORD *)(v6 + 66)
        || CmpRemoveSubKeyFromList(
             *(_QWORD *)(v7 + 32),
             (int *)&v96 + ((unsigned __int64)*(unsigned int *)(v6 + 40) >> 31),
             *(_DWORD *)(v6 + 40)) )
      {
        v73 = v96;
        LODWORD(v96) = *(_DWORD *)(v71 + 28);
        v74 = *(_DWORD *)(v71 + 32);
        *(_DWORD *)(v71 + 28) = v73;
        v75 = HIDWORD(v96);
        HIDWORD(v96) = v74;
        *(_DWORD *)(v71 + 32) = v75;
        if ( v59 != -1 )
          --*(_DWORD *)(v71 + 4 * ((unsigned __int64)v59 >> 31) + 20);
        ++*(_DWORD *)(v71 + 4 * v72 + 20);
        if ( !*(_WORD *)(v6 + 66) )
          --*(_DWORD *)(v71 + 4 * ((unsigned __int64)*(unsigned int *)(v6 + 40) >> 31) + 20);
        CmpCleanUpSubKeyInfo(v7, 1);
        v76 = v98;
        v77 = v98->m128i_u16[0];
        if ( (unsigned __int16)*(_DWORD *)(v71 + 52) < v77 )
        {
          *(_WORD *)(v71 + 52) = v77;
          *(_WORD *)(v7 + 176) = v76->m128i_i16[0];
        }
        if ( *(_WORD *)(v6 + 66) )
        {
          v78 = CmpGetKeyNodeForKcb(v6, (__int64)&v108, 1);
          v79 = *(_BYTE *)(v78 + 13);
          *(_WORD *)(v78 + 2) &= 0x20u;
          *(_WORD *)(v78 + 52) = 0;
          *(_DWORD *)(v78 + 52) &= 0xFF00FFFF;
          *(_BYTE *)(v78 + 13) = v79 & 0x7C | 1;
          *(_DWORD *)(v78 + 28) = -1;
          *(_DWORD *)(v78 + 32) = -1;
          *(_DWORD *)(v78 + 40) = -1;
          *(_DWORD *)(v78 + 48) = -1;
          *(_QWORD *)(v78 + 20) = 0LL;
          *(_DWORD *)(v78 + 36) = 0;
          *(_BYTE *)(v78 + 55) = 0;
          *(_QWORD *)(v78 + 56) = 0LL;
          *(_DWORD *)(v78 + 64) = 0;
          *(_WORD *)(v78 + 74) = 0;
          CmpReleaseKeyNodeForKcb(v6);
        }
        else
        {
          HvFreeCell(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
        }
        *(_DWORD *)(v6 + 40) = BugCheckParameter3;
        LODWORD(BugCheckParameter3) = -1;
        v102 = -1;
        if ( *(_WORD *)(v6 + 66) )
        {
          v80 = *(_QWORD **)(v6 + 192);
          v81 = *v80;
          if ( *(_QWORD **)(*v80 + 8LL) != v80 || (v82 = (_QWORD *)v80[1], (_QWORD *)*v82 != v80) )
            __fastfail(3u);
          *v82 = v81;
          *(_QWORD *)(v81 + 8) = v82;
          CmpDereferenceKeyControlBlockWithLock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 192) + 24LL) + 16LL),
            (__int64)&v106,
            0);
          v83 = BugCheckParameter2;
          *(_QWORD *)(*(_QWORD *)(v6 + 192) + 24LL) = 0LL;
          CmpCreateLayerLink(v83, v6);
        }
        CmpRemoveKeyControlBlock(v6);
        v84 = *(_QWORD *)(v6 + 32);
        *(_DWORD *)(v6 + 16) = v35;
        CmpInsertKeyHash(v84);
        v85 = *(unsigned int **)(v6 + 80);
        *(_QWORD *)(v6 + 80) = NameControlBlock;
        NameControlBlock = (unsigned __int8 *)v85;
        CmpMarkCachedFullKCBNameStale(v6);
        v86 = *(void **)(v6 + 200);
        if ( (unsigned __int64)v86 >= 2 )
          ExFreePoolWithTag(v86, 0x624E4D43u);
        *(_QWORD *)(v6 + 200) = 0LL;
        if ( v93 )
          *(_BYTE *)(v6 + 65) = 3;
        CmpUpdateParentForEachSon(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
        if ( v93 )
        {
          CmpSubtreeEnumeratorReset(v122);
          CmpSubtreeEnumeratorBeginForKcbStack(v122, v120);
          for ( i = CmpSubtreeEnumeratorAdvance((__int64)v122);
                i != -2147483622;
                i = CmpSubtreeEnumeratorAdvance((__int64)v122) )
          {
            CmpSubtreeEnumeratorGetCurrentKeyStacks(v122, 0LL, &v114);
            v88 = CmpKeyNodeStackGetEntryAtLayerHeight(v114, *(_WORD *)(v6 + 66));
            *(_BYTE *)(*(_QWORD *)(v88 + 16) + 13LL) |= 3u;
          }
        }
        *(_QWORD *)(v71 + 4) = v8;
        *(_QWORD *)(v7 + 168) = v8;
        CmpReleaseKeyNodeForKcb(v7);
        v115 = 0LL;
        CmpSearchForOpenSubKeys(v6, 1, 0LL);
        ++*(_QWORD *)(v7 + 304);
        ++*(_QWORD *)(v6 + 304);
        if ( v59 != -1 )
          CmpFreeKeyByCell(*(_QWORD *)(v7 + 32), v59, 0);
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
  v69 = v103;
  started = CmpReferenceSecurityNode(*(_QWORD *)(v6 + 32), *(unsigned int *)(v103 + 44));
  if ( started >= 0 )
  {
    v70 = *(_DWORD *)(v69 + 44);
    v59 = v99;
    v102 = v70;
    goto LABEL_123;
  }
LABEL_67:
  v39 = 1;
LABEL_163:
  v29 = v92;
LABEL_164:
  CmpSubtreeEnumeratorCleanup((__int64)v122);
  if ( v115 )
    CmpReleaseKeyNodeForKcb(v7);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64 *))(v29 + 16))(v29, &v111);
  if ( v102 != -1 )
    CmpDereferenceSecurityNode(*(_QWORD *)(v6 + 32), v102);
  if ( v103 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v6 + 32) + 16LL))(*(_QWORD *)(v6 + 32), &v112);
  if ( (_DWORD)v96 != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v7 + 32), (unsigned int)v96);
  if ( HIDWORD(v96) != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v7 + 32), HIDWORD(v96));
  if ( (_DWORD)BugCheckParameter3 != -1 )
    HvFreeCell(*(_QWORD *)(v6 + 32), (unsigned int)BugCheckParameter3);
  if ( NameControlBlock )
    CmpDereferenceNameControlBlockWithLock((unsigned int *)NameControlBlock);
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2, (__int64)&v106, 0);
  if ( v105 )
    CmpDereferenceKeyControlBlockWithLock(v105, (__int64)&v106, 0);
  CmpDrainDelayDerefContext((_QWORD **)&v106);
  if ( v39 )
    CmpUnlockRegistry();
  CmpCleanupKcbStack((__int64)v120);
  CmpCleanupKcbStack((__int64)v121);
  CmpCleanupRollbackPacket((__int64)&v100);
  return (unsigned int)started;
}

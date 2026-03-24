/*
 * XREFs of CmpCreateChild @ 0x140667AD4
 * Callers:
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpDoBuildVirtualStack @ 0x14086FF9C (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmpIsKcbInsideVirtualStore @ 0x14027EF74 (CmpIsKcbInsideVirtualStore.c)
 *     SkipVirtualAccessCheck @ 0x14027EF88 (SkipVirtualAccessCheck.c)
 *     CmpTransEnlistUowInKcb @ 0x140360610 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x140361D2C (CmpTransEnlistUowInCmTrans.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     CmpHKeyNodeSize @ 0x1404EC7B4 (CmpHKeyNodeSize.c)
 *     CmpGetEffectiveCellType @ 0x1405CD2B4 (CmpGetEffectiveCellType.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x1405CD308 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpReportNotifyForKcbStack @ 0x1405ED300 (CmpReportNotifyForKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405EF550 (CmpGetKcbAtLayerHeight.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpTryAcquireIXLockExclusive @ 0x1406650F8 (CmpTryAcquireIXLockExclusive.c)
 *     CmpTryAcquireIXLockIntent @ 0x140665108 (CmpTryAcquireIXLockIntent.c)
 *     CmpIsKcbImmutable @ 0x140665DD0 (CmpIsKcbImmutable.c)
 *     HvUnlockHiveFlusherShared @ 0x14066628C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406662C4 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406662E0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140669FA4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x14066A0AC (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x14066A130 (CmpAssignSecurityToKcb.c)
 *     CmUnlockHiveSecurity @ 0x14066A1E4 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x14066A204 (CmLockHiveSecurityExclusive.c)
 *     CmpMarkKeyDirty @ 0x14066A298 (CmpMarkKeyDirty.c)
 *     SeAssignSecurity @ 0x14066A500 (SeAssignSecurity.c)
 *     CmpFreeKeyByCell @ 0x14066B280 (CmpFreeKeyByCell.c)
 *     CmpFreeSecurityDescriptor @ 0x14066C518 (CmpFreeSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorNode @ 0x14066DB50 (CmpGetSecurityDescriptorNode.c)
 *     CmpRecordParseFailure @ 0x14068A510 (CmpRecordParseFailure.c)
 *     CmpNameSize @ 0x14069306C (CmpNameSize.c)
 *     SeDeassignSecurity @ 0x14069F9F0 (SeDeassignSecurity.c)
 *     CmAddLogForAction @ 0x1406AFE4C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406B8780 (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406C25F4 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpIsKeyStackDeleted @ 0x1406FB540 (CmpIsKeyStackDeleted.c)
 *     HvAllocateCell @ 0x140709404 (HvAllocateCell.c)
 *     HvFreeCell @ 0x140709534 (HvFreeCell.c)
 *     CmpCopyName @ 0x14070A0E0 (CmpCopyName.c)
 *     CmpLockIXLockExclusive @ 0x14071D3E0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14071D440 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14071D7DC (CmpRundownUnitOfWork.c)
 *     CmpAssignSecurityDescriptor @ 0x1408716B0 (CmpAssignSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140871D7C (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpLogUnsupportedOperation @ 0x14087634C (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x14087824C (CmpSnapshotTxOwnerArray.c)
 *     CmpAddSubKey @ 0x14087A398 (CmpAddSubKey.c)
 *     HvMarkCellDirty @ 0x14087BCE8 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087EAA8 (CmpFreeUnitOfWork.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCreateChild(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int16 a6,
        int a7,
        char a8,
        __int64 a9)
{
  char v9; // r15
  char v10; // r14
  __int64 KcbAtLayerHeight; // rdi
  __int64 v12; // r8
  __int64 v13; // r13
  ULONG_PTR v14; // r12
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // ebx
  _DWORD *v18; // r14
  bool IsKcbInsideVirtualStore; // al
  __int16 v20; // dx
  __int64 v21; // r11
  __int16 v22; // cx
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  __int64 v26; // r11
  GENERIC_MAPPING *GenericMapping; // rbx
  void *SecurityDescriptorForKcbStack; // rax
  NTSTATUS v29; // eax
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rdx
  char *v33; // rdi
  __int64 v34; // r8
  __int64 v35; // rdx
  int v36; // eax
  int SecurityDescriptorNode; // eax
  __int64 v38; // rdx
  char v39; // al
  __int16 v40; // cx
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned int v44; // ecx
  bool v45; // zf
  _QWORD *UnitOfWork; // rax
  int v47; // eax
  _QWORD *v48; // rax
  int v49; // eax
  int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  int v57; // ebx
  int v58; // eax
  _BYTE *v59; // rbx
  __int16 v60; // ax
  __int64 v61; // rcx
  int v62; // eax
  unsigned __int16 v63; // ax
  __int16 v64; // cx
  __int64 v65; // rax
  ULONG_PTR v66; // rcx
  ULONG_PTR v67; // rax
  int v68; // eax
  __int64 v69; // rdi
  __int64 v70; // r8
  __int64 v71; // rdx
  unsigned int v72; // eax
  ULONG_PTR v73; // r13
  ULONG_PTR v74; // r13
  PSECURITY_DESCRIPTOR v75; // r13
  __int64 v76; // r14
  void *v77; // rcx
  int SubjectContext; // [rsp+20h] [rbp-108h]
  char v80; // [rsp+41h] [rbp-E7h]
  char v81; // [rsp+42h] [rbp-E6h]
  void *v82; // [rsp+48h] [rbp-E0h] BYREF
  char v83; // [rsp+50h] [rbp-D8h]
  char v84; // [rsp+51h] [rbp-D7h]
  __int16 v85; // [rsp+56h] [rbp-D2h]
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-D0h]
  __int16 v87; // [rsp+60h] [rbp-C8h]
  _DWORD Size[3]; // [rsp+64h] [rbp-C4h] BYREF
  PSECURITY_DESCRIPTOR ExplicitDescriptor; // [rsp+70h] [rbp-B8h]
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp-B0h]
  ULONG_PTR v91; // [rsp+80h] [rbp-A8h]
  int v92; // [rsp+88h] [rbp-A0h]
  int v93; // [rsp+8Ch] [rbp-9Ch]
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+90h] [rbp-98h] BYREF
  void *v95; // [rsp+98h] [rbp-90h] BYREF
  __int64 v96; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v97; // [rsp+A8h] [rbp-80h]
  __int64 v98; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v99; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD *v100; // [rsp+C0h] [rbp-68h]
  _QWORD *v101; // [rsp+C8h] [rbp-60h]
  __int64 v102; // [rsp+D0h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp-50h]
  unsigned int v108; // [rsp+170h] [rbp+48h]
  unsigned __int16 *v109; // [rsp+170h] [rbp+48h]

  v81 = 0;
  v9 = 0;
  v84 = 0;
  v10 = 0;
  v83 = 0;
  v82 = 0LL;
  v92 = -1;
  v99 = 0xFFFFFFFFLL;
  v95 = 0LL;
  BugCheckParameter3 = -1LL;
  v96 = 0xFFFFFFFFLL;
  v97 = 0LL;
  v98 = 0xFFFFFFFFLL;
  NewDescriptor = 0LL;
  Size[0] = -1;
  v91 = 0LL;
  v100 = 0LL;
  BugCheckParameter4 = 0LL;
  v101 = 0LL;
  v80 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(_WORD *)(a1 + 2));
  *(_QWORD *)&Size[1] = KcbAtLayerHeight;
  v13 = CmpGetKcbAtLayerHeight(v12, *(_WORD *)(v12 + 2));
  v102 = v13;
  v14 = *(_QWORD *)(v13 + 32);
  BugCheckParameter2 = v14;
  if ( a9 && (*(_DWORD *)(v14 + 160) & 2) != 0 )
  {
    v15 = 3222863873LL;
    v16 = 262400LL;
LABEL_4:
    v17 = v15;
LABEL_5:
    v18 = (_DWORD *)a5;
    goto LABEL_6;
  }
  if ( (a7 & 0xFFFFFFFC) != 0 )
  {
    v17 = -1073741811;
    v15 = 3221225485LL;
    v16 = 262528LL;
    goto LABEL_5;
  }
  if ( (a7 & 1) != 0 || (*(_DWORD *)(v14 + 4152) & 0x20) != 0 )
  {
    v10 = 1;
    v83 = 1;
  }
  if ( (*(_DWORD *)(KcbAtLayerHeight + 8) & 0x80u) != 0 )
  {
    v15 = 3221225506LL;
    v16 = 262656LL;
    goto LABEL_4;
  }
  if ( CmpIsKcbImmutable(KcbAtLayerHeight) )
  {
    v15 = 3221225506LL;
    v16 = 262912LL;
    goto LABEL_4;
  }
  if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
  {
    v15 = 3221225506LL;
    v16 = 263168LL;
    goto LABEL_4;
  }
  IsKcbInsideVirtualStore = CmpIsKcbInsideVirtualStore(KcbAtLayerHeight);
  v22 = v20 | 0x200;
  if ( !IsKcbInsideVirtualStore )
    v22 = v20;
  v85 = v22;
  if ( v10 && *(_QWORD *)(a3 + 64) )
  {
    v15 = 3221225506LL;
    v16 = 263424LL;
    goto LABEL_4;
  }
  v18 = (_DWORD *)a5;
  v93 = *(_DWORD *)(a5 + 24) & 1;
  if ( (unsigned int)CmpGetEffectiveCellType(KcbAtLayerHeight, v21, 512LL) == 1 && !v93 )
  {
    v17 = -1073741439;
    v15 = 3221225857LL;
    v16 = 263680LL;
    goto LABEL_6;
  }
  if ( (*(_DWORD *)(a5 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess(a5 + 168, v23, v24, v25);
    *(_DWORD *)(a5 + 160) |= 1u;
    v26 = a9;
  }
  v87 = v85 & 2;
  if ( (v85 & 2) == 0 )
  {
    if ( v83 )
    {
      NewDescriptor = (PSECURITY_DESCRIPTOR)CmpGetSecurityDescriptorForKcbStack(a1, v26);
    }
    else
    {
      if ( SkipVirtualAccessCheck(v13, a5 + 16) )
        ExplicitDescriptor = 0LL;
      else
        ExplicitDescriptor = *(PSECURITY_DESCRIPTOR *)(a3 + 64);
      GenericMapping = (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76);
      SecurityDescriptorForKcbStack = (void *)CmpGetSecurityDescriptorForKcbStack(a1, a9);
      v29 = SeAssignSecurity(
              SecurityDescriptorForKcbStack,
              ExplicitDescriptor,
              &NewDescriptor,
              1u,
              (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
              GenericMapping,
              *((POOL_TYPE *)CmKeyObjectType + 25));
      v17 = v29;
      if ( v29 < 0 )
      {
        v15 = (unsigned int)v29;
        v16 = 264192LL;
        goto LABEL_6;
      }
      KcbAtLayerHeight = *(_QWORD *)&Size[1];
    }
  }
  v30 = a9;
  if ( a9 )
  {
    if ( !(unsigned __int8)CmpIsKeyStackDeleted(a2, 0LL) )
    {
      v17 = CmpUndoDeleteKeyForTransEx(v13, a9, NewDescriptor);
      if ( v17 >= 0 )
        goto LABEL_153;
      v17 = -1073741772;
      v15 = 3221225524LL;
      v16 = 263936LL;
LABEL_6:
      CmpRecordParseFailure(v18, v16, v15);
LABEL_153:
      v33 = (char *)v82;
      goto LABEL_154;
    }
    v30 = a9;
  }
  v31 = v93;
  if ( v30 )
    v31 = 1;
  LODWORD(ExplicitDescriptor) = v31;
  v32 = *(unsigned int *)(v13 + 40);
  if ( (_DWORD)v32 != -1 )
  {
    if ( v31 != (unsigned int)v32 >> 31 )
    {
      CmpLogUnsupportedOperation(2LL);
      v32 = *(unsigned int *)(v13 + 40);
    }
    v108 = (unsigned int)v32 >> 31;
    if ( !a8 )
    {
      HvLockHiveFlusherShared(v14);
      v9 = 1;
      v84 = 1;
      v32 = *(unsigned int *)(v13 + 40);
    }
    v33 = (char *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(v14 + 8))(v14, v32, &v99);
    v82 = v33;
    if ( (unsigned __int16)CmpNameSize(a4) != *((_WORD *)v33 + 36) )
    {
      CmpLogUnsupportedOperation(1LL);
      v17 = -1073741822;
      v34 = 3221225474LL;
      v35 = 264448LL;
      goto LABEL_51;
    }
    if ( !(unsigned __int8)CmpMarkKeyDirty(v14, *(unsigned int *)(v13 + 40)) )
    {
      v34 = 3221225853LL;
      v17 = -1073741443;
      v35 = 264704LL;
      goto LABEL_51;
    }
    if ( !(unsigned __int8)HvMarkCellDirty(v14, *(unsigned int *)(*(_QWORD *)&Size[1] + 40LL), 0LL) )
    {
      v34 = 3221225853LL;
      v17 = -1073741443;
      v35 = 264960LL;
      goto LABEL_51;
    }
    v36 = *(unsigned __int16 *)(a5 + 4);
    if ( (_WORD)v36 )
    {
      LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v36, v108, (unsigned int)&v95, (__int64)&v96);
      LODWORD(ExplicitDescriptor) = BugCheckParameter3;
      if ( (_DWORD)BugCheckParameter3 == -1 )
      {
        v34 = 3221225626LL;
        v17 = -1073741670;
        v35 = 265216LL;
        goto LABEL_51;
      }
      memmove(v95, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v96);
      v95 = 0LL;
    }
    CmLockHiveSecurityExclusive(v14);
    LOBYTE(SubjectContext) = 1;
    SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                               v14,
                               *(unsigned int *)(v13 + 40),
                               v33,
                               NewDescriptor,
                               SubjectContext,
                               Size);
    v17 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode >= 0 )
    {
      CmpFreeSecurityDescriptor(v14);
      *((_DWORD *)v33 + 11) = Size[0];
      CmUnlockHiveSecurity(v14);
      *((_DWORD *)v33 + 12) = BugCheckParameter3;
      v109 = (unsigned __int16 *)(v33 + 74);
      *((_WORD *)v33 + 37) = *(_WORD *)(a5 + 4);
      LODWORD(BugCheckParameter3) = -1;
      CmpCopyName(v33 + 76);
      v33[13] |= 3u;
      v40 = v85;
      *((_WORD *)v33 + 1) = v85;
      if ( *((_WORD *)v33 + 36) < *a4 )
        *((_WORD *)v33 + 1) = v40 | 0x20;
      v41 = MEMORY[0xFFFFF78000000014];
      v33 = (char *)v82;
      *(_QWORD *)((char *)v82 + 4) = MEMORY[0xFFFFF78000000014];
      ++*(_QWORD *)(v13 + 304);
      CmpRebuildKcbCacheFromNode(v13);
      v42 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v14 + 8))(
              v14,
              *(unsigned int *)(*(_QWORD *)&Size[1] + 40LL),
              &v98);
      v97 = v42;
      *(_QWORD *)(v42 + 4) = v41;
      v43 = *(_QWORD *)&Size[1];
      *(_QWORD *)(*(_QWORD *)&Size[1] + 168LL) = v41;
      ++*(_QWORD *)(v43 + 304);
      v44 = *v109;
      if ( *(_DWORD *)(v42 + 56) < v44 )
        *(_DWORD *)(v42 + 56) = v44;
      if ( v9 )
        HvUnlockHiveFlusherShared(v14);
      CmpReportNotifyForKcbStack(a1, 0, 1, 0LL);
      v17 = 0;
      v9 = 0;
      goto LABEL_154;
    }
    v38 = 265728LL;
LABEL_62:
    CmpRecordParseFailure(a5, v38, (unsigned int)SecurityDescriptorNode);
    v39 = 1;
    goto LABEL_155;
  }
  v45 = a8 == 0;
  if ( !a8 )
  {
    HvLockHiveFlusherShared(v14);
    v45 = 1;
  }
  v9 = v45;
  if ( a9 )
  {
    UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
    v91 = (ULONG_PTR)UnitOfWork;
    v100 = UnitOfWork;
    if ( !UnitOfWork )
    {
      v15 = 3221225626LL;
      v17 = -1073741670;
      v16 = 265984LL;
      goto LABEL_6;
    }
    CmpTransEnlistUowInKcb(UnitOfWork, KcbAtLayerHeight);
    v47 = CmpTransEnlistUowInCmTrans((_QWORD *)v91, a9);
    v17 = v47;
    if ( v47 < 0 )
    {
      v15 = (unsigned int)v47;
      v16 = 266240LL;
      goto LABEL_6;
    }
    v48 = (_QWORD *)CmpAllocateUnitOfWork();
    BugCheckParameter4 = (ULONG_PTR)v48;
    v101 = v48;
    if ( !v48 )
    {
      v15 = 3221225626LL;
      v17 = -1073741670;
      v16 = 266496LL;
      goto LABEL_6;
    }
    CmpTransEnlistUowInKcb(v48, v13);
    v49 = CmpTransEnlistUowInCmTrans((_QWORD *)BugCheckParameter4, a9);
    v17 = v49;
    if ( v49 < 0 )
    {
      v15 = (unsigned int)v49;
      v16 = 266752LL;
      goto LABEL_6;
    }
    if ( !(unsigned __int8)CmpLockIXLockIntent(KcbAtLayerHeight + 248, v91) )
    {
      v15 = 3222863873LL;
      v17 = -1072103423;
      v16 = 267008LL;
      goto LABEL_6;
    }
    if ( !(unsigned __int8)CmpLockIXLockExclusive(v13 + 248, BugCheckParameter4, 0LL) )
    {
      v15 = 3222863873LL;
      v17 = -1072103423;
      v16 = 267264LL;
      goto LABEL_6;
    }
    if ( !(unsigned __int8)CmpLockIXLockExclusive(v13 + 264, BugCheckParameter4, 1LL) )
    {
      v15 = 3222863873LL;
      v17 = -1072103423;
      v16 = 267520LL;
      goto LABEL_6;
    }
  }
  else
  {
    if ( *(_QWORD *)(KcbAtLayerHeight + 240) )
    {
      if ( (a7 & 2) != 0 )
      {
        v15 = 3222863873LL;
        v17 = -1072103423;
        v16 = 267648LL;
      }
      else
      {
        v50 = CmpSnapshotTxOwnerArray(KcbAtLayerHeight + 248, a5 + 120, a5 + 128);
        v17 = v50;
        if ( v50 >= 0 )
        {
          CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
          *(_DWORD *)(a5 + 100) |= 4u;
          v15 = 3221226029LL;
          v17 = -1073741267;
          v16 = 268032LL;
        }
        else
        {
          v15 = (unsigned int)v50;
          v16 = 267776LL;
        }
      }
      goto LABEL_6;
    }
    if ( !CmpTryAcquireIXLockIntent((_DWORD *)(KcbAtLayerHeight + 248)) )
    {
      if ( (a7 & 2) != 0 )
      {
        v15 = 3222863873LL;
        v17 = -1072103423;
        v16 = 268160LL;
      }
      else
      {
        v52 = CmpSnapshotTxOwnerArray(v51, a5 + 120, a5 + 128);
        v17 = v52;
        if ( v52 >= 0 )
        {
          CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
          *(_DWORD *)(a5 + 100) |= 4u;
          v15 = 3221226029LL;
          v17 = -1073741267;
          v16 = 268544LL;
        }
        else
        {
          v15 = (unsigned int)v52;
          v16 = 268288LL;
        }
      }
      goto LABEL_6;
    }
    if ( !CmpTryAcquireIXLockExclusive((_DWORD *)(v13 + 248)) )
    {
      if ( (a7 & 2) != 0 )
      {
        v15 = 3222863873LL;
        v17 = -1072103423;
        v16 = 268672LL;
      }
      else
      {
        v54 = CmpSnapshotTxOwnerArray(v53, a5 + 120, a5 + 128);
        v17 = v54;
        if ( v54 >= 0 )
        {
          CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
          *(_DWORD *)(a5 + 100) |= 4u;
          v15 = 3221226029LL;
          v17 = -1073741267;
          v16 = 269056LL;
        }
        else
        {
          v15 = (unsigned int)v54;
          v16 = 268800LL;
        }
      }
      goto LABEL_6;
    }
    if ( !CmpTryAcquireIXLockExclusive((_DWORD *)(v13 + 264)) )
    {
      if ( (a7 & 2) != 0 )
      {
        v15 = 3222863873LL;
        v17 = -1072103423;
        v16 = 269184LL;
      }
      else
      {
        v56 = CmpSnapshotTxOwnerArray(v55, a5 + 120, a5 + 128);
        v17 = v56;
        if ( v56 >= 0 )
        {
          CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
          *(_DWORD *)(a5 + 100) |= 4u;
          v15 = 3221226029LL;
          v17 = -1073741267;
          v16 = 269568LL;
        }
        else
        {
          v15 = (unsigned int)v56;
          v16 = 269312LL;
        }
      }
      goto LABEL_6;
    }
  }
  Size[0] = CmpHKeyNodeSize();
  v57 = (int)ExplicitDescriptor;
  HIDWORD(BugCheckParameter3) = HvAllocateCell(
                                  v14,
                                  Size[0],
                                  (_DWORD)ExplicitDescriptor,
                                  (unsigned int)&v82,
                                  (__int64)&v99);
  v92 = HIDWORD(BugCheckParameter3);
  if ( HIDWORD(BugCheckParameter3) == -1 )
  {
    v15 = 3221225626LL;
    v17 = -1073741670;
    v16 = 269824LL;
    goto LABEL_6;
  }
  v58 = *(unsigned __int16 *)(a5 + 4);
  if ( (_WORD)v58 )
  {
    LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v58, v57, (unsigned int)&v95, (__int64)&v96);
    LODWORD(ExplicitDescriptor) = BugCheckParameter3;
    if ( (_DWORD)BugCheckParameter3 == -1 )
    {
      v15 = 3221225626LL;
      v17 = -1073741670;
      v16 = 270080LL;
      goto LABEL_6;
    }
    memmove(v95, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v96);
    v95 = 0LL;
  }
  v59 = v82;
  memset(v82, 0, Size[0]);
  v60 = 27500;
  if ( !v87 )
    v60 = 27502;
  *(_WORD *)v59 = v60;
  v59[12] = CmpAccessBitForPhase;
  if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 3 )
    v59[13] |= 3u;
  else
    v59[13] &= 0xFCu;
  *((_WORD *)v59 + 1) = v85;
  v33 = (char *)v82;
  *(_QWORD *)((char *)v82 + 4) = MEMORY[0xFFFFF78000000014];
  v61 = *(_QWORD *)&Size[1];
  *((_DWORD *)v33 + 4) = *(_DWORD *)(*(_QWORD *)&Size[1] + 40LL);
  *((_DWORD *)v33 + 7) = -1;
  *((_DWORD *)v33 + 8) = -1;
  *((_DWORD *)v33 + 10) = -1;
  *((_DWORD *)v33 + 11) = -1;
  *((_DWORD *)v33 + 12) = BugCheckParameter3;
  *((_WORD *)v33 + 37) = *(_WORD *)(a5 + 4);
  LODWORD(BugCheckParameter3) = -1;
  v62 = *(_DWORD *)(v61 + 184);
  if ( (v62 & 0x80u) != 0 )
    *((_DWORD *)v33 + 13) ^= (*((_DWORD *)v33 + 13) ^ (v62 << 16)) & 0xF00000;
  v63 = CmpCopyName(v33 + 76);
  *((_WORD *)v33 + 36) = v63;
  if ( v63 < *a4 )
    *((_WORD *)v59 + 1) |= 0x20u;
  v64 = v87;
  if ( v87 )
  {
    *(_QWORD *)(v33 + 36) = *(_QWORD *)(a5 + 48);
    *((_DWORD *)v33 + 7) = *(_DWORD *)(a5 + 40);
  }
  v81 = 1;
  if ( !v64 )
  {
    CmLockHiveSecurityExclusive(v14);
    SecurityDescriptorNode = CmpAssignSecurityDescriptor(v14, HIDWORD(BugCheckParameter3), v33, NewDescriptor);
    v17 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode < 0 )
    {
      v38 = 270592LL;
      goto LABEL_62;
    }
    CmUnlockHiveSecurity(v14);
  }
  if ( (unsigned __int8)HvMarkCellDirty(v14, *(unsigned int *)(*(_QWORD *)&Size[1] + 40LL), 0LL) )
  {
    v65 = a9;
    if ( !a9 )
    {
      if ( !(unsigned __int8)CmpAddSubKey(
                               v14,
                               *(unsigned int *)(*(_QWORD *)&Size[1] + 40LL),
                               HIDWORD(BugCheckParameter3)) )
      {
        v34 = 3221225626LL;
        v17 = -1073741670;
        v35 = 271104LL;
        goto LABEL_51;
      }
      v65 = 0LL;
    }
    v80 = 1;
    *(_DWORD *)(v13 + 40) = HIDWORD(BugCheckParameter3);
    HIDWORD(BugCheckParameter3) = -1;
    *(_QWORD *)(v13 + 240) = v65;
    if ( (v85 & 0x40) == 0 )
    {
      *(_DWORD *)(v13 + 96) = *((_DWORD *)v33 + 9);
      *(_DWORD *)(v13 + 100) = *((_DWORD *)v33 + 10);
    }
    ++*(_QWORD *)(v13 + 304);
    CmpRebuildKcbCacheFromNode(v13);
    if ( !v87 )
      CmpAssignSecurityToKcb(v13, *((unsigned int *)v33 + 11), 0);
    if ( a9 )
    {
      v66 = BugCheckParameter4;
      *(_DWORD *)(BugCheckParameter4 + 68) = 0;
      *(_DWORD *)(v66 + 72) = v93;
      v67 = v91;
      *(_QWORD *)(v66 + 80) = v91;
      *(_DWORD *)(v67 + 68) = 1;
      *(_QWORD *)(v67 + 88) = v13;
      v68 = CmAddLogForAction(v66, 1LL);
      v17 = v68;
      if ( v68 < 0 )
      {
        v34 = (unsigned int)v68;
        v35 = 271360LL;
        goto LABEL_51;
      }
      BugCheckParameter4 = 0LL;
      v91 = 0LL;
    }
    v69 = *(_QWORD *)&Size[1];
    v97 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)&Size[1] + 32LL) + 8LL))(
            *(_QWORD *)(*(_QWORD *)&Size[1] + 32LL),
            *(unsigned int *)(*(_QWORD *)&Size[1] + 40LL),
            &v98);
    CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v69 + 32), v97, *(_DWORD *)(v69 + 40));
    v70 = v97;
    *(_QWORD *)(v97 + 4) = MEMORY[0xFFFFF78000000014];
    v71 = *a4;
    if ( (unsigned __int16)*(_DWORD *)(v70 + 52) < (unsigned int)v71 )
      *(_WORD *)(v70 + 52) = v71;
    v72 = *(unsigned __int16 *)(a5 + 4);
    if ( *(_DWORD *)(v70 + 56) < v72 )
      *(_DWORD *)(v70 + 56) = v72;
    ++*(_QWORD *)(v69 + 304);
    *(_WORD *)(v69 + 176) = *(_WORD *)(v70 + 52);
    *(_QWORD *)(v69 + 168) = *(_QWORD *)(v70 + 4);
    LOBYTE(v71) = 1;
    CmpCleanUpSubKeyInfo(v69, v71);
    if ( !a8 )
      HvUnlockHiveFlusherShared(v14);
    CmpReportNotifyForKcbStack(a1, a9, 1, 0LL);
    v17 = 0;
    v80 = 0;
    v9 = a8 != 0 ? v9 : 0;
    goto LABEL_153;
  }
  v34 = 3221225853LL;
  v17 = -1073741443;
  v35 = 270848LL;
LABEL_51:
  CmpRecordParseFailure(a5, v35, v34);
LABEL_154:
  v39 = 0;
LABEL_155:
  if ( v39 )
    CmUnlockHiveSecurity(v14);
  if ( v80 )
  {
    HIDWORD(BugCheckParameter3) = *(_DWORD *)(v13 + 40);
    *(_DWORD *)(v13 + 40) = -1;
    *(_DWORD *)(v13 + 96) = 0;
    *(_DWORD *)(v13 + 100) = -1;
    *(_WORD *)(v13 + 186) = 0;
    *(_DWORD *)(v13 + 112) = 0;
    *(_QWORD *)(v13 + 168) = 0LL;
    *(_QWORD *)(v13 + 176) = 0LL;
    *(_DWORD *)(v13 + 184) &= 0xFFFFFF00;
    *(_BYTE *)(v13 + 185) = 0;
    *(_QWORD *)(v13 + 240) = 0LL;
    *(_QWORD *)(v13 + 88) = 0LL;
  }
  v73 = BugCheckParameter4;
  if ( BugCheckParameter4 )
  {
    CmpRundownUnitOfWork(BugCheckParameter4);
    CmpFreeUnitOfWork(v73);
  }
  v74 = v91;
  if ( v91 )
  {
    CmpRundownUnitOfWork(v91);
    CmpFreeUnitOfWork(v74);
  }
  v75 = NewDescriptor;
  if ( NewDescriptor && !v83 )
  {
    if ( (*v18 & 1) != 0 && (v18[6] & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v76 = *(_QWORD *)(a3 + 72);
      v77 = *(void **)(v76 + 48);
      if ( v77 )
        ExFreePoolWithTag(v77, 0);
      *(_QWORD *)(v76 + 48) = v75;
    }
  }
  if ( v97 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)&Size[1] + 32LL) + 16LL))(
      *(_QWORD *)(*(_QWORD *)&Size[1] + 32LL),
      &v98);
  if ( v95 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v96);
  if ( (_DWORD)BugCheckParameter3 != -1 )
    HvFreeCell(v14, (unsigned int)BugCheckParameter3);
  if ( v33 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v99);
  if ( HIDWORD(BugCheckParameter3) != -1 )
  {
    if ( v81 )
      CmpFreeKeyByCell(v14);
    else
      HvFreeCell(v14, HIDWORD(BugCheckParameter3));
  }
  if ( v9 )
    HvUnlockHiveFlusherShared(v14);
  return (unsigned int)v17;
}

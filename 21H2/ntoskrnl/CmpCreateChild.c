/*
 * XREFs of CmpCreateChild @ 0x14065C8F4
 * Callers:
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmpDoBuildVirtualStack @ 0x1408700FC (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x140213DB0 (CmpTransEnlistUowInKcb.c)
 *     CmpIsKcbInsideVirtualStore @ 0x14026CF14 (CmpIsKcbInsideVirtualStore.c)
 *     SkipVirtualAccessCheck @ 0x14026CF28 (SkipVirtualAccessCheck.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14026D0B0 (CmpTransEnlistUowInCmTrans.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpHKeyNodeSize @ 0x1404EC9F4 (CmpHKeyNodeSize.c)
 *     CmpGetEffectiveCellType @ 0x1405CD2B4 (CmpGetEffectiveCellType.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x1405CD308 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpRecordParseFailure @ 0x1405E99A0 (CmpRecordParseFailure.c)
 *     CmpNameSize @ 0x1405F26FC (CmpNameSize.c)
 *     SeDeassignSecurity @ 0x1405FED30 (SeDeassignSecurity.c)
 *     CmAddLogForAction @ 0x14060E74C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x140617BA0 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140619820 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140619E60 (CmpLockIXLockExclusive.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406212B4 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpTryAcquireIXLockExclusive @ 0x140659F18 (CmpTryAcquireIXLockExclusive.c)
 *     CmpTryAcquireIXLockIntent @ 0x140659F28 (CmpTryAcquireIXLockIntent.c)
 *     CmpIsKcbImmutable @ 0x14065ABF0 (CmpIsKcbImmutable.c)
 *     HvUnlockHiveFlusherShared @ 0x14065B0AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14065B0E4 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14065B100 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14065EDC4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x14065EECC (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x14065EF50 (CmpAssignSecurityToKcb.c)
 *     CmUnlockHiveSecurity @ 0x14065F004 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x14065F024 (CmLockHiveSecurityExclusive.c)
 *     CmpMarkKeyDirty @ 0x14065F0B8 (CmpMarkKeyDirty.c)
 *     SeAssignSecurity @ 0x14065F320 (SeAssignSecurity.c)
 *     CmpFreeKeyByCell @ 0x1406600A0 (CmpFreeKeyByCell.c)
 *     CmpFreeSecurityDescriptor @ 0x140661338 (CmpFreeSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorNode @ 0x140662970 (CmpGetSecurityDescriptorNode.c)
 *     CmpRundownUnitOfWork @ 0x140664278 (CmpRundownUnitOfWork.c)
 *     CmpReportNotifyForKcbStack @ 0x1406DCA60 (CmpReportNotifyForKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406DECB0 (CmpGetKcbAtLayerHeight.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpIsKeyStackDeleted @ 0x140712920 (CmpIsKeyStackDeleted.c)
 *     HvAllocateCell @ 0x1407207E4 (HvAllocateCell.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     CmpCopyName @ 0x1407214C0 (CmpCopyName.c)
 *     CmpAssignSecurityDescriptor @ 0x140871810 (CmpAssignSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140871EDC (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpLogUnsupportedOperation @ 0x1408764AC (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x1408783AC (CmpSnapshotTxOwnerArray.c)
 *     CmpAddSubKey @ 0x14087A4F8 (CmpAddSubKey.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087EC08 (CmpFreeUnitOfWork.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCreateChild(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        UNICODE_STRING *a4,
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
  int v15; // r8d
  int v16; // edx
  int v17; // ebx
  _DWORD *v18; // r14
  bool IsKcbInsideVirtualStore; // al
  __int16 v20; // dx
  __int64 v21; // r11
  __int16 v22; // cx
  __int64 v23; // r11
  GENERIC_MAPPING *GenericMapping; // rbx
  void *SecurityDescriptorForKcbStack; // rax
  NTSTATUS v26; // eax
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rdx
  char *v30; // rdi
  int v31; // r8d
  int v32; // edx
  int v33; // eax
  int SecurityDescriptorNode; // eax
  int v35; // edx
  char v36; // al
  __int16 v37; // cx
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned int v41; // ecx
  bool v42; // zf
  _QWORD *UnitOfWork; // rax
  int v44; // eax
  _QWORD *v45; // rax
  int v46; // eax
  int v47; // eax
  __int64 v48; // r9
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // r9
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // r9
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // r9
  int v58; // ebx
  int v59; // eax
  _BYTE *v60; // rbx
  __int16 v61; // ax
  __int64 v62; // rcx
  int v63; // eax
  unsigned __int16 v64; // ax
  __int16 v65; // cx
  __int64 v66; // rax
  ULONG_PTR v67; // rcx
  ULONG_PTR v68; // rax
  int v69; // eax
  __int64 v70; // rdi
  __int64 v71; // r8
  __int64 Length; // rdx
  unsigned int v73; // eax
  ULONG_PTR v74; // r13
  ULONG_PTR v75; // r13
  PSECURITY_DESCRIPTOR v76; // r13
  __int64 v77; // r14
  void *v78; // rcx
  int SubjectContext; // [rsp+20h] [rbp-108h]
  char v81; // [rsp+41h] [rbp-E7h]
  char v82; // [rsp+42h] [rbp-E6h]
  void *v83; // [rsp+48h] [rbp-E0h] BYREF
  char v84; // [rsp+50h] [rbp-D8h]
  char v85; // [rsp+51h] [rbp-D7h]
  __int16 v86; // [rsp+56h] [rbp-D2h]
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-D0h]
  __int16 v88; // [rsp+60h] [rbp-C8h]
  _DWORD Size[3]; // [rsp+64h] [rbp-C4h] BYREF
  PSECURITY_DESCRIPTOR ExplicitDescriptor; // [rsp+70h] [rbp-B8h]
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp-B0h]
  ULONG_PTR v92; // [rsp+80h] [rbp-A8h]
  int v93; // [rsp+88h] [rbp-A0h]
  int v94; // [rsp+8Ch] [rbp-9Ch]
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+90h] [rbp-98h] BYREF
  void *v96; // [rsp+98h] [rbp-90h] BYREF
  __int64 v97; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v98; // [rsp+A8h] [rbp-80h]
  __int64 v99; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v100; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD *v101; // [rsp+C0h] [rbp-68h]
  _QWORD *v102; // [rsp+C8h] [rbp-60h]
  __int64 v103; // [rsp+D0h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp-50h]
  unsigned int v109; // [rsp+170h] [rbp+48h]
  unsigned __int16 *v110; // [rsp+170h] [rbp+48h]

  v82 = 0;
  v9 = 0;
  v85 = 0;
  v10 = 0;
  v84 = 0;
  v83 = 0LL;
  v93 = -1;
  v100 = 0xFFFFFFFFLL;
  v96 = 0LL;
  BugCheckParameter3 = -1LL;
  v97 = 0xFFFFFFFFLL;
  v98 = 0LL;
  v99 = 0xFFFFFFFFLL;
  NewDescriptor = 0LL;
  Size[0] = -1;
  v92 = 0LL;
  v101 = 0LL;
  BugCheckParameter4 = 0LL;
  v102 = 0LL;
  v81 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
  *(_QWORD *)&Size[1] = KcbAtLayerHeight;
  v13 = CmpGetKcbAtLayerHeight(v12);
  v103 = v13;
  v14 = *(_QWORD *)(v13 + 32);
  BugCheckParameter2 = v14;
  if ( a9 && (*(_DWORD *)(v14 + 160) & 2) != 0 )
  {
    v15 = -1072103423;
    v16 = 262400;
LABEL_4:
    v17 = v15;
LABEL_5:
    v18 = (_DWORD *)a5;
    goto LABEL_6;
  }
  if ( (a7 & 0xFFFFFFFC) != 0 )
  {
    v17 = -1073741811;
    v15 = -1073741811;
    v16 = 262528;
    goto LABEL_5;
  }
  if ( (a7 & 1) != 0 || (*(_DWORD *)(v14 + 4152) & 0x20) != 0 )
  {
    v10 = 1;
    v84 = 1;
  }
  if ( (*(_DWORD *)(KcbAtLayerHeight + 8) & 0x80u) != 0 )
  {
    v15 = -1073741790;
    v16 = 262656;
    goto LABEL_4;
  }
  if ( CmpIsKcbImmutable(KcbAtLayerHeight) )
  {
    v15 = -1073741790;
    v16 = 262912;
    goto LABEL_4;
  }
  if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
  {
    v15 = -1073741790;
    v16 = 263168;
    goto LABEL_4;
  }
  IsKcbInsideVirtualStore = CmpIsKcbInsideVirtualStore(KcbAtLayerHeight);
  v22 = v20 | 0x200;
  if ( !IsKcbInsideVirtualStore )
    v22 = v20;
  v86 = v22;
  if ( v10 && *(_QWORD *)(a3 + 64) )
  {
    v15 = -1073741790;
    v16 = 263424;
    goto LABEL_4;
  }
  v18 = (_DWORD *)a5;
  v94 = *(_DWORD *)(a5 + 24) & 1;
  if ( (unsigned int)CmpGetEffectiveCellType(KcbAtLayerHeight, v21, 512LL) == 1 && !v94 )
  {
    v17 = -1073741439;
    v15 = -1073741439;
    v16 = 263680;
    goto LABEL_6;
  }
  if ( (*(_DWORD *)(a5 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess(a5 + 168);
    *(_DWORD *)(a5 + 160) |= 1u;
    v23 = a9;
  }
  v88 = v86 & 2;
  if ( (v86 & 2) == 0 )
  {
    if ( v84 )
    {
      NewDescriptor = (PSECURITY_DESCRIPTOR)CmpGetSecurityDescriptorForKcbStack(a1, v23);
    }
    else
    {
      if ( SkipVirtualAccessCheck(v13) )
        ExplicitDescriptor = 0LL;
      else
        ExplicitDescriptor = *(PSECURITY_DESCRIPTOR *)(a3 + 64);
      GenericMapping = (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76);
      SecurityDescriptorForKcbStack = (void *)CmpGetSecurityDescriptorForKcbStack(a1, a9);
      v26 = SeAssignSecurity(
              SecurityDescriptorForKcbStack,
              ExplicitDescriptor,
              &NewDescriptor,
              1u,
              (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
              GenericMapping,
              *((POOL_TYPE *)CmKeyObjectType + 25));
      v17 = v26;
      if ( v26 < 0 )
      {
        v15 = v26;
        v16 = 264192;
        goto LABEL_6;
      }
      KcbAtLayerHeight = *(_QWORD *)&Size[1];
    }
  }
  v27 = a9;
  if ( a9 )
  {
    if ( !(unsigned __int8)CmpIsKeyStackDeleted(a2, 0LL) )
    {
      v17 = CmpUndoDeleteKeyForTransEx(v13, a9, NewDescriptor);
      if ( v17 >= 0 )
        goto LABEL_153;
      v17 = -1073741772;
      v15 = -1073741772;
      v16 = 263936;
LABEL_6:
      CmpRecordParseFailure((__int64)v18, v16, v15);
LABEL_153:
      v30 = (char *)v83;
      goto LABEL_154;
    }
    v27 = a9;
  }
  v28 = v94;
  if ( v27 )
    v28 = 1;
  LODWORD(ExplicitDescriptor) = v28;
  v29 = *(unsigned int *)(v13 + 40);
  if ( (_DWORD)v29 != -1 )
  {
    if ( v28 != (unsigned int)v29 >> 31 )
    {
      CmpLogUnsupportedOperation(2LL);
      v29 = *(unsigned int *)(v13 + 40);
    }
    v109 = (unsigned int)v29 >> 31;
    if ( !a8 )
    {
      HvLockHiveFlusherShared(v14);
      v9 = 1;
      v85 = 1;
      v29 = *(unsigned int *)(v13 + 40);
    }
    v30 = (char *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(v14 + 8))(v14, v29, &v100);
    v83 = v30;
    if ( (unsigned __int16)CmpNameSize(&a4->Length) != *((_WORD *)v30 + 36) )
    {
      CmpLogUnsupportedOperation(1LL);
      v17 = -1073741822;
      v31 = -1073741822;
      v32 = 264448;
      goto LABEL_51;
    }
    if ( !(unsigned __int8)CmpMarkKeyDirty(v14, *(unsigned int *)(v13 + 40)) )
    {
      v31 = -1073741443;
      v17 = -1073741443;
      v32 = 264704;
      goto LABEL_51;
    }
    if ( !(unsigned __int8)HvMarkCellDirty(v14, *(unsigned int *)(*(_QWORD *)&Size[1] + 40LL), 0LL) )
    {
      v31 = -1073741443;
      v17 = -1073741443;
      v32 = 264960;
      goto LABEL_51;
    }
    v33 = *(unsigned __int16 *)(a5 + 4);
    if ( (_WORD)v33 )
    {
      LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v33, v109, (unsigned int)&v96, (__int64)&v97);
      LODWORD(ExplicitDescriptor) = BugCheckParameter3;
      if ( (_DWORD)BugCheckParameter3 == -1 )
      {
        v31 = -1073741670;
        v17 = -1073741670;
        v32 = 265216;
        goto LABEL_51;
      }
      memmove(v96, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v97);
      v96 = 0LL;
    }
    CmLockHiveSecurityExclusive(v14);
    LOBYTE(SubjectContext) = 1;
    SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                               v14,
                               *(unsigned int *)(v13 + 40),
                               v30,
                               NewDescriptor,
                               SubjectContext,
                               Size);
    v17 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode >= 0 )
    {
      CmpFreeSecurityDescriptor(v14);
      *((_DWORD *)v30 + 11) = Size[0];
      CmUnlockHiveSecurity(v14);
      *((_DWORD *)v30 + 12) = BugCheckParameter3;
      v110 = (unsigned __int16 *)(v30 + 74);
      *((_WORD *)v30 + 37) = *(_WORD *)(a5 + 4);
      LODWORD(BugCheckParameter3) = -1;
      CmpCopyName(v30 + 76);
      v30[13] |= 3u;
      v37 = v86;
      *((_WORD *)v30 + 1) = v86;
      if ( *((_WORD *)v30 + 36) < a4->Length )
        *((_WORD *)v30 + 1) = v37 | 0x20;
      v38 = MEMORY[0xFFFFF78000000014];
      v30 = (char *)v83;
      *(_QWORD *)((char *)v83 + 4) = MEMORY[0xFFFFF78000000014];
      ++*(_QWORD *)(v13 + 304);
      CmpRebuildKcbCacheFromNode(v13);
      v39 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v14 + 8))(
              v14,
              *(unsigned int *)(*(_QWORD *)&Size[1] + 40LL),
              &v99);
      v98 = v39;
      *(_QWORD *)(v39 + 4) = v38;
      v40 = *(_QWORD *)&Size[1];
      *(_QWORD *)(*(_QWORD *)&Size[1] + 168LL) = v38;
      ++*(_QWORD *)(v40 + 304);
      v41 = *v110;
      if ( *(_DWORD *)(v39 + 56) < v41 )
        *(_DWORD *)(v39 + 56) = v41;
      if ( v9 )
        HvUnlockHiveFlusherShared(v14);
      CmpReportNotifyForKcbStack(a1, 0LL, 1LL, 0LL);
      v17 = 0;
      v9 = 0;
      goto LABEL_154;
    }
    v35 = 265728;
LABEL_62:
    CmpRecordParseFailure(a5, v35, SecurityDescriptorNode);
    v36 = 1;
    goto LABEL_155;
  }
  v42 = a8 == 0;
  if ( !a8 )
  {
    HvLockHiveFlusherShared(v14);
    v42 = 1;
  }
  v9 = v42;
  if ( a9 )
  {
    UnitOfWork = CmpAllocateUnitOfWork();
    v92 = (ULONG_PTR)UnitOfWork;
    v101 = UnitOfWork;
    if ( !UnitOfWork )
    {
      v15 = -1073741670;
      v17 = -1073741670;
      v16 = 265984;
      goto LABEL_6;
    }
    CmpTransEnlistUowInKcb(UnitOfWork, KcbAtLayerHeight);
    v44 = CmpTransEnlistUowInCmTrans((_QWORD *)v92, a9);
    v17 = v44;
    if ( v44 < 0 )
    {
      v15 = v44;
      v16 = 266240;
      goto LABEL_6;
    }
    v45 = CmpAllocateUnitOfWork();
    BugCheckParameter4 = (ULONG_PTR)v45;
    v102 = v45;
    if ( !v45 )
    {
      v15 = -1073741670;
      v17 = -1073741670;
      v16 = 266496;
      goto LABEL_6;
    }
    CmpTransEnlistUowInKcb(v45, v13);
    v46 = CmpTransEnlistUowInCmTrans((_QWORD *)BugCheckParameter4, a9);
    v17 = v46;
    if ( v46 < 0 )
    {
      v15 = v46;
      v16 = 266752;
      goto LABEL_6;
    }
    if ( !CmpLockIXLockIntent((unsigned int *)(KcbAtLayerHeight + 248), v92) )
    {
      v15 = -1072103423;
      v17 = -1072103423;
      v16 = 267008;
      goto LABEL_6;
    }
    if ( !CmpLockIXLockExclusive(v13 + 248, (_QWORD *)BugCheckParameter4, 0) )
    {
      v15 = -1072103423;
      v17 = -1072103423;
      v16 = 267264;
      goto LABEL_6;
    }
    if ( !CmpLockIXLockExclusive(v13 + 264, (_QWORD *)BugCheckParameter4, 1) )
    {
      v15 = -1072103423;
      v17 = -1072103423;
      v16 = 267520;
      goto LABEL_6;
    }
  }
  else
  {
    if ( *(_QWORD *)(KcbAtLayerHeight + 240) )
    {
      if ( (a7 & 2) != 0 )
      {
        v15 = -1072103423;
        v17 = -1072103423;
        v16 = 267648;
      }
      else
      {
        v47 = CmpSnapshotTxOwnerArray(KcbAtLayerHeight + 248, a5 + 120, a5 + 128);
        v17 = v47;
        if ( v47 >= 0 )
        {
          CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6u, v48, *(_DWORD *)(a5 + 120));
          *(_DWORD *)(a5 + 100) |= 4u;
          v15 = -1073741267;
          v17 = -1073741267;
          v16 = 268032;
        }
        else
        {
          v15 = v47;
          v16 = 267776;
        }
      }
      goto LABEL_6;
    }
    if ( !CmpTryAcquireIXLockIntent((_DWORD *)(KcbAtLayerHeight + 248)) )
    {
      if ( (a7 & 2) != 0 )
      {
        v15 = -1072103423;
        v17 = -1072103423;
        v16 = 268160;
      }
      else
      {
        v50 = CmpSnapshotTxOwnerArray(v49, a5 + 120, a5 + 128);
        v17 = v50;
        if ( v50 >= 0 )
        {
          CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6u, v51, *(_DWORD *)(a5 + 120));
          *(_DWORD *)(a5 + 100) |= 4u;
          v15 = -1073741267;
          v17 = -1073741267;
          v16 = 268544;
        }
        else
        {
          v15 = v50;
          v16 = 268288;
        }
      }
      goto LABEL_6;
    }
    if ( !CmpTryAcquireIXLockExclusive((_DWORD *)(v13 + 248)) )
    {
      if ( (a7 & 2) != 0 )
      {
        v15 = -1072103423;
        v17 = -1072103423;
        v16 = 268672;
      }
      else
      {
        v53 = CmpSnapshotTxOwnerArray(v52, a5 + 120, a5 + 128);
        v17 = v53;
        if ( v53 >= 0 )
        {
          CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6u, v54, *(_DWORD *)(a5 + 120));
          *(_DWORD *)(a5 + 100) |= 4u;
          v15 = -1073741267;
          v17 = -1073741267;
          v16 = 269056;
        }
        else
        {
          v15 = v53;
          v16 = 268800;
        }
      }
      goto LABEL_6;
    }
    if ( !CmpTryAcquireIXLockExclusive((_DWORD *)(v13 + 264)) )
    {
      if ( (a7 & 2) != 0 )
      {
        v15 = -1072103423;
        v17 = -1072103423;
        v16 = 269184;
      }
      else
      {
        v56 = CmpSnapshotTxOwnerArray(v55, a5 + 120, a5 + 128);
        v17 = v56;
        if ( v56 >= 0 )
        {
          CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6u, v57, *(_DWORD *)(a5 + 120));
          *(_DWORD *)(a5 + 100) |= 4u;
          v15 = -1073741267;
          v17 = -1073741267;
          v16 = 269568;
        }
        else
        {
          v15 = v56;
          v16 = 269312;
        }
      }
      goto LABEL_6;
    }
  }
  Size[0] = CmpHKeyNodeSize();
  v58 = (int)ExplicitDescriptor;
  HIDWORD(BugCheckParameter3) = HvAllocateCell(
                                  v14,
                                  Size[0],
                                  (_DWORD)ExplicitDescriptor,
                                  (unsigned int)&v83,
                                  (__int64)&v100);
  v93 = HIDWORD(BugCheckParameter3);
  if ( HIDWORD(BugCheckParameter3) == -1 )
  {
    v15 = -1073741670;
    v17 = -1073741670;
    v16 = 269824;
    goto LABEL_6;
  }
  v59 = *(unsigned __int16 *)(a5 + 4);
  if ( (_WORD)v59 )
  {
    LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v59, v58, (unsigned int)&v96, (__int64)&v97);
    LODWORD(ExplicitDescriptor) = BugCheckParameter3;
    if ( (_DWORD)BugCheckParameter3 == -1 )
    {
      v15 = -1073741670;
      v17 = -1073741670;
      v16 = 270080;
      goto LABEL_6;
    }
    memmove(v96, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v97);
    v96 = 0LL;
  }
  v60 = v83;
  memset(v83, 0, Size[0]);
  v61 = 27500;
  if ( !v88 )
    v61 = 27502;
  *(_WORD *)v60 = v61;
  v60[12] = CmpAccessBitForPhase;
  if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 3 )
    v60[13] |= 3u;
  else
    v60[13] &= 0xFCu;
  *((_WORD *)v60 + 1) = v86;
  v30 = (char *)v83;
  *(_QWORD *)((char *)v83 + 4) = MEMORY[0xFFFFF78000000014];
  v62 = *(_QWORD *)&Size[1];
  *((_DWORD *)v30 + 4) = *(_DWORD *)(*(_QWORD *)&Size[1] + 40LL);
  *((_DWORD *)v30 + 7) = -1;
  *((_DWORD *)v30 + 8) = -1;
  *((_DWORD *)v30 + 10) = -1;
  *((_DWORD *)v30 + 11) = -1;
  *((_DWORD *)v30 + 12) = BugCheckParameter3;
  *((_WORD *)v30 + 37) = *(_WORD *)(a5 + 4);
  LODWORD(BugCheckParameter3) = -1;
  v63 = *(_DWORD *)(v62 + 184);
  if ( (v63 & 0x80u) != 0 )
    *((_DWORD *)v30 + 13) ^= (*((_DWORD *)v30 + 13) ^ (v63 << 16)) & 0xF00000;
  v64 = CmpCopyName(v30 + 76);
  *((_WORD *)v30 + 36) = v64;
  if ( v64 < a4->Length )
    *((_WORD *)v60 + 1) |= 0x20u;
  v65 = v88;
  if ( v88 )
  {
    *(_QWORD *)(v30 + 36) = *(_QWORD *)(a5 + 48);
    *((_DWORD *)v30 + 7) = *(_DWORD *)(a5 + 40);
  }
  v82 = 1;
  if ( !v65 )
  {
    CmLockHiveSecurityExclusive(v14);
    SecurityDescriptorNode = CmpAssignSecurityDescriptor(v14, HIDWORD(BugCheckParameter3), v30, NewDescriptor);
    v17 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode < 0 )
    {
      v35 = 270592;
      goto LABEL_62;
    }
    CmUnlockHiveSecurity(v14);
  }
  if ( (unsigned __int8)HvMarkCellDirty(v14, *(unsigned int *)(*(_QWORD *)&Size[1] + 40LL), 0LL) )
  {
    v66 = a9;
    if ( !a9 )
    {
      if ( !(unsigned __int8)CmpAddSubKey(
                               v14,
                               *(unsigned int *)(*(_QWORD *)&Size[1] + 40LL),
                               HIDWORD(BugCheckParameter3)) )
      {
        v31 = -1073741670;
        v17 = -1073741670;
        v32 = 271104;
        goto LABEL_51;
      }
      v66 = 0LL;
    }
    v81 = 1;
    *(_DWORD *)(v13 + 40) = HIDWORD(BugCheckParameter3);
    HIDWORD(BugCheckParameter3) = -1;
    *(_QWORD *)(v13 + 240) = v66;
    if ( (v86 & 0x40) == 0 )
    {
      *(_DWORD *)(v13 + 96) = *((_DWORD *)v30 + 9);
      *(_DWORD *)(v13 + 100) = *((_DWORD *)v30 + 10);
    }
    ++*(_QWORD *)(v13 + 304);
    CmpRebuildKcbCacheFromNode(v13);
    if ( !v88 )
      CmpAssignSecurityToKcb(v13, *((unsigned int *)v30 + 11), 0);
    if ( a9 )
    {
      v67 = BugCheckParameter4;
      *(_DWORD *)(BugCheckParameter4 + 68) = 0;
      *(_DWORD *)(v67 + 72) = v94;
      v68 = v92;
      *(_QWORD *)(v67 + 80) = v92;
      *(_DWORD *)(v68 + 68) = 1;
      *(_QWORD *)(v68 + 88) = v13;
      v69 = CmAddLogForAction(v67, 1);
      v17 = v69;
      if ( v69 < 0 )
      {
        v31 = v69;
        v32 = 271360;
        goto LABEL_51;
      }
      BugCheckParameter4 = 0LL;
      v92 = 0LL;
    }
    v70 = *(_QWORD *)&Size[1];
    v98 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)&Size[1] + 32LL) + 8LL))(
            *(_QWORD *)(*(_QWORD *)&Size[1] + 32LL),
            *(unsigned int *)(*(_QWORD *)&Size[1] + 40LL),
            &v99);
    CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v70 + 32), v98, *(_DWORD *)(v70 + 40));
    v71 = v98;
    *(_QWORD *)(v98 + 4) = MEMORY[0xFFFFF78000000014];
    Length = a4->Length;
    if ( (unsigned __int16)*(_DWORD *)(v71 + 52) < (unsigned int)Length )
      *(_WORD *)(v71 + 52) = Length;
    v73 = *(unsigned __int16 *)(a5 + 4);
    if ( *(_DWORD *)(v71 + 56) < v73 )
      *(_DWORD *)(v71 + 56) = v73;
    ++*(_QWORD *)(v70 + 304);
    *(_WORD *)(v70 + 176) = *(_WORD *)(v71 + 52);
    *(_QWORD *)(v70 + 168) = *(_QWORD *)(v71 + 4);
    LOBYTE(Length) = 1;
    CmpCleanUpSubKeyInfo(v70, Length);
    if ( !a8 )
      HvUnlockHiveFlusherShared(v14);
    CmpReportNotifyForKcbStack(a1, a9, 1LL, 0LL);
    v17 = 0;
    v81 = 0;
    v9 = a8 != 0 ? v9 : 0;
    goto LABEL_153;
  }
  v31 = -1073741443;
  v17 = -1073741443;
  v32 = 270848;
LABEL_51:
  CmpRecordParseFailure(a5, v32, v31);
LABEL_154:
  v36 = 0;
LABEL_155:
  if ( v36 )
    CmUnlockHiveSecurity(v14);
  if ( v81 )
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
  v74 = BugCheckParameter4;
  if ( BugCheckParameter4 )
  {
    CmpRundownUnitOfWork(BugCheckParameter4);
    CmpFreeUnitOfWork(v74);
  }
  v75 = v92;
  if ( v92 )
  {
    CmpRundownUnitOfWork(v92);
    CmpFreeUnitOfWork(v75);
  }
  v76 = NewDescriptor;
  if ( NewDescriptor && !v84 )
  {
    if ( (*v18 & 1) != 0 && (v18[6] & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v77 = *(_QWORD *)(a3 + 72);
      v78 = *(void **)(v77 + 48);
      if ( v78 )
        ExFreePoolWithTag(v78, 0);
      *(_QWORD *)(v77 + 48) = v76;
    }
  }
  if ( v98 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)&Size[1] + 32LL) + 16LL))(
      *(_QWORD *)(*(_QWORD *)&Size[1] + 32LL),
      &v99);
  if ( v96 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v97);
  if ( (_DWORD)BugCheckParameter3 != -1 )
    HvFreeCell(v14, (unsigned int)BugCheckParameter3);
  if ( v30 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v100);
  if ( HIDWORD(BugCheckParameter3) != -1 )
  {
    if ( v82 )
      CmpFreeKeyByCell(v14);
    else
      HvFreeCell(v14, HIDWORD(BugCheckParameter3));
  }
  if ( v9 )
    HvUnlockHiveFlusherShared(v14);
  return (unsigned int)v17;
}

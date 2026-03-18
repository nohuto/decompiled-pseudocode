/*
 * XREFs of CmpCreateChild @ 0x140704B98
 * Callers:
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpDoBuildVirtualStack @ 0x14087276C (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x1402F2D0C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1402F30C0 (CmpTransEnlistUowInKcb.c)
 *     SkipVirtualAccessCheck @ 0x140342918 (SkipVirtualAccessCheck.c)
 *     CmpIsKcbInsideVirtualStore @ 0x140342A9C (CmpIsKcbInsideVirtualStore.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpHKeyNodeSize @ 0x1404EAC24 (CmpHKeyNodeSize.c)
 *     CmpGetSecurityDescriptorNode @ 0x1405E1B48 (CmpGetSecurityDescriptorNode.c)
 *     CmpReportNotifyForKcbStack @ 0x1405F3830 (CmpReportNotifyForKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405F3B6C (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyStackDeleted @ 0x14061B650 (CmpIsKeyStackDeleted.c)
 *     CmpTryAcquireIXLockExclusive @ 0x14066EF78 (CmpTryAcquireIXLockExclusive.c)
 *     CmpTryAcquireIXLockIntent @ 0x14066EF88 (CmpTryAcquireIXLockIntent.c)
 *     CmpIsKcbImmutable @ 0x14066FC50 (CmpIsKcbImmutable.c)
 *     HvUnlockHiveFlusherShared @ 0x14067010C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140670144 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140670160 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpLockIXLockExclusive @ 0x1406A183C (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1406A189C (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1406A1B5C (CmpRundownUnitOfWork.c)
 *     CmpRecordParseFailure @ 0x1406B34E0 (CmpRecordParseFailure.c)
 *     CmpNameSize @ 0x1406B9ECC (CmpNameSize.c)
 *     SeDeassignSecurity @ 0x1406C4020 (SeDeassignSecurity.c)
 *     CmAddLogForAction @ 0x1406D1718 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406D9BBC (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406E23E4 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpFreeSecurityDescriptor @ 0x140701EC0 (CmpFreeSecurityDescriptor.c)
 *     CmpMarkKeyDirty @ 0x140704078 (CmpMarkKeyDirty.c)
 *     SeAssignSecurity @ 0x1407046D0 (SeAssignSecurity.c)
 *     CmpFreeKeyByCell @ 0x140704760 (CmpFreeKeyByCell.c)
 *     CmLockHiveSecurityExclusive @ 0x140704918 (CmLockHiveSecurityExclusive.c)
 *     CmUnlockHiveSecurity @ 0x140704938 (CmUnlockHiveSecurity.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140704958 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x140704A60 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x140704AE4 (CmpAssignSecurityToKcb.c)
 *     CmpCopyName @ 0x1407065BC (CmpCopyName.c)
 *     HvFreeCell @ 0x140706E0C (HvFreeCell.c)
 *     HvAllocateCell @ 0x140707168 (HvAllocateCell.c)
 *     CmpUndoDeleteKeyForTrans @ 0x1407272EC (CmpUndoDeleteKeyForTrans.c)
 *     CmpAssignSecurityDescriptor @ 0x140873E74 (CmpAssignSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140874530 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpLogUnsupportedOperation @ 0x1408789D8 (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x14087A8CC (CmpSnapshotTxOwnerArray.c)
 *     CmpAddSubKey @ 0x14087CA20 (CmpAddSubKey.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x140881584 (CmpFreeUnitOfWork.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  __int64 v12; // r10
  __int64 v13; // r13
  ULONG_PTR v14; // r12
  int v15; // r8d
  int v16; // edx
  unsigned int v17; // ebx
  _DWORD *v18; // r14
  bool IsKcbInsideVirtualStore; // al
  __int16 v20; // dx
  __int64 v21; // r8
  __int64 v22; // r10
  __int16 v23; // cx
  int v24; // eax
  GENERIC_MAPPING *GenericMapping; // rbx
  void *SecurityDescriptorForKcbStack; // rax
  NTSTATUS v27; // eax
  unsigned int v28; // r8d
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
  unsigned int v58; // ebx
  int v59; // eax
  _BYTE *v60; // rbx
  __int16 v61; // ax
  __int64 v62; // rcx
  int v63; // eax
  unsigned __int16 v64; // ax
  __int16 v65; // cx
  __int64 v66; // rbx
  __int64 v67; // rax
  ULONG_PTR v68; // rcx
  ULONG_PTR v69; // rdx
  int v70; // eax
  __int64 v71; // rdi
  unsigned int Length; // edx
  unsigned int v73; // eax
  __int64 v74; // rcx
  ULONG_PTR v75; // r13
  ULONG_PTR v76; // r13
  PSECURITY_DESCRIPTOR v77; // r13
  __int64 v78; // r14
  void *v79; // rcx
  char v81; // [rsp+40h] [rbp-E8h]
  char v82; // [rsp+41h] [rbp-E7h]
  void *v83; // [rsp+48h] [rbp-E0h] BYREF
  char v84; // [rsp+50h] [rbp-D8h]
  __int16 v85; // [rsp+54h] [rbp-D4h]
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-D0h]
  __int16 v87; // [rsp+60h] [rbp-C8h]
  unsigned int Size[3]; // [rsp+64h] [rbp-C4h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp-B8h]
  ULONG_PTR v90; // [rsp+78h] [rbp-B0h]
  __int64 v91; // [rsp+80h] [rbp-A8h]
  int v92; // [rsp+88h] [rbp-A0h]
  void *v93; // [rsp+90h] [rbp-98h] BYREF
  __int64 v94; // [rsp+98h] [rbp-90h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v96; // [rsp+A8h] [rbp-80h]
  unsigned int v97; // [rsp+B0h] [rbp-78h]
  __int64 v98; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v99; // [rsp+C0h] [rbp-68h] BYREF
  _QWORD *v100; // [rsp+C8h] [rbp-60h]
  _QWORD *v101; // [rsp+D0h] [rbp-58h]
  __int64 v102; // [rsp+D8h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+E0h] [rbp-48h]
  unsigned int v107; // [rsp+170h] [rbp+48h]
  unsigned __int16 *v108; // [rsp+170h] [rbp+48h]

  v82 = 0;
  v9 = 0;
  v10 = 0;
  v84 = 0;
  v83 = 0LL;
  v92 = -1;
  v99 = 0xFFFFFFFFLL;
  v93 = 0LL;
  BugCheckParameter3 = -1LL;
  v94 = 0xFFFFFFFFLL;
  v96 = 0LL;
  v98 = 0xFFFFFFFFLL;
  NewDescriptor = 0LL;
  Size[0] = -1;
  v90 = 0LL;
  v100 = 0LL;
  BugCheckParameter4 = 0LL;
  v101 = 0LL;
  v81 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(_WORD *)(a1 + 2));
  v91 = KcbAtLayerHeight;
  v13 = CmpGetKcbAtLayerHeight(v12, *(_WORD *)(v12 + 2));
  v102 = v13;
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
LABEL_6:
    CmpRecordParseFailure((__int64)v18, v16, v15);
LABEL_155:
    v30 = (char *)v83;
    goto LABEL_156;
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
  v23 = v20 | 0x200;
  if ( !IsKcbInsideVirtualStore )
    v23 = v20;
  v85 = v23;
  if ( v10 && *(_QWORD *)(a3 + 64) )
  {
    v15 = -1073741790;
    v16 = 263424;
    goto LABEL_4;
  }
  v18 = (_DWORD *)a5;
  v24 = *(_DWORD *)(a5 + 24) & 1;
  v97 = v24;
  if ( *(int *)(KcbAtLayerHeight + 40) < 0 && !v24 && (!v21 || !*(_QWORD *)(KcbAtLayerHeight + 240)) )
  {
    v17 = -1073741439;
    v15 = -1073741439;
    v16 = 263680;
    goto LABEL_6;
  }
  if ( v21 && !CmpIsKeyStackDeleted(v22, 0LL) )
  {
    if ( (int)CmpUndoDeleteKeyForTrans(v13, a9) < 0 )
    {
      v17 = -1073741772;
      v15 = -1073741772;
      v16 = 263936;
      goto LABEL_6;
    }
LABEL_154:
    v17 = 0;
    goto LABEL_155;
  }
  if ( (*(_DWORD *)(a5 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess(a5 + 168);
    *(_DWORD *)(a5 + 160) |= 1u;
  }
  v87 = v85 & 2;
  if ( (v85 & 2) == 0 )
  {
    if ( v84 )
    {
      NewDescriptor = (PSECURITY_DESCRIPTOR)CmpGetSecurityDescriptorForKcbStack(a1, a9);
    }
    else
    {
      if ( SkipVirtualAccessCheck(v13) )
        *(_QWORD *)&Size[1] = 0LL;
      else
        *(_QWORD *)&Size[1] = *(_QWORD *)(a3 + 64);
      GenericMapping = (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76);
      SecurityDescriptorForKcbStack = (void *)CmpGetSecurityDescriptorForKcbStack(a1, a9);
      v27 = SeAssignSecurity(
              SecurityDescriptorForKcbStack,
              *(PSECURITY_DESCRIPTOR *)&Size[1],
              &NewDescriptor,
              1u,
              (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
              GenericMapping,
              *((POOL_TYPE *)CmKeyObjectType + 25));
      v17 = v27;
      if ( v27 < 0 )
      {
        v15 = v27;
        v16 = 264192;
        goto LABEL_6;
      }
      KcbAtLayerHeight = v91;
    }
  }
  v28 = v97;
  if ( a9 )
    v28 = 1;
  Size[1] = v28;
  v29 = *(unsigned int *)(v13 + 40);
  if ( (_DWORD)v29 != -1 )
  {
    if ( v28 != (unsigned int)v29 >> 31 )
    {
      CmpLogUnsupportedOperation(2LL);
      v29 = *(unsigned int *)(v13 + 40);
    }
    v107 = (unsigned int)v29 >> 31;
    if ( !a8 )
    {
      HvLockHiveFlusherShared(v14);
      v9 = 1;
      v29 = *(unsigned int *)(v13 + 40);
    }
    v30 = (char *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(v14 + 8))(v14, v29, &v99);
    v83 = v30;
    if ( (unsigned __int16)CmpNameSize(&a4->Length) != *((_WORD *)v30 + 36) )
    {
      CmpLogUnsupportedOperation(1LL);
      v17 = -1073741822;
      v31 = -1073741822;
      v32 = 264448;
      goto LABEL_52;
    }
    if ( !CmpMarkKeyDirty(v14, *(unsigned int *)(v13 + 40), 0) )
    {
      v31 = -1073741443;
      v17 = -1073741443;
      v32 = 264704;
      goto LABEL_52;
    }
    if ( !(unsigned __int8)HvMarkCellDirty(v14, *(unsigned int *)(v91 + 40), 0LL) )
    {
      v31 = -1073741443;
      v17 = -1073741443;
      v32 = 264960;
      goto LABEL_52;
    }
    v33 = *(unsigned __int16 *)(a5 + 4);
    if ( (_WORD)v33 )
    {
      LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v33, v107, (unsigned int)&v93, (__int64)&v94);
      Size[1] = BugCheckParameter3;
      if ( (_DWORD)BugCheckParameter3 == -1 )
      {
        v31 = -1073741670;
        v17 = -1073741670;
        v32 = 265216;
        goto LABEL_52;
      }
      memmove(v93, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v94);
      v93 = 0LL;
    }
    CmLockHiveSecurityExclusive(v14);
    SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                               v14,
                               *(unsigned int *)(v13 + 40),
                               (__int64)v30,
                               NewDescriptor,
                               1,
                               Size);
    v17 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode >= 0 )
    {
      CmpFreeSecurityDescriptor(v14, *(unsigned int *)(v13 + 40));
      *((_DWORD *)v30 + 11) = Size[0];
      CmUnlockHiveSecurity(v14);
      *((_DWORD *)v30 + 12) = BugCheckParameter3;
      v108 = (unsigned __int16 *)(v30 + 74);
      *((_WORD *)v30 + 37) = *(_WORD *)(a5 + 4);
      LODWORD(BugCheckParameter3) = -1;
      CmpCopyName(v30 + 76);
      v30[13] |= 3u;
      v37 = v85;
      *((_WORD *)v30 + 1) = v85;
      if ( *((_WORD *)v30 + 36) < a4->Length )
        *((_WORD *)v30 + 1) = v37 | 0x20;
      v38 = MEMORY[0xFFFFF78000000014];
      v30 = (char *)v83;
      *(_QWORD *)((char *)v83 + 4) = MEMORY[0xFFFFF78000000014];
      ++*(_QWORD *)(v13 + 304);
      CmpRebuildKcbCacheFromNode(v13, (__int64)v30, 0LL, 0);
      v39 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v14 + 8))(v14, *(unsigned int *)(v91 + 40), &v98);
      v96 = v39;
      *(_QWORD *)(v39 + 4) = v38;
      v40 = v91;
      *(_QWORD *)(v91 + 168) = v38;
      ++*(_QWORD *)(v40 + 304);
      v41 = *v108;
      if ( *(_DWORD *)(v39 + 56) < v41 )
        *(_DWORD *)(v39 + 56) = v41;
      if ( v9 )
        HvUnlockHiveFlusherShared(v14);
      CmpReportNotifyForKcbStack(a1, 0, 1, 0LL);
      v17 = 0;
      v9 = 0;
      goto LABEL_156;
    }
    v35 = 265728;
LABEL_63:
    CmpRecordParseFailure(a5, v35, SecurityDescriptorNode);
    v36 = 1;
    goto LABEL_157;
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
    v90 = (ULONG_PTR)UnitOfWork;
    v100 = UnitOfWork;
    if ( !UnitOfWork )
    {
      v15 = -1073741670;
      v17 = -1073741670;
      v16 = 265984;
      goto LABEL_6;
    }
    CmpTransEnlistUowInKcb(UnitOfWork, KcbAtLayerHeight);
    v44 = CmpTransEnlistUowInCmTrans((_QWORD *)v90, a9);
    v17 = v44;
    if ( v44 < 0 )
    {
      v15 = v44;
      v16 = 266240;
      goto LABEL_6;
    }
    v45 = CmpAllocateUnitOfWork();
    BugCheckParameter4 = (ULONG_PTR)v45;
    v101 = v45;
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
    if ( !CmpLockIXLockIntent((unsigned int *)(KcbAtLayerHeight + 248), v90) )
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
  v58 = Size[1];
  HIDWORD(BugCheckParameter3) = HvAllocateCell(v14, Size[0], Size[1], (unsigned int)&v83, (__int64)&v99);
  v92 = HIDWORD(BugCheckParameter3);
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
    LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v59, v58, (unsigned int)&v93, (__int64)&v94);
    Size[1] = BugCheckParameter3;
    if ( (_DWORD)BugCheckParameter3 == -1 )
    {
      v15 = -1073741670;
      v17 = -1073741670;
      v16 = 270080;
      goto LABEL_6;
    }
    memmove(v93, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v94);
    v93 = 0LL;
  }
  v60 = v83;
  memset(v83, 0, Size[0]);
  v61 = 27500;
  if ( !v87 )
    v61 = 27502;
  *(_WORD *)v60 = v61;
  v60[12] = CmpAccessBitForPhase;
  if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 3 )
    v60[13] |= 3u;
  else
    v60[13] &= 0xFCu;
  *((_WORD *)v60 + 1) = v85;
  v30 = (char *)v83;
  *(_QWORD *)((char *)v83 + 4) = MEMORY[0xFFFFF78000000014];
  v62 = v91;
  *((_DWORD *)v30 + 4) = *(_DWORD *)(v91 + 40);
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
  v65 = v87;
  if ( v87 )
  {
    *(_QWORD *)(v30 + 36) = *(_QWORD *)(a5 + 48);
    *((_DWORD *)v30 + 7) = *(_DWORD *)(a5 + 40);
  }
  v82 = 1;
  if ( !v65 )
  {
    CmLockHiveSecurityExclusive(v14);
    SecurityDescriptorNode = CmpAssignSecurityDescriptor(
                               v14,
                               HIDWORD(BugCheckParameter3),
                               (_DWORD)v30,
                               (_DWORD)NewDescriptor,
                               0);
    v17 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode < 0 )
    {
      v35 = 270592;
      goto LABEL_63;
    }
    CmUnlockHiveSecurity(v14);
  }
  v66 = v91;
  if ( (unsigned __int8)HvMarkCellDirty(v14, *(unsigned int *)(v91 + 40), 0LL) )
  {
    v67 = a9;
    if ( !a9 )
    {
      if ( !(unsigned __int8)CmpAddSubKey(v14, *(unsigned int *)(v66 + 40), HIDWORD(BugCheckParameter3)) )
      {
        v31 = -1073741670;
        v17 = -1073741670;
        v32 = 271104;
        goto LABEL_52;
      }
      v67 = 0LL;
    }
    v81 = 1;
    *(_DWORD *)(v13 + 40) = HIDWORD(BugCheckParameter3);
    HIDWORD(BugCheckParameter3) = -1;
    *(_QWORD *)(v13 + 240) = v67;
    if ( (v85 & 0x40) == 0 )
    {
      *(_DWORD *)(v13 + 96) = *((_DWORD *)v30 + 9);
      *(_DWORD *)(v13 + 100) = *((_DWORD *)v30 + 10);
    }
    ++*(_QWORD *)(v13 + 304);
    CmpRebuildKcbCacheFromNode(v13, (__int64)v30, 0LL, 0);
    if ( !v87 )
      CmpAssignSecurityToKcb(v13, *((unsigned int *)v30 + 11), 0LL, 0, 0);
    if ( a9 )
    {
      v68 = BugCheckParameter4;
      *(_DWORD *)(BugCheckParameter4 + 68) = 0;
      *(_DWORD *)(v68 + 72) = v97;
      v69 = v90;
      *(_QWORD *)(v68 + 80) = v90;
      *(_DWORD *)(v69 + 68) = 1;
      *(_QWORD *)(v69 + 88) = v13;
      v70 = CmAddLogForAction(v68, 1u);
      v17 = v70;
      if ( v70 < 0 )
      {
        v31 = v70;
        v32 = 271360;
        goto LABEL_52;
      }
      BugCheckParameter4 = 0LL;
      v90 = 0LL;
      v66 = v91;
    }
    v71 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v66 + 32) + 8LL))(
            *(_QWORD *)(v66 + 32),
            *(unsigned int *)(v66 + 40),
            &v98);
    v96 = v71;
    CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v66 + 32), v71, *(_DWORD *)(v66 + 40));
    *(_QWORD *)(v71 + 4) = MEMORY[0xFFFFF78000000014];
    Length = a4->Length;
    if ( (unsigned __int16)*(_DWORD *)(v71 + 52) < Length )
      *(_WORD *)(v71 + 52) = Length;
    v73 = *(unsigned __int16 *)(a5 + 4);
    if ( *(_DWORD *)(v71 + 56) < v73 )
      *(_DWORD *)(v71 + 56) = v73;
    ++*(_QWORD *)(v66 + 304);
    v74 = v96;
    *(_WORD *)(v66 + 176) = *(_WORD *)(v96 + 52);
    *(_QWORD *)(v66 + 168) = *(_QWORD *)(v74 + 4);
    CmpCleanUpSubKeyInfo(v66, 1);
    if ( !a8 )
      HvUnlockHiveFlusherShared(v14);
    CmpReportNotifyForKcbStack(a1, a9, 1, 0LL);
    v81 = 0;
    v9 = a8 != 0 ? v9 : 0;
    goto LABEL_154;
  }
  v31 = -1073741443;
  v17 = -1073741443;
  v32 = 270848;
LABEL_52:
  CmpRecordParseFailure(a5, v32, v31);
LABEL_156:
  v36 = 0;
LABEL_157:
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
  v75 = BugCheckParameter4;
  if ( BugCheckParameter4 )
  {
    CmpRundownUnitOfWork((_QWORD *)BugCheckParameter4);
    CmpFreeUnitOfWork(v75);
  }
  v76 = v90;
  if ( v90 )
  {
    CmpRundownUnitOfWork((_QWORD *)v90);
    CmpFreeUnitOfWork(v76);
  }
  v77 = NewDescriptor;
  if ( NewDescriptor && !v84 )
  {
    if ( (*v18 & 1) != 0 && (v18[6] & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v78 = *(_QWORD *)(a3 + 72);
      v79 = *(void **)(v78 + 48);
      if ( v79 )
        ExFreePoolWithTag(v79, 0);
      *(_QWORD *)(v78 + 48) = v77;
    }
  }
  if ( v96 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v91 + 32) + 16LL))(*(_QWORD *)(v91 + 32), &v98);
  if ( v93 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v94);
  if ( (_DWORD)BugCheckParameter3 != -1 )
    HvFreeCell(v14, (unsigned int)BugCheckParameter3);
  if ( v30 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v99);
  if ( HIDWORD(BugCheckParameter3) != -1 )
  {
    if ( v82 )
      CmpFreeKeyByCell(v14, HIDWORD(BugCheckParameter3), 0);
    else
      HvFreeCell(v14, HIDWORD(BugCheckParameter3));
  }
  if ( v9 )
    HvUnlockHiveFlusherShared(v14);
  return v17;
}

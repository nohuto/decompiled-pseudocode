/*
 * XREFs of CmpCreateChild @ 0x14069CFA8
 * Callers:
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x1402723B4 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1402787F0 (CmpTransEnlistUowInKcb.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405E2CC4 (CmpUpdateKeyNodeAccessBits.c)
 *     HvLockHiveFlusherShared @ 0x1405E2D14 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1405E2D30 (HvUnlockHiveFlusherShared.c)
 *     CmpReportNotifyForKcbStack @ 0x1405E57CC (CmpReportNotifyForKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405E7738 (CmpGetKcbAtLayerHeight.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpRecordParseFailure @ 0x1405ECAE0 (CmpRecordParseFailure.c)
 *     CmpIsKeyStackDeleted @ 0x1405EEF40 (CmpIsKeyStackDeleted.c)
 *     CmpGetSecurityDescriptorNode @ 0x14063E6C4 (CmpGetSecurityDescriptorNode.c)
 *     CmpMarkKeyDirty @ 0x140640354 (CmpMarkKeyDirty.c)
 *     CmpRundownUnitOfWork @ 0x1406430FC (CmpRundownUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140643354 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x14064343C (CmpLockIXLockExclusive.c)
 *     CmpIsSystemEntity @ 0x140693D90 (CmpIsSystemEntity.c)
 *     SeAssignSecurity @ 0x14069CAE0 (SeAssignSecurity.c)
 *     CmpFreeKeyByCell @ 0x14069CB70 (CmpFreeKeyByCell.c)
 *     CmLockHiveSecurityExclusive @ 0x14069CD28 (CmLockHiveSecurityExclusive.c)
 *     CmUnlockHiveSecurity @ 0x14069CD48 (CmUnlockHiveSecurity.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14069CD68 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x14069CE70 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x14069CEF4 (CmpAssignSecurityToKcb.c)
 *     CmpCopyName @ 0x14069E25C (CmpCopyName.c)
 *     HvFreeCell @ 0x14069EAAC (HvFreeCell.c)
 *     HvAllocateCell @ 0x14069EE08 (HvAllocateCell.c)
 *     CmpNameSize @ 0x1406E283C (CmpNameSize.c)
 *     SeDeassignSecurity @ 0x1406F0530 (SeDeassignSecurity.c)
 *     CmpFreeSecurityDescriptor @ 0x1406F8F24 (CmpFreeSecurityDescriptor.c)
 *     CmAddLogForAction @ 0x1406FEAE8 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x140707318 (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14070FBA0 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140719300 (CmpUndoDeleteKeyForTrans.c)
 *     CmpAssignSecurityDescriptor @ 0x14086E388 (CmpAssignSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x14086E9D8 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpLogUnsupportedOperation @ 0x140872E88 (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x140874D7C (CmpSnapshotTxOwnerArray.c)
 *     CmpAddSubKey @ 0x140876EB0 (CmpAddSubKey.c)
 *     HvMarkCellDirty @ 0x1408787F0 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087BA14 (CmpFreeUnitOfWork.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCreateChild(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int16 a6,
        char a7,
        __int64 a8)
{
  char v9; // r15
  ULONG_PTR KcbAtLayerHeight; // rdi
  __int64 v11; // r10
  __int64 v12; // r10
  ULONG_PTR v13; // r13
  ULONG_PTR v14; // r12
  int v15; // ecx
  int v16; // edx
  __int16 v17; // ax
  __int16 v18; // dx
  _DWORD *v19; // r14
  int v20; // eax
  __int64 v21; // r8
  struct _SECURITY_SUBJECT_CONTEXT *v22; // rdi
  GENERIC_MAPPING *GenericMapping; // rbx
  void *SecurityDescriptorForKcbStack; // rax
  NTSTATUS v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // rdx
  bool v29; // zf
  int *v30; // rcx
  unsigned int v31; // ebx
  int v32; // eax
  _BYTE *v33; // rbx
  __int16 v34; // ax
  char *v35; // rdi
  ULONG_PTR v36; // rcx
  int v37; // eax
  unsigned __int16 v38; // ax
  __int16 v39; // cx
  int SecurityDescriptorNode; // eax
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rdi
  unsigned int v44; // edx
  unsigned int v45; // eax
  __int64 v46; // rcx
  char v47; // al
  ULONG_PTR v48; // r13
  ULONG_PTR v49; // r13
  PSECURITY_DESCRIPTOR v50; // r13
  __int64 v51; // r14
  void *v52; // rcx
  _QWORD *UnitOfWork; // rax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  _QWORD *v59; // rax
  int v60; // eax
  ULONG_PTR v61; // rcx
  ULONG_PTR v62; // rdx
  int v63; // eax
  int v64; // r8d
  int v65; // edx
  int v66; // r8d
  int v67; // edx
  int v68; // eax
  int v69; // edx
  __int16 v70; // cx
  __int64 v71; // rbx
  __int64 v72; // rdx
  ULONG_PTR v73; // rax
  unsigned int v74; // ecx
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  char v79; // [rsp+40h] [rbp-E8h]
  char v80; // [rsp+41h] [rbp-E7h]
  void *v81; // [rsp+48h] [rbp-E0h] BYREF
  __int16 v82; // [rsp+54h] [rbp-D4h]
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-D0h]
  __int16 v84; // [rsp+60h] [rbp-C8h]
  unsigned int Size[3]; // [rsp+64h] [rbp-C4h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp-B8h]
  ULONG_PTR v87; // [rsp+78h] [rbp-B0h]
  ULONG_PTR v88; // [rsp+80h] [rbp-A8h]
  int v89; // [rsp+88h] [rbp-A0h]
  void *v90; // [rsp+90h] [rbp-98h] BYREF
  __int64 v91; // [rsp+98h] [rbp-90h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v93; // [rsp+A8h] [rbp-80h]
  unsigned int v94; // [rsp+B0h] [rbp-78h]
  __int64 v95; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v96; // [rsp+C0h] [rbp-68h] BYREF
  _QWORD *v97; // [rsp+C8h] [rbp-60h]
  _QWORD *v98; // [rsp+D0h] [rbp-58h]
  ULONG_PTR v99; // [rsp+D8h] [rbp-50h]
  ULONG_PTR v100; // [rsp+E0h] [rbp-48h]
  unsigned int v104; // [rsp+168h] [rbp+40h]
  unsigned __int16 *v105; // [rsp+168h] [rbp+40h]

  v80 = 0;
  v9 = 0;
  v81 = 0LL;
  v89 = -1;
  v96 = 0xFFFFFFFFLL;
  v90 = 0LL;
  BugCheckParameter3 = -1LL;
  v91 = 0xFFFFFFFFLL;
  v93 = 0LL;
  v95 = 0xFFFFFFFFLL;
  NewDescriptor = 0LL;
  Size[0] = -1;
  v87 = 0LL;
  v97 = 0LL;
  BugCheckParameter4 = 0LL;
  v98 = 0LL;
  v79 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(_WORD *)(a1 + 2));
  v88 = KcbAtLayerHeight;
  v13 = CmpGetKcbAtLayerHeight(v11, *(_WORD *)(v11 + 2));
  v99 = v13;
  v14 = *(_QWORD *)(v13 + 32);
  v100 = v14;
  if ( a8 && (*(_DWORD *)(v14 + 160) & 2) != 0 )
  {
    v64 = -1072103423;
    v65 = 262400;
    goto LABEL_122;
  }
  if ( (*(_DWORD *)(KcbAtLayerHeight + 8) & 0x80u) != 0 )
  {
    v64 = -1073741790;
    v65 = 262656;
    goto LABEL_122;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(KcbAtLayerHeight + 32) + 160LL) & 0x100000) != 0 )
  {
    v64 = -1073741790;
    v65 = 262912;
    goto LABEL_122;
  }
  if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
  {
    v64 = -1073741790;
    v65 = 263168;
    goto LABEL_122;
  }
  v15 = *(_DWORD *)(KcbAtLayerHeight + 184);
  if ( !CmpVEEnabled || (v16 = 1, (v15 & 0x1000000) == 0) )
    v16 = 0;
  v17 = a6 | 0x100;
  if ( !v16 )
    v17 = a6;
  v18 = v17 | 0x200;
  if ( (v15 & 0x2000000) == 0 )
    v18 = v17;
  v82 = v18;
  if ( (*(_DWORD *)(v14 + 4152) & 0x20) != 0 && *(_QWORD *)(a3 + 64) )
  {
    v64 = -1073741790;
    v65 = 263424;
LABEL_122:
    v19 = (_DWORD *)a5;
    goto LABEL_124;
  }
  v19 = (_DWORD *)a5;
  v20 = *(_DWORD *)(a5 + 24) & 1;
  v94 = v20;
  if ( *(int *)(KcbAtLayerHeight + 40) < 0 && !v20 && (!a8 || !*(_QWORD *)(KcbAtLayerHeight + 240)) )
  {
    v26 = -1073741439;
    v64 = -1073741439;
    v65 = 263680;
    goto LABEL_106;
  }
  if ( a8 && !CmpIsKeyStackDeleted(v12, 0LL) )
  {
    if ( (int)CmpUndoDeleteKeyForTrans(v13, a8) < 0 )
    {
      v26 = -1073741772;
      v64 = -1073741772;
      v65 = 263936;
LABEL_106:
      CmpRecordParseFailure((__int64)v19, v65, v64);
      goto LABEL_67;
    }
LABEL_66:
    v26 = 0;
LABEL_67:
    v35 = (char *)v81;
LABEL_68:
    v47 = 0;
    goto LABEL_69;
  }
  if ( (*(_DWORD *)(a5 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess(a5 + 168);
    *(_DWORD *)(a5 + 160) |= 1u;
  }
  v21 = 2LL;
  v84 = v82 & 2;
  if ( (v82 & 2) == 0 )
  {
    if ( (*(_DWORD *)(v14 + 4152) & 0x20) != 0 )
    {
      NewDescriptor = (PSECURITY_DESCRIPTOR)CmpGetSecurityDescriptorForKcbStack(a1, a8);
    }
    else
    {
      if ( (*(_DWORD *)(v13 + 184) & 0x2000000) == 0
        || CmpIsSystemEntity(KeGetCurrentThread()->PreviousMode, 0LL, (int *)(a5 + 16)) )
      {
        v22 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
        *(_QWORD *)&Size[1] = *(_QWORD *)(a3 + 64);
      }
      else
      {
        *(_QWORD *)&Size[1] = 0LL;
        v22 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
      }
      GenericMapping = (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76);
      SecurityDescriptorForKcbStack = (void *)CmpGetSecurityDescriptorForKcbStack(a1, a8);
      v25 = SeAssignSecurity(
              SecurityDescriptorForKcbStack,
              *(PSECURITY_DESCRIPTOR *)&Size[1],
              &NewDescriptor,
              1u,
              v22 + 1,
              GenericMapping,
              *((POOL_TYPE *)CmKeyObjectType + 25));
      v26 = v25;
      if ( v25 < 0 )
      {
        v64 = v25;
        v65 = 264192;
        goto LABEL_106;
      }
      KcbAtLayerHeight = v88;
    }
    v21 = 2LL;
  }
  v27 = v94;
  if ( a8 )
    v27 = 1LL;
  Size[1] = v27;
  v28 = *(unsigned int *)(v13 + 40);
  if ( (_DWORD)v28 == -1 )
  {
    v29 = a7 == 0;
    if ( !a7 )
    {
      HvLockHiveFlusherShared(v14);
      v29 = 1;
    }
    v9 = v29;
    if ( a8 )
    {
      UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v27, v28, v21);
      v87 = (ULONG_PTR)UnitOfWork;
      v97 = UnitOfWork;
      if ( !UnitOfWork )
      {
        v64 = -1073741670;
        v65 = 265984;
        goto LABEL_124;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, KcbAtLayerHeight);
      v55 = CmpTransEnlistUowInCmTrans((_QWORD *)v87, a8);
      v26 = v55;
      if ( v55 < 0 )
      {
        v64 = v55;
        v65 = 266240;
        goto LABEL_106;
      }
      v59 = (_QWORD *)CmpAllocateUnitOfWork(v57, v56, v58);
      BugCheckParameter4 = (ULONG_PTR)v59;
      v98 = v59;
      if ( !v59 )
      {
        v64 = -1073741670;
        v65 = 266496;
        goto LABEL_124;
      }
      CmpTransEnlistUowInKcb(v59, v13);
      v60 = CmpTransEnlistUowInCmTrans((_QWORD *)BugCheckParameter4, a8);
      v26 = v60;
      if ( v60 < 0 )
      {
        v64 = v60;
        v65 = 266752;
        goto LABEL_106;
      }
      if ( !CmpLockIXLockIntent((unsigned int *)(KcbAtLayerHeight + 248), v87) )
      {
        v64 = -1072103423;
        v65 = 267008;
        goto LABEL_124;
      }
      if ( !CmpLockIXLockExclusive(v13 + 248, (_QWORD *)BugCheckParameter4, 0) )
      {
        v64 = -1072103423;
        v65 = 267264;
        goto LABEL_124;
      }
      if ( !CmpLockIXLockExclusive(v13 + 264, (_QWORD *)BugCheckParameter4, 1) )
      {
        v64 = -1072103423;
        v65 = 267520;
LABEL_124:
        v26 = v64;
        goto LABEL_106;
      }
    }
    else
    {
      v30 = (int *)(KcbAtLayerHeight + 248);
      if ( *(_QWORD *)(KcbAtLayerHeight + 240) )
      {
        v75 = CmpSnapshotTxOwnerArray(v30, a5 + 120, a5 + 128);
        v26 = v75;
        if ( v75 < 0 )
        {
          v64 = v75;
          v65 = 267776;
          goto LABEL_106;
        }
        CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
        *(_DWORD *)(a5 + 100) |= 4u;
        v64 = -1073741267;
        v65 = 268032;
        goto LABEL_124;
      }
      if ( *v30 < 0 )
      {
        v76 = CmpSnapshotTxOwnerArray(v30, a5 + 120, a5 + 128);
        v26 = v76;
        if ( v76 < 0 )
        {
          v64 = v76;
          v65 = 268288;
          goto LABEL_106;
        }
        CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
        *(_DWORD *)(a5 + 100) |= 4u;
        v64 = -1073741267;
        v65 = 268544;
        goto LABEL_124;
      }
      if ( *(_DWORD *)(v13 + 248) )
      {
        v77 = CmpSnapshotTxOwnerArray(v13 + 248, a5 + 120, a5 + 128);
        v26 = v77;
        if ( v77 < 0 )
        {
          v64 = v77;
          v65 = 268800;
          goto LABEL_106;
        }
        CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
        *(_DWORD *)(a5 + 100) |= 4u;
        v64 = -1073741267;
        v65 = 269056;
        goto LABEL_124;
      }
      if ( *(_DWORD *)(v13 + 264) )
      {
        v78 = CmpSnapshotTxOwnerArray(v13 + 264, a5 + 120, a5 + 128);
        v26 = v78;
        if ( v78 < 0 )
        {
          v64 = v78;
          v65 = 269312;
          goto LABEL_106;
        }
        CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
        *(_DWORD *)(a5 + 100) |= 4u;
        v64 = -1073741267;
        v65 = 269568;
        goto LABEL_124;
      }
    }
    Size[0] = (unsigned __int16)CmpNameSize(a4) + 76;
    v31 = Size[1];
    HIDWORD(BugCheckParameter3) = HvAllocateCell(v14, Size[0], Size[1], (unsigned int)&v81, (__int64)&v96);
    v89 = HIDWORD(BugCheckParameter3);
    if ( HIDWORD(BugCheckParameter3) == -1 )
    {
      v64 = -1073741670;
      v65 = 269824;
      goto LABEL_124;
    }
    v32 = *(unsigned __int16 *)(a5 + 4);
    if ( (_WORD)v32 )
    {
      LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v32, v31, (unsigned int)&v90, (__int64)&v91);
      Size[1] = BugCheckParameter3;
      if ( (_DWORD)BugCheckParameter3 == -1 )
      {
        v64 = -1073741670;
        v65 = 270080;
        goto LABEL_124;
      }
      memmove(v90, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v91);
      v90 = 0LL;
    }
    v33 = v81;
    memset(v81, 0, Size[0]);
    v34 = 27500;
    if ( !v84 )
      v34 = 27502;
    *(_WORD *)v33 = v34;
    v33[12] = CmpAccessBitForPhase;
    if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 3 )
      v33[13] |= 3u;
    else
      v33[13] &= 0xFCu;
    *((_WORD *)v33 + 1) = v82;
    v35 = (char *)v81;
    *(_QWORD *)((char *)v81 + 4) = MEMORY[0xFFFFF78000000014];
    v36 = v88;
    *((_DWORD *)v35 + 4) = *(_DWORD *)(v88 + 40);
    *((_DWORD *)v35 + 7) = -1;
    *((_DWORD *)v35 + 8) = -1;
    *((_DWORD *)v35 + 10) = -1;
    *((_DWORD *)v35 + 11) = -1;
    *((_DWORD *)v35 + 12) = BugCheckParameter3;
    *((_WORD *)v35 + 37) = *(_WORD *)(a5 + 4);
    LODWORD(BugCheckParameter3) = -1;
    v37 = *(_DWORD *)(v36 + 184);
    if ( (v37 & 0x80u) != 0 )
      *((_DWORD *)v35 + 13) ^= (*((_DWORD *)v35 + 13) ^ (v37 << 16)) & 0xF00000;
    v38 = CmpCopyName(v35 + 76);
    *((_WORD *)v35 + 36) = v38;
    if ( v38 < *a4 )
      *((_WORD *)v33 + 1) |= 0x20u;
    v39 = v84;
    if ( v84 )
    {
      *(_QWORD *)(v35 + 36) = *(_QWORD *)(a5 + 48);
      *((_DWORD *)v35 + 7) = *(_DWORD *)(a5 + 40);
    }
    v80 = 1;
    if ( v39 )
    {
LABEL_50:
      v41 = v88;
      if ( (unsigned __int8)HvMarkCellDirty(v14, *(unsigned int *)(v88 + 40), 0LL) )
      {
        v42 = a8;
        if ( !a8 )
        {
          if ( !(unsigned __int8)CmpAddSubKey(v14, *(unsigned int *)(v41 + 40), HIDWORD(BugCheckParameter3)) )
          {
            v66 = -1073741670;
            v26 = -1073741670;
            v67 = 271104;
            goto LABEL_138;
          }
          v42 = 0LL;
        }
        v79 = 1;
        *(_DWORD *)(v13 + 40) = HIDWORD(BugCheckParameter3);
        HIDWORD(BugCheckParameter3) = -1;
        *(_QWORD *)(v13 + 240) = v42;
        if ( (v82 & 0x40) == 0 )
        {
          *(_DWORD *)(v13 + 96) = *((_DWORD *)v35 + 9);
          *(_DWORD *)(v13 + 100) = *((_DWORD *)v35 + 10);
        }
        ++*(_QWORD *)(v13 + 304);
        CmpRebuildKcbCacheFromNode(v13, (__int64)v35, 0LL, 0);
        if ( !v84 )
          CmpAssignSecurityToKcb(v13, *((unsigned int *)v35 + 11), 0LL, 0, 0);
        if ( !a8 )
          goto LABEL_59;
        v61 = BugCheckParameter4;
        *(_DWORD *)(BugCheckParameter4 + 68) = 0;
        *(_DWORD *)(v61 + 72) = v94;
        v62 = v87;
        *(_QWORD *)(v61 + 80) = v87;
        *(_DWORD *)(v62 + 68) = 1;
        *(_QWORD *)(v62 + 88) = v13;
        v63 = CmAddLogForAction(v61, 1LL);
        v26 = v63;
        if ( v63 >= 0 )
        {
          BugCheckParameter4 = 0LL;
          v87 = 0LL;
          v41 = v88;
LABEL_59:
          v43 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v41 + 32) + 8LL))(
                  *(_QWORD *)(v41 + 32),
                  *(unsigned int *)(v41 + 40),
                  &v95);
          v93 = v43;
          CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v41 + 32), v43, *(_DWORD *)(v41 + 40));
          *(_QWORD *)(v43 + 4) = MEMORY[0xFFFFF78000000014];
          v44 = *a4;
          if ( (unsigned __int16)*(_DWORD *)(v43 + 52) < v44 )
            *(_WORD *)(v43 + 52) = v44;
          v45 = *(unsigned __int16 *)(a5 + 4);
          if ( *(_DWORD *)(v43 + 56) < v45 )
            *(_DWORD *)(v43 + 56) = v45;
          ++*(_QWORD *)(v41 + 304);
          v46 = v93;
          *(_WORD *)(v41 + 176) = *(_WORD *)(v93 + 52);
          *(_QWORD *)(v41 + 168) = *(_QWORD *)(v46 + 4);
          CmpCleanUpSubKeyInfo(v41, 1);
          if ( !a7 )
            HvUnlockHiveFlusherShared(v14);
          CmpReportNotifyForKcbStack(a1, a8, 1, 0LL);
          v79 = 0;
          v9 = a7 != 0 ? v9 : 0;
          goto LABEL_66;
        }
        v66 = v63;
        v67 = 271360;
      }
      else
      {
        v66 = -1073741443;
        v26 = -1073741443;
        v67 = 270848;
      }
LABEL_138:
      CmpRecordParseFailure(a5, v67, v66);
      goto LABEL_68;
    }
    CmLockHiveSecurityExclusive(v14);
    SecurityDescriptorNode = CmpAssignSecurityDescriptor(
                               v14,
                               HIDWORD(BugCheckParameter3),
                               (_DWORD)v35,
                               (_DWORD)NewDescriptor,
                               0);
    v26 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode >= 0 )
    {
      CmUnlockHiveSecurity(v14);
      goto LABEL_50;
    }
    v69 = 270592;
  }
  else
  {
    if ( (_DWORD)v27 != (unsigned int)v28 >> 31 )
    {
      CmpLogUnsupportedOperation(2LL);
      v28 = *(unsigned int *)(v13 + 40);
    }
    v104 = (unsigned int)v28 >> 31;
    if ( !a7 )
    {
      HvLockHiveFlusherShared(v14);
      v9 = 1;
      v28 = *(unsigned int *)(v13 + 40);
    }
    v35 = (char *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(v14 + 8))(v14, v28, &v96);
    v81 = v35;
    if ( (unsigned __int16)CmpNameSize(a4) != *((_WORD *)v35 + 36) )
    {
      CmpLogUnsupportedOperation(1LL);
      v26 = -1073741822;
      v66 = -1073741822;
      v67 = 264448;
      goto LABEL_138;
    }
    if ( !CmpMarkKeyDirty(v14, *(unsigned int *)(v13 + 40), 0) )
    {
      v66 = -1073741443;
      v26 = -1073741443;
      v67 = 264704;
      goto LABEL_138;
    }
    if ( !(unsigned __int8)HvMarkCellDirty(v14, *(unsigned int *)(v88 + 40), 0LL) )
    {
      v66 = -1073741443;
      v26 = -1073741443;
      v67 = 264960;
      goto LABEL_138;
    }
    v68 = *(unsigned __int16 *)(a5 + 4);
    if ( (_WORD)v68 )
    {
      LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v68, v104, (unsigned int)&v90, (__int64)&v91);
      Size[1] = BugCheckParameter3;
      if ( (_DWORD)BugCheckParameter3 == -1 )
      {
        v66 = -1073741670;
        v26 = -1073741670;
        v67 = 265216;
        goto LABEL_138;
      }
      memmove(v90, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v91);
      v90 = 0LL;
    }
    CmLockHiveSecurityExclusive(v14);
    SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                               v14,
                               *(unsigned int *)(v13 + 40),
                               (__int64)v35,
                               NewDescriptor,
                               1,
                               Size);
    v26 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode >= 0 )
    {
      CmpFreeSecurityDescriptor(v14);
      *((_DWORD *)v35 + 11) = Size[0];
      CmUnlockHiveSecurity(v14);
      *((_DWORD *)v35 + 12) = BugCheckParameter3;
      v105 = (unsigned __int16 *)(v35 + 74);
      *((_WORD *)v35 + 37) = *(_WORD *)(a5 + 4);
      LODWORD(BugCheckParameter3) = -1;
      CmpCopyName(v35 + 76);
      v35[13] |= 3u;
      v70 = v82;
      *((_WORD *)v35 + 1) = v82;
      if ( *((_WORD *)v35 + 36) < *a4 )
        *((_WORD *)v35 + 1) = v70 | 0x20;
      v71 = MEMORY[0xFFFFF78000000014];
      v35 = (char *)v81;
      *(_QWORD *)((char *)v81 + 4) = MEMORY[0xFFFFF78000000014];
      ++*(_QWORD *)(v13 + 304);
      CmpRebuildKcbCacheFromNode(v13, (__int64)v35, 0LL, 0);
      v72 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v14 + 8))(v14, *(unsigned int *)(v88 + 40), &v95);
      v93 = v72;
      *(_QWORD *)(v72 + 4) = v71;
      v73 = v88;
      *(_QWORD *)(v88 + 168) = v71;
      ++*(_QWORD *)(v73 + 304);
      v74 = *v105;
      if ( *(_DWORD *)(v72 + 56) < v74 )
        *(_DWORD *)(v72 + 56) = v74;
      if ( v9 )
        HvUnlockHiveFlusherShared(v14);
      CmpReportNotifyForKcbStack(a1, 0, 1, 0LL);
      v26 = 0;
      v9 = 0;
      goto LABEL_68;
    }
    v69 = 265728;
  }
  CmpRecordParseFailure(a5, v69, SecurityDescriptorNode);
  v47 = 1;
LABEL_69:
  if ( v47 )
    CmUnlockHiveSecurity(v14);
  if ( v79 )
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
  v48 = BugCheckParameter4;
  if ( BugCheckParameter4 )
  {
    CmpRundownUnitOfWork((_QWORD *)BugCheckParameter4);
    CmpFreeUnitOfWork(v48);
  }
  v49 = v87;
  if ( v87 )
  {
    CmpRundownUnitOfWork((_QWORD *)v87);
    CmpFreeUnitOfWork(v49);
  }
  v50 = NewDescriptor;
  if ( NewDescriptor && (*(_DWORD *)(v14 + 4152) & 0x20) == 0 )
  {
    if ( (*v19 & 1) != 0 && (v19[6] & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v51 = *(_QWORD *)(a3 + 72);
      v52 = *(void **)(v51 + 48);
      if ( v52 )
        ExFreePoolWithTag(v52, 0);
      *(_QWORD *)(v51 + 48) = v50;
    }
  }
  if ( v93 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v88 + 32) + 16LL))(*(_QWORD *)(v88 + 32), &v95);
  if ( v90 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v91);
  if ( (_DWORD)BugCheckParameter3 != -1 )
    HvFreeCell(v14, (unsigned int)BugCheckParameter3);
  if ( v35 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v96);
  if ( HIDWORD(BugCheckParameter3) != -1 )
  {
    if ( v80 )
      CmpFreeKeyByCell(v14, HIDWORD(BugCheckParameter3), 0);
    else
      HvFreeCell(v14, HIDWORD(BugCheckParameter3));
  }
  if ( v9 )
    HvUnlockHiveFlusherShared(v14);
  return v26;
}

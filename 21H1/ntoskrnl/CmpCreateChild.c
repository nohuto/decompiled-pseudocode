/*
 * XREFs of CmpCreateChild @ 0x140696A68
 * Callers:
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x1402D2D14 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402E1B1C (CmpTransEnlistUowInCmTrans.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpIsSystemEntity @ 0x1405EA850 (CmpIsSystemEntity.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406182F0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvLockHiveFlusherShared @ 0x140618340 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x14061835C (HvUnlockHiveFlusherShared.c)
 *     CmpReportNotifyForKcbStack @ 0x14061ADEC (CmpReportNotifyForKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x14061CD58 (CmpGetKcbAtLayerHeight.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpRecordParseFailure @ 0x140622100 (CmpRecordParseFailure.c)
 *     CmpIsKeyStackDeleted @ 0x140624560 (CmpIsKeyStackDeleted.c)
 *     CmpGetSecurityDescriptorNode @ 0x14068BBE0 (CmpGetSecurityDescriptorNode.c)
 *     CmpLockIXLockExclusive @ 0x14068E09C (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14068E2C0 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14068E618 (CmpRundownUnitOfWork.c)
 *     SeAssignSecurity @ 0x140696340 (SeAssignSecurity.c)
 *     CmpFreeKeyByCell @ 0x1406963D0 (CmpFreeKeyByCell.c)
 *     CmpMarkKeyDirty @ 0x140696588 (CmpMarkKeyDirty.c)
 *     CmLockHiveSecurityExclusive @ 0x1406967E8 (CmLockHiveSecurityExclusive.c)
 *     CmUnlockHiveSecurity @ 0x140696808 (CmUnlockHiveSecurity.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140696828 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x140696930 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x1406969B4 (CmpAssignSecurityToKcb.c)
 *     CmpCopyName @ 0x14069818C (CmpCopyName.c)
 *     HvFreeCell @ 0x1406989DC (HvFreeCell.c)
 *     HvAllocateCell @ 0x140698D38 (HvAllocateCell.c)
 *     CmpNameSize @ 0x1406C22BC (CmpNameSize.c)
 *     SeDeassignSecurity @ 0x1406CF230 (SeDeassignSecurity.c)
 *     CmpFreeSecurityDescriptor @ 0x1406D5AA4 (CmpFreeSecurityDescriptor.c)
 *     CmAddLogForAction @ 0x1406DBB4C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406E3928 (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406EC080 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140716F70 (CmpUndoDeleteKeyForTrans.c)
 *     CmpAssignSecurityDescriptor @ 0x14086C8C8 (CmpAssignSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x14086CF18 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpLogUnsupportedOperation @ 0x140871B98 (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x140873A8C (CmpSnapshotTxOwnerArray.c)
 *     CmpAddSubKey @ 0x140875BC0 (CmpAddSubKey.c)
 *     HvMarkCellDirty @ 0x140877500 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087A724 (CmpFreeUnitOfWork.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCreateChild(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        unsigned __int16 a6,
        char a7,
        __int64 a8)
{
  char v9; // r15
  ULONG_PTR KcbAtLayerHeight; // rdi
  __int64 v11; // r10
  __int64 v12; // r10
  ULONG_PTR v13; // r13
  ULONG_PTR v14; // r12
  __int64 v15; // r8
  int v16; // ecx
  int v17; // edx
  unsigned __int16 v18; // ax
  __int64 v19; // r9
  __int64 v20; // rdx
  _DWORD *v21; // r14
  int v22; // eax
  __int64 v23; // r8
  struct _SECURITY_SUBJECT_CONTEXT *v24; // rdi
  GENERIC_MAPPING *GenericMapping; // rbx
  void *SecurityDescriptorForKcbStack; // rax
  NTSTATUS v27; // eax
  unsigned int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // rdx
  bool v31; // zf
  int *v32; // rcx
  unsigned int v33; // ebx
  int v34; // eax
  _BYTE *v35; // rbx
  __int16 v36; // ax
  char *v37; // rdi
  ULONG_PTR v38; // rcx
  int v39; // eax
  unsigned __int16 v40; // ax
  __int16 v41; // cx
  int SecurityDescriptorNode; // eax
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rdi
  unsigned int v46; // edx
  unsigned int v47; // eax
  __int64 v48; // rcx
  char v49; // al
  ULONG_PTR v50; // r13
  ULONG_PTR v51; // r13
  PSECURITY_DESCRIPTOR v52; // r13
  __int64 v53; // r14
  void *v54; // rcx
  _QWORD *UnitOfWork; // rax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  _QWORD *v61; // rax
  int v62; // eax
  ULONG_PTR v63; // rcx
  ULONG_PTR v64; // rdx
  int v65; // eax
  int v66; // r8d
  int v67; // edx
  int v68; // r8d
  int v69; // edx
  int v70; // eax
  int v71; // edx
  __int16 v72; // cx
  __int64 v73; // rbx
  __int64 v74; // rdx
  ULONG_PTR v75; // rax
  unsigned int v76; // ecx
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  char v81; // [rsp+40h] [rbp-E8h]
  char v82; // [rsp+41h] [rbp-E7h]
  void *v83; // [rsp+48h] [rbp-E0h] BYREF
  __int16 v84; // [rsp+54h] [rbp-D4h]
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-D0h]
  __int16 v86; // [rsp+60h] [rbp-C8h]
  unsigned int Size[3]; // [rsp+64h] [rbp-C4h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp-B8h]
  ULONG_PTR v89; // [rsp+78h] [rbp-B0h]
  ULONG_PTR v90; // [rsp+80h] [rbp-A8h]
  int v91; // [rsp+88h] [rbp-A0h]
  void *v92; // [rsp+90h] [rbp-98h] BYREF
  __int64 v93; // [rsp+98h] [rbp-90h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v95; // [rsp+A8h] [rbp-80h]
  unsigned int v96; // [rsp+B0h] [rbp-78h]
  __int64 v97; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v98; // [rsp+C0h] [rbp-68h] BYREF
  _QWORD *v99; // [rsp+C8h] [rbp-60h]
  _QWORD *v100; // [rsp+D0h] [rbp-58h]
  ULONG_PTR v101; // [rsp+D8h] [rbp-50h]
  ULONG_PTR v102; // [rsp+E0h] [rbp-48h]
  unsigned int v106; // [rsp+168h] [rbp+40h]
  unsigned __int16 *v107; // [rsp+168h] [rbp+40h]

  v82 = 0;
  v9 = 0;
  v83 = 0LL;
  v91 = -1;
  v98 = 0xFFFFFFFFLL;
  v92 = 0LL;
  BugCheckParameter3 = -1LL;
  v93 = 0xFFFFFFFFLL;
  v95 = 0LL;
  v97 = 0xFFFFFFFFLL;
  NewDescriptor = 0LL;
  Size[0] = -1;
  v89 = 0LL;
  v99 = 0LL;
  BugCheckParameter4 = 0LL;
  v100 = 0LL;
  v81 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(_WORD *)(a1 + 2));
  v90 = KcbAtLayerHeight;
  v13 = CmpGetKcbAtLayerHeight(v11, *(_WORD *)(v11 + 2));
  v101 = v13;
  v14 = *(_QWORD *)(v13 + 32);
  v102 = v14;
  v15 = a8;
  if ( a8 && (*(_DWORD *)(v14 + 160) & 2) != 0 )
  {
    v66 = -1072103423;
    v67 = 262400;
    goto LABEL_122;
  }
  if ( (*(_DWORD *)(KcbAtLayerHeight + 8) & 0x80u) != 0 )
  {
    v66 = -1073741790;
    v67 = 262656;
    goto LABEL_122;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(KcbAtLayerHeight + 32) + 160LL) & 0x100000) != 0 )
  {
    v66 = -1073741790;
    v67 = 262912;
    goto LABEL_122;
  }
  if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
  {
    v66 = -1073741790;
    v67 = 263168;
    goto LABEL_122;
  }
  v16 = *(_DWORD *)(KcbAtLayerHeight + 184);
  if ( !CmpVEEnabled || (v17 = 1, (v16 & 0x1000000) == 0) )
    v17 = 0;
  v18 = a6 | 0x100;
  if ( !v17 )
    v18 = a6;
  v19 = 512LL;
  v20 = v18;
  LOWORD(v20) = v18 | 0x200;
  if ( (v16 & 0x2000000) == 0 )
    LOWORD(v20) = v18;
  v84 = v20;
  if ( (*(_DWORD *)(v14 + 4152) & 0x20) != 0 && *(_QWORD *)(a3 + 64) )
  {
    v66 = -1073741790;
    v67 = 263424;
LABEL_122:
    v21 = (_DWORD *)a5;
    goto LABEL_124;
  }
  v21 = (_DWORD *)a5;
  v22 = *(_DWORD *)(a5 + 24) & 1;
  v96 = v22;
  if ( *(int *)(KcbAtLayerHeight + 40) < 0 && !v22 && (!a8 || !*(_QWORD *)(KcbAtLayerHeight + 240)) )
  {
    v28 = -1073741439;
    v66 = -1073741439;
    v67 = 263680;
    goto LABEL_106;
  }
  if ( a8 && !CmpIsKeyStackDeleted(v12, 0LL) )
  {
    if ( (int)CmpUndoDeleteKeyForTrans(v13, a8) < 0 )
    {
      v28 = -1073741772;
      v66 = -1073741772;
      v67 = 263936;
LABEL_106:
      CmpRecordParseFailure((__int64)v21, v67, v66);
      goto LABEL_67;
    }
LABEL_66:
    v28 = 0;
LABEL_67:
    v37 = (char *)v83;
LABEL_68:
    v49 = 0;
    goto LABEL_69;
  }
  if ( (*(_DWORD *)(a5 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess(a5 + 168, v20, v15, (_DWORD *)v19);
    *(_DWORD *)(a5 + 160) |= 1u;
  }
  v23 = 2LL;
  v86 = v84 & 2;
  if ( (v84 & 2) == 0 )
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
        v24 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
        *(_QWORD *)&Size[1] = *(_QWORD *)(a3 + 64);
      }
      else
      {
        *(_QWORD *)&Size[1] = 0LL;
        v24 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
      }
      GenericMapping = (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76);
      SecurityDescriptorForKcbStack = (void *)CmpGetSecurityDescriptorForKcbStack(a1, a8);
      v27 = SeAssignSecurity(
              SecurityDescriptorForKcbStack,
              *(PSECURITY_DESCRIPTOR *)&Size[1],
              &NewDescriptor,
              1u,
              v24 + 1,
              GenericMapping,
              *((POOL_TYPE *)CmKeyObjectType + 25));
      v28 = v27;
      if ( v27 < 0 )
      {
        v66 = v27;
        v67 = 264192;
        goto LABEL_106;
      }
      KcbAtLayerHeight = v90;
    }
    v23 = 2LL;
  }
  v29 = v96;
  if ( a8 )
    v29 = 1LL;
  Size[1] = v29;
  v30 = *(unsigned int *)(v13 + 40);
  if ( (_DWORD)v30 == -1 )
  {
    v31 = a7 == 0;
    if ( !a7 )
    {
      HvLockHiveFlusherShared(v14);
      v31 = 1;
    }
    v9 = v31;
    if ( a8 )
    {
      UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v29, v30, v23);
      v89 = (ULONG_PTR)UnitOfWork;
      v99 = UnitOfWork;
      if ( !UnitOfWork )
      {
        v66 = -1073741670;
        v67 = 265984;
        goto LABEL_124;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, KcbAtLayerHeight);
      v57 = CmpTransEnlistUowInCmTrans((_QWORD *)v89, a8);
      v28 = v57;
      if ( v57 < 0 )
      {
        v66 = v57;
        v67 = 266240;
        goto LABEL_106;
      }
      v61 = (_QWORD *)CmpAllocateUnitOfWork(v59, v58, v60);
      BugCheckParameter4 = (ULONG_PTR)v61;
      v100 = v61;
      if ( !v61 )
      {
        v66 = -1073741670;
        v67 = 266496;
        goto LABEL_124;
      }
      CmpTransEnlistUowInKcb(v61, v13);
      v62 = CmpTransEnlistUowInCmTrans((_QWORD *)BugCheckParameter4, a8);
      v28 = v62;
      if ( v62 < 0 )
      {
        v66 = v62;
        v67 = 266752;
        goto LABEL_106;
      }
      if ( !CmpLockIXLockIntent((unsigned int *)(KcbAtLayerHeight + 248), v89) )
      {
        v66 = -1072103423;
        v67 = 267008;
        goto LABEL_124;
      }
      if ( !CmpLockIXLockExclusive(v13 + 248, (_QWORD *)BugCheckParameter4, 0) )
      {
        v66 = -1072103423;
        v67 = 267264;
        goto LABEL_124;
      }
      if ( !CmpLockIXLockExclusive(v13 + 264, (_QWORD *)BugCheckParameter4, 1) )
      {
        v66 = -1072103423;
        v67 = 267520;
LABEL_124:
        v28 = v66;
        goto LABEL_106;
      }
    }
    else
    {
      v32 = (int *)(KcbAtLayerHeight + 248);
      if ( *(_QWORD *)(KcbAtLayerHeight + 240) )
      {
        v77 = CmpSnapshotTxOwnerArray(v32, a5 + 120, a5 + 128);
        v28 = v77;
        if ( v77 < 0 )
        {
          v66 = v77;
          v67 = 267776;
          goto LABEL_106;
        }
        CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
        *(_DWORD *)(a5 + 100) |= 4u;
        v66 = -1073741267;
        v67 = 268032;
        goto LABEL_124;
      }
      if ( *v32 < 0 )
      {
        v78 = CmpSnapshotTxOwnerArray(v32, a5 + 120, a5 + 128);
        v28 = v78;
        if ( v78 < 0 )
        {
          v66 = v78;
          v67 = 268288;
          goto LABEL_106;
        }
        CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
        *(_DWORD *)(a5 + 100) |= 4u;
        v66 = -1073741267;
        v67 = 268544;
        goto LABEL_124;
      }
      if ( *(_DWORD *)(v13 + 248) )
      {
        v79 = CmpSnapshotTxOwnerArray(v13 + 248, a5 + 120, a5 + 128);
        v28 = v79;
        if ( v79 < 0 )
        {
          v66 = v79;
          v67 = 268800;
          goto LABEL_106;
        }
        CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
        *(_DWORD *)(a5 + 100) |= 4u;
        v66 = -1073741267;
        v67 = 269056;
        goto LABEL_124;
      }
      if ( *(_DWORD *)(v13 + 264) )
      {
        v80 = CmpSnapshotTxOwnerArray(v13 + 264, a5 + 120, a5 + 128);
        v28 = v80;
        if ( v80 < 0 )
        {
          v66 = v80;
          v67 = 269312;
          goto LABEL_106;
        }
        CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
        *(_DWORD *)(a5 + 100) |= 4u;
        v66 = -1073741267;
        v67 = 269568;
        goto LABEL_124;
      }
    }
    Size[0] = (unsigned __int16)CmpNameSize(a4) + 76;
    v33 = Size[1];
    HIDWORD(BugCheckParameter3) = HvAllocateCell(v14, Size[0], Size[1], (unsigned int)&v83, (__int64)&v98);
    v91 = HIDWORD(BugCheckParameter3);
    if ( HIDWORD(BugCheckParameter3) == -1 )
    {
      v66 = -1073741670;
      v67 = 269824;
      goto LABEL_124;
    }
    v34 = *(unsigned __int16 *)(a5 + 4);
    if ( (_WORD)v34 )
    {
      LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v34, v33, (unsigned int)&v92, (__int64)&v93);
      Size[1] = BugCheckParameter3;
      if ( (_DWORD)BugCheckParameter3 == -1 )
      {
        v66 = -1073741670;
        v67 = 270080;
        goto LABEL_124;
      }
      memmove(v92, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v93);
      v92 = 0LL;
    }
    v35 = v83;
    memset(v83, 0, Size[0]);
    v36 = 27500;
    if ( !v86 )
      v36 = 27502;
    *(_WORD *)v35 = v36;
    v35[12] = CmpAccessBitForPhase;
    if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 3 )
      v35[13] |= 3u;
    else
      v35[13] &= 0xFCu;
    *((_WORD *)v35 + 1) = v84;
    v37 = (char *)v83;
    *(_QWORD *)((char *)v83 + 4) = MEMORY[0xFFFFF78000000014];
    v38 = v90;
    *((_DWORD *)v37 + 4) = *(_DWORD *)(v90 + 40);
    *((_DWORD *)v37 + 7) = -1;
    *((_DWORD *)v37 + 8) = -1;
    *((_DWORD *)v37 + 10) = -1;
    *((_DWORD *)v37 + 11) = -1;
    *((_DWORD *)v37 + 12) = BugCheckParameter3;
    *((_WORD *)v37 + 37) = *(_WORD *)(a5 + 4);
    LODWORD(BugCheckParameter3) = -1;
    v39 = *(_DWORD *)(v38 + 184);
    if ( (v39 & 0x80u) != 0 )
      *((_DWORD *)v37 + 13) ^= (*((_DWORD *)v37 + 13) ^ (v39 << 16)) & 0xF00000;
    v40 = CmpCopyName(v37 + 76);
    *((_WORD *)v37 + 36) = v40;
    if ( v40 < *a4 )
      *((_WORD *)v35 + 1) |= 0x20u;
    v41 = v86;
    if ( v86 )
    {
      *(_QWORD *)(v37 + 36) = *(_QWORD *)(a5 + 48);
      *((_DWORD *)v37 + 7) = *(_DWORD *)(a5 + 40);
    }
    v82 = 1;
    if ( v41 )
    {
LABEL_50:
      v43 = v90;
      if ( (unsigned __int8)HvMarkCellDirty(v14, *(unsigned int *)(v90 + 40), 0LL) )
      {
        v44 = a8;
        if ( !a8 )
        {
          if ( !(unsigned __int8)CmpAddSubKey(v14, *(unsigned int *)(v43 + 40), HIDWORD(BugCheckParameter3)) )
          {
            v68 = -1073741670;
            v28 = -1073741670;
            v69 = 271104;
            goto LABEL_138;
          }
          v44 = 0LL;
        }
        v81 = 1;
        *(_DWORD *)(v13 + 40) = HIDWORD(BugCheckParameter3);
        HIDWORD(BugCheckParameter3) = -1;
        *(_QWORD *)(v13 + 240) = v44;
        if ( (v84 & 0x40) == 0 )
        {
          *(_DWORD *)(v13 + 96) = *((_DWORD *)v37 + 9);
          *(_DWORD *)(v13 + 100) = *((_DWORD *)v37 + 10);
        }
        ++*(_QWORD *)(v13 + 304);
        CmpRebuildKcbCacheFromNode(v13, (__int64)v37, 0LL, 0);
        if ( !v86 )
          CmpAssignSecurityToKcb(v13, *((unsigned int *)v37 + 11), 0LL, 0, 0);
        if ( !a8 )
          goto LABEL_59;
        v63 = BugCheckParameter4;
        *(_DWORD *)(BugCheckParameter4 + 68) = 0;
        *(_DWORD *)(v63 + 72) = v96;
        v64 = v89;
        *(_QWORD *)(v63 + 80) = v89;
        *(_DWORD *)(v64 + 68) = 1;
        *(_QWORD *)(v64 + 88) = v13;
        v65 = CmAddLogForAction(v63, 1LL);
        v28 = v65;
        if ( v65 >= 0 )
        {
          BugCheckParameter4 = 0LL;
          v89 = 0LL;
          v43 = v90;
LABEL_59:
          v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v43 + 32) + 8LL))(
                  *(_QWORD *)(v43 + 32),
                  *(unsigned int *)(v43 + 40),
                  &v97);
          v95 = v45;
          CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v43 + 32), v45, *(_DWORD *)(v43 + 40));
          *(_QWORD *)(v45 + 4) = MEMORY[0xFFFFF78000000014];
          v46 = *a4;
          if ( (unsigned __int16)*(_DWORD *)(v45 + 52) < v46 )
            *(_WORD *)(v45 + 52) = v46;
          v47 = *(unsigned __int16 *)(a5 + 4);
          if ( *(_DWORD *)(v45 + 56) < v47 )
            *(_DWORD *)(v45 + 56) = v47;
          ++*(_QWORD *)(v43 + 304);
          v48 = v95;
          *(_WORD *)(v43 + 176) = *(_WORD *)(v95 + 52);
          *(_QWORD *)(v43 + 168) = *(_QWORD *)(v48 + 4);
          CmpCleanUpSubKeyInfo(v43, 1);
          if ( !a7 )
            HvUnlockHiveFlusherShared(v14);
          CmpReportNotifyForKcbStack(a1, a8, 1, 0LL);
          v81 = 0;
          v9 = a7 != 0 ? v9 : 0;
          goto LABEL_66;
        }
        v68 = v65;
        v69 = 271360;
      }
      else
      {
        v68 = -1073741443;
        v28 = -1073741443;
        v69 = 270848;
      }
LABEL_138:
      CmpRecordParseFailure(a5, v69, v68);
      goto LABEL_68;
    }
    CmLockHiveSecurityExclusive(v14);
    SecurityDescriptorNode = CmpAssignSecurityDescriptor(
                               v14,
                               HIDWORD(BugCheckParameter3),
                               (_DWORD)v37,
                               (_DWORD)NewDescriptor,
                               0);
    v28 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode >= 0 )
    {
      CmUnlockHiveSecurity(v14);
      goto LABEL_50;
    }
    v71 = 270592;
  }
  else
  {
    if ( (_DWORD)v29 != (unsigned int)v30 >> 31 )
    {
      CmpLogUnsupportedOperation(2LL);
      v30 = *(unsigned int *)(v13 + 40);
    }
    v106 = (unsigned int)v30 >> 31;
    if ( !a7 )
    {
      HvLockHiveFlusherShared(v14);
      v9 = 1;
      v30 = *(unsigned int *)(v13 + 40);
    }
    v37 = (char *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(v14 + 8))(v14, v30, &v98);
    v83 = v37;
    if ( (unsigned __int16)CmpNameSize(a4) != *((_WORD *)v37 + 36) )
    {
      CmpLogUnsupportedOperation(1LL);
      v28 = -1073741822;
      v68 = -1073741822;
      v69 = 264448;
      goto LABEL_138;
    }
    if ( !CmpMarkKeyDirty(v14, *(unsigned int *)(v13 + 40), 0) )
    {
      v68 = -1073741443;
      v28 = -1073741443;
      v69 = 264704;
      goto LABEL_138;
    }
    if ( !(unsigned __int8)HvMarkCellDirty(v14, *(unsigned int *)(v90 + 40), 0LL) )
    {
      v68 = -1073741443;
      v28 = -1073741443;
      v69 = 264960;
      goto LABEL_138;
    }
    v70 = *(unsigned __int16 *)(a5 + 4);
    if ( (_WORD)v70 )
    {
      LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v70, v106, (unsigned int)&v92, (__int64)&v93);
      Size[1] = BugCheckParameter3;
      if ( (_DWORD)BugCheckParameter3 == -1 )
      {
        v68 = -1073741670;
        v28 = -1073741670;
        v69 = 265216;
        goto LABEL_138;
      }
      memmove(v92, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v93);
      v92 = 0LL;
    }
    CmLockHiveSecurityExclusive(v14);
    SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                               v14,
                               *(unsigned int *)(v13 + 40),
                               (__int64)v37,
                               NewDescriptor,
                               1,
                               Size);
    v28 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode >= 0 )
    {
      CmpFreeSecurityDescriptor(v14);
      *((_DWORD *)v37 + 11) = Size[0];
      CmUnlockHiveSecurity(v14);
      *((_DWORD *)v37 + 12) = BugCheckParameter3;
      v107 = (unsigned __int16 *)(v37 + 74);
      *((_WORD *)v37 + 37) = *(_WORD *)(a5 + 4);
      LODWORD(BugCheckParameter3) = -1;
      CmpCopyName(v37 + 76);
      v37[13] |= 3u;
      v72 = v84;
      *((_WORD *)v37 + 1) = v84;
      if ( *((_WORD *)v37 + 36) < *a4 )
        *((_WORD *)v37 + 1) = v72 | 0x20;
      v73 = MEMORY[0xFFFFF78000000014];
      v37 = (char *)v83;
      *(_QWORD *)((char *)v83 + 4) = MEMORY[0xFFFFF78000000014];
      ++*(_QWORD *)(v13 + 304);
      CmpRebuildKcbCacheFromNode(v13, (__int64)v37, 0LL, 0);
      v74 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v14 + 8))(v14, *(unsigned int *)(v90 + 40), &v97);
      v95 = v74;
      *(_QWORD *)(v74 + 4) = v73;
      v75 = v90;
      *(_QWORD *)(v90 + 168) = v73;
      ++*(_QWORD *)(v75 + 304);
      v76 = *v107;
      if ( *(_DWORD *)(v74 + 56) < v76 )
        *(_DWORD *)(v74 + 56) = v76;
      if ( v9 )
        HvUnlockHiveFlusherShared(v14);
      CmpReportNotifyForKcbStack(a1, 0, 1, 0LL);
      v28 = 0;
      v9 = 0;
      goto LABEL_68;
    }
    v71 = 265728;
  }
  CmpRecordParseFailure(a5, v71, SecurityDescriptorNode);
  v49 = 1;
LABEL_69:
  if ( v49 )
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
  v50 = BugCheckParameter4;
  if ( BugCheckParameter4 )
  {
    CmpRundownUnitOfWork((_QWORD *)BugCheckParameter4);
    CmpFreeUnitOfWork(v50);
  }
  v51 = v89;
  if ( v89 )
  {
    CmpRundownUnitOfWork((_QWORD *)v89);
    CmpFreeUnitOfWork(v51);
  }
  v52 = NewDescriptor;
  if ( NewDescriptor && (*(_DWORD *)(v14 + 4152) & 0x20) == 0 )
  {
    if ( (*v21 & 1) != 0 && (v21[6] & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v53 = *(_QWORD *)(a3 + 72);
      v54 = *(void **)(v53 + 48);
      if ( v54 )
        ExFreePoolWithTag(v54, 0);
      *(_QWORD *)(v53 + 48) = v52;
    }
  }
  if ( v95 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v90 + 32) + 16LL))(*(_QWORD *)(v90 + 32), &v97);
  if ( v92 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v93);
  if ( (_DWORD)BugCheckParameter3 != -1 )
    HvFreeCell(v14, (unsigned int)BugCheckParameter3);
  if ( v37 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v98);
  if ( HIDWORD(BugCheckParameter3) != -1 )
  {
    if ( v82 )
      CmpFreeKeyByCell(v14, HIDWORD(BugCheckParameter3), 0);
    else
      HvFreeCell(v14, HIDWORD(BugCheckParameter3));
  }
  if ( v9 )
    HvUnlockHiveFlusherShared(v14);
  return v28;
}

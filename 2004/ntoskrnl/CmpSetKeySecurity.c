/*
 * XREFs of CmpSetKeySecurity @ 0x14063D900
 * Callers:
 *     CmpSecurityMethod @ 0x1405E47D0 (CmpSecurityMethod.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x1402723B4 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1402787F0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1405DE270 (CmpGetEffectiveKcbSemantics.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405DF248 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     HvLockHiveFlusherShared @ 0x1405E2D14 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1405E2D30 (HvUnlockHiveFlusherShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405E55D0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x1405E57CC (CmpReportNotifyForKcbStack.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpSignalDeferredPosts @ 0x1405ED780 (CmpSignalDeferredPosts.c)
 *     CmpCleanupKcbStack @ 0x1405F0A50 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1405F0B30 (CmpUnlockKcbStack.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063DCA4 (CmpSetSecurityDescriptorInfo.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpRundownUnitOfWork @ 0x1406430FC (CmpRundownUnitOfWork.c)
 *     CmpLockIXLockExclusive @ 0x14064343C (CmpLockIXLockExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x140644540 (CmpGetKeyNodeForKcb.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406536B4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406725F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x1406941E0 (CmpReleaseShutdownRundown.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     CmpAcquireShutdownRundown @ 0x140695430 (CmpAcquireShutdownRundown.c)
 *     CmLockHiveSecurityExclusive @ 0x14069CD28 (CmLockHiveSecurityExclusive.c)
 *     CmUnlockHiveSecurity @ 0x14069CD48 (CmUnlockHiveSecurity.c)
 *     CmpAllocateUnitOfWork @ 0x140707318 (CmpAllocateUnitOfWork.c)
 *     CmpReleaseKeyNodeForKcb @ 0x1408607E8 (CmpReleaseKeyNodeForKcb.c)
 *     CmpRollbackTransactionArray @ 0x140871C40 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x140874D7C (CmpSnapshotTxOwnerArray.c)
 *     CmpFreeUnitOfWork @ 0x14087BA14 (CmpFreeUnitOfWork.c)
 *     CmpPartialPromoteSubkeys @ 0x14087CF8C (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x14087D190 (CmpPromoteKey.c)
 */

__int64 __fastcall CmpSetKeySecurity(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  char v7; // r13
  char v8; // r12
  char v9; // si
  _QWORD *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _LOOKASIDE_LIST_EX *v14; // r9
  ULONG_PTR v15; // rdi
  int started; // ebx
  __int64 v17; // r13
  ULONG_PTR v18; // rcx
  char v19; // r15
  char v20; // di
  char v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *UnitOfWork; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 KeyNodeForKcb; // rax
  char v40; // [rsp+50h] [rbp-B0h]
  char v41; // [rsp+52h] [rbp-AEh]
  unsigned int v42; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v43; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v44; // [rsp+68h] [rbp-98h]
  int v45; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h] BYREF
  __int64 v47; // [rsp+88h] [rbp-78h] BYREF
  __int64 v48; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v49[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-58h]
  __int64 v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  __int64 v53; // [rsp+C0h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v55[3]; // [rsp+E8h] [rbp-18h] BYREF

  v50 = a6;
  v47 = 0xFFFFFFFFLL;
  v43 = 0LL;
  WORD1(v43) = -1;
  v51 = a4;
  v52 = a3;
  v49[1] = v49;
  v7 = 0;
  v53 = a2;
  v49[0] = v49;
  v8 = 0;
  v42 = 0;
  v9 = 0;
  v46 = 0LL;
  v10 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v48 = 0LL;
  v41 = 0;
  memset(v55, 0, sizeof(v55));
  v45 = 0;
  v44 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess((__int64)v55);
  while ( 1 )
  {
    v40 = CmpAcquireShutdownRundown();
    if ( !v40 )
      break;
    if ( v7 )
      CmpLockRegistryExclusive(v12, v11);
    else
      CmpLockRegistry();
    v15 = a1[1];
    if ( (*(_DWORD *)(*(_QWORD *)(v15 + 32) + 160LL) & 0x100000) != 0 )
    {
LABEL_66:
      started = -1073741790;
      goto LABEL_33;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v43, v15, v13, v14);
    if ( started < 0 )
      goto LABEL_33;
    if ( !v7 )
    {
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v43);
      v9 = 1;
    }
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_33;
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v48);
      if ( started < 0 )
        goto LABEL_33;
      started = CmpPerformKeyBodyDeletionCheck(a1, v48);
      if ( started < 0 )
        goto LABEL_33;
    }
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v15 + 32) + 4152LL) & 0x20) != 0 )
      goto LABEL_66;
    if ( *(_WORD *)(v15 + 66) )
    {
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v15) || v7 )
      {
        if ( !(unsigned int)CmpGetEffectiveKcbSemantics(v27) )
        {
          LOBYTE(v31) = 1;
          started = CmpPromoteKey(&v43, v31, 0LL);
          if ( started < 0 )
            goto LABEL_33;
          started = CmpPartialPromoteSubkeys(&v43);
          if ( started < 0 )
            goto LABEL_33;
        }
        goto LABEL_15;
      }
      v7 = 1;
      v41 = 1;
      CmpUnlockKcbStack((__int64)&v43);
      v9 = 0;
      CmpCleanupKcbStack((__int64)&v43);
      v43 = 0LL;
      WORD1(v43) = -1;
      v44 = 0LL;
      CmpUnlockRegistry();
      CmpReleaseShutdownRundown(v29, v28, v30);
    }
    else
    {
LABEL_15:
      v17 = v48;
      if ( v48 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v15 + 32) + 160LL) & 2) != 0 )
        {
          started = -1072103423;
        }
        else
        {
          UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
          v10 = UnitOfWork;
          if ( UnitOfWork )
          {
            CmpTransEnlistUowInKcb(UnitOfWork, v15);
            started = CmpTransEnlistUowInCmTrans(v10, v17);
            if ( started >= 0 )
            {
              if ( (unsigned __int8)CmpLockIXLockExclusive(v15 + 248, v10, 0LL)
                && (unsigned __int8)CmpLockIXLockExclusive(v15 + 264, v10, 1LL) )
              {
LABEL_18:
                if ( !v41 )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v15 + 32));
                  v8 = 1;
                  CmLockHiveSecurityExclusive(*(_QWORD *)(v15 + 32));
                }
                started = CmpSetSecurityDescriptorInfo(
                            v15,
                            v53,
                            v52,
                            v51,
                            a5,
                            v50,
                            v17,
                            (__int64)v10,
                            (__int64)&SubjectContext);
                v19 = v8;
                if ( started >= 0 )
                {
                  started = 0;
                  v10 = 0LL;
                  if ( v8 )
                  {
                    CmUnlockHiveSecurity(*(_QWORD *)(v15 + 32));
                    v19 = 0;
                  }
                  if ( *(_WORD *)(v15 + 66) && !(unsigned int)CmpGetEffectiveKcbSemantics(v15) )
                  {
                    LOBYTE(v37) = v8;
                    KeyNodeForKcb = CmpGetKeyNodeForKcb(v36, &v47, v37, v38);
                    *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
                    CmpReleaseKeyNodeForKcb(v15, &v47);
                    *(_BYTE *)(v15 + 65) = 2;
                  }
                  if ( v8 )
                  {
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v15 + 32));
                    v8 = 0;
                  }
                  CmpReportNotifyForKcbStack((__int64)&v43, v17, 10, (__int64)v49);
                }
                if ( v19 )
                  CmUnlockHiveSecurity(*(_QWORD *)(v15 + 32));
                if ( v8 )
                  HvUnlockHiveFlusherShared(*(_QWORD *)(v15 + 32));
              }
              else
              {
                started = -1072103423;
              }
            }
            if ( v10 )
            {
              CmpRundownUnitOfWork((ULONG_PTR)v10);
              CmpFreeUnitOfWork(v10);
            }
          }
          else
          {
            started = -1073741670;
          }
        }
LABEL_33:
        v20 = 1;
        goto LABEL_34;
      }
      v18 = v15 + 248;
      if ( !*(_DWORD *)(v15 + 248) )
      {
        v18 = v15 + 264;
        if ( !*(_DWORD *)(v15 + 264) )
          goto LABEL_18;
      }
      v21 = 0;
      started = CmpSnapshotTxOwnerArray(v18, &v42, &v46);
      if ( started < 0 )
        goto LABEL_33;
      if ( v9 )
        CmpUnlockKcbStack((__int64)&v43);
      v9 = 0;
      CmpCleanupKcbStack((__int64)&v43);
      v43 = 0LL;
      WORD1(v43) = -1;
      v44 = 0LL;
      CmpUnlockRegistry();
      v20 = 0;
      CmpReleaseShutdownRundown(v33, v32, v34);
      started = CmpRollbackTransactionArray(v42, v46, v35, &v45);
      if ( started < 0 )
        goto LABEL_35;
      v7 = v41;
    }
  }
  started = -1073741431;
  v20 = 0;
LABEL_34:
  v21 = v40;
LABEL_35:
  if ( v9 )
    CmpUnlockKcbStack((__int64)&v43);
  CmpCleanupKcbStack((__int64)&v43);
  if ( v20 )
    CmpUnlockRegistry();
  if ( v49[0] != v49 )
    CmpSignalDeferredPosts(v49);
  if ( v21 )
    CmpReleaseShutdownRundown(v23, v22, v24);
  CmpDetachFromRegistryProcess((__int64)v55);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)started;
}

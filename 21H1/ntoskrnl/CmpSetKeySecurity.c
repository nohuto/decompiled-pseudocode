/*
 * XREFs of CmpSetKeySecurity @ 0x14068AE1C
 * Callers:
 *     CmpSecurityMethod @ 0x140619DF0 (CmpSecurityMethod.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x1402D2D14 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402E1B1C (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpReleaseShutdownRundown @ 0x1405EACA0 (CmpReleaseShutdownRundown.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     CmpAcquireShutdownRundown @ 0x1405EBEF0 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     HvLockHiveFlusherShared @ 0x140618340 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x14061835C (HvUnlockHiveFlusherShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14061ABF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x14061ADEC (CmpReportNotifyForKcbStack.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpSignalDeferredPosts @ 0x140622DA0 (CmpSignalDeferredPosts.c)
 *     CmpCleanupKcbStack @ 0x140626070 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140626150 (CmpUnlockKcbStack.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406569A4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14068B1C0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpLockIXLockExclusive @ 0x14068E09C (CmpLockIXLockExclusive.c)
 *     CmpRundownUnitOfWork @ 0x14068E618 (CmpRundownUnitOfWork.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x140692A30 (CmpGetKeyNodeForKcb.c)
 *     CmpGetEffectiveKcbSemantics @ 0x140694910 (CmpGetEffectiveKcbSemantics.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406958E8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmLockHiveSecurityExclusive @ 0x1406967E8 (CmLockHiveSecurityExclusive.c)
 *     CmUnlockHiveSecurity @ 0x140696808 (CmUnlockHiveSecurity.c)
 *     CmpAllocateUnitOfWork @ 0x1406E3928 (CmpAllocateUnitOfWork.c)
 *     CmpReleaseKeyNodeForKcb @ 0x14085F494 (CmpReleaseKeyNodeForKcb.c)
 *     CmpRollbackTransactionArray @ 0x140870960 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x140873A8C (CmpSnapshotTxOwnerArray.c)
 *     CmpFreeUnitOfWork @ 0x14087A724 (CmpFreeUnitOfWork.c)
 *     CmpPartialPromoteSubkeys @ 0x14087BC9C (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x14087BEA0 (CmpPromoteKey.c)
 */

__int64 __fastcall CmpSetKeySecurity(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  char v7; // r13
  char v8; // r12
  char v9; // si
  _QWORD *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct _LOOKASIDE_LIST_EX *v17; // r9
  ULONG_PTR v18; // rdi
  int started; // ebx
  __int64 v20; // r13
  ULONG_PTR v21; // rcx
  char v22; // r15
  char v23; // di
  BOOLEAN v24; // r13
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // r9
  _QWORD *UnitOfWork; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 KeyNodeForKcb; // rax
  BOOLEAN v37; // [rsp+50h] [rbp-B0h]
  char v38; // [rsp+52h] [rbp-AEh]
  unsigned int v39; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v40; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+68h] [rbp-98h]
  int v42; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v46[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  __int64 v50; // [rsp+C0h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v52[3]; // [rsp+E8h] [rbp-18h] BYREF

  v47 = a6;
  v44 = 0xFFFFFFFFLL;
  v40 = 0LL;
  WORD1(v40) = -1;
  v48 = a4;
  v49 = a3;
  v46[1] = v46;
  v7 = 0;
  v50 = a2;
  v46[0] = v46;
  v8 = 0;
  v39 = 0;
  v9 = 0;
  v43 = 0LL;
  v10 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v45 = 0LL;
  v38 = 0;
  memset(v52, 0, sizeof(v52));
  v42 = 0;
  v41 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess((__int64)v52, v11, v12, v13);
  while ( 1 )
  {
    v37 = CmpAcquireShutdownRundown();
    if ( !v37 )
      break;
    if ( v7 )
      CmpLockRegistryExclusive(v15, v14);
    else
      CmpLockRegistry();
    v18 = a1[1];
    if ( (*(_DWORD *)(*(_QWORD *)(v18 + 32) + 160LL) & 0x100000) != 0 )
    {
LABEL_66:
      started = -1073741790;
      goto LABEL_33;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v40, v18, v16, v17);
    if ( started < 0 )
      goto LABEL_33;
    if ( !v7 )
    {
      CmpLockKcbStackTopExclusiveRestShared(&v40);
      v9 = 1;
    }
    started = CmpPerformKeyBodyDeletionCheck((__int64)a1, 0LL);
    if ( started < 0 )
      goto LABEL_33;
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v45);
      if ( started < 0 )
        goto LABEL_33;
      started = CmpPerformKeyBodyDeletionCheck((__int64)a1, v45);
      if ( started < 0 )
        goto LABEL_33;
    }
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v18 + 32) + 4152LL) & 0x20) != 0 )
      goto LABEL_66;
    if ( *(_WORD *)(v18 + 66) )
    {
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v18) || v7 )
      {
        if ( !(unsigned int)CmpGetEffectiveKcbSemantics(v30) )
        {
          LOBYTE(v31) = 1;
          started = CmpPromoteKey(&v40, v31, 0LL);
          if ( started < 0 )
            goto LABEL_33;
          started = CmpPartialPromoteSubkeys(&v40);
          if ( started < 0 )
            goto LABEL_33;
        }
        goto LABEL_15;
      }
      v7 = 1;
      v38 = 1;
      CmpUnlockKcbStack((__int64)&v40);
      v9 = 0;
      CmpCleanupKcbStack((__int64)&v40);
      v40 = 0LL;
      WORD1(v40) = -1;
      v41 = 0LL;
      CmpUnlockRegistry();
      CmpReleaseShutdownRundown();
    }
    else
    {
LABEL_15:
      v20 = v45;
      if ( v45 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v18 + 32) + 160LL) & 2) != 0 )
        {
          started = -1072103423;
        }
        else
        {
          UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
          v10 = UnitOfWork;
          if ( UnitOfWork )
          {
            CmpTransEnlistUowInKcb(UnitOfWork, v18);
            started = CmpTransEnlistUowInCmTrans(v10, v20);
            if ( started >= 0 )
            {
              if ( (unsigned __int8)CmpLockIXLockExclusive(v18 + 248, v10, 0LL)
                && (unsigned __int8)CmpLockIXLockExclusive(v18 + 264, v10, 1LL) )
              {
LABEL_18:
                if ( !v38 )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v18 + 32));
                  v8 = 1;
                  CmLockHiveSecurityExclusive(*(_QWORD *)(v18 + 32));
                }
                started = CmpSetSecurityDescriptorInfo(
                            v18,
                            v50,
                            v49,
                            v48,
                            a5,
                            v47,
                            v20,
                            (__int64)v10,
                            (__int64)&SubjectContext);
                v22 = v8;
                if ( started >= 0 )
                {
                  started = 0;
                  v10 = 0LL;
                  if ( v8 )
                  {
                    CmUnlockHiveSecurity(*(_QWORD *)(v18 + 32));
                    v22 = 0;
                  }
                  if ( *(_WORD *)(v18 + 66) && !(unsigned int)CmpGetEffectiveKcbSemantics(v18) )
                  {
                    LOBYTE(v34) = v8;
                    KeyNodeForKcb = CmpGetKeyNodeForKcb(v33, &v44, v34, v35);
                    *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
                    CmpReleaseKeyNodeForKcb(v18, &v44);
                    *(_BYTE *)(v18 + 65) = 2;
                  }
                  if ( v8 )
                  {
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v18 + 32));
                    v8 = 0;
                  }
                  CmpReportNotifyForKcbStack((__int64)&v40, v20, 10, (__int64)v46);
                }
                if ( v22 )
                  CmUnlockHiveSecurity(*(_QWORD *)(v18 + 32));
                if ( v8 )
                  HvUnlockHiveFlusherShared(*(_QWORD *)(v18 + 32));
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
        v23 = 1;
        goto LABEL_34;
      }
      v21 = v18 + 248;
      if ( !*(_DWORD *)(v18 + 248) )
      {
        v21 = v18 + 264;
        if ( !*(_DWORD *)(v18 + 264) )
          goto LABEL_18;
      }
      v24 = 0;
      started = CmpSnapshotTxOwnerArray(v21, &v39, &v43);
      if ( started < 0 )
        goto LABEL_33;
      if ( v9 )
        CmpUnlockKcbStack((__int64)&v40);
      v9 = 0;
      CmpCleanupKcbStack((__int64)&v40);
      v40 = 0LL;
      WORD1(v40) = -1;
      v41 = 0LL;
      CmpUnlockRegistry();
      v23 = 0;
      CmpReleaseShutdownRundown();
      started = CmpRollbackTransactionArray(v39, v43, v32, &v42);
      if ( started < 0 )
        goto LABEL_35;
      v7 = v38;
    }
  }
  started = -1073741431;
  v23 = 0;
LABEL_34:
  v24 = v37;
LABEL_35:
  if ( v9 )
    CmpUnlockKcbStack((__int64)&v40);
  CmpCleanupKcbStack((__int64)&v40);
  if ( v23 )
    CmpUnlockRegistry();
  if ( v46[0] != v46 )
    CmpSignalDeferredPosts(v46);
  if ( v24 )
    CmpReleaseShutdownRundown();
  CmpDetachFromRegistryProcess((__int64)v52, v25, v26, v27);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)started;
}

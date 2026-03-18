/*
 * XREFs of CmpSetKeySecurity @ 0x1405E0AE4
 * Callers:
 *     CmpSecurityMethod @ 0x14066EFA0 (CmpSecurityMethod.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x1402F2D0C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1402F30C0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405E0E88 (CmpSetSecurityDescriptorInfo.c)
 *     CmpReportNotifyForKcbStack @ 0x1405F3830 (CmpReportNotifyForKcbStack.c)
 *     CmpReleaseShutdownRundown @ 0x14060C670 (CmpReleaseShutdownRundown.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     CmpAcquireShutdownRundown @ 0x14060D8D0 (CmpAcquireShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x14061B470 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x14061B550 (CmpUnlockKcbStack.c)
 *     CmpSignalDeferredPosts @ 0x14061C8F0 (CmpSignalDeferredPosts.c)
 *     CmpGetEffectiveKcbSemantics @ 0x14066BE80 (CmpGetEffectiveKcbSemantics.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14066DDF8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14067010C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140670144 (HvLockHiveFlusherShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A1494 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x1406A183C (CmpLockIXLockExclusive.c)
 *     CmpRundownUnitOfWork @ 0x1406A1B5C (CmpRundownUnitOfWork.c)
 *     CmpAllocateUnitOfWork @ 0x1406D9BBC (CmpAllocateUnitOfWork.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x1407028D4 (CmpGetKeyNodeForKcb.c)
 *     CmLockHiveSecurityExclusive @ 0x140704918 (CmLockHiveSecurityExclusive.c)
 *     CmUnlockHiveSecurity @ 0x140704938 (CmUnlockHiveSecurity.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140866204 (CmpReleaseKeyNodeForKcb.c)
 *     CmpRollbackTransactionArray @ 0x140877790 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x14087A8CC (CmpSnapshotTxOwnerArray.c)
 *     CmpFreeUnitOfWork @ 0x140881584 (CmpFreeUnitOfWork.c)
 *     CmpPartialPromoteSubkeys @ 0x140882B3C (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140882D40 (CmpPromoteKey.c)
 */

__int64 __fastcall CmpSetKeySecurity(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  char v7; // r13
  char v8; // r12
  char v9; // si
  _QWORD *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  ULONG_PTR v13; // rdi
  int started; // ebx
  __int64 v15; // r13
  ULONG_PTR v16; // rcx
  char v17; // r15
  char v18; // di
  char v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *UnitOfWork; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 KeyNodeForKcb; // rax
  char v35; // [rsp+50h] [rbp-B0h]
  char v36; // [rsp+52h] [rbp-AEh]
  unsigned int v37; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v38; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+68h] [rbp-98h]
  int v40; // [rsp+78h] [rbp-88h] BYREF
  __int64 v41; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h] BYREF
  __int64 v43; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v44[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  __int64 v48; // [rsp+C0h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v50[3]; // [rsp+E8h] [rbp-18h] BYREF

  v45 = a6;
  v42 = 0xFFFFFFFFLL;
  v38 = 0LL;
  WORD1(v38) = -1;
  v46 = a4;
  v47 = a3;
  v44[1] = v44;
  v7 = 0;
  v48 = a2;
  v44[0] = v44;
  v8 = 0;
  v37 = 0;
  v9 = 0;
  v41 = 0LL;
  v10 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v43 = 0LL;
  v36 = 0;
  memset(v50, 0, sizeof(v50));
  v40 = 0;
  v39 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(v50);
  while ( 1 )
  {
    v35 = CmpAcquireShutdownRundown();
    if ( !v35 )
      break;
    if ( v7 )
      CmpLockRegistryExclusive(v12, v11);
    else
      CmpLockRegistry();
    v13 = a1[1];
    if ( (*(_DWORD *)(*(_QWORD *)(v13 + 32) + 160LL) & 0x100000) != 0 )
    {
LABEL_66:
      started = -1073741790;
      goto LABEL_33;
    }
    started = CmpStartKcbStackForTopLayerKcb(&v38, v13);
    if ( started < 0 )
      goto LABEL_33;
    if ( !v7 )
    {
      CmpLockKcbStackTopExclusiveRestShared(&v38);
      v9 = 1;
    }
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_33;
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v43);
      if ( started < 0 )
        goto LABEL_33;
      started = CmpPerformKeyBodyDeletionCheck(a1, v43);
      if ( started < 0 )
        goto LABEL_33;
    }
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v13 + 32) + 4152LL) & 0x20) != 0 )
      goto LABEL_66;
    if ( *(_WORD *)(v13 + 66) )
    {
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v13) || v7 )
      {
        if ( !(unsigned int)CmpGetEffectiveKcbSemantics(v24) )
        {
          LOBYTE(v27) = 1;
          started = CmpPromoteKey(&v38, v27, 0LL);
          if ( started < 0 )
            goto LABEL_33;
          started = CmpPartialPromoteSubkeys(&v38);
          if ( started < 0 )
            goto LABEL_33;
        }
        goto LABEL_15;
      }
      v7 = 1;
      v36 = 1;
      CmpUnlockKcbStack(&v38);
      v9 = 0;
      CmpCleanupKcbStack(&v38);
      v38 = 0LL;
      WORD1(v38) = -1;
      v39 = 0LL;
      CmpUnlockRegistry(v26, v25);
      CmpReleaseShutdownRundown();
    }
    else
    {
LABEL_15:
      v15 = v43;
      if ( v43 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v13 + 32) + 160LL) & 2) != 0 )
        {
          started = -1072103423;
        }
        else
        {
          UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
          v10 = UnitOfWork;
          if ( UnitOfWork )
          {
            CmpTransEnlistUowInKcb(UnitOfWork, v13);
            started = CmpTransEnlistUowInCmTrans(v10, v15);
            if ( started >= 0 )
            {
              if ( (unsigned __int8)CmpLockIXLockExclusive(v13 + 248, v10, 0LL)
                && (unsigned __int8)CmpLockIXLockExclusive(v13 + 264, v10, 1LL) )
              {
LABEL_18:
                if ( !v36 )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v13 + 32));
                  v8 = 1;
                  CmLockHiveSecurityExclusive(*(_QWORD *)(v13 + 32));
                }
                started = CmpSetSecurityDescriptorInfo(
                            v13,
                            v48,
                            v47,
                            v46,
                            a5,
                            v45,
                            v15,
                            (__int64)v10,
                            (__int64)&SubjectContext);
                v17 = v8;
                if ( started >= 0 )
                {
                  started = 0;
                  v10 = 0LL;
                  if ( v8 )
                  {
                    CmUnlockHiveSecurity(*(_QWORD *)(v13 + 32));
                    v17 = 0;
                  }
                  if ( *(_WORD *)(v13 + 66) && !(unsigned int)CmpGetEffectiveKcbSemantics(v13) )
                  {
                    LOBYTE(v32) = v8;
                    KeyNodeForKcb = CmpGetKeyNodeForKcb(v31, &v42, v32, v33);
                    *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
                    CmpReleaseKeyNodeForKcb(v13, &v42);
                    *(_BYTE *)(v13 + 65) = 2;
                  }
                  if ( v8 )
                  {
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v13 + 32));
                    v8 = 0;
                  }
                  CmpReportNotifyForKcbStack(&v38, v15, 10LL, v44);
                }
                if ( v17 )
                  CmUnlockHiveSecurity(*(_QWORD *)(v13 + 32));
                if ( v8 )
                  HvUnlockHiveFlusherShared(*(_QWORD *)(v13 + 32));
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
        v18 = 1;
        goto LABEL_34;
      }
      v16 = v13 + 248;
      if ( !*(_DWORD *)(v13 + 248) )
      {
        v16 = v13 + 264;
        if ( !*(_DWORD *)(v13 + 264) )
          goto LABEL_18;
      }
      v19 = 0;
      started = CmpSnapshotTxOwnerArray(v16, &v37, &v41);
      if ( started < 0 )
        goto LABEL_33;
      if ( v9 )
        CmpUnlockKcbStack(&v38);
      v9 = 0;
      CmpCleanupKcbStack(&v38);
      v38 = 0LL;
      WORD1(v38) = -1;
      v39 = 0LL;
      CmpUnlockRegistry(v29, v28);
      v18 = 0;
      CmpReleaseShutdownRundown();
      started = CmpRollbackTransactionArray(v37, v41, v30, &v40);
      if ( started < 0 )
        goto LABEL_35;
      v7 = v36;
    }
  }
  started = -1073741431;
  v18 = 0;
LABEL_34:
  v19 = v35;
LABEL_35:
  if ( v9 )
    CmpUnlockKcbStack(&v38);
  CmpCleanupKcbStack(&v38);
  if ( v18 )
    CmpUnlockRegistry(v21, v20);
  if ( (_QWORD *)v44[0] != v44 )
    CmpSignalDeferredPosts(v44);
  if ( v19 )
    CmpReleaseShutdownRundown();
  CmpDetachFromRegistryProcess(v50);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)started;
}

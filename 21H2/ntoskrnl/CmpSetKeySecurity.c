/*
 * XREFs of CmpSetKeySecurity @ 0x14066DF0C
 * Callers:
 *     CmpSecurityMethod @ 0x140665120 (CmpSecurityMethod.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x140360610 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x140361D2C (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     CmpReportNotifyForKcbStack @ 0x1405ED300 (CmpReportNotifyForKcbStack.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1405EF510 (CmpGetEffectiveKcbSemantics.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpReleaseShutdownRundown @ 0x140655680 (CmpReleaseShutdownRundown.c)
 *     SeCaptureSubjectContext @ 0x140655B30 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 *     CmpAcquireShutdownRundown @ 0x140656AB0 (CmpAcquireShutdownRundown.c)
 *     CmpTryAcquireIXLockExclusive @ 0x1406650F8 (CmpTryAcquireIXLockExclusive.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140665D30 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKcbImmutable @ 0x140665DD0 (CmpIsKcbImmutable.c)
 *     HvUnlockHiveFlusherShared @ 0x14066628C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406662C4 (HvLockHiveFlusherShared.c)
 *     CmpSignalDeferredPosts @ 0x140667890 (CmpSignalDeferredPosts.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140669070 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmUnlockHiveSecurity @ 0x14066A1E4 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x14066A204 (CmLockHiveSecurityExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x14066BFD4 (CmpGetKeyNodeForKcb.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14066CCFC (CmpSetSecurityDescriptorInfo.c)
 *     CmpLockRegistryExclusive @ 0x14067278C (CmpLockRegistryExclusive.c)
 *     SeSetSecurityAccessMask @ 0x140697778 (SeSetSecurityAccessMask.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A3094 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpAllocateUnitOfWork @ 0x1406B8780 (CmpAllocateUnitOfWork.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x1406FB360 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1406FB440 (CmpUnlockKcbStack.c)
 *     CmpLockIXLockExclusive @ 0x14071D3E0 (CmpLockIXLockExclusive.c)
 *     CmpRundownUnitOfWork @ 0x14071D7DC (CmpRundownUnitOfWork.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140863E04 (CmpReleaseKeyNodeForKcb.c)
 *     CmpCheckKcbStackAccess @ 0x1408716E4 (CmpCheckKcbStackAccess.c)
 *     CmpRollbackTransactionArray @ 0x140875078 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x14087824C (CmpSnapshotTxOwnerArray.c)
 *     CmpFreeUnitOfWork @ 0x14087EAA8 (CmpFreeUnitOfWork.c)
 *     CmpPartialPromoteSubkeys @ 0x1408800C0 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1408802C8 (CmpPromoteKey.c)
 */

__int64 __fastcall CmpSetKeySecurity(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
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
  ULONG_PTR v16; // rdi
  __int64 v17; // r8
  struct _LOOKASIDE_LIST_EX *v18; // r9
  int started; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r13
  char v25; // r10
  int v26; // r8d
  __int64 v27; // rcx
  BOOLEAN v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // di
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v36; // rcx
  _QWORD *UnitOfWork; // rax
  char v38; // r15
  __int64 v39; // rcx
  __int64 KeyNodeForKcb; // rax
  __int64 v41; // [rsp+20h] [rbp-E0h]
  BOOLEAN v42; // [rsp+50h] [rbp-B0h]
  char v43; // [rsp+52h] [rbp-AEh]
  unsigned int v44; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v45; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v46; // [rsp+68h] [rbp-98h]
  int v47; // [rsp+78h] [rbp-88h] BYREF
  int v48; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h] BYREF
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v52[2]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v53; // [rsp+A8h] [rbp-58h]
  __int64 v54; // [rsp+B0h] [rbp-50h]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v58[3]; // [rsp+E8h] [rbp-18h] BYREF

  v54 = a6;
  v50 = 0xFFFFFFFFLL;
  v45 = 0LL;
  WORD1(v45) = -1;
  v55 = a4;
  v56 = a3;
  v52[1] = v52;
  v7 = 0;
  v53 = a2;
  v52[0] = v52;
  v8 = 0;
  v44 = 0;
  v9 = 0;
  v49 = 0LL;
  v10 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v47 = 0;
  v51 = 0LL;
  memset(v58, 0, sizeof(v58));
  v43 = 0;
  v48 = 0;
  v46 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess((__int64)v58, v11, v12, v13);
  while ( 1 )
  {
    v42 = CmpAcquireShutdownRundown();
    if ( !v42 )
      break;
    if ( v7 )
      CmpLockRegistryExclusive(v15, v14);
    else
      CmpLockRegistry(v15);
    v16 = *(_QWORD *)(a1 + 8);
    if ( CmpIsKcbImmutable(v16) )
    {
LABEL_35:
      started = -1073741790;
      goto LABEL_36;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v45, v16, v17, v18);
    if ( started < 0 )
      goto LABEL_36;
    if ( !v7 )
    {
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v45);
      v9 = 1;
    }
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_36;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v51);
      if ( started < 0 )
        goto LABEL_36;
      started = CmpPerformKeyBodyDeletionCheck(a1, v51);
      if ( started < 0 )
        goto LABEL_36;
    }
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v16 + 32) + 4152LL) & 0x20) != 0 )
      goto LABEL_35;
    if ( !*(_WORD *)(v16 + 66) || (unsigned int)CmpGetEffectiveKcbSemantics(v16, 0LL) || v7 )
    {
      v24 = v51;
      if ( *(_WORD *)(a1 + 4) )
      {
        SeSetSecurityAccessMask((unsigned int)*v53, &v47);
        LOBYTE(v26) = v25;
        started = CmpCheckKcbStackAccess((unsigned int)&v45, v24, v26, v47, 0);
        if ( started < 0 )
          goto LABEL_36;
      }
      if ( *(_WORD *)(v16 + 66) )
      {
        if ( !(unsigned int)CmpGetEffectiveKcbSemantics(v16, 0LL) )
        {
          LOBYTE(v20) = 1;
          started = CmpPromoteKey(&v45, v20, 0LL);
          if ( started < 0 )
            goto LABEL_36;
          started = CmpPartialPromoteSubkeys(&v45);
          if ( started < 0 )
            goto LABEL_36;
        }
      }
      if ( v24 )
      {
        v36 = *(unsigned int *)(*(_QWORD *)(v16 + 32) + 160LL);
        if ( (v36 & 2) != 0 )
        {
          started = -1072103423;
        }
        else
        {
          UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v36, v20, v21);
          v10 = UnitOfWork;
          if ( UnitOfWork )
          {
            CmpTransEnlistUowInKcb(UnitOfWork, v16);
            started = CmpTransEnlistUowInCmTrans(v10, v24);
            if ( started >= 0 )
            {
              if ( (unsigned __int8)CmpLockIXLockExclusive(v16 + 248, v10, 0LL)
                && (unsigned __int8)CmpLockIXLockExclusive(v16 + 264, v10, 1LL) )
              {
LABEL_55:
                if ( !v43 )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v16 + 32));
                  v8 = 1;
                  CmLockHiveSecurityExclusive(*(_QWORD *)(v16 + 32));
                }
                LODWORD(v41) = a5;
                started = CmpSetSecurityDescriptorInfo(v16, v53, v56, v55, v41, v54, v24, v10, &SubjectContext);
                v38 = v8;
                if ( started >= 0 )
                {
                  started = 0;
                  v10 = 0LL;
                  if ( v8 )
                  {
                    CmUnlockHiveSecurity(*(_QWORD *)(v16 + 32));
                    v38 = 0;
                  }
                  if ( *(_WORD *)(v16 + 66) && !(unsigned int)CmpGetEffectiveKcbSemantics(v16, 0LL) )
                  {
                    KeyNodeForKcb = CmpGetKeyNodeForKcb(v39, (__int64)&v50, v8);
                    *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
                    CmpReleaseKeyNodeForKcb(v16, &v50);
                    *(_BYTE *)(v16 + 65) = 2;
                  }
                  if ( v8 )
                  {
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v16 + 32));
                    v8 = 0;
                  }
                  CmpReportNotifyForKcbStack((__int64)&v45, v24, 10, (__int64)v52);
                }
                if ( v38 )
                  CmUnlockHiveSecurity(*(_QWORD *)(v16 + 32));
                if ( v8 )
                  HvUnlockHiveFlusherShared(*(_QWORD *)(v16 + 32));
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
LABEL_36:
        v31 = 1;
        goto LABEL_37;
      }
      if ( CmpTryAcquireIXLockExclusive((_DWORD *)(v16 + 248)) && CmpTryAcquireIXLockExclusive((_DWORD *)(v16 + 264)) )
        goto LABEL_55;
      v28 = 0;
      started = CmpSnapshotTxOwnerArray(v27, &v44, &v49);
      if ( started < 0 )
        goto LABEL_36;
      if ( v9 )
        CmpUnlockKcbStack(&v45);
      v9 = 0;
      CmpCleanupKcbStack(&v45);
      v45 = 0LL;
      WORD1(v45) = -1;
      v46 = 0LL;
      CmpUnlockRegistry(v30, v29);
      v31 = 0;
      CmpReleaseShutdownRundown();
      started = CmpRollbackTransactionArray(v44, v49, v32, &v48);
      if ( started < 0 )
        goto LABEL_38;
      v7 = v43;
    }
    else
    {
      v7 = 1;
      v43 = 1;
      CmpUnlockKcbStack(&v45);
      v9 = 0;
      CmpCleanupKcbStack(&v45);
      v45 = 0LL;
      WORD1(v45) = -1;
      v46 = 0LL;
      CmpUnlockRegistry(v23, v22);
      CmpReleaseShutdownRundown();
    }
  }
  started = -1073741431;
  v31 = 0;
LABEL_37:
  v28 = v42;
LABEL_38:
  if ( v9 )
    CmpUnlockKcbStack(&v45);
  CmpCleanupKcbStack(&v45);
  if ( v31 )
    CmpUnlockRegistry(v34, v33);
  if ( v52[0] != v52 )
    CmpSignalDeferredPosts(v52);
  if ( v28 )
    CmpReleaseShutdownRundown();
  CmpDetachFromRegistryProcess((__int64)v58);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)started;
}

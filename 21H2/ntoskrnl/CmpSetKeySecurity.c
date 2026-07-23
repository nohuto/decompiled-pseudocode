/*
 * XREFs of CmpSetKeySecurity @ 0x140662D2C
 * Callers:
 *     CmpSecurityMethod @ 0x140659F40 (CmpSecurityMethod.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x140213DB0 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14026D0B0 (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1405DED94 (CmpTransSearchAddTransFromKeyBody.c)
 *     SeSetSecurityAccessMask @ 0x1405F8788 (SeSetSecurityAccessMask.c)
 *     CmpAllocateUnitOfWork @ 0x140617BA0 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockExclusive @ 0x140619E60 (CmpLockIXLockExclusive.c)
 *     CmpReleaseShutdownRundown @ 0x14064A4A0 (CmpReleaseShutdownRundown.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     CmpAcquireShutdownRundown @ 0x14064B8D0 (CmpAcquireShutdownRundown.c)
 *     CmpTryAcquireIXLockExclusive @ 0x140659F18 (CmpTryAcquireIXLockExclusive.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14065AB50 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKcbImmutable @ 0x14065ABF0 (CmpIsKcbImmutable.c)
 *     HvUnlockHiveFlusherShared @ 0x14065B0AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14065B0E4 (HvLockHiveFlusherShared.c)
 *     CmpSignalDeferredPosts @ 0x14065C6B0 (CmpSignalDeferredPosts.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14065DE90 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmUnlockHiveSecurity @ 0x14065F004 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x14065F024 (CmLockHiveSecurityExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x140660DF4 (CmpGetKeyNodeForKcb.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140661B1C (CmpSetSecurityDescriptorInfo.c)
 *     CmpRundownUnitOfWork @ 0x140664278 (CmpRundownUnitOfWork.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpReportNotifyForKcbStack @ 0x1406DCA60 (CmpReportNotifyForKcbStack.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1406DEC70 (CmpGetEffectiveKcbSemantics.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140712740 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140712820 (CmpUnlockKcbStack.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140863F5C (CmpReleaseKeyNodeForKcb.c)
 *     CmpCheckKcbStackAccess @ 0x140871844 (CmpCheckKcbStackAccess.c)
 *     CmpRollbackTransactionArray @ 0x1408751D8 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1408783AC (CmpSnapshotTxOwnerArray.c)
 *     CmpFreeUnitOfWork @ 0x14087EC08 (CmpFreeUnitOfWork.c)
 *     CmpPartialPromoteSubkeys @ 0x140880220 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140880428 (CmpPromoteKey.c)
 */

__int64 __fastcall CmpSetKeySecurity(__int64 a1, int *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  char v7; // r13
  char v8; // r12
  char v9; // si
  _QWORD *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  ULONG_PTR v13; // rdi
  __int64 v14; // r8
  struct _LOOKASIDE_LIST_EX *v15; // r9
  int started; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r13
  char v20; // r10
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
  BOOLEAN v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rcx
  char v27; // di
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *UnitOfWork; // rax
  char v33; // r15
  __int64 v34; // rcx
  __int64 KeyNodeForKcb; // rax
  __int64 v36; // [rsp+20h] [rbp-E0h]
  BOOLEAN v37; // [rsp+50h] [rbp-B0h]
  char v38; // [rsp+52h] [rbp-AEh]
  unsigned int v39; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v40; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+68h] [rbp-98h]
  int v42; // [rsp+78h] [rbp-88h] BYREF
  int v43; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  __int64 v45; // [rsp+88h] [rbp-78h] BYREF
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v47[2]; // [rsp+98h] [rbp-68h] BYREF
  int *v48; // [rsp+A8h] [rbp-58h]
  __int64 v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  __int64 v51; // [rsp+C0h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v53[3]; // [rsp+E8h] [rbp-18h] BYREF

  v49 = a6;
  v45 = 0xFFFFFFFFLL;
  v40 = 0LL;
  WORD1(v40) = -1;
  v50 = a4;
  v51 = a3;
  v47[1] = v47;
  v7 = 0;
  v48 = a2;
  v47[0] = v47;
  v8 = 0;
  v39 = 0;
  v9 = 0;
  v44 = 0LL;
  v10 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v42 = 0;
  v46 = 0LL;
  memset(v53, 0, sizeof(v53));
  v38 = 0;
  v43 = 0;
  v41 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(v53);
  while ( 1 )
  {
    v37 = CmpAcquireShutdownRundown();
    if ( !v37 )
      break;
    if ( v7 )
      CmpLockRegistryExclusive(v12, v11);
    else
      CmpLockRegistry(v12);
    v13 = *(_QWORD *)(a1 + 8);
    if ( CmpIsKcbImmutable(v13) )
    {
LABEL_35:
      started = -1073741790;
      goto LABEL_36;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v40, v13, v14, v15);
    if ( started < 0 )
      goto LABEL_36;
    if ( !v7 )
    {
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v40);
      v9 = 1;
    }
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_36;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      started = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v46);
      if ( started < 0 )
        goto LABEL_36;
      started = CmpPerformKeyBodyDeletionCheck(a1, v46);
      if ( started < 0 )
        goto LABEL_36;
    }
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v13 + 32) + 4152LL) & 0x20) != 0 )
      goto LABEL_35;
    if ( !*(_WORD *)(v13 + 66) || (unsigned int)CmpGetEffectiveKcbSemantics(v13, 0LL) || v7 )
    {
      v19 = v46;
      if ( *(_WORD *)(a1 + 4) )
      {
        SeSetSecurityAccessMask(*v48, &v42);
        LOBYTE(v21) = v20;
        started = CmpCheckKcbStackAccess((unsigned int)&v40, v19, v21, v42, 0);
        if ( started < 0 )
          goto LABEL_36;
      }
      if ( *(_WORD *)(v13 + 66) )
      {
        if ( !(unsigned int)CmpGetEffectiveKcbSemantics(v13, 0LL) )
        {
          LOBYTE(v22) = 1;
          started = CmpPromoteKey(&v40, v22, 0LL);
          if ( started < 0 )
            goto LABEL_36;
          started = CmpPartialPromoteSubkeys(&v40);
          if ( started < 0 )
            goto LABEL_36;
        }
      }
      if ( v19 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v13 + 32) + 160LL) & 2) != 0 )
        {
          started = -1072103423;
        }
        else
        {
          UnitOfWork = CmpAllocateUnitOfWork();
          v10 = UnitOfWork;
          if ( UnitOfWork )
          {
            CmpTransEnlistUowInKcb(UnitOfWork, v13);
            started = CmpTransEnlistUowInCmTrans(v10, v19);
            if ( started >= 0 )
            {
              if ( CmpLockIXLockExclusive(v13 + 248, v10, 0) && CmpLockIXLockExclusive(v13 + 264, v10, 1) )
              {
LABEL_55:
                if ( !v38 )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v13 + 32));
                  v8 = 1;
                  CmLockHiveSecurityExclusive(*(_QWORD *)(v13 + 32));
                }
                LODWORD(v36) = a5;
                started = CmpSetSecurityDescriptorInfo(v13, v48, v51, v50, v36, v49, v19, v10, &SubjectContext);
                v33 = v8;
                if ( started >= 0 )
                {
                  started = 0;
                  v10 = 0LL;
                  if ( v8 )
                  {
                    CmUnlockHiveSecurity(*(_QWORD *)(v13 + 32));
                    v33 = 0;
                  }
                  if ( *(_WORD *)(v13 + 66) && !(unsigned int)CmpGetEffectiveKcbSemantics(v13, 0LL) )
                  {
                    KeyNodeForKcb = CmpGetKeyNodeForKcb(v34, (__int64)&v45, v8);
                    *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
                    CmpReleaseKeyNodeForKcb(v13, &v45);
                    *(_BYTE *)(v13 + 65) = 2;
                  }
                  if ( v8 )
                  {
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v13 + 32));
                    v8 = 0;
                  }
                  CmpReportNotifyForKcbStack(&v40, v19, 10LL, v47);
                }
                if ( v33 )
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
LABEL_36:
        v27 = 1;
        goto LABEL_37;
      }
      if ( CmpTryAcquireIXLockExclusive((_DWORD *)(v13 + 248)) && CmpTryAcquireIXLockExclusive((_DWORD *)(v13 + 264)) )
        goto LABEL_55;
      v24 = 0;
      started = CmpSnapshotTxOwnerArray(v23, &v39, &v44);
      if ( started < 0 )
        goto LABEL_36;
      if ( v9 )
        CmpUnlockKcbStack(&v40);
      v9 = 0;
      CmpCleanupKcbStack(&v40);
      v40 = 0LL;
      WORD1(v40) = -1;
      v41 = 0LL;
      CmpUnlockRegistry(v26, v25);
      v27 = 0;
      CmpReleaseShutdownRundown();
      started = CmpRollbackTransactionArray(v39, v44, v28, &v43);
      if ( started < 0 )
        goto LABEL_38;
      v7 = v38;
    }
    else
    {
      v7 = 1;
      v38 = 1;
      CmpUnlockKcbStack(&v40);
      v9 = 0;
      CmpCleanupKcbStack(&v40);
      v40 = 0LL;
      WORD1(v40) = -1;
      v41 = 0LL;
      CmpUnlockRegistry(v18, v17);
      CmpReleaseShutdownRundown();
    }
  }
  started = -1073741431;
  v27 = 0;
LABEL_37:
  v24 = v37;
LABEL_38:
  if ( v9 )
    CmpUnlockKcbStack(&v40);
  CmpCleanupKcbStack(&v40);
  if ( v27 )
    CmpUnlockRegistry(v30, v29);
  if ( v47[0] != v47 )
    CmpSignalDeferredPosts(v47);
  if ( v24 )
    CmpReleaseShutdownRundown();
  CmpDetachFromRegistryProcess(v53);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)started;
}

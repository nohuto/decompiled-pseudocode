/*
 * XREFs of MiSetPagesModified @ 0x14052F590
 * Callers:
 *     MiCreateNewSection @ 0x140643004 (MiCreateNewSection.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiDereferenceControlAreaFile @ 0x14028244C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetCommittedPages @ 0x1402A36C8 (MiGetCommittedPages.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402B3FC0 (MiGetEffectivePagePriorityThread.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402BCBAC (MiUpdateControlAreaCommitCount.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiDeleteFileExtents @ 0x14063E2E4 (MiDeleteFileExtents.c)
 *     MiMapImageInSystemSpace @ 0x1406412E8 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406CA3B4 (MiUnmapImageInSystemSpace.c)
 *     MiPrefetchControlArea @ 0x1406CA620 (MiPrefetchControlArea.c)
 */

__int64 __fastcall MiSetPagesModified(__int64 a1, int a2)
{
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned __int64 v7; // r13
  unsigned int EffectivePagePriorityThread; // eax
  int v9; // ebx
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // r12
  __int64 i; // r14
  unsigned __int64 valid; // rax
  __int64 v15; // r8
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 CommittedPages; // rbx
  __int64 v23; // r15
  unsigned __int64 v24; // r12
  struct _KTHREAD *v25; // r14
  volatile signed __int64 *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int8 v30; // [rsp+30h] [rbp-128h]
  int v32; // [rsp+40h] [rbp-118h] BYREF
  __int64 v33; // [rsp+48h] [rbp-110h]
  __int64 v34; // [rsp+50h] [rbp-108h]
  __int64 v35; // [rsp+58h] [rbp-100h]
  __int64 v36; // [rsp+60h] [rbp-F8h]
  __int64 v37; // [rsp+68h] [rbp-F0h]
  __int64 v38; // [rsp+70h] [rbp-E8h]
  __int64 v39; // [rsp+78h] [rbp-E0h]
  unsigned __int64 v40; // [rsp+80h] [rbp-D8h]
  unsigned __int64 v41; // [rsp+88h] [rbp-D0h]
  __int64 v42; // [rsp+90h] [rbp-C8h]
  __int64 v43; // [rsp+98h] [rbp-C0h]
  unsigned __int64 v44; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v45; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int64 v47; // [rsp+B8h] [rbp-A0h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-98h]
  _QWORD v49[10]; // [rsp+D0h] [rbp-88h] BYREF

  v45 = 0LL;
  memset(v49, 0, sizeof(v49));
  v4 = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v39 = v4;
  v38 = v4;
  v43 = *(_QWORD *)a1;
  v36 = v43;
  v5 = *(unsigned int *)(v43 + 8);
  v37 = v5;
  if ( !(unsigned int)MiChargeCommit(v4, (unsigned int)v5, 0) )
    return 3221225773LL;
  v7 = *(_QWORD *)(a1 + 136);
  v40 = v7;
  v44 = v7 + 8 * v5;
  CurrentThread = KeGetCurrentThread();
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  if ( EffectivePagePriorityThread > 5 )
    EffectivePagePriorityThread = 5;
  MiPrefetchControlArea(a1, RtlpInterceptorRoutines[0], 0, EffectivePagePriorityThread, 0, a2);
  v9 = MiMapImageInSystemSpace(a1, 3LL, v49);
  if ( v9 >= 0 )
  {
    v33 = v49[3];
    v10 = v49[0];
    v35 = v49[0];
    v11 = ((v49[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = 0LL;
    v34 = 0LL;
    while ( 1 )
    {
      v42 = v10;
      v41 = v11;
      if ( v7 >= v44 )
        break;
      if ( MI_READ_PTE_LOCK_FREE(v7) )
      {
        for ( i = v33; ; MiUnlockWorkingSetShared(i, v30) )
        {
          v30 = MiLockWorkingSetShared(i);
          valid = MiLockLowestValidPageTable(i, v11, &v45);
          v47 = valid;
          if ( valid == ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (*(_BYTE *)v11 & 1) != 0 )
            break;
          MiUnlockPageTableInternal(i, valid, v15);
        }
        v34 = ++v12;
        v46 = MI_READ_PTE_LOCK_FREE(v11);
        v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v46) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        if ( MI_PFN_IS_PROTO(v16) )
        {
          v20 = 0LL;
          v32 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v32, v17, v18, v19);
            while ( *(__int64 *)(v16 + 24) < 0 );
          }
          if ( (*(_DWORD *)(v16 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v16 + 34) & 8) == 0 )
            v20 = MiCapturePageFileInfoInline((unsigned __int64 *)(v16 + 16), 1, 0);
          *(_BYTE *)(v16 + 34) |= 0x10u;
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v20 )
            MiReleasePageFileInfo(*(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v16 + 40) >> 39) & 0x3FFLL)), v20, 1);
          v10 = v35;
        }
        MiUnlockPageTableInternal(v33, v47, v18);
        MiUnlockWorkingSetShared(v33, v30);
        v4 = v39;
      }
      v7 += 8LL;
      v40 = v7;
      v11 += 8LL;
      v10 += 4096LL;
      v35 = v10;
    }
    v21 = v43;
    MiUnmapImageInSystemSpace(v49);
    CommittedPages = MiGetCommittedPages((_QWORD *)a1);
    v23 = CommittedPages - v12 + v5;
    if ( v23 )
      MiReturnCommit(v4, v23);
    v24 = v12 - CommittedPages;
    if ( v24 )
    {
      v25 = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      v26 = (volatile signed __int64 *)(v21 + 40);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v26, 0LL);
      MiUpdateControlAreaCommitCount(a1, v24);
      if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v26);
      KeAbPostRelease((ULONG_PTR)v26);
      KiLeaveGuardedRegionUnsafe((__int64)v25, v27, v28, v29);
    }
    MiDeleteFileExtents(a1);
    return 0LL;
  }
  else
  {
    MiReturnCommit(v4, v5);
    return (unsigned int)v9;
  }
}

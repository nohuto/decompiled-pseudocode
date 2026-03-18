/*
 * XREFs of MiSetPagesModified @ 0x1405335B0
 * Callers:
 *     MiCreateNewSection @ 0x140709EC4 (MiCreateNewSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetCommittedPages @ 0x14022E938 (MiGetCommittedPages.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiLockLowestValidPageTable @ 0x140236270 (MiLockLowestValidPageTable.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiDereferenceControlAreaFile @ 0x1402A039C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1402A0600 (MiReferenceControlAreaFile.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402D1080 (MiGetEffectivePagePriorityThread.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402D57DC (MiUpdateControlAreaCommitCount.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiCapturePageFileInfoInline @ 0x140306460 (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiDeleteFileExtents @ 0x140681F54 (MiDeleteFileExtents.c)
 *     MiUnmapImageInSystemSpace @ 0x14070D7F4 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x14070E1EC (MiMapImageInSystemSpace.c)
 *     MiPrefetchControlArea @ 0x14070F6A0 (MiPrefetchControlArea.c)
 */

__int64 __fastcall MiSetPagesModified(__int64 a1, int a2)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  unsigned __int64 v7; // r13
  unsigned int EffectivePagePriorityThread; // eax
  int v9; // ebx
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // r12
  __int64 i; // r14
  unsigned __int64 valid; // rax
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 CommittedPages; // rbx
  __int64 v22; // r15
  unsigned __int64 v23; // r12
  struct _KTHREAD *v24; // r14
  volatile signed __int64 *v25; // rsi
  unsigned __int8 v26; // [rsp+30h] [rbp-128h]
  int v28; // [rsp+40h] [rbp-118h] BYREF
  __int64 v29; // [rsp+48h] [rbp-110h]
  __int64 v30; // [rsp+50h] [rbp-108h]
  __int64 v31; // [rsp+58h] [rbp-100h]
  __int64 v32; // [rsp+60h] [rbp-F8h]
  __int64 v33; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v34; // [rsp+70h] [rbp-E8h]
  unsigned __int64 v35; // [rsp+78h] [rbp-E0h]
  unsigned __int64 v36; // [rsp+80h] [rbp-D8h]
  unsigned __int64 v37; // [rsp+88h] [rbp-D0h]
  __int64 v38; // [rsp+90h] [rbp-C8h]
  __int64 v39; // [rsp+98h] [rbp-C0h]
  unsigned __int64 v40; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v41; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int64 v43; // [rsp+B8h] [rbp-A0h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-98h]
  _QWORD v45[10]; // [rsp+D0h] [rbp-88h] BYREF

  v41 = 0LL;
  memset(v45, 0, sizeof(v45));
  v4 = *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v35 = v4;
  v34 = v4;
  v39 = *(_QWORD *)a1;
  v32 = v39;
  v5 = *(unsigned int *)(v39 + 8);
  v33 = v5;
  if ( !(unsigned int)MiChargeCommit(v4, (unsigned int)v5, 0) )
    return 3221225773LL;
  v7 = *(_QWORD *)(a1 + 136);
  v36 = v7;
  v40 = v7 + 8 * v5;
  CurrentThread = KeGetCurrentThread();
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  if ( EffectivePagePriorityThread > 5 )
    EffectivePagePriorityThread = 5;
  MiPrefetchControlArea(a1, RtlpInterceptorRoutines[0], 0, EffectivePagePriorityThread, 0, a2);
  v9 = MiMapImageInSystemSpace(a1, 3LL, v45);
  if ( v9 >= 0 )
  {
    v29 = v45[3];
    v10 = v45[0];
    v31 = v45[0];
    v11 = ((v45[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = 0LL;
    v30 = 0LL;
    while ( 1 )
    {
      v38 = v10;
      v37 = v11;
      if ( v7 >= v40 )
        break;
      if ( MI_READ_PTE_LOCK_FREE(v7) )
      {
        for ( i = v29; ; MiUnlockWorkingSetShared(i, v26) )
        {
          v26 = MiLockWorkingSetShared(i);
          valid = MiLockLowestValidPageTable(i, v11, &v41);
          v43 = valid;
          if ( valid == ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (*(_BYTE *)v11 & 1) != 0 )
            break;
          MiUnlockPageTableInternal(i, valid);
        }
        v30 = ++v12;
        v42 = MI_READ_PTE_LOCK_FREE(v11);
        v15 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v42) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        if ( MI_PFN_IS_PROTO(v15) )
        {
          v19 = 0LL;
          v28 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v28, v16, v17, v18);
            while ( *(__int64 *)(v15 + 24) < 0 );
          }
          if ( (*(_DWORD *)(v15 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v15 + 34) & 8) == 0 )
            v19 = MiCapturePageFileInfoInline((unsigned __int64 *)(v15 + 16), 1, 0);
          *(_BYTE *)(v15 + 34) |= 0x10u;
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v19 )
            MiReleasePageFileInfo(*(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v15 + 40) >> 39) & 0x3FFLL)), v19, 1);
          v10 = v31;
        }
        MiUnlockPageTableInternal(v29, v43);
        MiUnlockWorkingSetShared(v29, v26);
        v4 = v35;
      }
      v7 += 8LL;
      v36 = v7;
      v11 += 8LL;
      v10 += 4096LL;
      v31 = v10;
    }
    v20 = v39;
    MiUnmapImageInSystemSpace(v45);
    CommittedPages = MiGetCommittedPages((_QWORD *)a1);
    v22 = CommittedPages - v12 + v5;
    if ( v22 )
      MiReturnCommit(v4, v22);
    v23 = v12 - CommittedPages;
    if ( v23 )
    {
      v24 = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      v25 = (volatile signed __int64 *)(v20 + 40);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v25, 0LL);
      MiUpdateControlAreaCommitCount(a1, v23);
      if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v25);
      KeAbPostRelease((ULONG_PTR)v25);
      KiLeaveGuardedRegionUnsafe((__int64)v24);
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

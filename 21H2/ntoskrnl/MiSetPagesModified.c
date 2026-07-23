/*
 * XREFs of MiSetPagesModified @ 0x1405352F0
 * Callers:
 *     MiCreateNewSection @ 0x1406A9EA0 (MiCreateNewSection.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402360D0 (MiUpdateControlAreaCommitCount.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiGetEffectivePagePriorityThread @ 0x14025EE24 (MiGetEffectivePagePriorityThread.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MiGetCommittedPages @ 0x140321A20 (MiGetCommittedPages.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiDereferenceControlAreaFile @ 0x140361F34 (MiDereferenceControlAreaFile.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiUnmapImageInSystemSpace @ 0x1406C3BF4 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x1406C3D80 (MiMapImageInSystemSpace.c)
 *     MiPrefetchControlArea @ 0x1406C3FE8 (MiPrefetchControlArea.c)
 *     MiDeleteFileExtents @ 0x1406FF658 (MiDeleteFileExtents.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  __int64 i; // r14
  unsigned __int64 valid; // rax
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 CommittedPages; // rbx
  __int64 v25; // r15
  unsigned __int64 v26; // r12
  struct _KTHREAD *v27; // r14
  volatile signed __int64 *v28; // rsi
  unsigned __int8 v29; // [rsp+30h] [rbp-128h]
  int v31; // [rsp+40h] [rbp-118h] BYREF
  __int64 v32; // [rsp+48h] [rbp-110h]
  __int64 v33; // [rsp+50h] [rbp-108h]
  __int64 v34; // [rsp+58h] [rbp-100h]
  __int64 v35; // [rsp+60h] [rbp-F8h]
  __int64 v36; // [rsp+68h] [rbp-F0h]
  __int64 v37; // [rsp+70h] [rbp-E8h]
  __int64 v38; // [rsp+78h] [rbp-E0h]
  unsigned __int64 v39; // [rsp+80h] [rbp-D8h]
  unsigned __int64 v40; // [rsp+88h] [rbp-D0h]
  __int64 v41; // [rsp+90h] [rbp-C8h]
  __int64 v42; // [rsp+98h] [rbp-C0h]
  unsigned __int64 v43; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v44; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int64 v46; // [rsp+B8h] [rbp-A0h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-98h]
  _QWORD v48[10]; // [rsp+D0h] [rbp-88h] BYREF

  v44 = 0LL;
  memset(v48, 0, sizeof(v48));
  v4 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v38 = v4;
  v37 = v4;
  v42 = *(_QWORD *)a1;
  v35 = v42;
  v5 = *(unsigned int *)(v42 + 8);
  v36 = v5;
  if ( !(unsigned int)MiChargeCommit(v4, (unsigned int)v5, 0) )
    return 3221225773LL;
  v7 = *(_QWORD *)(a1 + 136);
  v39 = v7;
  v43 = v7 + 8 * v5;
  CurrentThread = KeGetCurrentThread();
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  if ( EffectivePagePriorityThread > 5 )
    EffectivePagePriorityThread = 5;
  MiPrefetchControlArea(a1, RtlpInterceptorRoutines[0], 0, EffectivePagePriorityThread, 0, a2);
  v9 = MiMapImageInSystemSpace(a1, 3LL, v48);
  if ( v9 >= 0 )
  {
    v32 = v48[3];
    v10 = v48[0];
    v34 = v48[0];
    v11 = ((v48[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = 0LL;
    v33 = 0LL;
    while ( 1 )
    {
      v41 = v10;
      v40 = v11;
      if ( v7 >= v43 )
        break;
      if ( MI_READ_PTE_LOCK_FREE(v7) )
      {
        for ( i = v32; ; MiUnlockWorkingSetShared(i, v29) )
        {
          v29 = MiLockWorkingSetShared(i, v13, v14, v15);
          valid = MiLockLowestValidPageTable(i, v11, &v44);
          v46 = valid;
          if ( valid == ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (*(_BYTE *)v11 & 1) != 0 )
            break;
          MiUnlockPageTableInternal(i, valid);
        }
        v33 = ++v12;
        v45 = MI_READ_PTE_LOCK_FREE(v11);
        v18 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v45) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        if ( MI_PFN_IS_PROTO(v18) )
        {
          v22 = 0LL;
          v31 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v31, v19, v20, v21);
            while ( *(__int64 *)(v18 + 24) < 0 );
          }
          if ( (*(_DWORD *)(v18 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v18 + 34) & 8) == 0 )
            v22 = MiCapturePageFileInfoInline((unsigned __int64 *)(v18 + 16), 1, 0);
          *(_BYTE *)(v18 + 34) |= 0x10u;
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v22 )
            MiReleasePageFileInfo(*(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v18 + 40) >> 39) & 0x3FFLL)), v22, 1);
          v10 = v34;
        }
        MiUnlockPageTableInternal(v32, v46);
        MiUnlockWorkingSetShared(v32, v29);
        v4 = v38;
      }
      v7 += 8LL;
      v39 = v7;
      v11 += 8LL;
      v10 += 4096LL;
      v34 = v10;
    }
    v23 = v42;
    MiUnmapImageInSystemSpace(v48);
    CommittedPages = MiGetCommittedPages((_QWORD *)a1);
    v25 = CommittedPages - v12 + v5;
    if ( v25 )
      MiReturnCommit(v4, v25);
    v26 = v12 - CommittedPages;
    if ( v26 )
    {
      v27 = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      v28 = (volatile signed __int64 *)(v23 + 40);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v28, 0LL);
      MiUpdateControlAreaCommitCount(a1, v26);
      if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v28);
      KeAbPostRelease((ULONG_PTR)v28);
      KiLeaveGuardedRegionUnsafe((__int64)v27);
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

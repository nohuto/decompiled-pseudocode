/*
 * XREFs of MiSetPagesModified @ 0x14058D310
 * Callers:
 *     MiCreateNewSection @ 0x1406F914C (MiCreateNewSection.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140230680 (ObFastDereferenceObjectDeferDelete.c)
 *     MiCapturePageFileInfoInline @ 0x140232694 (MiCapturePageFileInfoInline.c)
 *     MiUpdateControlAreaCommitCount @ 0x14026EC38 (MiUpdateControlAreaCommitCount.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14027A794 (MiReferenceControlAreaFileWithTag.c)
 *     MiLockLowestValidPageTable @ 0x14027D6E0 (MiLockLowestValidPageTable.c)
 *     MiGetCommittedPages @ 0x140287C30 (MiGetCommittedPages.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E670C (MiGetEffectivePagePriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiPrefetchControlArea @ 0x1406B85C8 (MiPrefetchControlArea.c)
 *     MiMapImageInSystemSpace @ 0x1406F3884 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406F39F8 (MiUnmapImageInSystemSpace.c)
 *     MiDeleteFileExtents @ 0x1406F48DC (MiDeleteFileExtents.c)
 */

__int64 __fastcall MiSetPagesModified(__int64 a1, int a2)
{
  __int64 v4; // r15
  __int64 v5; // r14
  unsigned __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // r13
  unsigned int EffectivePagePriorityThread; // eax
  int v10; // esi
  unsigned __int64 v11; // rsi
  __int64 v12; // r12
  unsigned __int64 valid; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rbx
  unsigned __int8 v18; // r8
  __int64 v19; // rsi
  __int64 CommittedPages; // rbx
  __int64 v21; // r14
  unsigned __int64 v22; // r12
  ULONG_PTR v23; // r14
  struct _KTHREAD *v24; // rsi
  unsigned int SessionId; // ecx
  unsigned int v26; // edx
  __int64 p_Process; // rbx
  int v28; // edx
  bool v29; // zf
  unsigned __int8 v30; // [rsp+30h] [rbp-128h]
  __int64 v31; // [rsp+38h] [rbp-120h]
  unsigned __int64 v33; // [rsp+50h] [rbp-108h]
  __int64 v34; // [rsp+58h] [rbp-100h]
  int v35; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v37; // [rsp+70h] [rbp-E8h]
  __int64 v38; // [rsp+78h] [rbp-E0h]
  _QWORD v39[5]; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int64 v40; // [rsp+A8h] [rbp-B0h]
  unsigned __int64 v41; // [rsp+B0h] [rbp-A8h]
  __int64 v42; // [rsp+B8h] [rbp-A0h]
  __int64 v43; // [rsp+C0h] [rbp-98h]
  unsigned __int64 v44; // [rsp+C8h] [rbp-90h]
  unsigned __int64 v45; // [rsp+D0h] [rbp-88h] BYREF
  _QWORD v46[10]; // [rsp+E0h] [rbp-78h] BYREF

  v45 = 0LL;
  memset(v46, 0, sizeof(v46));
  v4 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v43 = v4;
  v39[4] = v4;
  v38 = *(_QWORD *)a1;
  v39[2] = v38;
  v5 = *(unsigned int *)(v38 + 8);
  v39[3] = v5;
  if ( !(unsigned int)MiChargeCommit(v4, (unsigned int)v5, 0) )
    return 3221225773LL;
  v7 = *(_QWORD *)(a1 + 136);
  v37 = v7;
  v40 = v7;
  v44 = v7 + 8 * v5;
  CurrentThread = KeGetCurrentThread();
  v39[1] = CurrentThread;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  if ( EffectivePagePriorityThread > 5 )
    EffectivePagePriorityThread = 5;
  MiPrefetchControlArea(a1, CLFS_LSN_NULL_EXT, 0, EffectivePagePriorityThread, 0, a2);
  v10 = MiMapImageInSystemSpace(a1, 3LL, v46);
  if ( v10 >= 0 )
  {
    v31 = v46[3];
    v34 = v46[0];
    v11 = ((v46[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v42 = v46[0];
    v12 = 0LL;
    v36 = 0LL;
    while ( 1 )
    {
      v41 = v11;
      if ( v7 >= v44 )
        break;
      v39[0] = MI_READ_PTE_LOCK_FREE(v7);
      if ( v39[0] )
      {
        while ( 1 )
        {
          v30 = MiLockWorkingSetShared(v31);
          valid = MiLockLowestValidPageTable(v31, v11, &v45);
          v33 = valid;
          if ( valid == ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (*(_BYTE *)v11 & 1) != 0 )
            break;
          MiUnlockPageTableInternal(v31, valid);
          MiUnlockWorkingSetShared(v31, v30);
        }
        v36 = ++v12;
        v39[0] = MI_READ_PTE_LOCK_FREE(v11);
        v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v39) >> 12) & 0xFFFFFFFFFFLL);
        if ( *(__int64 *)(v16 - 0x220000000000LL + 40) < 0 )
        {
          v17 = 0LL;
          v35 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 - 0x220000000000LL + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v35, v14, v15, 0xFFFFDE0000000000uLL);
            while ( *(__int64 *)(v16 - 0x220000000000LL + 24) < 0 );
          }
          v18 = *(_BYTE *)(v16 - 0x220000000000LL + 34);
          if ( (((*(_QWORD *)(v16 - 0x21FFFFFFFFF0LL) & 0x400LL) == 0) & (unsigned __int8)~(v18 >> 3)) != 0 )
          {
            v17 = MiCapturePageFileInfoInline((unsigned __int64 *)(v16 - 0x21FFFFFFFFF0LL), 1, 0);
            v18 = *(_BYTE *)(v16 - 0x220000000000LL + 34);
          }
          *(_BYTE *)(v16 - 0x220000000000LL + 34) = v18 | 0x10;
          _InterlockedAnd64((volatile signed __int64 *)(v16 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v17 )
            MiReleasePageFileInfo(
              *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v16 - 0x220000000000LL + 40) >> 43) & 0x3FFLL)),
              v17,
              1);
          v7 = v37;
        }
        MiUnlockPageTableInternal(v31, v33);
        MiUnlockWorkingSetShared(v31, v30);
      }
      v7 += 8LL;
      v37 = v7;
      v40 = v7;
      v11 += 8LL;
      v34 += 4096LL;
      v42 = v34;
    }
    v19 = v43;
    MiUnmapImageInSystemSpace(v46);
    CommittedPages = MiGetCommittedPages((_QWORD *)a1);
    v21 = CommittedPages - v12 + v5;
    if ( v21 )
      MiReturnCommit(v19, v21);
    v22 = v12 - CommittedPages;
    if ( v22 )
    {
      --CurrentThread->SpecialApcDisable;
      v23 = v38 + 40;
      ExAcquirePushLockExclusiveEx(v38 + 40, 0LL);
      MiUpdateControlAreaCommitCount(a1, v22);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v23);
      v24 = KeGetCurrentThread();
      if ( v23 - qword_140C50630 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)v24->ApcState.Process);
      _disable();
      v26 = 0;
      p_Process = (__int64)&v24[1].Process;
      while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v23 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(p_Process + 18)
           || (*(_DWORD *)p_Process & 1) != 0
           || *(_DWORD *)(p_Process + 8) != SessionId )
      {
        ++v26;
        p_Process += 96LL;
        if ( v26 >= 6 )
        {
          p_Process = 0LL;
          goto LABEL_40;
        }
      }
      *(_BYTE *)(p_Process + 18) = 0;
LABEL_40:
      if ( p_Process )
      {
        if ( *(__int64 *)p_Process < 0 )
        {
          *(_BYTE *)p_Process |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(p_Process);
          _disable();
        }
        v28 = *(_DWORD *)(p_Process + 88);
        *(_DWORD *)(p_Process + 88) = 0;
        *(_BYTE *)(p_Process + 17) = 0;
        *(_QWORD *)p_Process = 0LL;
        v24->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
        _enable();
        if ( v28 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v24, v23, v28);
      }
      else
      {
        if ( (*((_DWORD *)&v24->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v24, v23, SessionId, 0LL);
        _enable();
      }
      v29 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v29
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    MiDeleteFileExtents(a1);
    return 0LL;
  }
  else
  {
    MiReturnCommit(v4, v5);
    return (unsigned int)v10;
  }
}

/*
 * XREFs of MiReplaceTransitionPage @ 0x14034B1EC
 * Callers:
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiFinalizeImageHeaderPage @ 0x140325CD8 (MiFinalizeImageHeaderPage.c)
 *     MiTradeTransitionPage @ 0x14034C418 (MiTradeTransitionPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14054C484 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     MiDecreaseAvailablePages @ 0x140224310 (MiDecreaseAvailablePages.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSetPfnBlink @ 0x14027AF70 (MiSetPfnBlink.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402802F0 (MiIsPfnFromSlabAllocation.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x140305BA0 (MiUpdatePfnOnSlabStandbyList.c)
 *     MiIsDecayPfn @ 0x140306A40 (MiIsDecayPfn.c)
 *     MiDetermineModifiedPageListHead @ 0x140320BF4 (MiDetermineModifiedPageListHead.c)
 *     KeMakeKernelDirectoryTableBase @ 0x140328594 (KeMakeKernelDirectoryTableBase.c)
 *     MiReplaceNumaStandbyPage @ 0x1403477E0 (MiReplaceNumaStandbyPage.c)
 *     MiUpdateTransitionPteFrame @ 0x14034B85C (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x14034B9B0 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14034BF54 (MiFinalizePageAttribute.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlinkNumaStandbyPage @ 0x140399524 (MiUnlinkNumaStandbyPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

char __fastcall MiReplaceTransitionPage(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3, __int128 *a4)
{
  int v4; // r13d
  unsigned __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r14
  char v11; // cl
  unsigned int v12; // ebx
  unsigned int v13; // edi
  ULONG_PTR v14; // rcx
  int v15; // eax
  unsigned int PfnPriority; // eax
  char v17; // bl
  _KSPIN_LOCK_QUEUE *v18; // r9
  int v19; // ecx
  ULONG_PTR v20; // rbx
  BOOL v21; // r8d
  __int64 v22; // r13
  __int64 v23; // rdx
  unsigned __int64 v24; // r11
  __int64 v25; // r9
  int v26; // r10d
  _QWORD *v27; // r8
  __int64 updated; // rax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  char v32; // r10
  unsigned __int64 v33; // rdx
  ULONG_PTR v34; // r9
  volatile signed __int32 *v35; // r8
  unsigned int v36; // eax
  unsigned __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // rcx
  _QWORD *v40; // r14
  __int64 v41; // rax
  __int64 v42; // rbx
  int v43; // r13d
  __int64 v44; // rdx
  __int64 v45; // r8
  bool v46; // zf
  char result; // al
  signed __int32 v48[8]; // [rsp+0h] [rbp-48h] BYREF
  ULONG_PTR v49; // [rsp+20h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-20h] BYREF
  int v51; // [rsp+90h] [rbp+48h]
  __int64 v52; // [rsp+98h] [rbp+50h]

  v4 = 0xFFFFFF;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v51 = 0xFFFFFF;
  v7 = (__int64)((unsigned __int128)((__int64)(BugCheckParameter2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v49 = (v7 >> 63) + v7;
  v8 = (__int64)(a2 + 0x58000000000LL) / 48;
  v9 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
  v52 = v9;
  v10 = *(_QWORD *)(v9 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 4216);
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 3 && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
  {
    v11 = *(_BYTE *)(BugCheckParameter2 + 39);
    *(_BYTE *)(BugCheckParameter2 + 39) = v11 & 0xF0;
  }
  else
  {
    v11 = *(_BYTE *)(a2 + 39);
  }
  v12 = v11 & 0xF;
  MiLockNestedPageAtDpcInline(a2, v9, 0x2AAAAAAAAAAAAAABLL, 0xFFFFFA8000000000uLL);
  v13 = 0;
  if ( MiIsPfnFromSlabAllocation(a2) )
    v13 = 4;
  MiFinalizePageAttribute(a2, *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6, 1LL);
  MiCopyPfnEntryEx(a2, BugCheckParameter2);
  v14 = v49;
  *(_BYTE *)(a2 + 39) = v12 | *(_BYTE *)(a2 + 39) & 0xF0;
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL) == v14 )
    *(_QWORD *)(a2 + 40) ^= (v8 ^ *(_QWORD *)(a2 + 40)) & 0xFFFFFFFFFLL;
  MiCopyPage(v8, v14, a4, 6);
  _InterlockedOr(v48, 0);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v15 = *(_DWORD *)(v10 + 8);
  if ( v15 == 2 )
  {
    if ( a3 && (*(_QWORD *)BugCheckParameter2 & 0x8000000000000000uLL) != 0 )
    {
      MiUnlinkPageFromList(BugCheckParameter2, 0);
      v13 |= 8u;
      goto LABEL_53;
    }
    PfnPriority = MiGetPfnPriority(BugCheckParameter2);
    v17 = *(_BYTE *)(BugCheckParameter2 + 35);
    v4 = PfnPriority;
    v51 = PfnPriority;
    LockHandle.LockQueue.Next = v18;
    v10 = v52 + 8 * (PfnPriority + 4LL * PfnPriority + 304);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v10 + 32));
    v19 = v13 | 2;
    if ( (v17 & 8) == 0 )
      v19 = v13;
    v13 = v19;
  }
  else
  {
    LockHandle.LockQueue.Next = 0LL;
    if ( v15 == 3 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
      {
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v10 + 32));
        v10 = MiDetermineModifiedPageListHead(a2, v52);
        goto LABEL_21;
      }
      v10 = v52 + 8 * (v12 + 4 * (v12 + 108LL));
    }
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v10 + 32));
  }
LABEL_21:
  v20 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
  v21 = v4 != 0xFFFFFF;
  v22 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
  *(_QWORD *)a2 = v20 | *(_QWORD *)a2 & 0xFFFFFFF000000000uLL;
  MiSetPfnBlink(a2, v22, v21);
  v23 = 0xFFFFFFFFFLL;
  v24 = 0xFFFFFA8000000000uLL;
  if ( v20 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v10 + 24) = v8;
  }
  else
  {
    v25 = 48 * v20 - 0x58000000000LL;
    if ( v51 != 0xFFFFFF && (v13 & 2) != 0 && MiIsDecayPfn(v20) )
    {
      *(_QWORD *)(v25 + 40) ^= v23 & (v8 ^ *(_QWORD *)(v25 + 40));
      goto LABEL_29;
    }
    MiSetPfnBlink(v25, v8, 0);
    v23 = 0xFFFFFFFFFLL;
    v24 = 0xFFFFFA8000000000uLL;
  }
  v26 = v51;
LABEL_29:
  if ( v22 == v23 )
  {
    *(_QWORD *)(v10 + 16) = v8;
  }
  else
  {
    v27 = (_QWORD *)(v24 + 48 * v22);
    if ( v26 != 0xFFFFFF && (v13 & 2) != 0 && MiIsDecayPfn(v22) )
    {
      updated = MiUpdateTransitionPteFrame(v27[2], v8);
      *(_QWORD *)(v29 + 16) = updated;
    }
    else
    {
      *v27 ^= v23 & (v8 ^ *v27);
    }
  }
  if ( v26 != 0xFFFFFF )
  {
    if ( v13 >= 4 || a3 )
    {
      MiUpdatePfnOnSlabStandbyList((unsigned __int64 *)a2, 0);
      if ( !a3 )
      {
        MiUnlinkNumaStandbyPage(BugCheckParameter2);
        --*(_QWORD *)v10;
        _InterlockedAdd64(
          (volatile signed __int64 *)((-(__int64)((unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2, v30, v31) != 0) & 0xFFFFFFFFFFFFFD40uLL)
                                    + v52
                                    + 5056),
          0xFFFFFFFFFFFFFFFFuLL);
        MiDecreaseAvailablePages(v52, 1LL, 0xFFFFFFFFFFFFFFFFuLL, 0);
      }
    }
    else
    {
      MiReplaceNumaStandbyPage(BugCheckParameter2, a2);
    }
  }
  if ( dword_140C4E60C != 1 )
    goto LABEL_52;
  v32 = v49;
  LOBYTE(v33) = 1;
  v34 = v49 & 0x1F;
  v35 = (volatile signed __int32 *)(qword_140C4E668 + 4 * (v49 >> 5));
  if ( v34 + 1 > 0x20 )
  {
    if ( (v49 & 0x1F) != 0 )
    {
      _InterlockedOr(v35++, ((1 << (32 - (v49 & 0x1F))) - 1) << v34);
      v33 = 1LL - (32 - (v32 & 0x1Fu));
      if ( v33 >= 0x20 )
      {
        v37 = v33 >> 5;
        v33 += -32LL * (v33 >> 5);
        do
        {
          *v35++ = -1;
          --v37;
        }
        while ( v37 );
      }
      if ( !v33 )
        goto LABEL_52;
    }
    v36 = (1 << v33) - 1;
  }
  else
  {
    v36 = 1 << v34;
  }
  _InterlockedOr(v35, v36);
LABEL_52:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_53:
  *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
  MiSetPfnBlink(BugCheckParameter2, 0LL, 1);
  _InterlockedOr(v48, 0);
  *(_QWORD *)(BugCheckParameter2 + 24) ^= (*(_QWORD *)(BugCheckParameter2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v39 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  if ( v39 == v49 )
  {
    v40 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  else
  {
    v13 |= 1u;
    v40 = (_QWORD *)(MiMapPageInHyperSpaceWorker(v39, 0LL, 0x80000000LL, v38)
                   + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  v41 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v40);
  v42 = MiUpdateTransitionPteFrame(v41, v8);
  v43 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v40) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v43 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_64;
      v46 = (v42 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_64;
      v46 = (v42 & 1) == 0;
    }
    if ( !v46 )
      v42 |= 0x8000000000000000uLL;
  }
LABEL_64:
  *v40 = v42;
  if ( v43 )
    MiWritePteShadow((__int64)v40, v42);
  if ( (v13 & 1) != 0 )
  {
    LOBYTE(v44) = 17;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v40, v44, 0x80000000);
    v40 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  if ( !(unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2, v44, v45)
    && (unsigned int)MiGetSystemRegionType((unsigned __int64)v40) == 5 )
  {
    *(v40 - 174) = KeMakeKernelDirectoryTableBase(v8 << 12);
  }
  if ( v13 >= 8 )
    MiInsertPageInList(a2, 0x800u);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 )
    *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
  *(_QWORD *)(BugCheckParameter2 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
  *(_BYTE *)(BugCheckParameter2 + 34) &= 0xC7u;
  result = *(_BYTE *)(BugCheckParameter2 + 35) & 0xDF;
  *(_BYTE *)(BugCheckParameter2 + 35) = result;
  return result;
}

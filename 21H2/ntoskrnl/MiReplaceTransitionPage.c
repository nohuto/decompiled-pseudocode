/*
 * XREFs of MiReplaceTransitionPage @ 0x14025B310
 * Callers:
 *     MiTradeTransitionPage @ 0x140259688 (MiTradeTransitionPage.c)
 *     MiFinalizeImageHeaderPage @ 0x140298F3C (MiFinalizeImageHeaderPage.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405521B4 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x140236090 (MiUpdatePfnOnSlabStandbyList.c)
 *     MiIsDecayPfn @ 0x140236E3C (MiIsDecayPfn.c)
 *     MiDetermineModifiedPageListHead @ 0x14024F584 (MiDetermineModifiedPageListHead.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiReplaceNumaStandbyPage @ 0x14025948C (MiReplaceNumaStandbyPage.c)
 *     MiUpdateTransitionPteFrame @ 0x14025B980 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x14025B9D0 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14025C3D4 (MiFinalizePageAttribute.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1402956D0 (KeMakeKernelDirectoryTableBase.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MiSetPfnBlink @ 0x140322E80 (MiSetPfnBlink.c)
 *     MiDecreaseAvailablePages @ 0x1403240D0 (MiDecreaseAvailablePages.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039CB94 (MiUnlinkNumaStandbyPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

char __fastcall MiReplaceTransitionPage(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, __int64 a4)
{
  int v4; // r13d
  unsigned __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // r14
  char v10; // cl
  unsigned int v11; // ebx
  unsigned int v12; // edi
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  unsigned int PfnPriority; // eax
  char v17; // bl
  _KSPIN_LOCK_QUEUE *v18; // r9
  int v19; // ecx
  ULONG_PTR v20; // rbx
  _BOOL8 v21; // r8
  ULONG_PTR v22; // r13
  __int64 v23; // rdx
  unsigned __int64 v24; // r11
  __int64 v25; // r9
  int v26; // r10d
  _QWORD *v27; // r8
  __int64 updated; // rax
  __int64 v29; // r8
  char v30; // r10
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r9
  volatile signed __int32 *v33; // r8
  unsigned int v34; // eax
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  _QWORD *v37; // r14
  __int64 v38; // rax
  __int64 v39; // rbx
  int v40; // r13d
  __int64 v41; // rdx
  bool v42; // zf
  char result; // al
  signed __int32 v44[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v45; // [rsp+20h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-20h] BYREF
  int v47; // [rsp+90h] [rbp+48h]
  __int64 v48; // [rsp+98h] [rbp+50h]

  v4 = 0xFFFFFF;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v47 = 0xFFFFFF;
  v7 = (__int64)((unsigned __int128)((__int64)(BugCheckParameter2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v45 = (v7 >> 63) + v7;
  v8 = (a2 + 0x58000000000LL) / 48;
  v48 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
  v9 = *(_QWORD *)(v48 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 4216);
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 3 && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
  {
    v10 = *(_BYTE *)(BugCheckParameter2 + 39);
    *(_BYTE *)(BugCheckParameter2 + 39) = v10 & 0xF0;
  }
  else
  {
    v10 = *(_BYTE *)(a2 + 39);
  }
  v11 = v10 & 0xF;
  MiLockNestedPageAtDpcInline(a2);
  v12 = 0;
  if ( (unsigned int)MiIsPfnFromSlabAllocation(a2) )
    v12 = 4;
  MiFinalizePageAttribute(a2, *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6, 1LL);
  MiCopyPfnEntryEx(a2, BugCheckParameter2);
  v13 = v45;
  *(_BYTE *)(a2 + 39) = v11 | *(_BYTE *)(a2 + 39) & 0xF0;
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL) == v13 )
    *(_QWORD *)(a2 + 40) ^= (v8 ^ *(_QWORD *)(a2 + 40)) & 0xFFFFFFFFFLL;
  MiCopyPage(v8, v13, a4, 6LL);
  _InterlockedOr(v44, 0);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v15 = *(_DWORD *)(v9 + 8);
  if ( v15 == 2 )
  {
    if ( a3 && (*(_QWORD *)BugCheckParameter2 & 0x8000000000000000uLL) != 0 )
    {
      MiUnlinkPageFromList(BugCheckParameter2);
      v12 |= 8u;
      goto LABEL_53;
    }
    PfnPriority = MiGetPfnPriority(BugCheckParameter2);
    v17 = *(_BYTE *)(BugCheckParameter2 + 35);
    v4 = PfnPriority;
    v47 = PfnPriority;
    LockHandle.LockQueue.Next = v18;
    v9 = v48 + 8 * (PfnPriority + 4LL * PfnPriority + 304);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 32);
    KxAcquireQueuedSpinLock(&LockHandle, v9 + 32, v48, v18);
    v19 = v12 | 2;
    if ( (v17 & 8) == 0 )
      v19 = v12;
    v12 = v19;
  }
  else
  {
    LockHandle.LockQueue.Next = 0LL;
    if ( v15 == 3 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
      {
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 32);
        KxAcquireQueuedSpinLock(&LockHandle, v9 + 32, v14, 0LL);
        v9 = MiDetermineModifiedPageListHead(a2, v48);
        goto LABEL_21;
      }
      v14 = v48;
      v9 = v48 + 8 * (v11 + 4 * (v11 + 108LL));
    }
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 32);
    KxAcquireQueuedSpinLock(&LockHandle, v9 + 32, v14, 0LL);
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
    *(_QWORD *)(v9 + 24) = v8;
  }
  else
  {
    v25 = 48 * v20 - 0x58000000000LL;
    if ( v47 != 0xFFFFFF && (v12 & 2) != 0 && MiIsDecayPfn(v20) )
    {
      *(_QWORD *)(v25 + 40) ^= v23 & (v8 ^ *(_QWORD *)(v25 + 40));
      goto LABEL_29;
    }
    MiSetPfnBlink(v25, v8, 0LL);
    v23 = 0xFFFFFFFFFLL;
    v24 = 0xFFFFFA8000000000uLL;
  }
  v26 = v47;
LABEL_29:
  if ( v22 == v23 )
  {
    *(_QWORD *)(v9 + 16) = v8;
  }
  else
  {
    v27 = (_QWORD *)(v24 + 48 * v22);
    if ( v26 != 0xFFFFFF && (v12 & 2) != 0 && MiIsDecayPfn(v22) )
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
    if ( v12 >= 4 || a3 )
    {
      MiUpdatePfnOnSlabStandbyList((unsigned __int64 *)a2, 0);
      if ( !a3 )
      {
        MiUnlinkNumaStandbyPage(BugCheckParameter2);
        --*(_QWORD *)v9;
        _InterlockedAdd64(
          (volatile signed __int64 *)((-(__int64)((unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) != 0) & 0xFFFFFFFFFFFFFD40uLL)
                                    + v48
                                    + 5056),
          0xFFFFFFFFFFFFFFFFuLL);
        MiDecreaseAvailablePages(v48, 1LL, -1LL);
      }
    }
    else
    {
      MiReplaceNumaStandbyPage(BugCheckParameter2, a2);
    }
  }
  if ( dword_140C4E70C != 1 )
    goto LABEL_52;
  v30 = v45;
  LOBYTE(v31) = 1;
  v32 = v45 & 0x1F;
  v33 = (volatile signed __int32 *)(qword_140C4E768 + 4 * (v45 >> 5));
  if ( v32 + 1 > 0x20 )
  {
    if ( (v45 & 0x1F) != 0 )
    {
      _InterlockedOr(v33++, ((1 << (32 - (v45 & 0x1F))) - 1) << v32);
      v31 = 1LL - (32 - (v30 & 0x1Fu));
      if ( v31 >= 0x20 )
      {
        v35 = v31 >> 5;
        v31 += -32LL * (v31 >> 5);
        do
        {
          *v33++ = -1;
          --v35;
        }
        while ( v35 );
      }
      if ( !v31 )
        goto LABEL_52;
    }
    v34 = (1 << v31) - 1;
  }
  else
  {
    v34 = 1 << v32;
  }
  _InterlockedOr(v33, v34);
LABEL_52:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_53:
  *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
  MiSetPfnBlink(BugCheckParameter2, 0LL, 1LL);
  _InterlockedOr(v44, 0);
  *(_QWORD *)(BugCheckParameter2 + 24) ^= (*(_QWORD *)(BugCheckParameter2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v36 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  if ( v36 == v45 )
  {
    v37 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  else
  {
    v12 |= 1u;
    v37 = (_QWORD *)(MiMapPageInHyperSpaceWorker(v36, 0LL, 0x80000000LL)
                   + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  v38 = MI_READ_PTE_LOCK_FREE(v37);
  v39 = MiUpdateTransitionPteFrame(v38, v8);
  v40 = 0;
  if ( (unsigned int)MiPteInShadowRange(v37) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v40 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_64;
      v42 = (v39 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_64;
      v42 = (v39 & 1) == 0;
    }
    if ( !v42 )
      v39 |= 0x8000000000000000uLL;
  }
LABEL_64:
  *v37 = v39;
  if ( v40 )
    MiWritePteShadow((__int64)v37, v39);
  if ( (v12 & 1) != 0 )
  {
    LOBYTE(v41) = 17;
    MiUnmapPageInHyperSpaceWorker(v37, v41, 0x80000000LL);
    v37 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  if ( !(unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) && (unsigned int)MiGetSystemRegionType(v37) == 5 )
    *(v37 - 174) = KeMakeKernelDirectoryTableBase(v8 << 12);
  if ( v12 >= 8 )
    MiInsertPageInList(a2, 2048LL);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 )
    *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
  *(_QWORD *)(BugCheckParameter2 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
  *(_BYTE *)(BugCheckParameter2 + 34) &= 0xC7u;
  result = *(_BYTE *)(BugCheckParameter2 + 35) & 0xDF;
  *(_BYTE *)(BugCheckParameter2 + 35) = result;
  return result;
}

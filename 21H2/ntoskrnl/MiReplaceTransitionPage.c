/*
 * XREFs of MiReplaceTransitionPage @ 0x14026D370
 * Callers:
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiTradeTransitionPage @ 0x14026B6E8 (MiTradeTransitionPage.c)
 *     MiFinalizeImageHeaderPage @ 0x1402E7BEC (MiFinalizeImageHeaderPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x140551F74 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x1402185D0 (MiGetPfnPriority.c)
 *     MiCopyPage @ 0x140240220 (MiCopyPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
 *     MiReplaceNumaStandbyPage @ 0x14026B4EC (MiReplaceNumaStandbyPage.c)
 *     MiUpdateTransitionPteFrame @ 0x14026D9E0 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x14026DA30 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14026E434 (MiFinalizePageAttribute.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x1402B7E80 (MiUpdatePfnOnSlabStandbyList.c)
 *     MiIsDecayPfn @ 0x1402B8C2C (MiIsDecayPfn.c)
 *     MiDetermineModifiedPageListHead @ 0x1402D10F4 (MiDetermineModifiedPageListHead.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1402E4380 (KeMakeKernelDirectoryTableBase.c)
 *     MiIsPfnFromSlabAllocation @ 0x140302EF0 (MiIsPfnFromSlabAllocation.c)
 *     MiSetPfnBlink @ 0x140318130 (MiSetPfnBlink.c)
 *     MiDecreaseAvailablePages @ 0x140319380 (MiDecreaseAvailablePages.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039CA44 (MiUnlinkNumaStandbyPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

char __fastcall MiReplaceTransitionPage(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, __int128 *a4)
{
  int v4; // r13d
  unsigned __int64 v7; // rcx
  ULONG_PTR v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r14
  char v11; // cl
  unsigned int v12; // ebx
  unsigned int v13; // edi
  ULONG_PTR v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  unsigned int PfnPriority; // eax
  char v18; // bl
  _KSPIN_LOCK_QUEUE *v19; // r9
  int v20; // ecx
  __int64 v21; // rbx
  _BOOL8 v22; // r8
  __int64 v23; // r13
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  unsigned __int64 v27; // r11
  int v28; // r10d
  _QWORD *v29; // r8
  __int64 updated; // rax
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
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  bool v49; // zf
  char result; // al
  signed __int32 v51[8]; // [rsp+0h] [rbp-48h] BYREF
  ULONG_PTR v52; // [rsp+20h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-20h] BYREF
  int v54; // [rsp+90h] [rbp+48h]
  __int64 v55; // [rsp+98h] [rbp+50h]

  v4 = 0xFFFFFF;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v54 = 0xFFFFFF;
  v7 = (__int64)((unsigned __int128)((__int64)(BugCheckParameter2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v52 = (v7 >> 63) + v7;
  v8 = (a2 + 0x58000000000LL) / 48;
  v9 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
  v55 = v9;
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
  if ( (unsigned int)MiIsPfnFromSlabAllocation(a2) )
    v13 = 4;
  MiFinalizePageAttribute(a2, *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6, 1LL);
  MiCopyPfnEntryEx(a2, BugCheckParameter2);
  v14 = v52;
  *(_BYTE *)(a2 + 39) = v12 | *(_BYTE *)(a2 + 39) & 0xF0;
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL) == v14 )
    *(_QWORD *)(a2 + 40) ^= (v8 ^ *(_QWORD *)(a2 + 40)) & 0xFFFFFFFFFLL;
  MiCopyPage(v8, v14, a4, 6);
  _InterlockedOr(v51, 0);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v16 = *(_DWORD *)(v10 + 8);
  if ( v16 == 2 )
  {
    if ( a3 && (*(_QWORD *)BugCheckParameter2 & 0x8000000000000000uLL) != 0 )
    {
      MiUnlinkPageFromList(BugCheckParameter2, 0);
      v13 |= 8u;
      goto LABEL_53;
    }
    PfnPriority = MiGetPfnPriority(BugCheckParameter2);
    v18 = *(_BYTE *)(BugCheckParameter2 + 35);
    v4 = PfnPriority;
    v54 = PfnPriority;
    LockHandle.LockQueue.Next = v19;
    v10 = v55 + 8 * (PfnPriority + 4LL * PfnPriority + 304);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
    KxAcquireQueuedSpinLock(&LockHandle, v10 + 32, v55);
    v20 = v13 | 2;
    if ( (v18 & 8) == 0 )
      v20 = v13;
    v13 = v20;
  }
  else
  {
    LockHandle.LockQueue.Next = 0LL;
    if ( v16 == 3 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
      {
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
        KxAcquireQueuedSpinLock(&LockHandle, v10 + 32, v15);
        v10 = MiDetermineModifiedPageListHead(a2, v55);
        goto LABEL_21;
      }
      v15 = v55;
      v10 = v55 + 8 * (v12 + 4 * (v12 + 108LL));
    }
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
    KxAcquireQueuedSpinLock(&LockHandle, v10 + 32, v15);
  }
LABEL_21:
  v21 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
  v22 = v4 != 0xFFFFFF;
  v23 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
  *(_QWORD *)a2 = v21 | *(_QWORD *)a2 & 0xFFFFFFF000000000uLL;
  MiSetPfnBlink(a2, v23, v22);
  v26 = 0xFFFFFFFFFLL;
  v27 = 0xFFFFFA8000000000uLL;
  if ( v21 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v10 + 24) = v8;
  }
  else
  {
    v25 = 48 * v21 - 0x58000000000LL;
    if ( v54 != 0xFFFFFF && (v13 & 2) != 0 && (unsigned int)MiIsDecayPfn(v21, 0xFFFFFFFFFLL, v24, v25) == 1 )
    {
      *(_QWORD *)(v25 + 40) ^= v26 & (v8 ^ *(_QWORD *)(v25 + 40));
      goto LABEL_29;
    }
    MiSetPfnBlink(v25, v8, 0LL);
    v26 = 0xFFFFFFFFFLL;
    v27 = 0xFFFFFA8000000000uLL;
  }
  v28 = v54;
LABEL_29:
  if ( v23 == v26 )
  {
    *(_QWORD *)(v10 + 16) = v8;
  }
  else
  {
    v29 = (_QWORD *)(v27 + 48 * v23);
    if ( v28 != 0xFFFFFF && (v13 & 2) != 0 && (unsigned int)MiIsDecayPfn(v23, v26, v29, v25) == 1 )
    {
      updated = MiUpdateTransitionPteFrame(v29[2], v8);
      *(_QWORD *)(v31 + 16) = updated;
    }
    else
    {
      *v29 ^= v26 & (v8 ^ *v29);
    }
  }
  if ( v28 != 0xFFFFFF )
  {
    if ( v13 >= 4 || a3 )
    {
      MiUpdatePfnOnSlabStandbyList(a2, 0LL);
      if ( !a3 )
      {
        MiUnlinkNumaStandbyPage(BugCheckParameter2);
        --*(_QWORD *)v10;
        _InterlockedAdd64(
          (volatile signed __int64 *)((-(__int64)((unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) != 0) & 0xFFFFFFFFFFFFFD40uLL)
                                    + v55
                                    + 5056),
          0xFFFFFFFFFFFFFFFFuLL);
        MiDecreaseAvailablePages(v55, 1LL, -1LL);
      }
    }
    else
    {
      MiReplaceNumaStandbyPage(BugCheckParameter2, a2);
    }
  }
  if ( dword_140C4E6CC != 1 )
    goto LABEL_52;
  v32 = v52;
  LOBYTE(v33) = 1;
  v34 = v52 & 0x1F;
  v35 = (volatile signed __int32 *)(qword_140C4E728 + 4 * (v52 >> 5));
  if ( v34 + 1 > 0x20 )
  {
    if ( (v52 & 0x1F) != 0 )
    {
      _InterlockedOr(v35++, ((1 << (32 - (v52 & 0x1F))) - 1) << v34);
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
  MiSetPfnBlink(BugCheckParameter2, 0LL, 1LL);
  _InterlockedOr(v51, 0);
  *(_QWORD *)(BugCheckParameter2 + 24) ^= (*(_QWORD *)(BugCheckParameter2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v39 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  if ( v39 == v52 )
  {
    v40 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  else
  {
    v13 |= 1u;
    v40 = (_QWORD *)(MiMapPageInHyperSpaceWorker(v39, 0LL, 0x80000000LL, v38)
                   + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  v41 = MI_READ_PTE_LOCK_FREE(v40);
  v42 = MiUpdateTransitionPteFrame(v41, v8);
  v43 = 0;
  if ( (unsigned int)MiPteInShadowRange(v40, v44) )
  {
    if ( (unsigned int)MiPteHasShadow(v46, v45, v47, v48) )
    {
      v43 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_64;
      v49 = (v42 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_64;
      v49 = (v42 & 1) == 0;
    }
    if ( !v49 )
      v42 |= 0x8000000000000000uLL;
  }
LABEL_64:
  *v40 = v42;
  if ( v43 )
    MiWritePteShadow(v40, v42);
  if ( (v13 & 1) != 0 )
  {
    LOBYTE(v45) = 17;
    MiUnmapPageInHyperSpaceWorker(v40, v45, 0x80000000LL);
    v40 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  if ( !(unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) && (unsigned int)MiGetSystemRegionType(v40) == 5 )
    *(v40 - 174) = KeMakeKernelDirectoryTableBase(v8 << 12);
  if ( v13 >= 8 )
    MiInsertPageInList(a2, 2048LL);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 )
    *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
  *(_QWORD *)(BugCheckParameter2 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
  *(_BYTE *)(BugCheckParameter2 + 34) &= 0xC7u;
  result = *(_BYTE *)(BugCheckParameter2 + 35) & 0xDF;
  *(_BYTE *)(BugCheckParameter2 + 35) = result;
  return result;
}

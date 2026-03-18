/*
 * XREFs of MiReplaceTransitionPage @ 0x14031BEAC
 * Callers:
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MiFinalizeImageHeaderPage @ 0x1402E0BD8 (MiFinalizeImageHeaderPage.c)
 *     MiTradeTransitionPage @ 0x14031D0D8 (MiTradeTransitionPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14054CAD4 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSetPfnBlink @ 0x140221F20 (MiSetPfnBlink.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402272A0 (MiIsPfnFromSlabAllocation.c)
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x1402AAA70 (MiGetPfnPriority.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiDecreaseAvailablePages @ 0x1402B6F90 (MiDecreaseAvailablePages.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1402E2234 (KeMakeKernelDirectoryTableBase.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiReplaceNumaStandbyPage @ 0x1403184A0 (MiReplaceNumaStandbyPage.c)
 *     MiUpdateTransitionPteFrame @ 0x14031C51C (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x14031C670 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14031CC14 (MiFinalizePageAttribute.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x140343650 (MiUpdatePfnOnSlabStandbyList.c)
 *     MiIsDecayPfn @ 0x140344844 (MiIsDecayPfn.c)
 *     MiDetermineModifiedPageListHead @ 0x14035E764 (MiDetermineModifiedPageListHead.c)
 *     MiUnlinkNumaStandbyPage @ 0x140399CB4 (MiUnlinkNumaStandbyPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

char __fastcall MiReplaceTransitionPage(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3, __int128 *a4)
{
  int v4; // r13d
  unsigned __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // r14
  char v10; // cl
  unsigned int v11; // ebx
  unsigned int v12; // edi
  ULONG_PTR v13; // rcx
  int v14; // eax
  unsigned int PfnPriority; // eax
  char v16; // bl
  _KSPIN_LOCK_QUEUE *v17; // r9
  int v18; // ecx
  __int64 v19; // rbx
  BOOL v20; // r8d
  __int64 v21; // r13
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned __int64 v25; // r11
  int v26; // r10d
  _QWORD *v27; // r8
  __int64 updated; // rax
  __int64 v29; // r8
  char v30; // r10
  unsigned __int64 v31; // rdx
  ULONG_PTR v32; // r9
  volatile signed __int32 *v33; // r8
  unsigned int v34; // eax
  unsigned __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // rcx
  _QWORD *v38; // r14
  __int64 v39; // rax
  __int64 v40; // rbx
  int v41; // r13d
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
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
  v52 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
  v9 = *(_QWORD *)(v52 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 4216);
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
  if ( MiIsPfnFromSlabAllocation(a2) )
    v12 = 4;
  MiFinalizePageAttribute(a2, *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6, 1LL);
  MiCopyPfnEntryEx(a2, BugCheckParameter2);
  v13 = v49;
  *(_BYTE *)(a2 + 39) = v11 | *(_BYTE *)(a2 + 39) & 0xF0;
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL) == v13 )
    *(_QWORD *)(a2 + 40) ^= (v8 ^ *(_QWORD *)(a2 + 40)) & 0xFFFFFFFFFLL;
  MiCopyPage(v8, v13, a4, 6);
  _InterlockedOr(v48, 0);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v14 = *(_DWORD *)(v9 + 8);
  if ( v14 == 2 )
  {
    if ( a3 && (*(_QWORD *)BugCheckParameter2 & 0x8000000000000000uLL) != 0 )
    {
      MiUnlinkPageFromList(BugCheckParameter2, 0);
      v12 |= 8u;
      goto LABEL_53;
    }
    PfnPriority = MiGetPfnPriority(BugCheckParameter2);
    v16 = *(_BYTE *)(BugCheckParameter2 + 35);
    v4 = PfnPriority;
    v51 = PfnPriority;
    LockHandle.LockQueue.Next = v17;
    v9 = v52 + 8 * (PfnPriority + 4LL * PfnPriority + 304);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 32);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v9 + 32));
    v18 = v12 | 2;
    if ( (v16 & 8) == 0 )
      v18 = v12;
    v12 = v18;
  }
  else
  {
    LockHandle.LockQueue.Next = 0LL;
    if ( v14 == 3 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
      {
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 32);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v9 + 32));
        v9 = MiDetermineModifiedPageListHead(a2, v52);
        goto LABEL_21;
      }
      v9 = v52 + 8 * (v11 + 4 * (v11 + 108LL));
    }
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 32);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v9 + 32));
  }
LABEL_21:
  v19 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
  v20 = v4 != 0xFFFFFF;
  v21 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
  *(_QWORD *)a2 = v19 | *(_QWORD *)a2 & 0xFFFFFFF000000000uLL;
  MiSetPfnBlink(a2, v21, v20);
  v24 = 0xFFFFFFFFFLL;
  v25 = 0xFFFFFA8000000000uLL;
  if ( v19 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v9 + 24) = v8;
  }
  else
  {
    v23 = 48 * v19 - 0x58000000000LL;
    if ( v51 != 0xFFFFFF && (v12 & 2) != 0 && (unsigned int)MiIsDecayPfn(v19, 0xFFFFFFFFFLL, v22, v23) == 1 )
    {
      *(_QWORD *)(v23 + 40) ^= v24 & (v8 ^ *(_QWORD *)(v23 + 40));
      goto LABEL_29;
    }
    MiSetPfnBlink(v23, v8, 0);
    v24 = 0xFFFFFFFFFLL;
    v25 = 0xFFFFFA8000000000uLL;
  }
  v26 = v51;
LABEL_29:
  if ( v21 == v24 )
  {
    *(_QWORD *)(v9 + 16) = v8;
  }
  else
  {
    v27 = (_QWORD *)(v25 + 48 * v21);
    if ( v26 != 0xFFFFFF && (v12 & 2) != 0 && (unsigned int)MiIsDecayPfn(v21, v24, v27, v23) == 1 )
    {
      updated = MiUpdateTransitionPteFrame(v27[2], v8);
      *(_QWORD *)(v29 + 16) = updated;
    }
    else
    {
      *v27 ^= v24 & (v8 ^ *v27);
    }
  }
  if ( v26 != 0xFFFFFF )
  {
    if ( v12 >= 4 || a3 )
    {
      MiUpdatePfnOnSlabStandbyList(a2, 0LL);
      if ( !a3 )
      {
        MiUnlinkNumaStandbyPage(BugCheckParameter2);
        --*(_QWORD *)v9;
        _InterlockedAdd64(
          (volatile signed __int64 *)((-(__int64)((unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) != 0) & 0xFFFFFFFFFFFFFD40uLL)
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
  if ( dword_140C4E4CC != 1 )
    goto LABEL_52;
  v30 = v49;
  LOBYTE(v31) = 1;
  v32 = v49 & 0x1F;
  v33 = (volatile signed __int32 *)(qword_140C4E528 + 4 * (v49 >> 5));
  if ( v32 + 1 > 0x20 )
  {
    if ( (v49 & 0x1F) != 0 )
    {
      _InterlockedOr(v33++, ((1 << (32 - (v49 & 0x1F))) - 1) << v32);
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
  MiSetPfnBlink(BugCheckParameter2, 0LL, 1);
  _InterlockedOr(v48, 0);
  *(_QWORD *)(BugCheckParameter2 + 24) ^= (*(_QWORD *)(BugCheckParameter2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v37 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  if ( v37 == v49 )
  {
    v38 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  else
  {
    v12 |= 1u;
    v38 = (_QWORD *)(MiMapPageInHyperSpaceWorker(v37, 0LL, 0x80000000, v36)
                   + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  v39 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v38);
  v40 = MiUpdateTransitionPteFrame(v39, v8);
  v41 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v38) )
  {
    if ( (unsigned int)MiPteHasShadow(v43, v42, v44, v45) )
    {
      v41 = 1;
      if ( HIBYTE(word_140C4DE08) )
        goto LABEL_64;
      v46 = (v40 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_64;
      v46 = (v40 & 1) == 0;
    }
    if ( !v46 )
      v40 |= 0x8000000000000000uLL;
  }
LABEL_64:
  *v38 = v40;
  if ( v41 )
    MiWritePteShadow(v38, v40);
  if ( (v12 & 1) != 0 )
  {
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v38, 0x11u, 0x80000000);
    v38 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  if ( !(unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2)
    && (unsigned int)MiGetSystemRegionType((unsigned __int64)v38) == 5 )
  {
    *(v38 - 174) = KeMakeKernelDirectoryTableBase(v8 << 12);
  }
  if ( v12 >= 8 )
    MiInsertPageInList(a2, 0x800u);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 )
    *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
  *(_QWORD *)(BugCheckParameter2 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
  *(_BYTE *)(BugCheckParameter2 + 34) &= 0xC7u;
  result = *(_BYTE *)(BugCheckParameter2 + 35) & 0xDF;
  *(_BYTE *)(BugCheckParameter2 + 35) = result;
  return result;
}

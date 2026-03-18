/*
 * XREFs of MiReplaceTransitionPage @ 0x140351C54
 * Callers:
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiFinalizeImageHeaderPage @ 0x140332CF0 (MiFinalizeImageHeaderPage.c)
 *     MiTradeTransitionPage @ 0x140350BC0 (MiTradeTransitionPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405504A4 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiSetPfnBlink @ 0x140230190 (MiSetPfnBlink.c)
 *     MiDecreaseAvailablePages @ 0x140231720 (MiDecreaseAvailablePages.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x140279DB0 (MiGetPfnPriority.c)
 *     MiCopyPage @ 0x1402907D0 (MiCopyPage.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockNestedPageAtDpcInline @ 0x14030DC80 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x140314A80 (MiUpdatePfnOnSlabStandbyList.c)
 *     MiIsDecayPfn @ 0x14031591C (MiIsDecayPfn.c)
 *     MiDetermineModifiedPageListHead @ 0x14032F144 (MiDetermineModifiedPageListHead.c)
 *     KeMakeKernelDirectoryTableBase @ 0x140335260 (KeMakeKernelDirectoryTableBase.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     MiIsPfnFromSlabAllocation @ 0x14034D190 (MiIsPfnFromSlabAllocation.c)
 *     MiFinalizePageAttribute @ 0x140350B14 (MiFinalizePageAttribute.c)
 *     MiReplaceNumaStandbyPage @ 0x14035149C (MiReplaceNumaStandbyPage.c)
 *     MiUpdateTransitionPteFrame @ 0x1403522C4 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x140352310 (MiCopyPfnEntryEx.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039C174 (MiUnlinkNumaStandbyPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
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
  __int64 v42; // r8
  bool v43; // zf
  char result; // al
  signed __int32 v45[8]; // [rsp+0h] [rbp-48h] BYREF
  ULONG_PTR v46; // [rsp+20h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-20h] BYREF
  int v48; // [rsp+90h] [rbp+48h]
  __int64 v49; // [rsp+98h] [rbp+50h]

  v4 = 0xFFFFFF;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v48 = 0xFFFFFF;
  v7 = (__int64)((unsigned __int128)((__int64)(BugCheckParameter2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v46 = (v7 >> 63) + v7;
  v8 = (__int64)(a2 + 0x58000000000LL) / 48;
  v9 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
  v49 = v9;
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
  MiFinalizePageAttribute(a2, *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6, 1);
  MiCopyPfnEntryEx(a2, BugCheckParameter2);
  v14 = v46;
  *(_BYTE *)(a2 + 39) = v12 | *(_BYTE *)(a2 + 39) & 0xF0;
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL) == v14 )
    *(_QWORD *)(a2 + 40) ^= (v8 ^ *(_QWORD *)(a2 + 40)) & 0xFFFFFFFFFLL;
  MiCopyPage(v8, v14, a4, 6);
  _InterlockedOr(v45, 0);
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
    v48 = PfnPriority;
    LockHandle.LockQueue.Next = v18;
    v10 = v49 + 8 * (PfnPriority + 4LL * PfnPriority + 304);
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
        v10 = MiDetermineModifiedPageListHead(a2, v49);
        goto LABEL_21;
      }
      v10 = v49 + 8 * (v12 + 4 * (v12 + 108LL));
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
    if ( v48 != 0xFFFFFF && (v13 & 2) != 0 && MiIsDecayPfn(v20) )
    {
      *(_QWORD *)(v25 + 40) ^= v23 & (v8 ^ *(_QWORD *)(v25 + 40));
      goto LABEL_29;
    }
    MiSetPfnBlink(v25, v8, 0);
    v23 = 0xFFFFFFFFFLL;
    v24 = 0xFFFFFA8000000000uLL;
  }
  v26 = v48;
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
          (volatile signed __int64 *)((-(__int64)((unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) != 0) & 0xFFFFFFFFFFFFFD40uLL)
                                    + v49
                                    + 5056),
          0xFFFFFFFFFFFFFFFFuLL);
        MiDecreaseAvailablePages(v49, 1LL, 0xFFFFFFFFFFFFFFFFuLL, 0);
      }
    }
    else
    {
      MiReplaceNumaStandbyPage(BugCheckParameter2, a2);
    }
  }
  if ( dword_140C4E54C != 1 )
    goto LABEL_52;
  v30 = v46;
  LOBYTE(v31) = 1;
  v32 = v46 & 0x1F;
  v33 = (volatile signed __int32 *)(qword_140C4E5A8 + 4 * (v46 >> 5));
  if ( v32 + 1 > 0x20 )
  {
    if ( (v46 & 0x1F) != 0 )
    {
      _InterlockedOr(v33++, ((1 << (32 - (v46 & 0x1F))) - 1) << v32);
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
  _InterlockedOr(v45, 0);
  *(_QWORD *)(BugCheckParameter2 + 24) ^= (*(_QWORD *)(BugCheckParameter2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v37 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  if ( v37 == v46 )
  {
    v38 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  else
  {
    v13 |= 1u;
    v38 = (_QWORD *)(MiMapPageInHyperSpaceWorker(v37, 0LL, 0x80000000, v36)
                   + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  v39 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v38);
  v40 = MiUpdateTransitionPteFrame(v39, v8);
  v41 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v38) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v41 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_64;
      v43 = (v40 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_64;
      v43 = (v40 & 1) == 0;
    }
    if ( !v43 )
      v40 |= 0x8000000000000000uLL;
  }
LABEL_64:
  *v38 = v40;
  if ( v41 )
    MiWritePteShadow((__int64)v38, v40, v42);
  if ( (v13 & 1) != 0 )
  {
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v38, 0x11u, 0x80000000);
    v38 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  if ( !(unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2)
    && (unsigned int)MiGetSystemRegionType((unsigned __int64)v38) == 5 )
  {
    *(v38 - 174) = KeMakeKernelDirectoryTableBase(v8 << 12);
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
